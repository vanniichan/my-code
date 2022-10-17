from email import message
from email.quoprimime import quote
import os
import discord
from discord.ext import commands
import requests  # send request through https to get the data from the api and return json
import json, datetime, asyncio

TOKEN = 'MTAzMTIxODQzNjIyNDg0MzgxNg.GSFexf.5f9gnpuBxp-UnQmEiSp5nGG0e10OnKed--RQhM'
API = 'https://thecatapi.com/'
intents = discord.Intents.all()
intents.members = True
bot = commands.Bot(command_prefix="!",intents=intents)  #set prefix to use command


@bot.command(name="hi")
async def SendMessage(ctx):
  await ctx.send('mercy!')
@bot.command(name="Minh")
async def SendMessage(ctx):
  await ctx.send('ngài là chúa sáng thế vĩ đại nhất')
@bot.command(name="FanMU")
async def Dog(ctx):
	response = requests.get("https://dog.ceo/api/breeds/image/random")
	image_link = response.json()["message"]
	await ctx.send(image_link)
@bot.command(name="cat")
async def Cat(ctx):
  # send requests to the api and response now a json
  response = requests.get("https://meme-api.herokuapp.com/gimme")
  image_link = response.json()["message"]  # like a list and need to choose index
  await ctx.send(image_link)  # print the url--

async def five_minutes_images():
  while True:
    now = datetime.datetime.now()
    then = now + datetime.timedelta(minutes=5)
    wait_time = (then - now).total_seconds()
    await asyncio.sleep(wait_time)

    ID = os.environ['channelID']  # return string obj
    channel = bot.get_channel(int(ID))
    await Cat(channel)

@bot.event
async def on_ready():  # event call when the bot is ready to use
  print(f"Logged in as : {bot.user.name}")
  await five_minutes_images()

bot.run(TOKEN)
