// 函数: sub_141b2de50
// 地址: 0x141b2de50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i = 0
void* var_40 = nullptr
int32_t j_1 = 0
int32_t var_34 = 1
int64_t var_70
void var_58

if (*(arg1 + 0x360) s> 0)
    do
        int32_t j = j_1
        int32_t rsi_1 = 0
        int64_t rax_3 = *(sub_141a788e0() + 0x18)
        int64_t var_78 = rax_3
        
        if (j s<= 0)
            goto label_141b2df42
        
        void* r14_1 = &var_58
        
        if (var_40 != 0)
            r14_1 = var_40
        
        do
            int32_t rcx_1 = j & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(j)
            int32_t j_2 = (temp1_1 - temp0_1) s>> 1
            j = j_2
            int32_t rax_8 = j_2 + rsi_1
            var_70 = *(r14_1 + sx.q(rax_8) * 0x18)
            
            if (sub_140b5d160(&var_70, &var_78) s< 0)
                rsi_1 = rax_8 + rcx_1
        while (j s> 0)
        
        void* r8_1
        
        if (rsi_1 s>= j_1)
            rax_3 = var_78
        label_141b2df42:
            var_70 = rax_3
            int64_t var_68_1 = 0
            int64_t var_60_1 = 0
            sub_141b25e90(&var_58, &var_70, rsi_1)
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)
            
            r8_1 = var_40
        else
            r8_1 = var_40
            void* rdx_3 = &var_58
            
            if (r8_1 != 0)
                rdx_3 = r8_1
            
            rax_3 = var_78
            
            if (*(rdx_3 + sx.q(rsi_1) * 0x18) != rax_3)
                goto label_141b2df42
        
        int64_t i_1 = sx.q(i)
        void* rdx_5 = &var_58
        int64_t rcx_11 = sx.q(rsi_1) * 3
        
        if (r8_1 != 0)
            rdx_5 = r8_1
        
        int64_t rdi_1 = sx.q(*(rdx_5 + (rcx_11 << 3) + 0x10))
        void* rbx_2 = rdx_5 + (rcx_11 << 3)
        int32_t rax_14 = (rdi_1 + 1).d
        *(rbx_2 + 0x10) = rax_14
        
        if (rax_14 s> *(rbx_2 + 0x14))
            sub_1405a4d70(rbx_2 + 8)
        
        i += 1
        *(*(rbx_2 + 8) + (rdi_1 << 3)) = arg1 + 0xe0 + i_1 * 0xa0
    while (i s< *(arg1 + 0x360))

int64_t* rax_16 = j_sub_140a82f30(0x48)
int64_t* rbx_3 = rax_16

if (rax_16 == 0)
    rbx_3 = nullptr
else
    rax_16[1].d = 1
    *(rax_16 + 0xc) = 1
    *rbx_3 = &data_142d4caa0
    rbx_3[2] = 0
    rbx_3[3] = 0
    rbx_3[7] = 0
    
    if (var_40 == 0)
        memmove(&rbx_3[4], &var_58, 0x18)
    
    int64_t rcx_14 = rbx_3[7]
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    rbx_3[7] = var_40
    int64_t var_40_1 = 0
    rbx_3[8].d = j_1
    *(rbx_3 + 0x44) = var_34
    int32_t var_38 = 0
    int32_t var_34_1 = 1

if (rbx_3 == -0x10)
label_141b2e0e9:
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
else
    void* rax_20
    
    if (rbx_3[2] != 0)
        rax_20 = rbx_3[3]
    
    if (rbx_3[2] != 0 && rax_20 != 0 && *(rax_20 + 8) s> 0)
        goto label_141b2e0e9
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    rbx_3[2] = &rbx_3[2]
    int64_t* rcx_15 = rbx_3[3]
    
    if (rbx_3 != rcx_15)
        if (rbx_3 != 0)
            *(rbx_3 + 0xc) += 1
            rcx_15 = rbx_3[3]
        
        if (rcx_15 != 0)
            int32_t temp9_1 = *(rcx_15 + 0xc)
            *(rcx_15 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rcx_15 + 8))(rcx_15, 1)
        
        rbx_3[3] = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp8_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
        
        goto label_141b2e0e9

int64_t rax_26
int64_t* rcx_19

if (arg1 + 0xd0 != &var_70)
    *(arg1 + 0xd0) = &rbx_3[2]
    int64_t* rdi_3 = *(arg1 + 0xd8)
    
    if (rbx_3 == rdi_3)
        goto label_141b2e13a
    
    *(arg1 + 0xd8) = rbx_3
    
    if (rdi_3 == 0)
        goto label_141b2e161
    
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d != 1)
        goto label_141b2e161
    
    (**rdi_3)(rdi_3)
    int32_t temp7_1 = *(rdi_3 + 0xc)
    *(rdi_3 + 0xc) -= 1
    
    if (temp7_1 != 1)
        goto label_141b2e161
    
    rax_26 = *rdi_3
    rcx_19 = rdi_3
    goto label_141b2e15e

label_141b2e13a:

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d != 1)
        goto label_141b2e161
    
    (**rbx_3)(rbx_3)
    int32_t temp3_1 = *(rbx_3 + 0xc)
    *(rbx_3 + 0xc) -= 1
    
    if (temp3_1 != 1)
        goto label_141b2e161
    
    rax_26 = *rbx_3
    rcx_19 = rbx_3
label_141b2e15e:
    (*(rax_26 + 8))(rcx_19, 1)
label_141b2e161:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp10_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

int64_t result = sub_1405ade00(&var_58)
__security_check_cookie(rax_1 ^ &var_98)
return result
