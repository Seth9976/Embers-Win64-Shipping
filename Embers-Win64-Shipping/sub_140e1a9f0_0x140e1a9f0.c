// 函数: sub_140e1a9f0
// 地址: 0x140e1a9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            void* rdx = nullptr
            
            if (rbx_1 == 0)
                goto label_140e1aa38
            
            if (result == 0)
                rbx_1 = nullptr
            else
                result += 1
                rbx_1[1].d = result
            label_140e1aa38:
                
                if (rbx_1 != 0)
                    rdx = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = result + 1
            
            uint8_t rdi = *(rdx + 0x779) u>> 6 & 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t r8_1 = *rbx_1
                    (*r8_1)(rbx_1, arg2, r8_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        int64_t r8_2 = *rbx_1
                        (*(r8_2 + 8))(rbx_1, 1, r8_2)
            
            return zx.q(rdi)

result.b = 0
return result
