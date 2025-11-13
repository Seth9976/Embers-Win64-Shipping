// 函数: sub_141fc9a20
// 地址: 0x141fc9a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1424130d0(arg3, u"SkipSpawnSpectatorController")

if (result.b == 0)
    *(arg1 + 0x768) = sub_141fac1f0(arg1, arg2, arg3)
    int64_t rdi_1 = sx.q(*(arg1 + 0xcf8))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0xcf8) = rax_1
    
    if (rax_1 s> *(arg1 + 0xcfc))
        sub_1405a4d70(arg1 + 0xcf0)
    
    result = *(arg1 + 0x768)
    *(*(arg1 + 0xcf0) + (rdi_1 << 3)) = result

return result
