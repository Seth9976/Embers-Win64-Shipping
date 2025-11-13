// 函数: sub_1420c9660
// 地址: 0x1420c9660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(*(arg1 + 8), 0).b == 0
int64_t result
result.b = *(arg1 + 0xc) != 0
result.b |= rdx

if (result.b != 0)
    result = sub_140d3c6e0(arg1)
    
    if (result != 0)
        result = sub_140d1fd20(result, *(arg1 + 8))
        
        if (result != 0)
            int64_t* rax = sub_140d3c6e0(arg1)
            result = sub_1423de540(data_143f5b298, rax, 1)
            
            if (result != 0)
                void* rdi_1 = *(result + 0x188)
                void* rdi_2
                
                if (rdi_1 == 0)
                    rdi_2 = *(result + 0x300)
                else
                    rdi_2 = *(rdi_1 + 0xc0)
                
                int128_t var_18 = *arg1
                int64_t arg_8
                sub_1423e6b10(rdi_2, &arg_8, &var_18)
                result = sub_1423dce10(rdi_2, &arg_8)
                
                if (result != 0)
                    return sub_1423e60e0(rdi_2, arg_8)

return result
