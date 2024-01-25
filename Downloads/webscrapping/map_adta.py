from serpapi import GoogleSearch
import csv
params = {
  "engine": "google_maps",
  "type": "place",
  "data": "%214m5%213m4%211s0x89c259a61c75684f%3A0x79d31adb123348d2%218m2%213d40.7457399%214d-73.9882272",
  "api_key": "a0565907c3b52c4397c3ca43f669cfc46a0f5cb32f58b9b7a062c53dbd318bc8"
}

search = GoogleSearch(params)
results = search.get_dict()
place_results = results["place_results"]
print(place_results)

# xt_file_name = "map_data.csv"

# # Write place_results to a text file
# with open("map_data.csv", mode='w', encoding='utf-8') as txt_file:
#     for result in place_results:
#         txt_file.write(f"{result}\n")

# print(f"Data has been written to {"map_data.csv"}")
