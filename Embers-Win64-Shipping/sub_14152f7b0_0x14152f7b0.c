// 函数: sub_14152f7b0
// 地址: 0x14152f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int64_t rdi = sx.q(arg2[1].d)
int32_t rdx_2 = arg_8

if (rdx_2 s> rdi.d)
    arg2[1].d = rdx_2
    int32_t rbp_2 = rdx_2 - rdi.d
    
    if (rdx_2 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
        rdx_2 = arg_8
    
    if (rbp_2 != 0)
        __builtin_memset(*arg2 + (rdi << 3), 0, zx.q(rbp_2) << 3)
        rdx_2 = arg_8
else if (rdx_2 s< rdi.d)
    int32_t rax_5 = rdi.d
    
    if (rax_5 != rdx_2)
        arg2[1].d = rdi.d - (rax_5 - rdx_2)
        sub_1405c53d0(arg2)
        rdx_2 = arg_8

int32_t rdi_3 = 0

if (rdx_2 s> 0)
    do
        arg3 = sub_1416f2c40(arg1, *arg2 + (sx.q(rdi_3) << 3), arg3)
        rdi_3 += 1
    while (rdi_3 s< arg_8)

return arg1
