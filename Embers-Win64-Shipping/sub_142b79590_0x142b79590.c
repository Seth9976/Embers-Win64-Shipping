// 函数: sub_142b79590
// 地址: 0x142b79590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int32_t rax_1 = sub_142b790c0(arg1, arg2)
int64_t r9 = *arg1
int32_t rdx_1 = *(r9 + (sx.q(rax_1) << 2)) & 0xffffff00
int32_t r8

if (arg2 != rdx_1)
    r8 = 0x5000500
    int64_t rax_5 = sx.q(rax_1 + 1)
    int32_t* rcx_3 = r9 + (rax_5 << 2)
    int32_t rax_6 = *(r9 + (rax_5 << 2))
    
    while (rax_6.b s< 0)
        rcx_3 = &rcx_3[1]
        r8 = rax_6
        rax_6 = *rcx_3
else
    r8 = *(r9 + (sx.q(rax_1 - 1) << 2))
    int32_t rdx_3 = r8
    
    if (r8.b s< 0)
        int64_t rax_3 = sx.q(rax_1 - 2)
        int32_t rdx_4 = *(r9 + (rax_3 << 2))
        void* rcx_2 = r9 + (rax_3 << 2)
        
        while (rdx_4.b s< 0)
            rdx_4 = *(rcx_2 - 4)
            rcx_2 -= 4
        
        rdx_1 = rdx_4 & 0xffffff00
    else
        r8 = 0x5000500
        rdx_1 = rdx_3 & 0xffffff00

return (zx.q(r8) & 0xffffff7f) | zx.q(rdx_1) << 0x20
