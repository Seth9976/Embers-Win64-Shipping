// 函数: sub_1421484c0
// 地址: 0x1421484c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg3
uint128_t* result = arg1
*arg1 = 0
arg1[1] = 0
uint128_t zmm2 = *(rax + 8)
int32_t rsi = rax[3].d
uint64_t arg_18 = *rax
*arg3 = rax + 0x1c

if ((_mm_bsrli_si128(zmm2, 0xc).d | _mm_bsrli_si128(zmm2, 8).d | _mm_bsrli_si128(zmm2, 4).d
        | zmm2.d) != 0)
    *result = zmm2
    return result

int64_t* arg_8 = nullptr
uint64_t var_18

if (arg_18 == 0)
label_14214859c:
    
    if (rsi != 0xffffffff)
        int64_t* rax_11 = sub_1421368e0(arg2[1], rsi)
        
        if (rax_11 != 0)
            int64_t r8_1 = *rax_11
            *result = *(*(r8_1 + 0x348))(rax_11, &var_18, r8_1)
else
    int64_t* rcx_4 = *arg2
    
    if (rcx_4 == 0)
        goto label_14214859c
    
    var_18 = arg_18
    char var_c_1 = 2
    
    if ((*(*rcx_4 + 0x70))(rcx_4, &var_18, &arg_8, arg2, var_18, 0xffffffff) == 0)
        goto label_14214859c
    
    int64_t* rcx_5 = arg_8
    
    if (rcx_5 == 0)
        goto label_14214859c
    
    *result = *(*(*rcx_5 + 0x348))(rcx_5, &var_18)
return result
