// 函数: sub_140be11d0
// 地址: 0x140be11d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_10 = arg2
int64_t r10 = arg3

if (arg9 != 0 && (arg1[0x16].d & 0x20000) != 0)
    int64_t* rcx = arg1[0x17]
    
    if ((*(*rcx + 0xd8))(rcx, &arg_10, arg5, zx.q(arg6), arg4, arg7) != 0)
        return arg_10
    
    arg2 = arg_10
    r10 = arg3

int16_t* rbx = &arg2[1]
int64_t r14 = 0
int64_t var_58 = 0
int64_t var_50 = 0
void* rbx_2
int64_t var_48
int64_t rcx_7
wchar16* rdx_7
int64_t rbx_1

if (*arg2 != 0x28)
    int64_t* rax_18 = (*arg8)(&var_48, *(arg8 + 8))
    rbx_1 = *rax_18
    *rax_18 = 0
    rax_18[1].d
    rax_18[1] = 0
    int64_t rcx_15 = var_48
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    rdx_7 = u"%sImportText (%s): Missing opening parenthesis: %s"
label_140be1524:
    int16_t* var_78_2 = arg_10
    sub_140b1f700(arg7, rdx_7, &data_142d40450)
    
    if (rbx_1 != 0)
        rcx_7 = rbx_1
    label_140be1544:
        sub_140a74f90(rcx_7)
    
label_140be1549:
    rbx_2 = nullptr
    r14 = var_58
else
    if (*rbx != 0x29)
        while (true)
            int64_t var_78
            var_78.d = arg6 | 2
            int16_t* rax_4 = sub_140cde730(rbx, r10, arg1, arg4, var_78.d, arg7, &var_58)
            rbx = rax_4
            
            if (iswspace(*rax_4) != 0)
                int32_t i
                
                do
                    wint_t _C_1 = rbx[1]
                    rbx = &rbx[1]
                    i = iswspace(_C_1)
                while (i != 0)
            
            wint_t _C = *rbx
            int32_t rdi_1 = 0
            
            if (_C != 0)
                wint_t _C_5 = _C
                
                while (true)
                    if (_C_5 != 0xd && _C_5 != 0xa)
                        if (rdi_1 s> 0)
                        label_140be1313:
                            
                            if (iswspace(_C) != 0)
                                int32_t i_1
                                
                                do
                                    wint_t _C_2 = rbx[1]
                                    rbx = &rbx[1]
                                    i_1 = iswspace(_C_2)
                                while (i_1 != 0)
                            
                            int16_t rax_7 = *rbx
                            
                            if (rax_7 == 0x22)
                                int16_t i_2
                                
                                do
                                    i_2 = rbx[1]
                                    rbx = &rbx[1]
                                    
                                    if (i_2 == 0)
                                        break
                                    
                                    if (i_2 == 0x22)
                                        goto label_140be13e0
                                    
                                    if (i_2 == 0xa)
                                        break
                                while (i_2 != 0xd)
                                
                                if (i_2 != 0x22)
                                    int64_t* rax_9 = (*arg8)(&var_48, *(arg8 + 8))
                                    int64_t rdi_2 = *rax_9
                                    *rax_9 = 0
                                    rax_9[1].d
                                    rax_9[1] = 0
                                    int64_t rcx_5 = var_48
                                    
                                    if (rcx_5 != 0)
                                        sub_140a74f90(rcx_5)
                                    
                                    int16_t* var_78_1 = rbx
                                    sub_140b1f700(arg7, 
                                        %sImportText (%s): Bad quoted string at: %s", &data_142d40450)
                                    
                                    if (rdi_2 == 0)
                                        goto label_140be1549
                                    
                                    rcx_7 = rdi_2
                                    goto label_140be1544
                            else if (rax_7 == 0x28)
                                rdi_1 += 1
                            else if (rax_7 == 0x29)
                                int32_t temp0_1 = rdi_1
                                rdi_1 -= 1
                                
                                if (temp0_1 - 1 s< 0)
                                    int64_t* rax_12 = (*arg8)(&var_48, *(arg8 + 8))
                                    rbx_1 = *rax_12
                                    *rax_12 = 0
                                    rax_12[1].d
                                    rax_12[1] = 0
                                    int64_t rcx_9 = var_48
                                    
                                    if (rcx_9 != 0)
                                        sub_140a74f90(rcx_9)
                                    
                                    rdx_7 = %sImportText (%s): Too many closing parenthesis in: %s"
                                    goto label_140be1524
                            
                        label_140be13e0:
                            _C = rbx[1]
                            rbx = &rbx[1]
                            _C_5 = _C
                            
                            if (_C != 0)
                                continue
                        else if (_C != 0x29 && _C != 0x2c)
                            goto label_140be1313
                    
                    if (rdi_1 s<= 0)
                        break
                    
                    int64_t* rax_14 = (*arg8)(&var_48, *(arg8 + 8))
                    rbx_1 = *rax_14
                    *rax_14 = 0
                    rax_14[1].d
                    rax_14[1] = 0
                    int64_t rcx_11 = var_48
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    rdx_7 = u"%sImportText(%s): Not enough closing parenthesis in: %s"
                    goto label_140be1524
            
            wint_t _C_3 = *rbx
            
            if (_C_3 == 0x2c)
                _C_3 = rbx[1]
                rbx = &rbx[1]
            else if (_C_3 != 0x29)
                int64_t* rax_16 = (*arg8)(&var_48, *(arg8 + 8))
                rbx_1 = *rax_16
                *rax_16 = 0
                rax_16[1].d
                rax_16[1] = 0
                int64_t rcx_13 = var_48
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                rdx_7 = u"%sImportText (%s): Missing closing parenthesis: %s"
                break
            
            if (iswspace(_C_3) != 0)
                int32_t i_3
                
                do
                    wint_t _C_4 = rbx[1]
                    rbx = &rbx[1]
                    i_3 = iswspace(_C_4)
                while (i_3 != 0)
            
            if (*rbx == 0x29)
                r14 = var_58
                goto label_140be14ac
            
            r10 = arg3
        
        goto label_140be1524
    
label_140be14ac:
    rbx_2 = &rbx[1]

if (r14 != 0)
    sub_140a74f90(r14)

return rbx_2
