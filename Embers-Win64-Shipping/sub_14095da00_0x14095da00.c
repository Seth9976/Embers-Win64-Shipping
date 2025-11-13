// 函数: sub_14095da00
// 地址: 0x14095da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = 0
int64_t* var_60
sub_1409633d0(&var_60, arg2, 0)
int64_t* r12 = var_60
int32_t result

if (r12 == 0)
    result = sub_14095ebe0(arg4, arg3, 0)
else
    int64_t* rax = sub_140963c50()
    int64_t var_98
    
    if (rax == 0)
        var_98 = 0
    else
        int64_t var_78_1 = 0
        (*(*rax + 8))(rax, &var_98, arg2, 0)
    
    int64_t var_70 = 0
    int32_t var_68_1 = 0
    
    if (arg4 != &var_70 && arg4[1].d != 0)
        int64_t* rcx_2 = *arg4
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2, &var_70)
    
    int64_t* var_90
    int64_t var_48
    (*(*r12 + 0xc8))(r12, &var_48, sub_1409461d0(&var_90, arg1, sub_14096c810, var_98, &var_70))
    int32_t var_88
    int64_t* rax_4
    
    if (var_88 == 0)
        rax_4 = var_90
    label_14095db14:
        
        if (rax_4 != 0)
            sub_140a74f90(rax_4)
    else
        int64_t* rcx_5 = var_90
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x38))(rcx_5, 0)
            rax_4 = var_90
            
            if (rax_4 != 0)
                rax_4 = sub_140a84c80(rax_4, 0, 0)
                var_90 = rax_4
            
            int32_t var_88_1 = 0
            goto label_14095db14
    int32_t var_40
    sub_140598750(arg1 + 0x88, &var_40)
    int64_t* var_38
    *var_38 = var_98
    var_38[1] = var_48
    var_38[2].d = 0xffffffff
    int64_t rbx_2 = *var_38
    int32_t r8_2 = (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d)
    int64_t* var_a8_1
    var_a8_1.d = var_40
    void var_50
    sub_1405b8300(arg1 + 0x88, &var_50, r8_2, var_38, var_a8_1.d, nullptr)
    result = (*(*r12 + 0xc0))(r12, arg3)

int64_t* var_58

if (var_58 != 0)
    result = var_58[1].d
    var_58[1].d -= 1
    
    if (result == 1)
        result = (**var_58)(var_58)
        int32_t r15_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (r15_1 == 1)
            return (*(*var_58 + 8))(var_58, zx.q(r15_1))

return result
