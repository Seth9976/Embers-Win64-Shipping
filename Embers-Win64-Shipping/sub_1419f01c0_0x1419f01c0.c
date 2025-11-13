// 函数: sub_1419f01c0
// 地址: 0x1419f01c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
j_sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439cbe98)
uint32_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)

if ((arg2[5].b & 1) != 0)
    result = sub_140b4e7c0(arg2, &data_1439cbe98)
    
    if (result s< 7)
        float zmm2_1 = *(arg1 + 0x244)
        
        if (not(zmm2_1 <= 0f))
            result = zx.d(*(arg1 + 0x248))
            int128_t var_d8
            __builtin_memcpy(&var_d8, 
                "\x00\x00\xe0\x3f\x00\x00\xe0\x3f\x00\x00\xe0\x3f\x00\x00\xe0\x3f\x00\x00\xe0\x3f\x3d\x"
            "0a\xd7\x3f\x66\x66\xc6\x3f\x33\x33\xb3\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0"
            "3f", 
                0x2c)
            int128_t var_a8
            __builtin_memcpy(&var_a8, 
                "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x33\x33\xd3\x3f\xcd\xcc\xac\x3f\x00\x"
            "00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0"
            "3f", 
                0x2c)
            int128_t var_78
            __builtin_memcpy(&var_78, 
                "\x00\x00\xe0\x3f\xcd\xcc\xcc\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x"
            "00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0"
            "3f", 
                0x2c)
            int128_t var_48
            __builtin_memcpy(&var_48, 
                "\x00\x00\x00\x40\x66\x66\xe6\x3f\x66\x66\xc6\x3f\x66\x66\xa6\x3f\x00\x00\xa0\x3f\x00\x"
            "00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0\x3f\x00\x00\xa0"
            "3f", 
                0x2c)
            
            if (result.b == 0)
                int64_t rcx_4 = sx.q(int.d(zmm2_1 + zmm2_1 + 0.5f)) s>> 1
                *(arg1 + 0x254) = *(&var_d8 + (rcx_4 << 2))
                result = *(&var_a8 + (rcx_4 << 2))
                *(arg1 + 0x258) = result
            else if (result.b == 1)
                int64_t rcx_6 = sx.q(int.d(zmm2_1 + zmm2_1 + 0.5f)) s>> 1
                *(arg1 + 0x254) = *(&var_78 + (rcx_6 << 2))
                result = *(&var_48 + (rcx_6 << 2))
                *(arg1 + 0x258) = result

__security_check_cookie(rax_1 ^ &var_f8)
return result
