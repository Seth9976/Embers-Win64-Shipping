// 函数: sub_140998870
// 地址: 0x140998870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float rax = *(arg2 + 0x1c)
uint128_t zmm0 = zx.o(*(arg2 + 0x14))
int64_t* rdi = *arg2
int32_t arg_8 = arg2[2].d
int128_t zmm1 = zmm0.q:4.d
int32_t arg_18 = *(arg2 + 0xc)
int32_t arg_10 = arg2[1].d
int32_t* result
bool cond:1

if (zmm0.d f<= zmm1.d)
    cond:1 = zmm1.d f<= rax
    result = &arg_18
else
    cond:1 = zmm0.d f<= rax
    result = &arg_10

if (cond:1)
    result = &arg_8

int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t rbp_1 = 0
    int64_t r12_1 = sx.q(*result)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    do
        int64_t rsi_1 = sx.q(rdi[1].d)
        zmm6 = data_142d3f660
        char var_5c_1 = *(r12_1 + *(*(arg3 + 0x18) + rbp_1))
        result = zx.q((rsi_1 + 1).d)
        rdi[1].d = result.d
        
        if (result.d s> *(rdi + 0xc))
            result = sub_14090a6a0(rdi)
        
        rbp_1 += 0x10
        int64_t* rcx_4 = rsi_1 * 0x60 + *rdi
        *(rcx_4 + 0x10) = 6.o
        rcx_4[1].d = i
        i += 1
        *(rcx_4 + 0x20) = zmm6
        *rcx_4 = arg1
        uint128_t var_78
        *(rcx_4 + 0x30) = var_78
        int128_t var_68
        *(rcx_4 + 0x40) = var_68
        *(rcx_4 + 0x50) = 0.o
    while (i s< *(arg3 + 0x20))

return result
