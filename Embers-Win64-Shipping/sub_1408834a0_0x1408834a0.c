// 函数: sub_1408834a0
// 地址: 0x1408834a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x28, sx.q(*(arg2 + 0xc)) * 0x28, r9)
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
        sub_1408859d0(arg2, 0)
    
    return arg1

char rcx_3 = *(arg1 + 0x29)

if ((rcx_3 & 1) != 0 || rax_6 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x66666))
    *(arg1 + 0x29) = rcx_3 | 1
    return arg1

if ((arg1[5].b & 1) == 0)
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        do
            void* rbx_3 = *arg2 + sx.q(i) * 0x28
            (*(*arg1 + 0x140))(arg1, rbx_3)
            arg3 = sub_140a1d9d0(arg1, rbx_3 + 8, arg3)
            sub_1408832c0(arg1, rbx_3 + 0x18, arg3)
            i += 1
        while (i s< arg2[1].d)
    
    return arg1

int512_t zmm1 = sub_1408859d0(arg2, rax_6)
int32_t rbp = 0

if (arg_8 s> 0)
    do
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t rax_8 = (rbx_1 + 1).d
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_1405c4ec0(arg2)
        
        void* const rbx_2 = *arg2 + rbx_1 * 0x28
        
        if (rbx_2 == 0)
            rbx_2 = nullptr
        else
            __builtin_memset(rbx_2, 0, 0x28)
        
        (*(*arg1 + 0x140))(arg1, rbx_2)
        zmm1 = sub_140a1d9d0(arg1, rbx_2 + 8, zmm1)
        sub_1408832c0(arg1, rbx_2 + 0x18, zmm1)
        rbp += 1
    while (rbp s< arg_8)

return arg1
