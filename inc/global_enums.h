#ifndef GLOBAL_ENUMS_H
#define GLOBAL_ENUMS_H

#include "qstring.h"
#include "qobject.h"

typedef enum {
    AT_STRENGTH = 0,
    AT_AGILITY=1,
    AT_TOUGHNESS=2,
    AT_ENDURANCE=3,
    AT_RECUPERATION=4,
    AT_DISEASE_RESISTANCE=5,
    AT_ANALYTICAL_ABILITY=6,
    AT_FOCUS=7,
    AT_WILLPOWER=8,
    AT_CREATIVITY=9,
    AT_INTUITION=10,
    AT_PATIENCE=11,
    AT_MEMORY=12,
    AT_LINGUISTIC_ABILITY=13,
    AT_SPATIAL_SENSE=14,
    AT_MUSICALITY=15,
    AT_KINESTHETIC_SENSE=16,
    AT_EMPATHY=17,
    AT_SOCIAL_AWARENESS=18
} ATTRIBUTES_TYPE;

typedef enum {
    triple_negative=-3,
    double_negative=-2,
    negative=-1,
    average=0,
    positive=1,
    double_positive=2,
    triple_positive=3
} ASPECT_TYPE;

typedef enum{
    none=-1, //custom
    semi_wild=0,
    trained=1,
    well_trained=2,
    skillfully_trained=3,
    expertly_trained=4,
    exceptionally_trained=5,
    masterfully_trained=6,
    domesticated=7,
    unknown_trained=8,
    wild_untamed=9,
    hostile=10 //custom
} TRAINED_LEVEL;

static inline QString get_animal_trained_descriptor(const TRAINED_LEVEL &type) {
    switch (type) {
    case semi_wild: return QObject::tr("Semi-wild");
    case trained: return QObject::tr("Trained");
    case well_trained: return QObject::tr("Well-trained");
    case skillfully_trained: return QObject::tr("Skillfully Trained");
    case expertly_trained: return QObject::tr("Expertly Trained");
    case exceptionally_trained: return QObject::tr("Exceptionally Trained");
    case masterfully_trained: return QObject::tr("Masterfully Trained");
    case domesticated: return QObject::tr("Tame");
    case wild_untamed: return QObject::tr("Wild");
    case hostile: return QObject::tr("Hostile");
    default:
        return QObject::tr("Unknown");
    }
    return QObject::tr("Unknown");
}

typedef enum {
    NONE=-1,
    BAR=0,
    SMALLGEM=1,
    BLOCKS=2,
    ROUGH=3,
    BOULDER=4,
    WOOD=5,
    DOOR=6,
    FLOODGATE=7,
    BED=8,
    CHAIR=9,
    CHAIN=10,
    FLASK=11,
    GOBLET=12,
    INSTRUMENT=13,
    TOY=14,
    WINDOW=15,
    CAGE=16,
    BARREL=17,
    BUCKET=18,
    ANIMALTRAP=19,
    TABLE=20,
    COFFIN=21,
    STATUE=22,
    CORPSE=23,
    WEAPON=24,
    ARMOR=25,
    SHOES=26,
    SHIELD=27,
    HELM=28,
    GLOVES=29,
    BOX=30,
    BIN=31,
    ARMORSTAND=32,
    WEAPONRACK=33,
    CABINET=34,
    FIGURINE=35,
    AMULET=36,
    SCEPTER=37,
    AMMO=38,
    CROWN=39,
    RING=40,
    EARRING=41,
    BRACELET=42,
    GEM=43,
    ANVIL=44,
    CORPSEPIECE=45,
    REMAINS=46,
    MEAT=47,
    FISH=48,
    FISH_RAW=49,
    VERMIN=50,
    IS_PET=51,
    SEEDS=52,
    PLANT=53,
    SKIN_TANNED=54,
    LEAVES=55,
    THREAD=56,
    CLOTH=57,
    TOTEM=58,
    PANTS=59,
    BACKPACK=60,
    QUIVER=61,
    CATAPULTPARTS=62,
    BALLISTAPARTS=63,
    SIEGEAMMO=64,
    BALLISTAARROWHEAD=65,
    TRAPPARTS=66,
    TRAPCOMP=67,
    DRINK=68,
    POWDER_MISC=69,
    CHEESE=70,
    FOOD=71,
    LIQUID_MISC=72,
    COIN=73,
    GLOB=74,
    ROCK=75,
    PIPE_SECTION=76,
    HATCH_COVER=77,
    GRATE=78,
    QUERN=79,
    MILLSTONE=80,
    SPLINT=81,
    CRUTCH=82,
    TRACTION_BENCH=83,
    ORTHOPEDIC_CAST=84,
    TOOL=85,
    SLAB=86,
    EGG=87,
    BOOK=88,
    NUM_OF_ITEM_TYPES=89
} ITEM_TYPE;

typedef enum {
    SOLID,
    LIQUID,
    GAS,
    POWDER,
    PASTE,
    PRESSED,
    GENERIC
} MATERIAL_STATES;

typedef enum {
    LIKES_NONE=-1,
    LIKE_MATERIAL=0,
    LIKE_CREATURE=1,
    LIKE_FOOD=2,
    HATE_CREATURE=3,
    LIKE_ITEM=4,
    LIKE_PLANT=5,
    LIKE_TREE=6,
    LIKE_COLOR=7,
    LIKE_SHAPE=8,
    LIKE_OUTDOORS=9
} PREF_TYPES;

//df-structures material_flags
typedef enum {
    BONE=0,
    IS_MEAT=1,
    EDIBLE_VERMIN=2,
    EDIBLE_RAW=3,
    EDIBLE_COOKED=4,
    ALCOHOL=5,
    ITEMS_METAL=6,
    ITEMS_BARRED=7,
    ITEMS_SCALED=8,
    ITEMS_LEATHER=9,
    ITEMS_SOFT=10,
    ITEMS_HARD=11,
    IMPLIES_ANIMAL_KILL=12,
    ALCOHOL_PLANT=13,
    ALCOHOL_CREATURE=14,
    CHEESE_PLANT=15,
    CHEESE_CREATURE=16,
    POWDER_MISC_PLANT=17,
    POWDER_MISC_CREATURE=18,
    STOCKPILE_GLOB=19,
    LIQUID_MISC_PLANT=20,
    LIQUID_MISC_CREATURE=21,
    LIQUID_MISC_OTHER=22,
    IS_WOOD=23,
    THREAD_PLANT=24,
    TOOTH=25,
    HORN=26,
    PEARL=27,
    SHELL=28,
    LEATHER=29,
    SILK=30,
    SOAP=31,
    ROTS=32,
    IS_DYE=33,
    IS_POWDER_MISC=34,
    IS_LIQUID_MISC=35,
    STRUCTURAL_PLANT_MAT=36,
    SEED_MAT=37,
    LEAF_MAT=38,
    IS_CHEESE=39,
    ENTERS_BLOOD=40,
    BLOOD_MAP_DESCRIPTOR=41,
    ICHOR_MAP_DESCRIPTOR=42,
    GOO_MAP_DESCRIPTOR=43,
    SLIME_MAP_DESCRIPTOR=44,
    PUS_MAP_DESCRIPTOR=45,
    GENERATES_MIASMA=46,
    IS_METAL=47,
    IS_GEM=48,
    IS_GLASS=49,
    CRYSTAL_GLASSABLE=50,
    ITEMS_WEAPON=51,
    ITEMS_WEAPON_RANGED=52,
    ITEMS_ANVIL=53,
    ITEMS_AMMO=54,
    ITEMS_DIGGER=55,
    ITEMS_ARMOR=56,
    ITEMS_DELICATE=57,
    ITEMS_SIEGE_ENGINE=58,
    ITEMS_QUERN=59,
    IS_STONE=60,
    UNDIGGABLE=61,
    YARN=62,
    STOCKPILE_GLOB_PASTE=63,
    STOCKPILE_GLOB_PRESSED=64,
    DISPLAY_UNGLAZED=65,
    DO_NOT_CLEAN_GLOB=66,
    NO_STONE_STOCKPILE=67,
    STOCKPILE_THREAD_METAL=68,
    NUM_OF_MATERIAL_FLAGS=69
} MATERIAL_FLAGS;

typedef enum{
    VERMIN_FISH=9,
    HATEABLE=72
} CREATURE_FLAGS;

typedef enum{
    MILKABLE=29,
    TRAINABLE_HUNTING=53,
    PET=54,
    PET_EXOTIC=55,    
    TRAINABLE_WAR=88,
    BLOODSUCKER=162, //vampires
    HAS_EXTRACTS=200 //custom
} CASTE_FLAGS;


#endif // GLOBAL_ENUMS_H
