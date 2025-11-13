// 函数: sub_14240ca60
// 地址: 0x14240ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(arg1[6].b)

if (r8 == 1)
    int64_t rax = *arg1
    
    if (*(rax + 8) != 0)
        int64_t* rcx_8 = *rax
        
        if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8).b != 0)
            int64_t* rcx_9 = *arg1
            int64_t* rcx_10
            
            if (rcx_9[1].d == 0)
                rcx_10 = nullptr
            else
                rcx_10 = *rcx_9
            
            (*(*rcx_10 + 0x48))(rcx_10)
else
    int64_t var_28
    int64_t* rbx_1
    
    if (r8 == 2)
        int64_t* rcx_4 = arg1[2]
        
        if (rcx_4[1].d != 0)
            int64_t* rcx_5 = *rcx_4
            
            if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5).b != 0)
                rbx_1 = arg2[2]
                int64_t rdx_2 = arg2[1]
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int64_t* rcx_6 = arg1[2]
                int64_t* rcx_7
                
                if (rcx_6[1].d == 0)
                    rcx_7 = nullptr
                else
                    rcx_7 = *rcx_6
                
                var_28 = *arg2
                int64_t var_20_2 = rdx_2
                int64_t* var_18_2 = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                (*(*rcx_7 + 0x48))(rcx_7, &var_28)
            label_14240cae1:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
    else if (r8 == 3 && sub_141b28ce0(arg1[4]).b != 0)
        rbx_1 = arg2[2]
        int64_t rdx = arg2[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t* rcx_1 = arg1[4]
        var_28 = *arg2
        int64_t var_20_1 = rdx
        int64_t* var_18_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        sub_14240cff0(rcx_1, &var_28)
        goto label_14240cae1

int64_t* rbx_2 = arg2[2]

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp3_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
