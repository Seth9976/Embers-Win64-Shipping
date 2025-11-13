// 函数: sub_1422e5a50
// 地址: 0x1422e5a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int128_t* result = arg2

if (*(arg1 + 8) == 0)
    int128_t var_48
    void* rax_2 = &var_48:1
    int128_t var_68 = zx.o(0)
    int32_t i = 0
    int128_t var_38
    __builtin_memset(&var_38, 0, 0x14)
    
    do
        i += 4
        *(rax_2 - 1) = 0
        rax_2 += 4
    while (i u< 4)
    
    int64_t* rcx = *(arg1 + 0x10)
    int128_t zmm0
    int128_t zmm1
    int128_t zmm2
    int128_t zmm3
    int128_t zmm4
    
    if (rcx == 0)
        int32_t var_28
        zmm0 = var_28.o
        zmm4 = var_38
        zmm3 = var_48
        int128_t var_58
        zmm2 = var_58
        zmm1 = var_68
    else
        int128_t* rax_4 = (*(*rcx + 0x28))(rcx, &var_68)
        zmm1 = *rax_4
        zmm2 = rax_4[1]
        zmm3 = rax_4[2]
        zmm4 = rax_4[3]
        zmm0 = rax_4[4]
    
    if (zmm0.d == 0)
        int64_t* rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 != 0)
            int128_t* rax_7 = (*(*rcx_1 + 0x20))(rcx_1, &var_68)
            zmm1 = *rax_7
            zmm2 = rax_7[1]
            zmm3 = rax_7[2]
            zmm4 = rax_7[3]
            zmm0 = rax_7[4]
    
    *result = zmm1
    result[1] = zmm2
    result[2] = zmm3
    result[3] = zmm4
    result[4] = zmm0
else
    int32_t i_1 = 0
    *arg2 = 0
    arg2[1] = 0
    __builtin_memset(&arg2[6], 0, 0x14)
    void* rdx = arg2 + 0x21
    
    do
        i_1 += 4
        *(rdx - 1) = 0
        rdx += 4
    while (i_1 u< 4)
    
    result[4].d = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
