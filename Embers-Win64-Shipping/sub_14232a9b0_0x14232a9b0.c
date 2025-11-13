// 函数: sub_14232a9b0
// 地址: 0x14232a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143328a38
void* rbp = arg2
__builtin_memset(&arg1[1], 0, 0x20)
uint32_t rax = zx.d(*(arg3 + 0x13))
arg1[5].d = rax
arg1[6].d = rax
*(arg1 + 0x2c) = 0
*(arg1 + 0x34) = 0
arg1[7].w = 0
arg1[8] = arg3
void* rdx = *(arg2 + 0x430)
arg1[9] = 0
sub_142321660(&arg1[9], *(rdx + 0xd8), *(rdx + 0xe0), 0, 0)
int32_t r14 = arg1[0xa].d
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd].d = arg4
*(arg1 + 0x64) = *(rbp + 0x5a7) & 1
*(arg1 + 0x6c) = *(rbp + 0x254)
int32_t zmm0 = *(rbp + 0x55c)
*(arg1 + 0x2c) = zmm0
*(arg1 + 0x34) = zmm0
int32_t i_2 = arg1[2].d
int64_t* rbx_1 = arg1[1]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

arg1[2].d = 0

if (*(arg1 + 0x14) != r14)
    sub_1405a5410(&arg1[1], r14)

int32_t i_1 = 0

if (arg1[0xa].d s> 0)
    int64_t r14_1 = 0
    int64_t r15_1 = 0
    
    do
        int64_t rbx_2 = sx.q(arg1[2].d)
        int32_t rax_3 = (rbx_2 + 1).d
        arg1[2].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x14))
            sub_1405a4f90(&arg1[1])
        
        int64_t* rbx_4 = &arg1[1][rbx_2 * 2]
        
        if (rbx_2 << 4 == neg.q(arg1[1]))
            rbx_4 = nullptr
        else
            *rbx_4 = 0
            rbx_4[1] = 0
        
        if (r14_1 s>= 0 && i_1 s< *(rbp + 0x578))
            int64_t* rcx_5 = *(rbp + 0x570) + r15_1
            
            if (rbx_4 != rcx_5)
                uint32_t count = rcx_5[1].d
                int64_t r13_1 = *rcx_5
                int32_t r8_1 = *(rbx_4 + 0xc)
                rbx_4[1].d = count
                
                if (count != 0 || r8_1 != 0)
                    sub_1405da9e0(rbx_4, count, r8_1)
                    memcpy(*rbx_4, r13_1, count)
                else
                    *(rbx_4 + 0xc) = 0
                
                rbp = arg2
        
        i_1 += 1
        r14_1 += 1
        r15_1 += 0x28
    while (i_1 s< arg1[0xa].d)

return arg1
