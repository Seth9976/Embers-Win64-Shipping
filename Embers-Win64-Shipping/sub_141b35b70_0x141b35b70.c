// 函数: sub_141b35b70
// 地址: 0x141b35b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* const rbx = *(arg1 + 0x20)
void* var_40 = nullptr
int32_t i_1 = 0
int32_t var_34 = 1
void* rax_2
int64_t rax_3
void* rdx_1

if (rbx != 0)
    rax_2 = sub_141b36880()
    rdx_1 = *(rbx + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rbx == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rbx = nullptr

void var_58
sub_141aec4c0(&var_58, arg1 + 0x100)
sub_141aec4c0(&var_58, arg1 + 0x1a0)
int64_t var_70

if (rbx != 0)
    void* rdi_1 = *(rbx + 0x20)
    
    if (rdi_1 != 0)
        void* rax_5 = sub_141a6e000()
        void* rcx_3 = *(rdi_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30
                && sub_141a574b0(rdi_1, rbx) != 0)
            int32_t i = i_1
            int32_t rsi_1 = 0
            int64_t rax_10 = *(sub_141b39180() + 0x18)
            int64_t var_78 = rax_10
            
            if (i s<= 0)
                goto label_141b35cf5
            
            void* r15_1 = &var_58
            
            if (var_40 != 0)
                r15_1 = var_40
            
            do
                int32_t rcx_6 = i & 0x80000001
                
                if (rcx_6 s< 0)
                    rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(i)
                int32_t i_2 = (temp9_1 - temp8_1) s>> 1
                i = i_2
                int32_t rax_15 = i_2 + rsi_1
                var_70 = *(r15_1 + sx.q(rax_15) * 0x18)
                
                if (sub_140b5d160(&var_70, &var_78) s< 0)
                    rsi_1 = rax_15 + rcx_6
            while (i s> 0)
            
            void* r8_3
            
            if (rsi_1 s>= i_1)
                rax_10 = var_78
            label_141b35cf5:
                var_70 = rax_10
                int64_t var_68_1 = 0
                int64_t var_60_1 = 0
                sub_141b25e90(&var_58, &var_70, rsi_1)
                
                if (var_68_1 != 0)
                    sub_140a74f90(var_68_1)
                
                r8_3 = var_40
            else
                r8_3 = var_40
                void* rdx_8 = &var_58
                
                if (r8_3 != 0)
                    rdx_8 = r8_3
                
                rax_10 = var_78
                
                if (*(rdx_8 + sx.q(rsi_1) * 0x18) != rax_10)
                    goto label_141b35cf5
            
            void* rdx_10 = &var_58
            
            if (r8_3 != 0)
                rdx_10 = r8_3
            
            int64_t rcx_14 = sx.q(rsi_1) * 3
            int64_t rdi_2 = sx.q(*(rdx_10 + (rcx_14 << 3) + 0x10))
            void* rbx_2 = rdx_10 + (rcx_14 << 3)
            int32_t rax_21 = (rdi_2 + 1).d
            *(rbx_2 + 0x10) = rax_21
            
            if (rax_21 s> *(rbx_2 + 0x14))
                sub_1405a4d70(rbx_2 + 8)
            
            *(*(rbx_2 + 8) + (rdi_2 << 3)) = arg1 + 0x240

int64_t* rax_23 = j_sub_140a82f30(0x48)
int64_t* rbx_3 = rax_23

if (rax_23 == 0)
    rbx_3 = nullptr
else
    rax_23[1].d = 1
    *(rax_23 + 0xc) = 1
    *rbx_3 = &data_142d4caa0
    rbx_3[2] = 0
    rbx_3[3] = 0
    rbx_3[7] = 0
    
    if (var_40 == 0)
        memmove(&rbx_3[4], &var_58, 0x18)
    
    int64_t rcx_17 = rbx_3[7]
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    rbx_3[7] = var_40
    int64_t var_40_1 = 0
    rbx_3[8].d = i_1
    *(rbx_3 + 0x44) = var_34
    int32_t var_38 = 0
    int32_t var_34_1 = 1

if (rbx_3 == -0x10)
label_141b35e79:
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
else
    void* rax_27
    
    if (rbx_3[2] != 0)
        rax_27 = rbx_3[3]
    
    if (rbx_3[2] != 0 && rax_27 != 0 && *(rax_27 + 8) s> 0)
        goto label_141b35e79
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    rbx_3[2] = &rbx_3[2]
    int64_t* rcx_18 = rbx_3[3]
    
    if (rbx_3 != rcx_18)
        if (rbx_3 != 0)
            *(rbx_3 + 0xc) += 1
            rcx_18 = rbx_3[3]
        
        if (rcx_18 != 0)
            int32_t temp7_1 = *(rcx_18 + 0xc)
            *(rcx_18 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_18 + 8))(rcx_18, 1)
        
        rbx_3[3] = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
        
        goto label_141b35e79

int64_t rax_33
int64_t* rcx_22

if (arg1 + 0xd0 != &var_70)
    *(arg1 + 0xd0) = &rbx_3[2]
    int64_t* rdi_4 = *(arg1 + 0xd8)
    
    if (rbx_3 == rdi_4)
        goto label_141b35ec7
    
    *(arg1 + 0xd8) = rbx_3
    
    if (rdi_4 == 0)
        goto label_141b35eee
    
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d != 1)
        goto label_141b35eee
    
    (**rdi_4)(rdi_4)
    int32_t temp5_1 = *(rdi_4 + 0xc)
    *(rdi_4 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141b35eee
    
    rax_33 = *rdi_4
    rcx_22 = rdi_4
    goto label_141b35eeb

label_141b35ec7:

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d != 1)
        goto label_141b35eee
    
    (**rbx_3)(rbx_3)
    int32_t temp1_1 = *(rbx_3 + 0xc)
    *(rbx_3 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141b35eee
    
    rax_33 = *rbx_3
    rcx_22 = rbx_3
label_141b35eeb:
    (*(rax_33 + 8))(rcx_22, 1)
label_141b35eee:
    
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
