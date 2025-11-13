// 函数: sub_14066fa40
// 地址: 0x14066fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1
int32_t var_80 = 0
int32_t r14 = 0

if (arg2 == 0 || sub_140d23de0(arg2).b == 0)
    return 

void* rcx_1 = *(arg2 + 0x28)
void* var_70 = nullptr
int32_t var_68_1 = 0
sub_140666670(rcx_1, &var_70)
void* rsi_1 = var_70
int64_t rdi_1 = sx.q(var_68_1)
void* r13_1 = rsi_1
uint64_t rax = (rdi_1 << 4) + rsi_1
uint64_t var_78_1 = rax

if (rsi_1 != rax)
    uint64_t rdi_2 = var_78_1
    uint64_t r12_1 = var_78_1
    
    do
        int32_t rbx_1 = *(r13_1 + 8)
        int64_t var_90 = 0
        int64_t rsi_2 = *r13_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_90, rbx_1, 0)
            memcpy(var_90, rsi_2, rbx_1 * 2)
        else
            int32_t var_84_1 = 0
        
        void* r15_1
        
        if (arg3 != 0)
        label_14066fb6e:
            
            if (rbx_1 s<= 1)
                goto label_14066fd14
            
            int64_t* rbx_3 = *(arg2 + 0x28)
            sub_14062d6e0(rbx_3, &var_80, &var_90)
            int64_t rax_5 = sx.q(var_80)
            uint64_t rbx_4
            int64_t rsi_3
            
            if (rax_5.d == 0xffffffff)
            label_14066fbd9:
                r14 |= 2
                r12_1 = 0
                rsi_3 = 0
                rbx_4 = 0
            else
                int64_t rcx_7 = *rbx_3 + rax_5 * 0x28
                rax = rcx_7 + 0x10
                
                if (rcx_7 == 0)
                    rax = 0
                
                if (rax == 0)
                    goto label_14066fbd9
                
                rsi_3 = *rax
                
                if (rsi_3 == 0)
                    goto label_14066fbd9
                
                rdi_2 = *(rax + 8)
                r14 |= 1
                
                if (rdi_2 != 0)
                    *(rdi_2 + 8) += 1
                
                rbx_4 = rdi_2
                
                if (rdi_2 != 0)
                    *(rdi_2 + 8) += 1
            
            if ((r14.b & 2) != 0)
                r14 &= 0xfffffffd
                
                if (r12_1 != 0)
                    int32_t temp1_1 = *(r12_1 + 8)
                    *(r12_1 + 8) -= 1
                    
                    if (temp1_1 == 1)
                        (**r12_1)(r12_1)
                        int32_t temp3_1 = *(r12_1 + 0xc)
                        *(r12_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*r12_1 + 8))(r12_1, 1)
            
            if ((r14.b & 1) != 0)
                r14 &= 0xfffffffe
                
                if (rdi_2 != 0)
                    int32_t temp2_1 = *(rdi_2 + 8)
                    *(rdi_2 + 8) -= 1
                    
                    if (temp2_1 == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp5_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (rsi_3 == 0)
                if (rbx_4 != 0)
                    int32_t temp4_1 = *(rbx_4 + 8)
                    *(rbx_4 + 8) -= 1
                    
                    if (temp4_1 == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp6_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
                
                goto label_14066fd14
            
            void* rax_12 = sub_140666db0(sub_140cde0b0())
            r15_1 = rax_12
            int64_t var_58 = rsi_3
            uint64_t rsi_4 = rbx_4
            
            if (rbx_4 != 0)
                *(rbx_4 + 8) += 1
            
            if (&var_58 != rax_12 + 0x28)
                var_58.o = *(rax_12 + 0x28)
                rsi_4 = rbx_4
                *(rax_12 + 0x28) = var_58.o
            
            if (rsi_4 != 0)
                int32_t temp7_1 = *(rsi_4 + 8)
                *(rsi_4 + 8) -= 1
                
                if (temp7_1 == 1)
                    (**rsi_4)(rsi_4)
                    int32_t temp9_1 = *(rsi_4 + 0xc)
                    *(rsi_4 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rsi_4 + 8))(rsi_4, 1)
            
            if (rbx_4 != 0)
                int32_t temp8_1 = *(rbx_4 + 8)
                *(rbx_4 + 8) -= 1
                
                if (temp8_1 == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp10_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            goto label_14066fd17
        
        if (rbx_1 s<= 1)
        label_14066fd14:
            r15_1 = nullptr
        label_14066fd17:
            
            if (rbx_1 s<= 1)
                r15 = arg1
            else
                r15 = arg1
                j_sub_140b746f0(*(r15 + 0x28), &var_90, r15_1 + 0x28)
        else
            int64_t* rbx_2 = *(r15 + 0x28)
            int32_t var_7c
            sub_14062d6e0(rbx_2, &var_7c, &var_90)
            rax = sx.q(var_7c)
            
            if (rax.d == 0xffffffff)
                goto label_14066fb6e
            
            int64_t rcx_5 = *rbx_2 + rax * 0x28
            rax = rcx_5 + 0x10
            
            if (rcx_5 == 0)
                rax = 0
            
            if (rax == 0 || *rax == 0)
                goto label_14066fb6e
        
        int64_t rcx_20 = var_90
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        r13_1 += 0x10
    while (r13_1 != var_78_1)
    
    rdi_1 = zx.q(var_68_1)
    rsi_1 = var_70

void* rbx_5 = rsi_1

if (rdi_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_21 = *rbx_5
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rbx_5 += 0x10
        i = rdi_1.d
        rdi_1 = zx.q(rdi_1.d - 1)
    while (i != 1)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)
