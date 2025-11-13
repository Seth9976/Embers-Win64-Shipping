// 函数: sub_142898e50
// 地址: 0x142898e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)

if (arg1[4] != 0)
    return 

_CoreCrtNonSecureSearchSortCompareFunction_1 _CompareFunction = *(arg1 + 0x18)

if (_CompareFunction == 0)
    return 

int64_t _NumOfElements = sx.q(*arg1)

if (_NumOfElements.d s> 1)
    qsort(*(arg1 + 8), _NumOfElements, 8, _CompareFunction)

arg1[4] = 1
