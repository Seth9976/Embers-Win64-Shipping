// 函数: sub_142bca540
// 地址: 0x142bca540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int32_t arg_8 = 0

if (rax == 0)
    return 0x23

void* r14 = *(rax + 0xd8)

if (r14 == 0 || arg3 u>= *(rax + 0x10))
    return 6

uint32_t r8

if (arg3 == 0)
    r8 = zx.d(*(r14 + 0x6a))
else
    r8 = arg3 - 1

int16_t r9 = *(r14 + 4)
int32_t rdx = 4

if (r9 == 0x300)
    rdx = 6

int32_t rax_2 = 0x76

if (r9 == 0x300)
    rax_2 = 0x94

int32_t rcx = 2
uint64_t rdx_2 = zx.q(rdx * r8 + rax_2)

if (r9 == 0x300)
    rcx = 4

if (rdx_2.d u>= *(r14 + 8) - rcx - 2)
    return 3

char* rdx_3 = rdx_2 + *(r14 + 0xa0)
*(arg1 + 0x6c) = zx.d(rdx_3[1]) << 8 | zx.d(*rdx_3)
uint32_t rbp_4

if (r9 != 0x300)
    rbp_4 = zx.d(rdx_3[3])
else
    rbp_4 = (zx.d(rdx_3[5]) << 8 | zx.d(rdx_3[4])) << 8 | zx.d(rdx_3[3])

uint32_t rbp_6 = rbp_4 << 8 | zx.d(rdx_3[2])

if (rbp_6 u>= *(r14 + 8))
    return 3

*(arg1 + 0x68) = zx.d(*(r14 + 0x60))
*(arg1 + 0x82) = 1
*(arg1 + 0x90) = 0
uint32_t rdx_4 = zx.d(*(r14 + 0x50))
*(arg1 + 0x94) = rdx_4
__builtin_strncpy(arg1 + 0x60, "stib", 4)
*(arg1 + 0x30) = *(arg1 + 0x6c) << 6
*(arg1 + 0x34) = *(arg1 + 0x68) << 6
int32_t rax_17 = *(arg1 + 0x6c)
*(arg1 + 0x3c) = rdx_4 << 6
*(arg1 + 0x40) = rax_17 << 6
*(arg1 + 0x38) = 0
sub_142b9a4e0(arg1 + 0x30, *(arg1 + 0x68) << 6)

if (test_bit(arg4, 0x16))
    return arg_8

char* rbx_2 = zx.q(rbp_6) + *(r14 + 0xa0)
int64_t rcx_5 = *(*(arg1 + 8) + 0x98)
uint32_t i_1 = (*(arg1 + 0x6c) + 7) u>> 3
*(arg1 + 0x70) = i_1

if (i_1 != 0)
    int32_t r9_1 = *(arg1 + 0x68)
    
    if (r9_1 * i_1 + rbp_6 u<= *(r14 + 8))
        char* rax_23 = sub_142b99a90(rcx_5, i_1, 0, r9_1, 0, &arg_8)
        char* r9_2 = rax_23
        *(arg1 + 0x78) = rax_23
        int32_t rax_11 = arg_8
        
        if (rax_11 != 0)
            return rax_11
        
        if (i_1 != 0)
            uint32_t i
            
            do
                uint64_t r8_1 = zx.q(*(arg1 + 0x68))
                char* rcx_6 = r9_2
                int64_t rdx_9 = 0
                
                if (rbx_2 u> &rbx_2[r8_1])
                    r8_1 = 0
                
                if (r8_1 != 0)
                    do
                        rdx_9 += 1
                        *rcx_6 = *rbx_2
                        rbx_2 = &rbx_2[1]
                        rcx_6 = &rcx_6[sx.q(*(arg1 + 0x70))]
                    while (rdx_9 u< r8_1)
                
                r9_2 = &r9_2[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *(*(arg1 + 0xf0) + 8) = 1
        return arg_8

return 3
