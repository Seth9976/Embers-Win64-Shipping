// 函数: sub_142041fe0
// 地址: 0x142041fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* result = sub_1423de540(data_143f5b298, arg1, 1)
void* result_1 = result

if (result != 0)
    void* rax = *(result + 0x188)
    int64_t* rdi_1
    
    if (rax == 0)
        rdi_1 = result_1 + 0x308
    else
        rdi_1 = *(rax + 0xc8)
    
    result = sub_141d51f20(rdi_1, arg3[1].q, *(arg3 + 4))
    
    if (result == 0)
        void*** rax_1 = j_sub_140a82f30(zx.q((result + 0x38).d))
        
        if (rax_1 != 0)
            rax_1 = sub_1420d8a10(rax_1, 0, &arg_10, 0, arg4, arg3, result_1)
        
        return sub_1420dc280(rdi_1, arg3[1].q, *(arg3 + 4), rax_1)

return result
