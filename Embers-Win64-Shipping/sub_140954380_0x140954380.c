// 函数: sub_140954380
// 地址: 0x140954380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = 0
int64_t* var_40
sub_140961370(&var_40, arg2, 0)
int64_t* rsi = var_40
int64_t* rdi

if (rsi == 0)
    rdi.b = 0
else
    int64_t* rax_1 = sub_140963c50()
    int64_t var_78
    
    if (rax_1 == 0)
        __builtin_memset(&var_78, 0, 0x14)
    else
        int64_t var_58_1 = 0
        (*(*rax_1 + 8))(rax_1, &var_78, arg2, 0)
    
    int64_t* rcx_3 = nullptr
    int32_t rax_2 = 0
    int64_t* var_70
    
    if (arg4 != &var_70 && arg4[1].d != 0)
        int64_t* r8_1 = *arg4
        
        if (r8_1 != 0)
            (*(*r8_1 + 0x40))(r8_1, &var_70)
            int32_t var_68
            rax_2 = var_68
            rcx_3 = var_70
    
    int64_t rbx_1 = var_78
    rdi = nullptr
    int64_t* var_88 = nullptr
    int32_t var_80_1 = 0
    int64_t* var_50 = nullptr
    int32_t var_48_1 = 0
    
    if (rax_2 == 0 || rcx_3 == 0)
    label_14095448b:
        int64_t* rax_7 = sub_140a84c80(rdi, 0x40, 0)
        rdi = rax_7
        var_88 = rax_7
        var_80_1 = 4
    else
        (*(*rcx_3 + 0x40))(rcx_3, &var_50)
        int32_t rax_5 = var_80_1
        rdi = var_88
        
        if (rax_5 == 0)
            goto label_14095448b
        
        if (rdi != 0)
            (*(*rdi + 0x38))(rdi, 0)
            rax_5 = var_80_1
            rdi = var_88
        
        if (rax_5 != 4)
            goto label_14095448b
    
    int64_t* var_98
    
    if (rdi != 0)
        int64_t var_30 = 0
        int32_t var_28_1 = 0
        
        if (var_48_1 != 0)
            int64_t* rcx_6 = var_50
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x40))(rcx_6, &var_30)
        
        var_98 = &var_30
        sub_140947e30(rdi, arg1, sub_14096ab40, rbx_1, var_98)
    
    sub_140745b20(&var_50)
    sub_140745b20(&var_70)
    void var_20
    *(arg1 + 0x30) = *(*(*rsi + 0x70))(rsi, &var_20, zx.q(arg3), &var_88, var_98)
    int64_t* rax_12
    
    if (var_80_1 == 0)
        rax_12 = var_88
    label_14095454a:
        
        if (rax_12 != 0)
            sub_140a74f90(rax_12)
    else
        int64_t* rcx_12 = var_88
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x38))(rcx_12, 0)
            rax_12 = var_88
            
            if (rax_12 != 0)
                rax_12 = sub_140a84c80(rax_12, 0, 0)
                var_88 = rax_12
            
            int32_t var_80_2 = 0
            goto label_14095454a
    
    if ((*(*rsi + 0xd8))(rsi, zx.q(arg3)) == 0)
        rdi.b = 0
    else
        rdi.b = 1

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        int64_t rdx_7 = *var_38
        (*rdx_7)(var_38, rdx_7)
        int32_t rsi_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_3 = *var_38
            (*(r8_3 + 8))(var_38, zx.q(rsi_1), r8_3)

return zx.q(rdi.b)
