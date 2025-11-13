// 函数: sub_140aefb30
// 地址: 0x140aefb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t rax_2 = arg2[1].d
int32_t rdx = rax_2 - 1

if (rax_2 == 0)
    rdx = 0

int64_t* result

if (rdx != 0)
    int32_t var_178
    sub_140aeffb0(arg1 + 8, &var_178, arg2)
    int64_t rax_3 = sx.q(var_178)
    void* const rdx_3
    
    if (rax_3.d == 0xffffffff)
        rdx_3 = nullptr
    else
        rdx_3 = rax_3 * 0x158 + *(arg1 + 8)
    
    int64_t* result_2 = rdx_3 + 0x10
    
    if (rdx_3 == 0)
        result_2 = nullptr
    
    int64_t* result_1 = result_2
    
    if (result_2 == 0 && *(arg1 + 0x58) == result_2.b)
        char rax_4
        
        if (arg3 == 0)
            int16_t* const rcx_1
            
            if (arg2[1].d == result_2.d)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *arg2
            
            rax_4 = sub_140aed720(rcx_1)
        
        if (arg3 != 0 || rax_4 != 0)
            void var_168
            result_1 = sub_140ae4b00(arg1 + 8, arg2, sub_140ae6a10(&var_168))
            sub_140ae7280(&var_168)
            sub_140afcd00(result_1, arg2)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_198)
return result
