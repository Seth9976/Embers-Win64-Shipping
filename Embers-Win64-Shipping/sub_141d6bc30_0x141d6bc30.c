// 函数: sub_141d6bc30
// 地址: 0x141d6bc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141d02ac0(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x38 + *arg1

int128_t* rdi = rax_2 + 0x10

if (rax_2 == 0)
    rdi = nullptr

int64_t* result

if (rdi == 0)
    result = nullptr
else if ((*(rdi + 8) | *rdi | *(rdi + 4) | *(rdi + 0xc)) == 0 || arg3 == 0)
    result = sub_141d6bee0(arg3, &rdi[1])
else
    int32_t r8_1 = *(sub_140d21d80(arg3) + 0x58)
    uint128_t zmm1_1
    
    if (r8_1 != 0xffffffff)
        void var_38
        zmm1_1 = *sub_140cba950(rdi, &var_38, r8_1)
        int64_t rdx_4 = zmm1_1.q
        int64_t rcx_7 = _mm_bsrli_si128(zmm1_1, 8).q
        int32_t r8_7 = ((rdx_4 u>> 0x20).d ^ *(rdi + 4)) | ((rcx_7 u>> 0x20).d ^ *(rdi + 0xc))
            | (*rdi ^ rdx_4.d) | (*(rdi + 8) ^ rcx_7.d)
        uint128_t var_48_2 = zmm1_1
        
        if (r8_7 != 0)
            goto label_141d6bcc0
        
        result = sub_141d6bee0(arg3, &rdi[1])
    else
        zmm1_1 = *rdi
        uint128_t var_48_1 = zmm1_1
    label_141d6bcc0:
        int32_t var_28 = 0xffffffff
        int64_t var_24_1 = 0
        uint128_t var_1c = zmm1_1
        int64_t* result_1 = sub_140d3c6e0(&var_28)
        result = result_1
        
        if (result_1 == 0)
            if ((var_1c:0xc.d | var_1c:8.d | var_1c:4.d | var_1c.d) == 0)
                result = sub_141d6bee0(arg3, &rdi[1])
            else
                int32_t rax_12 = 0
                
                if (0 == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_12 = data_1439a9d84
                
                if (rax_12 != var_24_1:4.d || var_28 != 0xffffffff)
                    void* rax_13 = sub_140ccdeb0(&var_1c)
                    sub_140d3a3a0(&var_28, rax_13)
                    
                    if (rax_13 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_14 = 0
                        
                        if (0 == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_14 = data_1439a9d84
                        
                        var_24_1:4.d = rax_14
                    
                    int64_t* result_2 = sub_140d3c6e0(&var_28)
                    result = result_2
                    
                    if (result_2 == 0)
                        result = sub_141d6bee0(arg3, &rdi[1])
                else
                    result = sub_141d6bee0(arg3, &rdi[1])

if (result == 0)
    return nullptr

int64_t rdx_6 = *result

if ((*(rdx_6 + 0x150))(result, rdx_6) != 0)
    return result

return nullptr
