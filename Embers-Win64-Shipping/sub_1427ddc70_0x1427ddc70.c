// 函数: sub_1427ddc70
// 地址: 0x1427ddc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _String = (*(*arg1 + 0x40))()
char* _EndPtr = _String
char* _EndPtr_1

if (_String == 0 || *_String == 0)
    _EndPtr_1 = _EndPtr
else
    _EndPtr_1 = _strtoui64(_String, &_EndPtr, 0xa)

if (_EndPtr_1 == 0)
    *arg3 = _EndPtr_1
    _String.b = 1
    return _String

char* rax_2 = (*(*arg2 + 0x50))(arg2, _EndPtr_1)

if (rax_2 == 0)
    char* _EndPtr_2 = _EndPtr_1
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), (&rax_2[4]).d, 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\s"
    "erialization\xml\SnXmlVisitorReader.h", 
        (&rax_2[0x6c]).d, 
        "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure "
    "externalRefs collection is specified if required and check Xml file for completeness.")

*arg3 = rax_2
rax_2.b = rax_2 != 0
return rax_2
