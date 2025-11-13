// 函数: sub_140956400
// 地址: 0x140956400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x378))()

if (rax_1 != 0)
    int64_t* rcx_4 = *arg3
    int64_t* var_78
    int64_t var_68
    (*(*arg1 + 0x448))(arg1, &var_78, (*(*rcx_4 + 0xa0))(rcx_4, &var_68))
    int64_t rax_8 = *rax_1
    int64_t* var_70
    int32_t var_60
    int32_t var_5c
    
    if (var_70 != 0)
        char rax_16
        int64_t rdx_5
        rax_16, rdx_5 = (*(rax_8 + 0x70))(rax_1)
        char rax_18
        
        if (rax_16 == 0)
            rdx_5.b = 1
            rax_18 = (*(*var_70 + 0xa0))(var_70, rdx_5)
        
        if (rax_16 != 0 || rax_18 != 0)
            (*(*var_70 + 0xe8))(var_70, zx.q(arg5))
            int64_t rdx_10
            rdx_10.b = 1
            (*(*var_70 + 0xf8))(var_70, rdx_10)
            int32_t var_54 = 0
            int32_t var_50 = 0
            (*(*var_70 + 0x108))(var_70, zx.q(arg6), &var_54)
            (*(*var_70 + 0x100))(var_70, zx.q(arg7), &var_50)
            int64_t* rcx_25 = *arg3
            (*(*rcx_25 + 0x28))(rcx_25, zx.q(arg4))
            int64_t* rcx_26 = *arg3
            int32_t var_58_1 = (*(*rcx_26 + 0x30))(rcx_26)
            int32_t rax_34
            int64_t rdx_15
            rax_34, rdx_15 = sub_140fc4fd0(rax_1, var_70, *arg3, *(arg1 + 0x74c) + 1, 1)
            
            if (rax_34 != 0)
                rdx_15.b = 1
                
                if ((*(*var_70 + 0x98))(var_70, rdx_15) != 0)
                    *arg2 = var_78
                    arg2[1] = var_70
                    int64_t var_70_4 = 0
                else
                    (*(*rax_1 + 0xb8))(rax_1)
                    int64_t rdx_19 = *rax_1
                    sub_140a2e390(&var_68, %s: SetNonBlocking failed (%i)", 
                        (*(rdx_19 + 0xb0))(rax_1, rdx_19))
                    
                    if (arg8 == &var_68)
                        int64_t rcx_39 = var_68
                        
                        if (rcx_39 != 0)
                            sub_140a74f90(rcx_39)
                    else
                        int64_t rcx_38 = *arg8
                        
                        if (rcx_38 != 0)
                            sub_140a74f90(rcx_38)
                        
                        *arg8 = var_68
                        arg8[1].d = var_60
                        *(arg8 + 0xc) = var_5c
                    
                    int64_t* rdx_20 = var_70
                    *arg2 = 0
                    arg2[1] = 0
                    
                    if (arg8[1].d s<= 1)
                        goto label_1409568ea
                    
                    int64_t* rcx_40 = var_78
                    
                    if (rdx_20 == 0)
                        goto label_1409568ee
                    
                    int64_t* r8_11 = rdx_20
                    rdx_20 = nullptr
                    int64_t* var_70_3 = nullptr
                    
                    if (rcx_40 != 0)
                        if (r8_11 != 0)
                            (*(*rcx_40 + 0x38))(rcx_40, r8_11, r8_11)
                            rdx_20 = var_70_3
                        label_1409568ea:
                            rcx_40 = var_78
                        
                    label_1409568ee:
                        
                        if (rcx_40 != 0 && rdx_20 != 0)
                            (*(*rcx_40 + 0x38))(rcx_40)
            else
                int32_t rax_36 = (*(*rax_1 + 0xb8))(rax_1)
                int64_t rdx_16 = *rax_1
                int32_t var_88_1 = rax_36
                sub_140a2e390(&var_68, %s: binding to port %i failed (%i)", 
                    (*(rdx_16 + 0xb0))(rax_1, rdx_16))
                
                if (arg8 == &var_68)
                    int64_t rcx_32 = var_68
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                else
                    int64_t rcx_31 = *arg8
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                    
                    *arg8 = var_68
                    arg8[1].d = var_60
                    *(arg8 + 0xc) = var_5c
                
                int64_t* rdx_17 = var_70
                *arg2 = 0
                arg2[1] = 0
                
                if (arg8[1].d s<= 1)
                    goto label_14095680e
                
                int64_t* rcx_33 = var_78
                
                if (rdx_17 == 0)
                    goto label_140956812
                
                int64_t* r8_9 = rdx_17
                rdx_17 = nullptr
                int64_t* var_70_2 = nullptr
                
                if (rcx_33 != 0)
                    if (r8_9 != 0)
                        (*(*rcx_33 + 0x38))(rcx_33, r8_9, r8_9)
                        rdx_17 = var_70_2
                    label_14095680e:
                        rcx_33 = var_78
                    
                label_140956812:
                    
                    if (rcx_33 != 0 && rdx_17 != 0)
                        (*(*rcx_33 + 0x38))(rcx_33)
        else
            (*(*rax_1 + 0xb8))(rax_1)
            int64_t rdx_6 = *rax_1
            sub_140a2e390(&var_68, %s: setsockopt SO_BROADCAST failed (%i)", 
                (*(rdx_6 + 0xb0))(rax_1, rdx_6))
            
            if (arg8 == &var_68)
                int64_t rcx_19 = var_68
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
            else
                int64_t rcx_18 = *arg8
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                *arg8 = var_68
                arg8[1].d = var_60
                *(arg8 + 0xc) = var_5c
            
            int64_t* rdx_7 = var_70
            *arg2 = 0
            arg2[1] = 0
            
            if (arg8[1].d s<= 1)
                goto label_1409566ac
            
            int64_t* rcx_20 = var_78
            
            if (rdx_7 == 0)
                goto label_1409566b0
            
            int64_t* r8_4 = rdx_7
            rdx_7 = nullptr
            int64_t* var_70_1 = nullptr
            
            if (rcx_20 != 0)
                if (r8_4 != 0)
                    (*(*rcx_20 + 0x38))(rcx_20, r8_4, r8_4)
                    rdx_7 = var_70_1
                label_1409566ac:
                    rcx_20 = var_78
                
            label_1409566b0:
                
                if (rcx_20 != 0 && rdx_7 != 0)
                    (*(*rcx_20 + 0x38))(rcx_20)
        
        sub_140597060(arg3)
    else
        (*(rax_8 + 0xb8))(rax_1)
        sub_140a2e390(&var_68, u"%s: socket failed (%i)", (*(*rax_1 + 0xb0))(rax_1))
        
        if (arg8 == &var_68)
            int64_t rcx_10 = var_68
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        else
            int64_t rcx_9 = *arg8
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            *arg8 = var_68
            arg8[1].d = var_60
            *(arg8 + 0xc) = var_5c
        
        int64_t* rcx_11 = var_78
        *arg2 = 0
        arg2[1] = 0
        
        if (rcx_11 != 0 && var_70 != 0)
            (*(*rcx_11 + 0x38))(rcx_11, var_70)
        
        int64_t* rbx_3 = arg3[1]
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                int64_t rdx_4 = *rbx_3
                (*rdx_4)(rbx_3, rdx_4)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_2 = *rbx_3
                    (*(r8_2 + 8))(rbx_3, 1, r8_2)
else
    if (*arg8 != u"Unable to find socket subsystem")
        int32_t rdx = 0
        arg8[1].d = 0
        
        if (*(arg8 + 0xc) != 0x20)
            sub_1405947f0(arg8, 0x20)
            rdx = arg8[1].d
        
        arg8[1].d = rdx + 0x20
        
        if (rdx + 0x20 s> *(arg8 + 0xc))
            sub_140594770(arg8)
        
        __builtin_memcpy(*arg8, u"Unable to find socket subsystem", 0x40)
    
    *arg2 = 0
    arg2[1] = 0
    int64_t* rbx = arg3[1]
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

return arg2
