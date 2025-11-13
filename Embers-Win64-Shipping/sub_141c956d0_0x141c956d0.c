// 函数: sub_141c956d0
// 地址: 0x141c956d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x18, sx.q(*(arg2 + 0xc)) * 0x18, r9)
int32_t i = 0
int32_t rax_2 = 0

if ((arg1[5].b & 1) == 0)
    rax_2 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_2
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rax_6 = arg_8

if (rax_6 == 0)
    if ((arg1[5].b & 1) != 0)
        sub_141c9c2d0(arg2, 0)
    
    return arg1

char rcx_3 = *(arg1 + 0x29)

if ((rcx_3 & 1) != 0 || rax_6 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0xaaaaa))
    *(arg1 + 0x29) = rcx_3 | 1
    return arg1

if ((arg1[5].b & 1) == 0)
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        do
            void* rdi_3 = *arg2 + sx.q(i) * 0x18
            (*(*arg1 + 0x140))(arg1, rdi_3)
            arg3 = sub_140a1d9d0(arg1, rdi_3 + 8, arg3)
            i += 1
        while (i s< arg2[1].d)
    
    return arg1

int512_t zmm1 = sub_141c9c2d0(arg2, rax_6)
int32_t rbp = 0

if (arg_8 s> 0)
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_8 = (rdi_1 + 1).d
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            zmm1 = sub_140a88b60(arg2)
        
        void* const rdi_2 = *arg2 + rdi_1 * 0x18
        
        if (rdi_2 == 0)
            rdi_2 = nullptr
        else
            __builtin_memset(rdi_2, 0, 0x18)
        
        (*(*arg1 + 0x140))(arg1, rdi_2)
        zmm1 = sub_140a1d9d0(arg1, rdi_2 + 8, zmm1)
        rbp += 1
    while (rbp s< arg_8)

return arg1
