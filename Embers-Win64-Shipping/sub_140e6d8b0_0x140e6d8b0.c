// 函数: sub_140e6d8b0
// 地址: 0x140e6d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0x388)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
    else
        result_1[1].d = rax + 1
    
    result = result_1

if (result != 0)
    int64_t* rcx = *(arg1 + 0x380)
    
    if (rcx != 0 && *arg3 != 0)
        result = (**rcx)(rcx)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp1_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*result_1 + 8))

return result
