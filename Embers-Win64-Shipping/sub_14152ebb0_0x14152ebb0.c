// 函数: sub_14152ebb0
// 地址: 0x14152ebb0
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

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_1405a52a0(arg2, rax_4)
    rax_4 = arg_8

int64_t rbx = sx.q(arg2[1].d)
int32_t rdi = 0

if (rax_4 s> rbx.d)
    arg2[1].d = rax_4
    int32_t i_1 = rax_4 - rbx.d
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405c4fe0(arg2)
        rax_4 = arg_8
    
    int64_t rcx_6 = (rbx << 6) + *arg2
    
    if (i_1 != 0)
        void* rax_5 = rcx_6 + 0x3c
        int32_t i
        
        do
            *rcx_6 = 0
            rcx_6 += 0x40
            *(rax_5 - 0x34) = 0
            *(rax_5 - 0x2c) = 0xffffffff
            __builtin_memset(rax_5 - 0x28, 0, 0x11)
            __builtin_memcpy(rax_5 - 0x14, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *rax_5 = 0xff7fffff
            rax_5 += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)
        rax_4 = arg_8
else if (rax_4 s< rbx.d)
    int32_t rcx_7 = rbx.d
    
    if (rcx_7 != rax_4)
        arg2[1].d = rbx.d - (rcx_7 - rax_4)
        sub_1407c3fe0(arg2)
        rax_4 = arg_8

if (rax_4 s> 0)
    do
        int64_t* rbx_4 = (sx.q(rdi) << 6) + *arg2
        sub_14152e190(arg1, rbx_4, arg3)
        arg3 = sub_1417558e0(arg1, &rbx_4[5])
        rdi += 1
    while (rdi s< arg_8)

return arg1
