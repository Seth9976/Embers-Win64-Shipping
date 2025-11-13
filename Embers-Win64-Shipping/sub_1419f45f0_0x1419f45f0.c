// 函数: sub_1419f45f0
// 地址: 0x1419f45f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141a0a270(arg1, arg2)

if (result == 0xffffffff)
    int64_t rdi_1 = sx.q(arg1[1].d)
    int32_t rax = (rdi_1 + 1).d
    arg1[1].d = rax
    
    if (rax s> *(arg1 + 0xc))
        sub_1405c50f0(arg1)
    
    result = rdi_1.d
    int128_t* r8_2 = rdi_1 * 0x1c + *arg1
    *r8_2 = *arg2
    r8_2[1].q = *(arg2 + 0x10)
    *(r8_2 + 0x18) = arg2[6]

return result
