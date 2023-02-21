/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 443fc5b7a1dddcf4547b7be02ed24e8c82da1580 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_MeCab_version, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_MeCab_split, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dicdir, IS_STRING, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, userdic, IS_STRING, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_Tagger___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_ARRAY, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_MeCab_Tagger_parseToNode, 0, 1, MeCab\\Node, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, len, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_MeCab_Tagger_nextNode, 0, 0, MeCab\\Node, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_formatNode, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, node, MeCab\\Node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_dictionaryInfo, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_getAllMorphs, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_setAllMorphs, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, all_morphs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_getLatticeLevel, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_setLatticeLevel, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_Tagger_getPartial arginfo_class_MeCab_Tagger_getAllMorphs

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_setPartial, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, partial, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_getTheta, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_setTheta, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, theta, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_next, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, olen, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_parse, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, len, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, olen, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_parseNBest, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, len, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, olen, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Tagger_parseNBestInit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, len, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_Tagger_parseToString arginfo_class_MeCab_Tagger_parse

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_Node___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Node___get, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Node___isset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Node___toString, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_Node___toString, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_INFO_EX(arginfo_class_MeCab_Node_getIterator, 0, 0, MeCab\\NodeIterator, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_Node_getIterator, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_MeCab_Node_getBNext, 0, 0, MeCab\\Node, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_Node_getENext arginfo_class_MeCab_Node_getBNext

#define arginfo_class_MeCab_Node_getNext arginfo_class_MeCab_Node_getBNext

#define arginfo_class_MeCab_Node_getPrev arginfo_class_MeCab_Node_getBNext

#define arginfo_class_MeCab_Node_getAlpha arginfo_class_MeCab_Tagger_getTheta

#define arginfo_class_MeCab_Node_getBeta arginfo_class_MeCab_Tagger_getTheta

#define arginfo_class_MeCab_Node_getCharType arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getCost arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getFeature arginfo_MeCab_version

#define arginfo_class_MeCab_Node_getId arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getLcAttr arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getLength arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getPosId arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getProb arginfo_class_MeCab_Tagger_getTheta

#define arginfo_class_MeCab_Node_getRLength arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getRcAttr arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getStat arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_getSurface arginfo_MeCab_version

#define arginfo_class_MeCab_Node_getWCost arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Node_isBest arginfo_class_MeCab_Tagger_getAllMorphs

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Node_setTraverse, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, traverse, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_Node_toArray, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dump_all, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_Node_toString arginfo_class_MeCab_Node___toString

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_MeCab_Node_getLPath, 0, 0, MeCab\\Path, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_Node_getRPath arginfo_class_MeCab_Node_getLPath

#define arginfo_class_MeCab_NodeIterator___construct arginfo_class_MeCab_Node___construct

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_INFO_EX(arginfo_class_MeCab_NodeIterator_current, 0, 0, MeCab\\Node, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_NodeIterator_current, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_NodeIterator_key, 0, 0, IS_LONG, 1)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_NodeIterator_key, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_NodeIterator_next, 0, 0, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_NodeIterator_next, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_NodeIterator_rewind arginfo_class_MeCab_NodeIterator_next

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_MeCab_NodeIterator_valid, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MeCab_NodeIterator_valid, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#define arginfo_class_MeCab_Path___construct arginfo_class_MeCab_Node___construct

#define arginfo_class_MeCab_Path___get arginfo_class_MeCab_Node___get

#define arginfo_class_MeCab_Path___isset arginfo_class_MeCab_Node___isset

#define arginfo_class_MeCab_Path_getLNode arginfo_class_MeCab_Node_getBNext

#define arginfo_class_MeCab_Path_getRNode arginfo_class_MeCab_Node_getBNext

#define arginfo_class_MeCab_Path_getLNext arginfo_class_MeCab_Node_getLPath

#define arginfo_class_MeCab_Path_getRNext arginfo_class_MeCab_Node_getLPath

#define arginfo_class_MeCab_Path_getCost arginfo_class_MeCab_Tagger_getLatticeLevel

#define arginfo_class_MeCab_Path_getProb arginfo_class_MeCab_Tagger_getTheta


ZEND_FUNCTION(MeCab_version);
ZEND_FUNCTION(MeCab_split);
ZEND_METHOD(MeCab_Tagger, __construct);
ZEND_METHOD(MeCab_Tagger, parseToNode);
ZEND_METHOD(MeCab_Tagger, nextNode);
ZEND_METHOD(MeCab_Tagger, formatNode);
ZEND_METHOD(MeCab_Tagger, dictionaryInfo);
ZEND_METHOD(MeCab_Tagger, getAllMorphs);
ZEND_METHOD(MeCab_Tagger, setAllMorphs);
ZEND_METHOD(MeCab_Tagger, getLatticeLevel);
ZEND_METHOD(MeCab_Tagger, setLatticeLevel);
ZEND_METHOD(MeCab_Tagger, getPartial);
ZEND_METHOD(MeCab_Tagger, setPartial);
ZEND_METHOD(MeCab_Tagger, getTheta);
ZEND_METHOD(MeCab_Tagger, setTheta);
ZEND_METHOD(MeCab_Tagger, next);
ZEND_METHOD(MeCab_Tagger, parse);
ZEND_METHOD(MeCab_Tagger, parseNBest);
ZEND_METHOD(MeCab_Tagger, parseNBestInit);
ZEND_METHOD(MeCab_Node, __construct);
ZEND_METHOD(MeCab_Node, __get);
ZEND_METHOD(MeCab_Node, __isset);
ZEND_METHOD(MeCab_Node, __toString);
ZEND_METHOD(MeCab_Node, getIterator);
ZEND_METHOD(MeCab_Node, getBNext);
ZEND_METHOD(MeCab_Node, getENext);
ZEND_METHOD(MeCab_Node, getNext);
ZEND_METHOD(MeCab_Node, getPrev);
ZEND_METHOD(MeCab_Node, getAlpha);
ZEND_METHOD(MeCab_Node, getBeta);
ZEND_METHOD(MeCab_Node, getCharType);
ZEND_METHOD(MeCab_Node, getCost);
ZEND_METHOD(MeCab_Node, getFeature);
ZEND_METHOD(MeCab_Node, getId);
ZEND_METHOD(MeCab_Node, getLcAttr);
ZEND_METHOD(MeCab_Node, getLength);
ZEND_METHOD(MeCab_Node, getPosId);
ZEND_METHOD(MeCab_Node, getProb);
ZEND_METHOD(MeCab_Node, getRLength);
ZEND_METHOD(MeCab_Node, getRcAttr);
ZEND_METHOD(MeCab_Node, getStat);
ZEND_METHOD(MeCab_Node, getSurface);
ZEND_METHOD(MeCab_Node, getWCost);
ZEND_METHOD(MeCab_Node, isBest);
ZEND_METHOD(MeCab_Node, setTraverse);
ZEND_METHOD(MeCab_Node, toArray);
ZEND_METHOD(MeCab_Node, getLPath);
ZEND_METHOD(MeCab_Node, getRPath);
ZEND_METHOD(MeCab_NodeIterator, __construct);
ZEND_METHOD(MeCab_NodeIterator, current);
ZEND_METHOD(MeCab_NodeIterator, key);
ZEND_METHOD(MeCab_NodeIterator, next);
ZEND_METHOD(MeCab_NodeIterator, rewind);
ZEND_METHOD(MeCab_NodeIterator, valid);
ZEND_METHOD(MeCab_Path, __construct);
ZEND_METHOD(MeCab_Path, __get);
ZEND_METHOD(MeCab_Path, __isset);
ZEND_METHOD(MeCab_Path, getLNode);
ZEND_METHOD(MeCab_Path, getRNode);
ZEND_METHOD(MeCab_Path, getLNext);
ZEND_METHOD(MeCab_Path, getRNext);
ZEND_METHOD(MeCab_Path, getCost);
ZEND_METHOD(MeCab_Path, getProb);


static const zend_function_entry ext_functions[] = {
	ZEND_NS_FALIAS("MeCab", version, MeCab_version, arginfo_MeCab_version)
	ZEND_NS_FALIAS("MeCab", split, MeCab_split, arginfo_MeCab_split)
	ZEND_FE_END
};


static const zend_function_entry class_MeCab_Tagger_methods[] = {
	ZEND_ME(MeCab_Tagger, __construct, arginfo_class_MeCab_Tagger___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, parseToNode, arginfo_class_MeCab_Tagger_parseToNode, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, nextNode, arginfo_class_MeCab_Tagger_nextNode, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, formatNode, arginfo_class_MeCab_Tagger_formatNode, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, dictionaryInfo, arginfo_class_MeCab_Tagger_dictionaryInfo, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, getAllMorphs, arginfo_class_MeCab_Tagger_getAllMorphs, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, setAllMorphs, arginfo_class_MeCab_Tagger_setAllMorphs, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, getLatticeLevel, arginfo_class_MeCab_Tagger_getLatticeLevel, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, setLatticeLevel, arginfo_class_MeCab_Tagger_setLatticeLevel, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, getPartial, arginfo_class_MeCab_Tagger_getPartial, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, setPartial, arginfo_class_MeCab_Tagger_setPartial, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, getTheta, arginfo_class_MeCab_Tagger_getTheta, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, setTheta, arginfo_class_MeCab_Tagger_setTheta, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, next, arginfo_class_MeCab_Tagger_next, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, parse, arginfo_class_MeCab_Tagger_parse, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, parseNBest, arginfo_class_MeCab_Tagger_parseNBest, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Tagger, parseNBestInit, arginfo_class_MeCab_Tagger_parseNBestInit, ZEND_ACC_PUBLIC)
	ZEND_MALIAS(MeCab_Tagger, parseToString, parse, arginfo_class_MeCab_Tagger_parseToString, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_MeCab_Node_methods[] = {
	ZEND_ME(MeCab_Node, __construct, arginfo_class_MeCab_Node___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(MeCab_Node, __get, arginfo_class_MeCab_Node___get, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, __isset, arginfo_class_MeCab_Node___isset, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, __toString, arginfo_class_MeCab_Node___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getIterator, arginfo_class_MeCab_Node_getIterator, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getBNext, arginfo_class_MeCab_Node_getBNext, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getENext, arginfo_class_MeCab_Node_getENext, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getNext, arginfo_class_MeCab_Node_getNext, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getPrev, arginfo_class_MeCab_Node_getPrev, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getAlpha, arginfo_class_MeCab_Node_getAlpha, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getBeta, arginfo_class_MeCab_Node_getBeta, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getCharType, arginfo_class_MeCab_Node_getCharType, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getCost, arginfo_class_MeCab_Node_getCost, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getFeature, arginfo_class_MeCab_Node_getFeature, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getId, arginfo_class_MeCab_Node_getId, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getLcAttr, arginfo_class_MeCab_Node_getLcAttr, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getLength, arginfo_class_MeCab_Node_getLength, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getPosId, arginfo_class_MeCab_Node_getPosId, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getProb, arginfo_class_MeCab_Node_getProb, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getRLength, arginfo_class_MeCab_Node_getRLength, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getRcAttr, arginfo_class_MeCab_Node_getRcAttr, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getStat, arginfo_class_MeCab_Node_getStat, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getSurface, arginfo_class_MeCab_Node_getSurface, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getWCost, arginfo_class_MeCab_Node_getWCost, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, isBest, arginfo_class_MeCab_Node_isBest, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, setTraverse, arginfo_class_MeCab_Node_setTraverse, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, toArray, arginfo_class_MeCab_Node_toArray, ZEND_ACC_PUBLIC)
	ZEND_MALIAS(MeCab_Node, toString, __toString, arginfo_class_MeCab_Node_toString, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getLPath, arginfo_class_MeCab_Node_getLPath, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Node, getRPath, arginfo_class_MeCab_Node_getRPath, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_MeCab_NodeIterator_methods[] = {
	ZEND_ME(MeCab_NodeIterator, __construct, arginfo_class_MeCab_NodeIterator___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(MeCab_NodeIterator, current, arginfo_class_MeCab_NodeIterator_current, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_NodeIterator, key, arginfo_class_MeCab_NodeIterator_key, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_NodeIterator, next, arginfo_class_MeCab_NodeIterator_next, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_NodeIterator, rewind, arginfo_class_MeCab_NodeIterator_rewind, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_NodeIterator, valid, arginfo_class_MeCab_NodeIterator_valid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_MeCab_Path_methods[] = {
	ZEND_ME(MeCab_Path, __construct, arginfo_class_MeCab_Path___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(MeCab_Path, __get, arginfo_class_MeCab_Path___get, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, __isset, arginfo_class_MeCab_Path___isset, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, getLNode, arginfo_class_MeCab_Path_getLNode, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, getRNode, arginfo_class_MeCab_Path_getRNode, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, getLNext, arginfo_class_MeCab_Path_getLNext, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, getRNext, arginfo_class_MeCab_Path_getRNext, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, getCost, arginfo_class_MeCab_Path_getCost, ZEND_ACC_PUBLIC)
	ZEND_ME(MeCab_Path, getProb, arginfo_class_MeCab_Path_getProb, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_mecab_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("MeCab\\VERSION", (char *)mecab_version(), CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\NOR_NODE", MECAB_NOR_NODE, CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\UNK_NODE", MECAB_UNK_NODE, CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\BOS_NODE", MECAB_BOS_NODE, CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\EOS_NODE", MECAB_EOS_NODE, CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\SYS_DIC", MECAB_SYS_DIC, CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\USR_DIC", MECAB_USR_DIC, CONST_PERSISTENT | CONST_CS);
	REGISTER_LONG_CONSTANT("MeCab\\UNK_DIC", MECAB_UNK_DIC, CONST_PERSISTENT | CONST_CS);
}

static zend_class_entry *register_class_MeCab_Tagger(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "MeCab", "Tagger", class_MeCab_Tagger_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_MeCab_Node(zend_class_entry *class_entry_IteratorAggregate)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "MeCab", "Node", class_MeCab_Node_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	zend_class_implements(class_entry, 1, class_entry_IteratorAggregate);

	return class_entry;
}

static zend_class_entry *register_class_MeCab_NodeIterator(zend_class_entry *class_entry_Iterator)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "MeCab", "NodeIterator", class_MeCab_NodeIterator_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	zend_class_implements(class_entry, 1, class_entry_Iterator);

	return class_entry;
}

static zend_class_entry *register_class_MeCab_Path(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "MeCab", "Path", class_MeCab_Path_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}
