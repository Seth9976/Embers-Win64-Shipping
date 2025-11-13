// 函数: sub_140e25f30
// 地址: 0x140e25f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        int32_t r8_1 = rbx_1[1].d
        
        if (r8_1 s> 0)
            if (arg2 == 0)
                result.b = 1
                return result
            
            uint8_t rdi
            
            if (arg2 == 1)
                void* const rcx_4 = nullptr
                
                if (rbx_1 == 0)
                    goto label_140e26018
                
                if (r8_1 == 0)
                    rbx_1 = nullptr
                else
                    r8_1 += 1
                    rbx_1[1].d = r8_1
                label_140e26018:
                    
                    if (rbx_1 != 0)
                        rcx_4 = *(arg1 - 0x50)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d = r8_1 + 1
                
                rdi = *(rcx_4 + 0x779) u>> 3 & 1
                
                if (rbx_1 == 0)
                    return zx.q(rdi)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d != 1)
                    return zx.q(rdi)
                
                int64_t rdx_1 = *rbx_1
                (*rdx_1)(rbx_1, rdx_1)
            label_140e2606e:
                int32_t temp7_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    int64_t r8_3 = *rbx_1
                    (*(r8_3 + 8))(rbx_1, 1, r8_3)
                
                return zx.q(rdi)
            
            if (arg2 == 2)
                void* rcx = nullptr
                
                if (rbx_1 == 0)
                    goto label_140e25f95
                
                if (r8_1 == 0)
                    rbx_1 = nullptr
                else
                    r8_1 += 1
                    rbx_1[1].d = r8_1
                label_140e25f95:
                    
                    if (rbx_1 != 0)
                        rcx = *(arg1 - 0x50)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d = r8_1 + 1
                
                rdi = *(rcx + 0x779) u>> 4 & 1
                
                if (rbx_1 == 0)
                    return zx.q(rdi)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d != 1)
                    return zx.q(rdi)
                
                int64_t r8_2 = *rbx_1
                (*r8_2)(rbx_1, arg3, r8_2)
                goto label_140e2606e

result.b = 0
return result
