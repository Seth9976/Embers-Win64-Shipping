// 函数: sub_140fc79c0
// 地址: 0x140fc79c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int16_t* var_78 = nullptr
int32_t var_70 = 0
int64_t* rbx

if ((*(rax + 0x80))(arg1, &var_78) == 0)
    rbx.b = 0
else
    int16_t* const r8_1 = &data_142d40450
    
    if (var_70 != 0)
        r8_1 = var_78
    
    int64_t arg_8 = 0
    int64_t var_68
    (*(*arg1 + 0x40))(arg1, &var_68, r8_1, 0, 0x89, 0, 0)
    int32_t var_38
    void* var_30
    
    if (var_38 == 0)
        void* rdi_1 = var_30
        int32_t var_28
        void* i = rdi_1 + sx.q(var_28) * 0x28
        
        if (rdi_1 != i)
            int64_t* rdi_2 = rdi_1 + 0x18
            
            do
                rbx = rdi_2[1]
                int64_t r14_1 = *rdi_2
                
                if (rbx != 0)
                    rbx[1].d += 1
                
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rax_3 = (rbp_1 + 1).d
                arg2[1].d = rax_3
                
                if (rax_3 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                rdi_2 = &rdi_2[5]
                int64_t* rax_6 = (rbp_1 << 4) + *arg2
                *rax_6 = r14_1
                rax_6[1] = rbx
            while (&rdi_2[-3] != i)
    
    sub_14094ab00(&var_30)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t rcx_6 = var_68
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rbx.b = 1

int16_t* rcx_7 = var_78

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return zx.q(rbx.b)
