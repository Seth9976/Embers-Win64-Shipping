// 函数: sub_1422a46c0
// 地址: 0x1422a46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t result = 4
int32_t r9 = 2
int64_t rsi = sx.q(*(arg1 + 0x20))

if (*(arg1 + 0x28) != 0)
    r9 = 4

uint32_t count = rsi.d * r9

if (count != 0)
    char rcx = (data_1439c7a34).b
    int64_t var_78
    int64_t* var_80_1 = &var_78
    int32_t var_58_1 = 1
    char var_40_1 = 0
    int128_t var_68 = zx.o(0)
    int64_t* rcx_1 = data_143f0f180
    int128_t var_54_1 = data_143dbb1e0
    int32_t var_44_1 = (1 << rcx) - 1
    int128_t* var_88_1 = &var_68
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    var_78 = 0
    int32_t var_90_1 = 1
    uint32_t count_1 = count
    void var_70
    (*(*rcx_1 + 0x490))(rcx_1, &var_70, &data_143f02b98)
    sub_1405d1600(arg1 + 0x10, &var_70)
    sub_14081c9d0(&var_70)
    
    if (*(arg1 + 0x28) == 0)
        int64_t r11_1 = var_78
        
        if (rsi.d s> 0)
            int64_t r9_1 = 0
            
            do
                *(r11_1 + (r9_1 << 1)) = *(*(arg1 + 0x18) + (r9_1 << 2))
                r9_1 += 1
            while (r9_1 s< rsi)
    else
        memcpy(var_78, *(arg1 + 0x18), count)
    
    int64_t* rcx_6 = data_143f0f180
    result = (*(*rcx_6 + 0x118))(rcx_6, &data_143f02b98, *(arg1 + 0x10))

if (data_143de5426 == 0)
    *(arg1 + 0x20) = 0
    
    if (*(arg1 + 0x24) != 0)
        result = sub_1405dadb0(arg1 + 0x18, 0)

__security_check_cookie(rax_1 ^ &var_b8)
return result
