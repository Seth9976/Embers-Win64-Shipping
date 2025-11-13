// 函数: sub_140d9b720
// 地址: 0x140d9b720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1[1]
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax + 1
        result = result_1

if (result != 0)
    int64_t* rdi_1 = *arg1
    
    if (rdi_1 != 0)
        sub_140d9cbf0(rdi_1)
        result = j_sub_140a82f30(0x40)
        
        if (result == 0)
            result = nullptr
        else
            result[2] = 0
            result[3].d = 0
            *(result + 0x1c) = 1
            __builtin_memset(&result[4], 0, 0x20)
        
        rdi_1[6] = result

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp1_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*result_1 + 8))

return result
