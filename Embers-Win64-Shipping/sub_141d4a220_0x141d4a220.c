// 函数: sub_141d4a220
// 地址: 0x141d4a220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d4b670(arg1 + 0x18)
int32_t rdi = *(arg1 + 0x38)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s>= 0)
    int64_t rsi_2 = sx.q(rdi_1) << 4
    int32_t temp3_1
    
    do
        int64_t* rdx_1 = *(arg1 + 0x30)
        int64_t* rbx_1 = *(rdx_1 + rsi_2 + 8)
        
        if (rbx_1 == 0)
            sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
        else
            int32_t rax_1 = 0
            bool z_1
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_1 = true
            else
                rax_1 = rbx_1[1].d
                z_1 = false
            
            if (z_1)
            label_141d4a298:
                rbx_1 = nullptr
                sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
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
                        goto label_141d4a298
                
                if (rbx_1 == 0)
                    sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
                else
                    int64_t* rcx_10 = *(rdx_1 + rsi_2)
                    
                    if (rcx_10 == 0)
                        sub_141c8bf50(arg1 + 0x30, rdi_1, 1, 1)
                    else
                        (**rcx_10)(rcx_10, *(arg1 + 0x20), *(arg1 + 0x88))
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_5 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_2 -= 0x10
        temp3_1 = rdi_1
        rdi_1 -= 1
    while (temp3_1 - 1 s>= 0)

int32_t result = sub_141d4b670(arg1 + 0x18)
int32_t rdi_2 = *(arg1 + 0x38)
int32_t rdi_3 = rdi_2 - 1

if (rdi_2 - 1 s>= 0)
    int64_t rsi_4 = sx.q(rdi_3) << 4
    int32_t temp4_1
    
    do
        int64_t* rdx_3 = *(arg1 + 0x30)
        int64_t* rbx_2 = *(rdx_3 + rsi_4 + 8)
        
        if (rbx_2 == 0)
            result = sub_141c8bf50(arg1 + 0x30, rdi_3, 1, 1)
        else
            int32_t rax_7 = 0
            bool z_4
            
            if (0 == rbx_2[1].d)
                rbx_2[1].d = 0
                z_4 = true
            else
                rax_7 = rbx_2[1].d
                z_4 = false
            
            if (z_4)
            label_141d4a348:
                rbx_2 = nullptr
                result = sub_141c8bf50(arg1 + 0x30, rdi_3, 1, 1)
            else
                while (true)
                    bool z_5
                    
                    if (rax_7 == rbx_2[1].d)
                        rbx_2[1].d = rax_7 + 1
                        z_5 = true
                    else
                        rbx_2[1].d
                        z_5 = false
                    
                    if (z_5)
                        break
                    
                    rax_7 = 0
                    bool z_6
                    
                    if (0 == rbx_2[1].d)
                        rbx_2[1].d = 0
                        z_6 = true
                    else
                        rax_7 = rbx_2[1].d
                        z_6 = false
                    
                    if (z_6)
                        goto label_141d4a348
                
                if (rbx_2 == 0)
                    result = sub_141c8bf50(arg1 + 0x30, rdi_3, 1, 1)
                else
                    int64_t* rcx_11 = *(rdx_3 + rsi_4)
                    
                    if (rcx_11 == 0)
                        result = sub_141c8bf50(arg1 + 0x30, rdi_3, 1, 1)
                    else
                        result = (*(*rcx_11 + 0x18))(rcx_11, *(arg1 + 0x20), *(arg1 + 0x88))
        
        if (rbx_2 != 0)
            result = rbx_2[1].d
            rbx_2[1].d -= 1
            
            if (result == 1)
                (**rbx_2)(rbx_2)
                result = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rsi_4 -= 0x10
        temp4_1 = rdi_3
        rdi_3 -= 1
    while (temp4_1 - 1 s>= 0)

return result
