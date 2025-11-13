// 函数: sub_142a60720
// 地址: 0x142a60720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t i = arg2
int16_t var_6c
void* string_4 = &var_6c:1
int32_t var_70 = 0x28
var_6c = 0
int32_t var_40 = 0
int32_t var_98 = 0
void* string_1
uint128_t zmm1 = *sub_142a85330(&string_1, arg3)
sub_142a8cbd0(&string_4, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, &var_98)
void* string_2 = string_4

if (var_98 s> 0)
    i = -1
else
    void* string = string_2
    uint32_t rax_4 = i u>> 0x1c
    
    if (*string_2 != 0)
        while (i != 0xffffffff)
            if (rax_4 u> 9)
                break
            
            if (not(test_bit(0x334, rax_4)))
                break
            
            char* rax_5 = strchr(string, 0x2f)
            void* string_3
            
            if (rax_5 == 0)
                string_3 = strchr(string, 0)
            else
                *rax_5 = 0
                string_3 = &rax_5[1]
            
            string_1 = string
            void var_94
            int32_t i_1 = sub_142ac3d30(arg1, i, &var_94, &string_1)
            i = i_1
            rax_4 = i_1 u>> 0x1c
            string = string_3
            
            if (*string_3 == 0)
                break
        
        string_2 = string_4
    
    if (*string != 0)
        i = -1

if (var_6c.b != 0)
    sub_142a7dcd0(string_2)

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(i)
