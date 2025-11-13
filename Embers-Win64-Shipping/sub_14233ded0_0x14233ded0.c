// 函数: sub_14233ded0
// 地址: 0x14233ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x248) != 0)
    int64_t* rbx_1 = *(arg1 + 0x250)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            void* rdx = nullptr
            
            if (rbx_1 != 0)
                if (result != 0)
                    rbx_1[1].d = result + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rdx = *(arg1 + 0x248)
            
            char rdi = *(rdx + 0x3fc)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_1 = *rbx_1
                        (*(r8_1 + 8))(rbx_1, 1, r8_1)
            
            return zx.q(rdi)

result.b = 0
return result
