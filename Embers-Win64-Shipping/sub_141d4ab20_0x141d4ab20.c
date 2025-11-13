// 函数: sub_141d4ab20
// 地址: 0x141d4ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
void* r14_2 = &rdi[sx.q(arg1[1].d) * 2]
int32_t result

if (rdi == r14_2)
label_141d4abc7:
    result.b = 0
else
    while (true)
        int64_t* rbx_1 = rdi[1]
        int64_t rbp_1 = 0
        
        if (rbx_1 != 0)
            result = 0
            bool z_1
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_1 = true
            else
                result = rbx_1[1].d
                z_1 = false
            
            if (z_1)
            label_141d4ab7a:
                rbx_1 = nullptr
            else
                while (true)
                    bool z_2
                    
                    if (result == rbx_1[1].d)
                        rbx_1[1].d = result + 1
                        z_2 = true
                    else
                        rbx_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        rbp_1 = *rdi
                        break
                    
                    result = 0
                    bool z_3
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_3 = true
                    else
                        result = rbx_1[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4ab7a
        
        int64_t rsi_1 = *arg2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_2 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_2 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rbp_1 == rsi_1)
            result.b = 1
            break
        
        rdi = &rdi[2]
        
        if (rdi == r14_2)
            goto label_141d4abc7

return result
