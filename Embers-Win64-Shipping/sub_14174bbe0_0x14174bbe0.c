// 函数: sub_14174bbe0
// 地址: 0x14174bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int64_t arg_10 = rdx
int64_t* i = *(arg1 + 0x10)
int64_t rdi
rdi.b = 0
uint128_t zmm6 = zx.o(0)

for (void* rsi = &i[sx.q(*(arg1 + 0x18))]; i != rsi; i = &i[1])
    int64_t* rcx = *i
    int32_t var_98
    int64_t var_90
    int64_t var_80
    int32_t arg_8
    
    if ((*(*rcx + 0x40))(rcx, arg2, arg3, arg4, arg5.d, &arg_8, &var_90, &var_80, &var_98) != 0)
        uint128_t zmm0 = arg_8
        
        if (rdi.b == 0 || not(zmm0.d f>= zmm6.d))
            zmm6 = zmm0
            *arg6 = zmm0.d
            rdi.b = 1
            *arg7 = var_90
            int32_t var_88
            arg7[1].d = var_88
            *arg8 = var_80
            int32_t var_78
            arg8[1].d = var_78
            *arg9 = var_98

return zx.q(rdi.b)
