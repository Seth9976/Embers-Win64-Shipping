// 函数: sub_1419c63b0
// 地址: 0x1419c63b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int16_t* rsi = arg4
int32_t i_1 = 0
void* result = arg1

if (*(arg1 + 0x70) s> 0)
    int64_t rcx = 0
    int64_t var_70_1 = 0
    int32_t i
    
    do
        int64_t* r13_2 = *(result + 0x68) + rcx
        char rcx_1 = *(r13_2 + 0x14)
        int32_t rdi_1 = *(r13_2 + 0x24)
        
        if (rcx_1 - 5 u<= 0xb || rcx_1 - 0x13 u<= 1)
            *r13_2
            int16_t* var_68
            sub_140a2e390(&var_68, u"%s%s", arg3)
            int32_t var_60
            int32_t rsi_1 = var_60
            int16_t* rbp_1 = var_68
            int32_t rcx_10
            int16_t* rdx_3
            
            if (rsi_1 == 0)
                rdx_3 = &data_142d40450
                rcx_10 = 0
            else
                rdx_3 = rbp_1
                rcx_10 = rsi_1 - 1
            
            int64_t r12_1 = sx.q(sub_1405969c0(rcx_10, rdx_3))
            int64_t* rdi_5
            
            if (arg6[1].d == *(arg6 + 0x34))
            label_1419c65fd:
                rdi_5 = sub_1419be8e0(arg6, r12_1.d, &var_68)
            else
                void* rdx_4 = arg6[8]
                void* r9_6 = &arg6[7]
                
                if (rdx_4 != 0)
                    r9_6 = rdx_4
                
                int32_t rbx_2 = *(r9_6 + (((sx.q(arg6[9].d) - 1) & r12_1) << 2))
                
                if (rbx_2 == 0xffffffff)
                label_1419c65fd_1:
                    rdi_5 = sub_1419be8e0(arg6, r12_1.d, &var_68)
                else
                    int64_t rcx_12 = *arg6
                    int64_t rdi_3
                    
                    while (true)
                        int16_t* rdx_5 = &data_142d40450
                        rdi_3 = sx.q(rbx_2) * 0x30
                        
                        if (rsi_1 != 0)
                            rdx_5 = rbp_1
                        
                        int16_t* const rcx_13
                        
                        if (*(rdi_3 + rcx_12 + 8) == 0)
                            rcx_13 = &data_142d40450
                        else
                            rcx_13 = *(rdi_3 + rcx_12)
                        
                        if (sub_140a54510(rcx_13, rdx_5) == 0)
                            break
                        
                        rcx_12 = *arg6
                        rbx_2 = *(rdi_3 + rcx_12 + 0x28)
                        
                        if (rbx_2 == 0xffffffff)
                            goto label_1419c65fd_2
                        
                        rsi_1 = var_60
                        rbp_1 = var_68
                    
                    if (rbx_2 == 0xffffffff || rdi_3 == neg.q(*arg6))
                    label_1419c65fd_2:
                        rdi_5 = sub_1419be8e0(arg6, r12_1.d, &var_68)
                    else
                        rdi_5 = rdi_3 + *arg6 + 0x10
            
            int16_t* rcx_15 = var_68
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            if (rdi_5[1].d s> 1)
                rsi = arg4
            else
                if (*rdi_5 != arg2)
                    int32_t rbx_4
                    
                    if (arg2 == 0 || *arg2 == 0)
                        rbx_4 = 0
                    else
                        int64_t rbx_3 = -1
                        
                        do
                            rbx_3 += 1
                        while (arg2[rbx_3] != 0)
                        
                        rbx_4 = rbx_3.d + 1
                    
                    int32_t rdx_7 = 0
                    rdi_5[1].d = 0
                    
                    if (*(rdi_5 + 0xc) != rbx_4)
                        sub_1405947f0(rdi_5, rbx_4)
                        rdx_7 = rdi_5[1].d
                    
                    int32_t rax_6 = rdx_7 + rbx_4
                    rdi_5[1].d = rax_6
                    
                    if (rax_6 s> *(rdi_5 + 0xc))
                        sub_140594770(rdi_5)
                    
                    if (rbx_4 != 0)
                        memcpy(*rdi_5, arg2, rbx_4 * 2)
                
                rsi = arg4
                rdi_5[2].w = zx.w(*(r13_2 + 0x14))
                *(rdi_5 + 0x12) = *rsi
                *rsi += 1
            
            arg3 = arg_18
        else if (rcx_1 == 0x11)
            if (rdi_1 != 0)
                int32_t rbx_1 = 0
                
                do
                    *r13_2
                    int64_t* var_88
                    var_88.d = rbx_1
                    int16_t* var_48
                    sub_140a2e390(&var_48, u"%s%s_%u_", arg3)
                    int16_t* const r8_1 = &data_142d40450
                    int32_t var_40
                    
                    if (var_40 != 0)
                        r8_1 = var_48
                    
                    sub_1419c63b0(r13_2[5], arg2, r8_1, rsi, arg6)
                    int16_t* rcx_7 = var_48
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    arg3 = arg_18
                    rbx_1 += 1
                while (rbx_1 u< rdi_1)
            else
                *r13_2
                int16_t* var_58
                sub_140a2e390(&var_58, u"%s%s_", arg3)
                int16_t* const r8 = &data_142d40450
                int32_t var_50
                
                if (var_50 != rdi_1)
                    r8 = var_58
                
                sub_1419c63b0(r13_2[5], arg2, r8, rsi, arg6)
                int16_t* rcx_4 = var_58
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
            
            arg3 = arg_18
        else if (rcx_1 == 0x12)
            sub_1419c63b0(r13_2[5], arg2, arg5, rsi, arg6)
            arg3 = arg_18
        
        i = i_1 + 1
        rcx = var_70_1 + 0x30
        i_1 = i
        var_70_1 = rcx
        result = arg1
    while (i s< *(arg1 + 0x70))

return result
