// 函数: sub_140f90af0
// 地址: 0x140f90af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140ac6680(arg2)
void* r8 = *arg1
int32_t rdx = rax[1].d
void* var_68 = nullptr
int64_t* rsi = r8 + 0x18
int32_t i_3 = 0
int32_t rax_1 = rax[1].d
int32_t rbx = rdx - 1
int64_t* var_70 = rsi

if (rdx == 0)
    rbx = 0

int32_t arg_18 = rbx
int32_t rcx_1 = rax_1 - 1

if (rax_1 == 0)
    rcx_1 = 0

if (rcx_1 s> 0)
    int32_t i = 0
    
    if (rsi[1].d s> 0)
        int64_t rdi_1 = 0
        int64_t var_80_1 = 0
        
        do
            int32_t r14_1 = 0
            int64_t* r10_2 = *rsi + rdi_1
            int64_t* var_78_1 = r10_2
            int32_t rcx_2 = *(*r10_2 + 8)
            int32_t rax_3 = rcx_2 - 1
            
            if (rcx_2 == 0)
                rax_3 = 0
            
            if (rax_3 s> 0)
                do
                    int16_t* rdx_1
                    
                    if (rax[1].d == 0)
                        rdx_1 = &data_142d40450
                    else
                        rdx_1 = *rax
                    
                    int32_t rax_4 = sub_140a23cf0(*r10_2, rdx_1, 1, 0, r14_1)
                    
                    if (rax_4 == 0xffffffff)
                        break
                    
                    int32_t i_4 = i_3
                    r14_1 = rbx + rax_4
                    void* rcx_5
                    int64_t rdx_3
                    
                    if (i_4 s> 0)
                        rcx_5 = var_68
                        rdx_3 = sx.q(i_4 - 1) << 5
                    
                    int64_t rax_13
                    int64_t* rcx_12
                    int64_t* rbx_1
                    
                    if (i_4 s<= 0 || *(rdx_3 + rcx_5) != i || *(rdx_3 + rcx_5 + 8) != rax_4)
                        rbx_1 = arg1[5]
                        int64_t rsi_1 = arg1[4]
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 2
                            i_4 = i_3
                        
                        int32_t var_84_1 = r14_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                            i_4 = i_3
                        
                        i_3 = i_4 + 1
                        int32_t var_5c
                        
                        if (i_4 + 1 s> var_5c)
                            sub_1405c4e40(&var_68)
                        
                        int32_t* rcx_16 = (sx.q(i_4) << 5) + var_68
                        *rcx_16 = i
                        *(rcx_16 + 4) = rax_4.q
                        *(rcx_16 + 0x10) = rsi_1
                        *(rcx_16 + 0x18) = rbx_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d != 1)
                                    goto label_140f90d4e
                                
                                (**rbx_1)(rbx_1)
                                int32_t temp5_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp5_1 != 1)
                                    goto label_140f90d4e
                                
                                rax_13 = *rbx_1
                                rcx_12 = rbx_1
                                goto label_140f90d4b
                    else
                        rbx_1 = arg1[5]
                        int64_t rdx_4 = arg1[4]
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 2
                            i_4 = i_3
                        
                        int32_t arg_24 = r14_1
                        int64_t rax_7 = (*((sx.q(i_4 - 1) << 5) + var_68 + 4)).q
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                            i_4 = i_3
                        
                        int32_t* rdx_7 = (sx.q(i_4 - 1) << 5) + var_68
                        *rdx_7 = i
                        *(rdx_7 + 4) = rax_7
                        int64_t rcx_10 = *(rdx_7 + 0x10)
                        *(rdx_7 + 0x10) = rdx_4
                        int64_t var_48_2 = rcx_10
                        int64_t* rdi_2 = *(rdx_7 + 0x18)
                        *(rdx_7 + 0x18) = rbx_1
                        int64_t* var_40_2 = rdi_2
                        
                        if (rdi_2 == 0)
                            goto label_140f90d4e
                        
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d != 1)
                            goto label_140f90d4e
                        
                        (**rdi_2)(rdi_2)
                        int32_t temp7_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp7_1 != 1)
                            goto label_140f90d4e
                        
                        rax_13 = *rdi_2
                        rcx_12 = rdi_2
                    label_140f90d4b:
                        (*(rax_13 + 8))(rcx_12, 1)
                    label_140f90d4e:
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp9_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp9_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp10_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                    r10_2 = var_78_1
                    rbx = arg_18
                while (r14_1 s< rax_3)
                
                rdi_1 = var_80_1
                rsi = var_70
            
            rdi_1 += 0x70
            i += 1
            var_80_1 = rdi_1
        while (i s< rsi[1].d)
        
        r8 = *arg1

int64_t result = sub_140f165a0(r8, &var_68)
int32_t i_2 = i_3

if (i_2 != 0)
    int64_t* rdi_4 = var_68 + 0x18
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_4
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_4 = &rdi_4[4]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void* rcx_25 = var_68

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
