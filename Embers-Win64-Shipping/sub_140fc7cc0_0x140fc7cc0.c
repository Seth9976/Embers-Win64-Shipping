// 函数: sub_140fc7cc0
// 地址: 0x140fc7cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t* r15 = nullptr
int64_t* var_98 = nullptr
int32_t var_8c = 0
int32_t rbx = 0
int32_t r12 = 0
int64_t var_88
(*(rax + 0x90))(arg1, &var_88)
int64_t* var_80

if ((*(*arg1 + 0xe8))(arg1, &var_88) == 0)
    int64_t arg_8 = 0
    int64_t var_78
    (*(*arg1 + 0x40))(arg1, &var_78, 0, &(*U"RGBXYZF10|")[8], 0x99, 0, 0)
    int32_t var_48
    void* var_40
    
    if (var_48 == 0)
        void* rdi_1 = var_40
        int32_t var_38
        void* i = rdi_1 + sx.q(var_38) * 0x28
        
        if (rdi_1 != i)
            int64_t* rdi_2 = rdi_1 + 0x18
            
            do
                int64_t r14_1 = sx.q(rbx)
                rbx = (r14_1 + 1).d
                
                if (rbx s> r12)
                    sub_1405a4f90(&var_98)
                    r12 = var_8c
                    r15 = var_98
                
                int64_t rcx_7 = r14_1 * 2
                r15[rcx_7] = *rdi_2
                void* rax_9 = rdi_2[1]
                r15[rcx_7 + 1] = rax_9
                
                if (rax_9 != 0)
                    *(rax_9 + 8) += 1
                
                rdi_2 = &rdi_2[5]
            while (&rdi_2[-3] != i)
    
    *arg2 = r15
    arg2[1].d = rbx
    *(arg2 + 0xc) = r12
    sub_14094ab00(&var_40)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_11 = var_78
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
else
    int32_t var_90_1 = 1
    sub_1405a4f90(&var_98)
    int64_t* rcx_2 = var_98
    *rcx_2 = var_88
    rcx_2[1] = var_80
    
    if (var_80 != 0)
        var_80[1].d += 1
    
    *arg2 = rcx_2
    arg2[1].d = var_90_1
    *(arg2 + 0xc) = var_8c

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t temp1_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_80 + 8))(var_80, 1)

return arg2
