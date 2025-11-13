// 函数: sub_141d58880
// 地址: 0x141d58880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* result = arg2

if (*(arg1 + 0x8c8) == 0)
    *arg2 = 0
    arg2[1] = 0
    return result

int32_t rdi = 0
int32_t r12 = 0
int64_t var_68 = 0
int32_t var_5c = 0
sub_141c3c7c0(arg1 + 0x788)
int64_t r15 = 0
int128_t* r14 = *(arg1 + 0x770)
int64_t r13 = sx.q(*(arg1 + 0x778)) << 2
uint64_t r13_1 = r13 u>> 2

if (r14 u> r14 + r13)
    r13_1 = 0

if (r13_1 != 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    
    do
        int128_t zmm0_1
        zmm0_1, zmm6 = sub_141c39c50(arg1 + 0x788, (*r14).d)
        int64_t rbp_1 = sx.q(rdi)
        rdi = (rbp_1 + 1).d
        
        if (rdi s> r12)
            sub_1405a4d70(&var_68)
            r12 = var_5c
            rbx = var_68
        
        r14 += 4
        *(rbx + (rbp_1 << 3)) = zmm6.d
        r15 += 1
        *(rbx + (rbp_1 << 3) + 4) = zmm0_1.d
    while (r15 != r13_1)
    
    result = arg2

sub_141c47360(arg1 + 0x788)
*result = rbx
result[1].d = rdi
*(result + 0xc) = r12
return result
