// 函数: sub_14232add0
// 地址: 0x14232add0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14232a9b0(arg1, arg2, arg3, arg4)
void* const r8 = nullptr
void*** r13 = &arg1[0xe]
*arg1 = &data_143328c38
r13[1].d = 0xffffffff
*(r13 + 0xc) = 4
*r13 = &data_142dd5bb0
r13[3] = 0
r13[4] = 0
r13[2] = &data_142dd5b70
r13[5].b = 0
__builtin_memset(&r13[6], 0, 0x1c)
__builtin_memset(&r13[0xa], 0, 0x1a)
__builtin_memset(&arg1[0x1c], 0, 0x1c)
__builtin_memset(&arg1[0x20], 0, 0x23)
void* rax = arg1[8]
*(arg1 + 0x124) = 0
int32_t i_4 = arg1[0x21].d
int32_t r12 = *(rax + 8)

if (i_4 != 0)
    int64_t* rdi_1 = &arg1[0x20][8]
    int32_t i
    
    do
        sub_14232bde0(&rdi_1[4])
        sub_1405d1550(&rdi_1[1])
        sub_1405ec8a0(rdi_1)
        int64_t rcx_3 = rdi_1[-2]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rdi_1[-6] = &data_142dda848
        sub_1405d1550(&rdi_1[-4])
        sub_1419948a0(&rdi_1[-6])
        rdi_1 = &rdi_1[0x16]
        i = i_4
        i_4 -= 1
    while (i != 1)
    r13 = &arg1[0xe]
    r8 = nullptr

arg1[0x21].d = 0

if (*(arg1 + 0x10c) != r12)
    sub_140a05f70(&arg1[0x20], r12)
    r8 = nullptr

int32_t i_1 = 0

if (arg1[8][1].d s> 0)
    do
        int64_t rdi_2 = sx.q(arg1[0x21].d)
        int32_t rax_2 = (rdi_2 + 1).d
        arg1[0x21].d = rax_2
        
        if (rax_2 s> *(arg1 + 0x10c))
            sub_140a05e50(&arg1[0x20])
            r8 = nullptr
        
        int64_t* rax_4 = &arg1[0x20][rdi_2 * 0x16]
        
        if (rdi_2 * 0xb0 != neg.q(arg1[0x20]))
            int64_t rcx_8 = arg1[8]
            *rax_4 = rcx_8
            rax_4[1].d = i_1
            rax_4[3].d = 0xffffffff
            *(rax_4 + 0x1c) = 4
            rax_4[4] = 0
            rax_4[2] = &data_143328bc0
            rax_4[5].w = 0x100
            __builtin_memset(&rax_4[6], 0, 0x20)
            *(rax_4 + 0x54) = i_1
            rax_4[0xb] = rcx_8
            rax_4[0xa].b = 0
            __builtin_memset(&rax_4[0xc], 0, 0x50)
        
        i_1 += 1
    while (i_1 s< arg1[8][1].d)

int32_t i_2 = 0

if (arg1[0x21].d s> 0)
    int64_t rbp = 0
    int64_t rdi_3 = 0
    
    do
        int64_t* r10_2 = arg1[0x20] + rdi_3
        int64_t* rax_6 = *r10_2
        
        if (rax_6 != 0 && i_2 s>= 0 && i_2 s< rax_6[1].d && *(*(*rax_6 + rbp) + 0xec) u> 0)
            int64_t i_3 = sx.q(i_2)
            
            if (i_2 s< *(arg2 + 0x578))
                r8 = *(arg2 + 0x570) + i_3 * 0x28
            
            sub_14233c750(r10_2, &arg1[1][i_3 * 2], r8, arg1[0xd].d)
            r8 = nullptr
        
        i_2 += 1
        rdi_3 += 0xb0
        rbp += 8
    while (i_2 s< arg1[0x21].d)

sub_141997e80(r13)
return arg1
