// 函数: sub_1421cec50
// 地址: 0x1421cec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg2 + 0xf0)
int32_t result = *(arg2 + 0x118) - 1
int32_t rbp = *(arg2 + 0x114)
int64_t r14 = *(arg2 + 0xf8)
int128_t var_28 = arg3
int64_t result_1 = sx.q(result)
int512_t zmm1

if ((*(arg1 + 0x60) & 1) == 0)
    if (result s>= 0)
        int64_t result_2
        
        do
            void* rdi_6 = zx.q(zx.d(*(r14 + (result_1 << 1))) * rbp) + rsi
            
            if ((*(rdi_6 + 0x5c) & 0x4000000) == 0)
                zmm1.o = *(rdi_6 + 0xc)
                float zmm0_2
                zmm0_2, result, zmm1, arg3 =
                    sub_141fe5610(arg1 + 0x30, zmm1, *(arg2 + 0x18), nullptr, var_28)
                *(rdi_6 + 0x2c) = zmm0_2 f* arg3.d f+ *(rdi_6 + 0x2c)
            
            result_2 = result_1
            result_1 -= 1
        while (result_2 - 1 s>= 0)
else if (result s>= 0)
    int64_t result_3
    
    do
        void* rdi_3 = zx.q(zx.d(*(r14 + (result_1 << 1))) * rbp) + rsi
        
        if ((*(rdi_3 + 0x5c) & 0x4000000) == 0)
            zmm1.o = *(rdi_3 + 0xc)
            float zmm0_1
            zmm0_1, result, zmm1, arg3 =
                sub_141fe5610(arg1 + 0x30, zmm1, *(arg2 + 0x18), nullptr, var_28)
            *(rdi_3 + 0x2c) = zmm0_1 f* arg3.d f* *(rdi_3 + 0x2c)
        
        result_3 = result_1
        result_1 -= 1
    while (result_3 - 1 s>= 0)
return result
