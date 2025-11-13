// 函数: sub_140693d90
// 地址: 0x140693d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68
int64_t var_58
sub_140a9fca0(&var_58, sub_140b20ee0(&var_68, sub_140ac6680(arg2), 0x5f))
int64_t var_40 = var_58
int64_t* var_50

if (var_50 != 0)
    var_50[1].d += 1

int32_t var_48
int32_t var_30 = var_48
char var_28 = 1
int64_t* var_20 = nullptr
int32_t var_18 = 0
sub_140f17c00(*(*arg1 + 0x298), &var_40)
int64_t* rcx_5 = var_20

if (var_18 == 0)
label_140693e5c:
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
else
    if (rcx_5 != 0)
    label_140693e39:
        (*(*rcx_5 + 0x38))(rcx_5, 0)
        rcx_5 = var_20
        
        if (rcx_5 != 0)
            int64_t* rax_7 = sub_140a84c80(rcx_5, 0, 0)
            rcx_5 = rax_7
            int64_t* var_20_1 = rax_7
        
        int32_t var_18_1 = 0
        goto label_140693e5c
    
    if (var_18 == 0)
        goto label_140693e5c
    
    if (rcx_5 != 0)
        goto label_140693e39

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_10 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_50 + 8))(var_50, 1)

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rdi_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_50 + 8))(var_50, zx.q(rdi_1))

int64_t rcx_10 = var_68

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return sub_1406a8e20(*arg1) __tailcall
