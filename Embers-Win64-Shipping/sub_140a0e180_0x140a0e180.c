// 函数: sub_140a0e180
// 地址: 0x140a0e180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = 0
int64_t* rbx
int64_t result

if (*(arg1 + 0x18) == 0)
    rbx = 0.q
    result = 0
else
    void* rcx = *(arg1 + 0x20)
    
    if (rcx == 0)
        rbx = 0.q
        result = 0
    else
        int32_t rax_1 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_1 = *(rcx + 8)
        
        if (rax_1 s<= 0)
            rbx = 0.q
            result = 0
        else
            rbx = *(arg1 + 0x20)
            
            if (rbx == 0)
                result = result_1
                result_1 = 1
            else
                int32_t rax_2 = 0
                bool z_1
                
                if (0 == rbx[1].d)
                    rbx[1].d = 0
                    z_1 = true
                else
                    rax_2 = rbx[1].d
                    z_1 = false
                
                if (z_1)
                label_140a0e1d3:
                    rbx = nullptr
                    result = 0
                    result_1 = 1
                else
                    while (true)
                        bool z_2
                        
                        if (rax_2 == rbx[1].d)
                            rbx[1].d = rax_2 + 1
                            z_2 = true
                        else
                            rbx[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rbx != 0)
                                result_1 = *(arg1 + 0x18)
                            
                            break
                        
                        rax_2 = 0
                        bool z_3
                        
                        if (0 == rbx[1].d)
                            rbx[1].d = 0
                            z_3 = true
                        else
                            rax_2 = rbx[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_140a0e1d3
                    
                    result = result_1
                    result_1 = 1

if ((result_1.b & 1) == 0 || rbx == 0)
    return result

rbx[1].d -= 1

if (rbx[1].d == 1)
    int64_t r8_1 = *rbx
    (*r8_1)(rbx, result_1, r8_1)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8_2 = *rbx
        (*(r8_2 + 8))(rbx, zx.q(rsi_1), r8_2)

return result
