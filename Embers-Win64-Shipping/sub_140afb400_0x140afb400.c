// 函数: sub_140afb400
// 地址: 0x140afb400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t* rdi = arg3
int32_t r12 = 0
uint64_t var_58 = 0
int32_t var_50 = 0
char i

for (i = sub_140b295a0(&arg_8, &var_58, 0); i != 0; i = sub_140b295a0(&arg_8, &var_58, 0))
    int32_t r8 = var_50
    
    if (r8 == 0 || *var_58 != 0x2d)
        int64_t rbx_7 = sx.q(arg2[1].d)
        int32_t rax_8 = (rbx_7 + 1).d
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t rbx_8 = rbx_7 << 4
        int64_t* rbx_9 = rbx_8 + *arg2
        
        if (rbx_8 != neg.q(*arg2))
            *rbx_9 = 0
            uint64_t r14_3 = var_58
            rbx_9[1].d = var_50
            
            if (var_50 != 0)
                sub_1405a4c70(rbx_9, var_50, 0)
                memcpy(*rbx_9, r14_3, var_50 * 2)
            else
                *(rbx_9 + 0xc) = 0
            
            rdi = arg3
    else
        int64_t rbx_1 = sx.q(rdi[1].d)
        int32_t rax_1 = (rbx_1 + 1).d
        rdi[1].d = rax_1
        
        if (rax_1 s> *(rdi + 0xc))
            sub_1405a4f90(rdi)
            r8 = var_50
        
        int64_t rbx_2 = rbx_1 << 4
        int64_t* rbx_3 = rbx_2 + *rdi
        
        if (rbx_2 != neg.q(*rdi))
            *rbx_3 = 0
            rbx_3[1] = 0
            r8 = var_50
            int32_t rdi_1 = r8 - 1
            
            if (r8 == 0)
                rdi_1 = 0
            
            int64_t var_48 = 0
            int32_t rdx_2 = rdi_1
            int64_t var_40_1 = 0
            
            if (rdi_1 s> 1)
                rdx_2 = 1
            
            int16_t* const rax_2 = &data_142d40450
            int64_t r14_1 = 0
            int32_t r15_1 = 0
            
            if (r8 != 0)
                rax_2 = var_58
            
            int32_t rdi_2 = rdi_1 - rdx_2
            void* r13_1 = &rax_2[sx.q(rdx_2)]
            
            if (r13_1 != 0 && *r13_1 != 0 && rdi_2 s> 0)
                if (rdi_2 + 1 s> 0)
                    sub_1405947f0(&var_48, rdi_2 + 1)
                    r12 = var_40_1:4.d
                    r15_1 = var_40_1.d
                    r14_1 = var_48
                
                r15_1 += rdi_2 + 1
                var_40_1.d = r15_1
                
                if (r15_1 s> r12)
                    sub_140594770(&var_48)
                    r12 = var_40_1:4.d
                    r15_1 = var_40_1.d
                    r14_1 = var_48
                
                UnDecorator::getReferenceType(r14_1, r13_1, rdi_2 * 2)
                *(r14_1 + (sx.q(r15_1) << 1) - 2) = 0
                r8 = var_50
            
            if (rbx_3 == &var_48)
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                    r8 = var_50
                
                r12 = 0
            else
                int64_t rcx_6 = *rbx_3
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                *rbx_3 = r14_1
                *(rbx_3 + 0xc) = r12
                r12 = 0
                rbx_3[1].d = r15_1
                r8 = var_50
                int64_t var_40_2 = 0
                var_48 = 0
        
        int64_t rbx_4 = sx.q(arg2[1].d)
        int32_t rax_4 = (rbx_4 + 1).d
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
            r8 = var_50
        
        int64_t rdi_4 = rbx_4 << 4
        int64_t* rdi_5 = rdi_4 + *arg2
        
        if (rdi_4 != neg.q(*arg2))
            int32_t rcx_9 = r8 - 1
            
            if (r8 == 0)
                rcx_9 = 0
            
            int32_t r8_3
            uint64_t r9_1
            
            if (r8 == 0)
                r8_3 = 0
                r9_1 = &data_142d40450
            else
                r9_1 = var_58
                r8_3 = r8 - 1
            
            int32_t rax_5
            
            if (rcx_9 - 1 s>= 0)
                rax_5 = r8_3
                
                if (rcx_9 s<= r8_3)
                    rax_5 = rcx_9 - 1
            else
                rax_5 = 0
            
            *rdi_5 = 0
            rdi_5[1] = 0
            int64_t r14_2 = r9_1 + ((sx.q(r8_3) - sx.q(rax_5)) << 1)
            
            if (r14_2 != 0 && *r14_2 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (*(r14_2 + (rbx_5 << 1)) != 0)
                
                int32_t rdx_8 = 0
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(rdi_5, rbx_5.d + 1)
                    rdx_8 = rdi_5[1].d
                
                int32_t rax_7 = rbx_5.d + 1 + rdx_8
                rdi_5[1].d = rax_7
                
                if (rax_7 s> *(rdi_5 + 0xc))
                    sub_140594770(rdi_5)
                
                UnDecorator::getReferenceType(*rdi_5, r14_2, (rbx_5.d + 1) * 2)
        
        rdi = arg3

uint64_t rcx_19 = var_58

if (rcx_19 == 0)
    return i

return sub_140a74f90(rcx_19)
