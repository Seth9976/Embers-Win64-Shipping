// 函数: sub_14265cfd0
// 地址: 0x14265cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x98)

if ((result.b & 0x20) == 0)
    *(arg1 + 0x98) = result & 0xfffffffe
    result = sub_142649ec0(arg1 + 0x80, arg1, 4)
    
    if ((*(arg1 + 0x98) & 0x10) != 0)
        result = sub_140d3e110(arg1 + 0x9c)
        
        if (result.b != 0)
            *(arg1 + 0x98) |= 0x100
            int64_t rdx_2 = 0
            int64_t* rbx_1 = *(arg1 + 0x10)
            
            if (rbx_1 != 0)
                int32_t rax_1 = 0
                bool z_1
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_1 = true
                else
                    rax_1 = rbx_1[1].d
                    z_1 = false
                
                if (z_1)
                label_14265d063:
                    rbx_1 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_1 == rbx_1[1].d)
                            rbx_1[1].d = rax_1 + 1
                            z_2 = true
                        else
                            rbx_1[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rbx_1 != 0)
                                rdx_2 = *(arg1 + 8)
                            
                            break
                        
                        rax_1 = 0
                        bool z_3
                        
                        if (0 == rbx_1[1].d)
                            rbx_1[1].d = 0
                            z_3 = true
                        else
                            rax_1 = rbx_1[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_14265d063
            
            int64_t var_18 = rdx_2
            int64_t* var_10_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            result = sub_142666c80(sub_140d3c6e0(arg1 + 0x9c), &var_18, 1)
            
            if (rbx_1 != 0)
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t rsi_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return result
