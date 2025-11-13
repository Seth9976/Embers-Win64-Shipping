// 函数: sub_140e5af40
// 地址: 0x140e5af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e867d0(arg1 + 0x280)
int64_t* result_1 = *(arg1 + 0x278)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
    else
        result_1[1].d = rax + 1
    
    result = result_1

if (result != 0)
    void* rdi_1 = *(arg1 + 0x270)
    
    if (rdi_1 != 0)
        result = sub_140e1acc0(rdi_1)
        
        if (result.b != 0)
            result = sub_140e19c60(rdi_1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp1_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*result_1 + 8))(result_1, 1)

return result
