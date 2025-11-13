// 函数: sub_14059e300
// 地址: 0x14059e300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t r12 = 0
uint64_t var_48 = 0
int32_t var_40 = 0
char i

for (i = sub_140b295a0(&arg_8, &var_48, 0); i != 0; i = sub_140b295a0(&arg_8, &var_48, 0))
    if (var_40 == 0 || *var_48 != 0x2d)
        int64_t rbx_4 = sx.q(arg2[1].d)
        int32_t rax_5 = (rbx_4 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t rbx_5 = rbx_4 << 4
        int64_t* rbx_6 = rbx_5 + *arg2
        
        if (rbx_5 != neg.q(*arg2))
            *rbx_6 = 0
            uint64_t rsi_3 = var_48
            rbx_6[1].d = var_40
            
            if (var_40 != 0)
                sub_1405a4c70(rbx_6, var_40, 0)
                memcpy(*rbx_6, rsi_3, var_40 * 2)
            else
                *(rbx_6 + 0xc) = 0
    else
        int64_t rbx_1 = sx.q(arg3[1].d)
        int32_t rax_1 = (rbx_1 + 1).d
        arg3[1].d = rax_1
        
        if (rax_1 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        int64_t rbx_2 = rbx_1 << 4
        int64_t* rbx_3 = rbx_2 + *arg3
        
        if (rbx_2 != neg.q(*arg3))
            *rbx_3 = 0
            rbx_3[1] = 0
            int32_t rsi_1 = var_40 - 1
            
            if (var_40 == 0)
                rsi_1 = 0
            
            int64_t var_58 = 0
            int32_t rdx_2 = rsi_1
            int64_t var_50_1 = 0
            
            if (rsi_1 s> 1)
                rdx_2 = 1
            
            int16_t* const rax_2 = &data_142d40450
            int64_t rdi_1 = 0
            int32_t r14_1 = 0
            
            if (var_40 != 0)
                rax_2 = var_48
            
            int32_t rsi_2 = rsi_1 - rdx_2
            void* rax_3 = &rax_2[sx.q(rdx_2)]
            
            if (rax_3 != 0 && *rax_3 != 0 && rsi_2 s> 0)
                if (rsi_2 + 1 s> 0)
                    sub_1405947f0(&var_58, rsi_2 + 1)
                    r12 = var_50_1:4.d
                    r14_1 = var_50_1.d
                    rdi_1 = var_58
                
                r14_1 = r14_1 + 1 + rsi_2
                var_50_1.d = r14_1
                
                if (r14_1 s> r12)
                    sub_140594770(&var_58)
                    r12 = var_50_1:4.d
                    r14_1 = var_50_1.d
                    rdi_1 = var_58
                
                UnDecorator::getReferenceType(rdi_1, rax_3, rsi_2 * 2)
                *(rdi_1 + (sx.q(r14_1) << 1) - 2) = 0
            
            if (rbx_3 == &var_58)
                if (rdi_1 != 0)
                    sub_140a74f90(rdi_1)
                
                r12 = 0
            else
                int64_t rcx_6 = *rbx_3
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                *rbx_3 = rdi_1
                *(rbx_3 + 0xc) = r12
                r12 = 0
                int64_t var_50_2 = 0
                var_58 = 0
                rbx_3[1].d = r14_1

uint64_t rcx_9 = var_48

if (rcx_9 == 0)
    return i

return sub_140a74f90(rcx_9)
