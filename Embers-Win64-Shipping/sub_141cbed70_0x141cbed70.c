// 函数: sub_141cbed70
// 地址: 0x141cbed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t rdx = arg2[1].d
arg1[1].d = 0

if (*(arg1 + 0xc) != rdx)
    sub_1405c5570(arg1, rdx)

int64_t rdi = sx.q(arg2[1].d)

if (rdi.d != 0)
    int32_t rax_1 = arg1[1].d
    int32_t rdx_1 = rax_1 + rdi.d
    
    if (rdx_1 s> *(arg1 + 0xc))
        sub_1405c5570(arg1, rdx_1)
        rax_1 = arg1[1].d
    
    memcpy(*arg1 + (sx.q(rax_1) << 3), *arg2, (rdi << 3).d)
    arg1[1].d += rdi.d

int32_t rdx_3 = arg2[3].d
arg1[3].d = 0

if (*(arg1 + 0x1c) != rdx_3)
    sub_1405c5570(&arg1[2], rdx_3)

int64_t rbp = sx.q(arg2[3].d)

if (rbp.d != 0)
    int32_t rax_3 = arg1[3].d
    int32_t rdx_4 = rax_3 + rbp.d
    
    if (rdx_4 s> *(arg1 + 0x1c))
        sub_1405c5570(&arg1[2], rdx_4)
        rax_3 = arg1[3].d
    
    memcpy(arg1[2] + (sx.q(rax_3) << 3), arg2[2], (rbp << 3).d)
    arg1[3].d += rbp.d

return arg1
