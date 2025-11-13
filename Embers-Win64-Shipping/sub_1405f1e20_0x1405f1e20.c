// 函数: sub_1405f1e20
// 地址: 0x1405f1e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) == 0)
    int64_t result
    result.b = 0
    return result

EnterCriticalSection(arg1 + 0x10)
uint64_t rdi
int32_t zmm1

if (arg2 != 1)
    if (arg2 != 2)
        if (arg2 == 3)
            rdi = zx.q(*(arg1 + 8))
        else if (arg2 != 4 || (*(arg1 + 0xc) & 2) == 0 || *(arg1 + 0x38) s<= 0)
            rdi.b = 0
        else
            rdi.b = 1
    else if (*(arg1 + 0xbc) == 3)
        rdi.b = 0
    else
        zmm1 = 0x3f800000
    label_1405f1e73:
        
        if (sub_1405f2790(arg1 + 0xe0, zmm1) == 0)
            rdi.b = 0
        else
            rdi.b = 1
else if (*(arg1 + 0xbc) != 3)
    rdi.b = 0
else
    if ((*(arg1 + 0xc) & 4) == 0)
        zmm1 = (zx.o(0)).d
        goto label_1405f1e73
    
    rdi.b = 1

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rdi.b)
