// 函数: sub_140e8cec0
// 地址: 0x140e8cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143e29f78

if (result != 0)
    int64_t* rdi_1 = data_143e29f80
    
    if (rdi_1 != 0 && rdi_1[1].d s> 0)
        void* result_1 = nullptr
        bool cond:0_1 = rdi_1 != 0
        
        if (rdi_1 != 0)
            int32_t rcx_1 = rdi_1[1].d
            
            if (rcx_1 != 0)
                int32_t rax = rcx_1 + 1
                rcx_1.b = 1
                rdi_1[1].d = rax
                result = data_143e29f78
            
            if (rcx_1.b == 0)
                rdi_1 = nullptr
            
            cond:0_1 = rdi_1 != 0
        
        if (cond:0_1)
            result_1 = result
        
        sub_140e85e10(&sub_140e64ad0()[0xb], *(result_1 + 0x18))
        result = sub_140920c10(&data_1439b3880, result_1 + 8)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    jump(*(*rdi_1 + 8))

return result
