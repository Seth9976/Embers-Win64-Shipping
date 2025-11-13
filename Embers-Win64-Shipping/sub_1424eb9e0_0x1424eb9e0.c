// 函数: sub_1424eb9e0
// 地址: 0x1424eb9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_38
int128_t var_28 = data_142d3f660

if (rax_2 != 0)
    rsi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rdi = &var_28
int32_t arg_10 = (zx.o(0)).d

if (rax_4 != 0)
    rdi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int32_t zmm2 = arg_10
int64_t rbp
rbp.b = rax_6 != 0
*(arg2 + 0x20) = rbp + rax_6
uint32_t result[0x4] = *rsi
result[0] = result[0] f- *rdi
result = _mm_and_ps(result, 0x7fffffff)

if (result[0] f> zmm2)
    *arg3 = 0
else
    result = *(rsi + 4)
    result[0] = result[0] f- *(rdi + 4)
    result = _mm_and_ps(result, 0x7fffffff)
    
    if (result[0] f> zmm2)
        *arg3 = 0
    else
        result = *(rsi + 8)
        result[0] = result[0] f- *(rdi + 8)
        result = _mm_and_ps(result, 0x7fffffff)
        
        if (result[0] f> zmm2)
            *arg3 = 0
        else
            result = *(rsi + 0xc)
            result[0] = result[0] f- *(rdi + 0xc)
            result = _mm_and_ps(result, 0x7fffffff)
            
            if (result[0] f> zmm2)
                *arg3 = 0
            else
                *arg3 = 1

return result
