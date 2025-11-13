// 函数: sub_141e8b930
// 地址: 0x141e8b930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* (* var_58)(int64_t* arg1)

if (*(arg1 + 0x2e0) - *(arg1 + 0x30c) s<= 0)
    char rdx_5 = arg2
    void** const var_38_1 = &data_142da2668
    void* (* var_30)(int64_t* arg1) = arg1
    var_58 = sub_141e76390
    int64_t var_48_1 = 0
    return sub_141e85cb0(&var_58, rdx_5)

char* arg_10 = &arg2
arg2 = 0
char** arg_18 = &arg_10
sub_141e77970(arg1 + 0x2d8)
char*** arg_20 = &arg_18
sub_141e6f530(*(arg1 + 0x2d8), *(arg1 + 0x2e0) - *(arg1 + 0x30c), arg2)
sub_1407737f0(arg1 + 0x2d8)
int32_t r11 = *(arg1 + 0x300)
void* r10 = arg1 + 0x2e8
int32_t r8_1 = 0
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t r9 = 0

if (r11 != 0)
    void* rax_2 = *(r10 + 0x10)
    
    if (rax_2 != 0)
        r10 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx_3 = *r10
    int32_t var_84_2
    
    if (rcx_3 != 0)
    label_141e8ba12:
        int32_t rax_9 = neg.d(rcx_3) & rcx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        r9 -= rax_10
        int32_t var_84_1 = r9 + 0x1f
        
        if (r9 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_1)
            r9 += 0x20
            r8_1 += 1
            
            if (rcx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx_3 = *(r10 + (rcx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rcx_3 != 0)
                goto label_141e8ba12
        
        var_84_2 = r11

int64_t rax_12 = *(arg1 + 0x2d8)
var_58 = arg1
uint128_t var_50 = *(rax_12 + 8)
arg2.q = *(rax_12 + 0x28)
int128_t var_40 = *(rax_12 + 0x18)
void*** rax_13 = sub_140a82f30(0x38, 8, r8_1, r9)
double zmm0_1[0x2] = var_58.o
*rax_13 = &data_142ec17a8
int64_t zmm2 = arg2.q
*(rax_13 + 8) = zmm0_1
int64_t var_48
*(rax_13 + 0x18) = var_48.o
int64_t var_38
*(rax_13 + 0x28) = _mm_unpacklo_pd(var_38.o, zmm2)
var_88.q = rax_13
void* (* var_98)(int64_t* arg1)
void* (* rax_14)(int64_t* arg1) = var_98

if (rax_13 != -8)
    rax_14 = sub_141e76350

char rdx_4 = arg2
var_98 = rax_14
return sub_141e85cb0(&var_98, rdx_4)
