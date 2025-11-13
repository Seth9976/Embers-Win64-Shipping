// 函数: sub_1420ca160
// 地址: 0x1420ca160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(*(arg1 + 8), 0).b == 0
int64_t result
result.b = *(arg1 + 0xc) != 0
result.b |= rdx

if (result.b != 0)
    result = sub_140d3c6e0(arg1)
    
    if (result != 0 && sub_140d1fd20(result, *(arg1 + 8)) != 0)
        int64_t* rax = sub_140d3c6e0(arg1)
        result = sub_1423de540(data_143f5b298, rax, 1)
        
        if (result != 0)
            void* rcx_5 = *(result + 0x188)
            void* rdi_1
            
            if (rcx_5 == 0)
                rdi_1 = *(result + 0x300)
            else
                rdi_1 = *(rcx_5 + 0xc0)
            
            int128_t var_18 = *arg1
            int64_t arg_8
            sub_1423e6b10(rdi_1, &arg_8, &var_18)
            int64_t arg_10 = arg_8
            result = sub_1423dce10(rdi_1, &arg_10)
            
            if (result != 0 && *(result + 1) == 2)
                result.b = 1
                return result

result.b = 0
return result
