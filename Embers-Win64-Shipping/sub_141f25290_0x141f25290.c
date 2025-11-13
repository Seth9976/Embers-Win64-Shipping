// 函数: sub_141f25290
// 地址: 0x141f25290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (&arg1[0x81] != arg2)
    int32_t r8_1 = *(arg1 + 0x414)
    int64_t rbp_1 = *arg2
    int64_t rdi_1 = sx.q(arg2[1].d)
    arg1[0x82].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1407751d0(&arg1[0x81], rdi_1.d, r8_1)
        memcpy(arg1[0x81], rbp_1, (rdi_1 * 0x28).d)
    else
        *(arg1 + 0x414) = rdi_1.d

return sub_141ee8490(arg1) __tailcall
