// 函数: sub_141d4a410
// 地址: 0x141d4a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141d4b670(arg1 + 0x18)
int32_t rdi = *(arg1 + 0x38)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s>= 0)
    int64_t rsi_2 = sx.q(rdi_1) << 4
    int32_t temp2_1
    
    do
        int64_t* rdx_1 = *(arg1 + 0x30)
        int64_t* rbx_1 = *(rdx_1 + rsi_2 + 8)
        
        if (rbx_1 == 0)
            result = sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
        else
            int32_t rax = 0
            bool z_1
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_1 = true
            else
                rax = rbx_1[1].d
                z_1 = false
            
            if (z_1)
            label_141d4a488:
                rbx_1 = nullptr
                result = sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
            else
                while (true)
                    bool z_2
                    
                    if (rax == rbx_1[1].d)
                        rbx_1[1].d = rax + 1
                        z_2 = true
                    else
                        rbx_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax = 0
                    bool z_3
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_3 = true
                    else
                        rax = rbx_1[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4a488
                
                if (rbx_1 == 0)
                    result = sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
                else
                    int64_t* rcx_5 = *(rdx_1 + rsi_2)
                    
                    if (rcx_5 == 0)
                        result = sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
                    else
                        result = (*(*rcx_5 + 0x10))(rcx_5, *(arg1 + 0x20), *(arg1 + 0x88))
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            rbx_1[1].d -= 1
            
            if (result == 1)
                (**rbx_1)(rbx_1)
                result = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_2 -= 0x10
        temp2_1 = rdi_1
        rdi_1 -= 1
    while (temp2_1 - 1 s>= 0)

return result
