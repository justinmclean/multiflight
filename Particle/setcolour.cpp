#pragma SPARK_NO_PREPROCESSOR
#include "application.h"

struct Colour {
  const char* colour;
  const int rgb;
};

#define MAX_STR 150

Colour colours[] =
{
  { "almond", 0xEFDECD },
  { "amazon", 0x3B7A57 },
  { "amber", 0xFFBF00 },
  { "amethyst", 0x9966CC },
  { "apricot", 0xFBCEB1 },
  { "aqua", 0x00FFFF },
  { "avocado", 0x568203 },
  { "azure", 0x007FFF },
  { "beige", 0xF5F5DC },
  { "black", 0x000000 },
  { "blue", 0x0000FF },
  { "blush", 0xDE5D83 },
  { "bone", 0xE3DAC9 },
  { "brass", 0xB5A642 },
  { "brick", 0xCB4154 },
  { "bronze", 0xCD7F32 },
  { "brown", 0x964B00 },
  { "burgundy" , 0x800020 },
  { "canary", 0xFFFF99 },
  { "charcoal", 0x36454F },
  { "cherry", 0xDE3163 },
  { "chestnut", 0x954535 },
  { "citron", 0x9FA91F },
  { "claret", 0x7F1734 },
  { "coconut", 0x965A3E },
  { "coffee", 0x6F4E37 },
  { "copper", 0xB87333 },
  { "coral", 0xFF7F50 },
  { "corn", 0xFBEC5D },
  { "cream", 0xFFFDD0 },
  { "cyan", 0x00FFFF },
  { "daffodil", 0xFFFF31 },
  { "denim", 0x1560BD },
  { "desert", 0xC19A6B },
  { "diamond", 0xB9F2FF },
  { "dirt",  0x9B7653},
  { "ebony", 0x555D50 },
  { "eggplant", 0x614051 },
  { "eggshell", 0xF0EAD6 },
  { "emerald", 0x50C878 },
  { "eucalyptus", 0x44D7A8 },
  { "fawn",  0xE5AA70 },
  { "firebrick", 0xB22222 },
  { "flame",  0xE25822 },
  { "flamingo", 0xFC8EAC },
  { "fuchsia", 0xFF00FF},
  { "gold", 0xD4AF37 },
  { "granite", 0x676767 },
  { "gray",  0x808080},
  { "grey",  0x808080},
  { "green", 0x00FF00 },
  { "heliotrope", 0xDF73FF },
  { "iceberg",  0x71A6D2 },
  { "indigo",  0x4B0082 },
  { "iris",  0x5A4FCF },
  { "ivory", 0xFFFFF0 },
  { "jade",  0x00A86B },
  { "jasmine", 0xF8DE7E },
  { "jasper", 0xD73B3E },
  { "jet",  0x343434 },
  { "kiwi", 0x8EE53F },
  { "lava", 0xCF1020 },
  { "lavender", 0xB57EDC },
  { "lemon", 0xFFF700 },
  { "licorice", 0x1A1110 },
  { "lilac",  0xC8A2C8 },
  { "lime",  0xBFFF00 },
  { "magenta", 0xFF00FF },
  { "magnolia", 0xF8F4FF },
  { "maize",  0xFBEC5D },
  { "malachite", 0x0BDA51 },
  { "mandarin",  0xF37A48 },
  { "mango",  0xFF8243 },
  { "marigold", 0xEAA221 },
  { "maroon", 0x800000 },
  { "mauve",  0xE0B0FF },
  { "melon",  0xFDBCB4 },
  { "mint",  0x3EB489 },
  { "moss",  0x8A9A5B },
  { "mulberry", 0xC54B8C },
  { "mustard", 0xFFDB58 },
  { "navy", 0x000080 },
  { "nickel", 0x727472 },
  { "ocean", 0x4F42B5 },
  { "ochre", 0xCC7722 },
  { "olive", 0x808000 },
  { "onyx",  0x353839},
  { "orange", 0xFFA500 },
  { "orchid", 0xDA70D6 },
  { "peach",  0xFFCBA4 },
  { "pear",  0xD1E231 },
  { "pearl",  0xEAE0C8 },
  { "persimmon", 0xEC5800 },
  { "pine", 0x01796F },
  { "pink", 0xFFC0CB },
  { "pistachio", 0x93C572 },
  { "platinum", 0xE5E4E2 },
  { "plum", 0xDDA0DD },
  { "prune", 0x701C1C }, 
  { "puce", 0xCC8899 }, 
  { "pumpkin", 0xFF7518 },        
  { "purple", 0x800080 },
  { "raspberry", 0xE30B5D }, 
  { "red", 0xFF0000 }, 
  { "rose", 0xFF007F },        
  { "ruby", 0xE0115F },
  { "russet", 0x80461B }, 
  { "rust", 0xB7410E }, 
  { "saffron", 0xF4C430 },        
  { "sage", 0xBCB88A },
  { "salmon", 0xFA8072 }, 
  { "sapphire", 0x0F52BA }, 
  { "scarlet", 0xFF2400 },        
  { "sea", 0x006994 },
  { "sepia", 0x704214 }, 
  { "shadow", 0x8A795D }, 
  { "silver", 0xC0C0C0 },        
  { "sky", 0x87CEEB },
  { "slate", 0x708090 },
  { "smoke", 0x738276 } ,
  { "straw", 0xE4D96F },
  { "strawberry", 0xFC5A8D },
  { "sunset", 0xFD5E53 },
  { "tan", 0xD2B48C },
  { "tangerine", 0xF28500 },
  { "teal", 0x008080 },
  { "thistle", 0xD8BFD8 },
  { "tomato", 0xFF6347 },
  { "topaz", 0xFFC87C },
  { "tulip", 0xFF878D },
  { "turquoise", 0x40E0D0 },
  { "ultramarine", 0x3F00FF },
  { "umber", 0x635147 },
  { "vanilla", 0xF3E5AB },
  { "verdigris", 0x43B3AE },
  { "vermilion", 0xD9381E },
  { "violet", 0x8F00FF },
  { "viridian", 0x40826D },
  { "wheat", 0xF5DEB3 },
  { "white", 0xFFFFFF },
  { "wine", 0x722F37 },
  { "wisteria", 0xC9A0DC },
  { "yellow", 0xFFFF00 },
  { "sunshine", 0xFFF700 },
  { NULL, 0x000000}
};

int parseWord(char *data)
{
  Serial.print("Data: ");
  Serial.println(data);
  Serial.println("Looking for colour");

  int rgb = -1;
  int i = 0;
  
  // Warning side effects - changes passed in string to lower case
  for (char *p = data; *p != '\0'; ++p) {
    *p = tolower(*p);
  }

  while (colours[i].colour != NULL) {
    if (strcmp(data, colours[i].colour) == 0) {
      rgb = colours[i].rgb;
      break;
    }
    i++;
  }

  if (rgb != -1) {
    Serial.println(colours[i].colour);
    Serial.print("RGB : ");
    Serial.println(rgb);

    // bit of bit shifting magic to extract the red, green and blue values
    byte r = (rgb >> 16) & 0xFF;
    byte g = (rgb >> 8) & 0xFF;
    byte b = rgb & 0xFF;

    // your ten seconds of fame!
    RGB.color(r, g, b);
    delay(10000);

    return 1;
  }

  return 0;
}

int parseData(const char *event, const char *data)
{
  char copy[MAX_STR];
  char* word;
  int ret = 0;

  strncpy(copy, data, MAX_STR);
  word = strtok(copy, " ");

  while (word != NULL)
  {
    ret = ret || parseWord(word);
    word = strtok(NULL, " ");
  }

  return ret;
}

int changeLeds(String command)
{
  return parseData(NULL, command);
}

void setup()
{
  Serial.begin(9600);
  RGB.control(true);

  // Set up to be called via a URL or command line
  Particle.function("change", changeLeds);
}


void loop()
{
  // do nothing
}


