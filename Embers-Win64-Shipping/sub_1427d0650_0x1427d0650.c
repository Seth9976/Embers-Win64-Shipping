// 函数: sub_1427d0650
// 地址: 0x1427d0650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)

if (result.d == 0)
    *arg1 = 0
    arg1[1] = 0
else
    *(arg1 + 0xc) = result.d
    arg1[1].d = result.d
    int64_t rax = sub_1427d0990(arg1, zx.q(result.d) << 2, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)
    *arg1 = rax
    result = zx.q(arg1[1].d)
    int64_t r8_1 = rax + (result << 2)
    
    if (r8_1 u> rax)
        return memcpy(rax, *arg2, (r8_1.d - rax.d) & 0xfffffffc) __tailcall

return result
