// 函数: sub_140634570
// 地址: 0x140634570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int16_t* rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

if (sub_140a54570(rcx, &data_1437020ab) != 0)
    int16_t* rcx_1
    
    if (arg3[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *arg3
    
    if (sub_140a54570(rcx_1, &(*U""\tv 0")[3]) != 0)
        sub_14062c990(arg1, 0)
        int64_t* var_38 = nullptr
        int32_t i_6 = 0
        int16_t* const rcx_3
        
        if (arg3[1].d == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *arg3
        
        if (unzOpenInternal(rcx_3, nullptr, &var_38).b != 0)
            int64_t* rbx_2
            
            if (arg4 == 0)
                if (i_6 != 0)
                    int32_t rax_5 = arg1[1].d
                    int32_t rdx_3 = i_6 + rax_5
                    
                    if (rdx_3 s> *(arg1 + 0xc))
                        sub_14061cd70(arg1, rdx_3)
                        rax_5 = arg1[1].d
                    
                    int64_t* rdi_2 = var_38
                    int32_t i_5 = i_6
                    int64_t* rbx_5 = (sx.q(rax_5) << 4) + *arg1
                    int32_t i
                    
                    do
                        *rbx_5 = 0
                        int32_t rsi_4 = rdi_2[1].d
                        int64_t r15_1 = *rdi_2
                        rbx_5[1].d = rsi_4
                        
                        if (rsi_4 != 0)
                            sub_1405a4c70(rbx_5, rsi_4, 0)
                            memcpy(*rbx_5, r15_1, rsi_4 * 2)
                        else
                            *(rbx_5 + 0xc) = 0
                        
                        rbx_5 = &rbx_5[2]
                        rdi_2 = &rdi_2[2]
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                    arg1[1].d += i_6
                
                rbx_2 = var_38
            else
                rbx_2 = var_38
                void* rsi_3 = &rbx_2[sx.q(i_6) * 2]
                
                if (rbx_2 != rsi_3)
                    do
                        int16_t* rcx_7
                        
                        if (rbx_2[1].d == 0)
                            rcx_7 = &data_142d40450
                        else
                            rcx_7 = *rbx_2
                        
                        if (sub_140a54570(rcx_7, &data_1437020ab) != 0)
                            int32_t rax_2 = rbx_2[1].d
                            int32_t rcx_8 = 0
                            int16_t* rdx = nullptr
                            int32_t r9 = rax_2 - 1
                            
                            if (rax_2 == 0)
                                r9 = 0
                            
                            while (rcx_8 s< r9)
                                int16_t r8_1 = *(rdx + *rbx_2)
                                
                                if (r8_1 != 0x20 && r8_1 != 0xa)
                                    int64_t rdi_1 = sx.q(arg1[1].d)
                                    int32_t rax_4 = (rdi_1 + 1).d
                                    arg1[1].d = rax_4
                                    
                                    if (rax_4 s> *(arg1 + 0xc))
                                        sub_1405a4f90(arg1)
                                    
                                    sub_140596d10((rdi_1 << 4) + *arg1, rbx_2)
                                    break
                                
                                rcx_8 += 1
                                rdx = &rdx[1]
                        
                        rbx_2 = &rbx_2[2]
                    while (rbx_2 != rsi_3)
                    
                    rbx_2 = var_38
            
            int32_t i_4 = i_6
            *arg2 = arg1[1].d
            
            if (i_4 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_17 = *rbx_2
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    rbx_2 = &rbx_2[2]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                rbx_2 = var_38
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            int64_t rcx_19 = *arg3
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            int32_t rax_6
            rax_6.b = 1
            return rax_6
        
        int32_t i_3 = i_6
        int64_t* rbx_1 = var_38
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                int64_t rcx_4 = *rbx_1
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                rbx_1 = &rbx_1[2]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            rbx_1 = var_38
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)

int64_t rcx_6 = *arg3

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t rax
rax.b = 0
return rax
