// 函数: sub_141ecc640
// 地址: 0x141ecc640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0xb90)

if (result != 0)
    int64_t* result_1 = result
    void* rax = *(arg1 + 0xb98)
    void* var_10_1 = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    sub_141ec9410(arg1, &result_1)
    sub_141ec13f0(*(arg1 + 0xb90), arg2)
    result = &result_1
    
    if (arg1 + 0xb90 != &result_1)
        result = nullptr
        *(arg1 + 0xb90) = 0
        int64_t* rbx_1 = *(arg1 + 0xb98)
        
        if (rbx_1 != 0)
            *(arg1 + 0xb98) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*rbx_1 + 8))(rbx_1, 1)

return result
