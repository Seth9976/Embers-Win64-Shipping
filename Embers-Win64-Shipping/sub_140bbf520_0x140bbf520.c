// 函数: sub_140bbf520
// 地址: 0x140bbf520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142e85f48
int64_t i_1 = 0
*(arg1 + 0xc) = 0
arg1[2].d = *arg2
*(arg1 + 0x14) = arg2[1]
arg1[3].d = arg2[2]
*(arg1 + 0x1c) = *(arg2 + 0xc)
*(arg1 + 0x24) = *(arg2 + 0x14)
arg1[6] = 0
arg1[7] = 0
arg1[0xa] = 0
arg1[0xb].d = 0
*(arg1 + 0x5c) = 2
__builtin_memset(arg1 + 0x64, 0, 0x20)
arg1[0x12] = 0
arg1[0x13].d = 0
*(arg1 + 0x9c) = 2
__builtin_memset(&arg1[0x15], 0, 0x20)
arg1[0x19] = arg3
arg1[0x1a] = arg4
arg1[0x1b] = arg5
__builtin_memset(&arg1[0x1c], 0, 0x14)
sub_140a956a0(&arg1[0x1f])
__builtin_memset(&arg1[0x20], 0, 0x1c)
__builtin_memset(&arg1[0x24], 0, 0x20)
sub_140bbfd90(&arg1[0x28], &arg1[0x19][0x50], arg1[3].d)
arg1[0x30] = 0
arg1[0x31].d = 0
__builtin_memset(&arg1[0x32], 0, 0x13)
sub_140bc2a50(arg1, *arg2)
void* r10 = arg1[0x19]
int64_t r8_1 = *(r10 + 0x338)
uint64_t r9 = zx.q(arg1[3].d) * 5
int32_t rax_8 = *(r8_1 + (r9 << 3) + 0x10)
arg1[0x30] = *(r10 + 0x350) + (sx.q(*(r8_1 + (r9 << 3) + 0x14)) << 3)
arg1[0x31].d = rax_8
int32_t i_2 = *(*(r10 + 0x338) + (r9 << 3) + 0xc)
arg1[0x23].d = i_2
int64_t r12 = sx.q(arg1[0x27].d)
int32_t rax_10 = r12.d + i_2
arg1[0x27].d = rax_10

if (rax_10 s> *(arg1 + 0x13c))
    sub_1405a4f90(&arg1[0x26])

int64_t* rax_13 = &arg1[0x26][r12 * 2]

if (i_2 != 0)
    int32_t i
    
    do
        *rax_13 = 0
        rax_13[1].b = 0
        rax_13 = &rax_13[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rdx_6 = arg1[0x23].d + 1

if (rdx_6 s> *(arg1 + 0xc4))
    sub_1405c5570(&arg1[0x17], rdx_6)

sub_140bc4770(arg1, arg6)

if (data_14399fa4c == 0)
    return arg1

void* r8_2 = arg1[0x19]
uint64_t rcx_7 = zx.q(arg1[3].d)
int64_t rax_14 = *(r8_2 + 0x340)
int64_t rbp = *(r8_2 + 0x358) + (sx.q(*(rax_14 + (rcx_7 << 3))) u>> 2 << 2)
int32_t rax_16 = *(rax_14 + (rcx_7 << 3) + 4) * 2

if (rax_16 s> 0)
    do
        int64_t r9_1 = arg1[0x2b]
        int64_t rax_17 = i_1 << 2
        i_1 += 2
        int64_t rbx_1 = sx.q(*(rax_17 + rbp + 4))
        int32_t j_1 = not.d(*(rax_17 + rbp))
        int32_t j_2 = j_1
        
        for (int32_t j = *(r9_1 + (sx.q(not.d(j_1)) << 2)); j != 0; 
                j = *(r9_1 + (sx.q(not.d(j)) << 2)))
            j_2 = j_1
            j_1 = j
        
        int64_t r11_1 = arg1[0x2a]
        int64_t* rcx_12 = arg1[0x1a]
        
        if ((*(*rcx_12 + 8))(rcx_12, arg1, *(r11_1 + (sx.q(not.d(j_1)) << 3)), 
                *(r11_1 + (sx.q(not.d(j_2)) << 3)), not.d(rbx_1.d)) != 0)
            int64_t rax_25 = arg1[0x1c]
            int64_t rcx_14 = rbx_1 * 6
            *(rax_25 + (rcx_14 << 3) + 0x10) += 1
    while (i_1 s< sx.q(rax_16))

return arg1
