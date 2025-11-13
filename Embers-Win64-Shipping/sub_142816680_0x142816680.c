// 函数: sub_142816680
// 地址: 0x142816680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)

if (result.d == 0)
    *arg1 = 0
    arg1[1] = 0
else
    *(arg1 + 0xc) = result.d
    arg1[1].d = result.d
    int64_t rax = sub_1428167a0(arg1, zx.q(result.d) << 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)
    int32_t r8_1 = arg1[1].d
    *arg1 = rax
    result = (zx.q(r8_1) << 4) + rax
    
    if (result u> rax)
        return memcpy(rax, *arg2, r8_1 << 4) __tailcall

return result
