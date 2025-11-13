// 函数: sub_140e71fe0
// 地址: 0x140e71fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = 0
int32_t var_70 = 0
int64_t* var_68 = nullptr
int32_t rax = 0
int32_t var_60 = 0
int64_t* rcx = nullptr
int64_t* var_58 = nullptr
int32_t var_50 = 0
int64_t* var_48 = nullptr
int64_t* r10 = nullptr
int32_t var_40 = 0
int32_t var_38 = 0

if (arg3 != &var_78 && arg3[1].d != 0)
    int64_t* r8 = *arg3
    
    if (r8 != 0)
        (*(*r8 + 0x40))(r8, &var_78)
        rcx = var_58
        rax = var_60
        r10 = var_68

if (arg4 != &var_68)
    int64_t* r8_1
    
    if (arg4[1].d != 0)
        r8_1 = *arg4
    
    if (arg4[1].d != 0 && r8_1 != 0)
        (*(*r8_1 + 0x40))(r8_1, &var_68)
        rcx = var_58
    else if (rax != 0 && r10 != 0)
        (*(*r10 + 0x38))(r10, 0)
        int64_t* rcx_4 = var_68
        
        if (rcx_4 != 0)
            var_68 = sub_140a84c80(rcx_4, 0, 0)
        
        int32_t var_60_1 = 0
        rcx = var_58

if (arg5 != &var_58)
    int64_t* r8_2
    
    if (arg5[1].d != 0)
        r8_2 = *arg5
    
    if (arg5[1].d != 0 && r8_2 != 0)
        (*(*r8_2 + 0x40))(r8_2, &var_58)
    else if (var_50 != 0 && rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t* rcx_6 = var_58
        
        if (rcx_6 != 0)
            var_58 = sub_140a84c80(rcx_6, 0, 0)
        
        int32_t var_50_1 = 0

if (arg6 != &var_48)
    int64_t* rcx_7
    
    if (arg6[1].d != 0)
        rcx_7 = *arg6
    
    if (arg6[1].d != 0 && rcx_7 != 0)
        (*(*rcx_7 + 0x40))(rcx_7, &var_48)
    else if (var_40 != 0)
        int64_t* rcx_8 = var_48
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x38))(rcx_8, 0)
            int64_t* rcx_9 = var_48
            
            if (rcx_9 != 0)
                var_48 = sub_140a84c80(rcx_9, 0, 0)
            
            int32_t var_40_1 = 0

int32_t var_38_1 = arg7
int64_t var_88 = *arg2
void* rax_13 = arg2[1]
void* var_80 = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

(*(*arg1 + 8))(arg1, &var_88, &var_78)
sub_140745b20(&var_48)
sub_140745b20(&var_58)
sub_140745b20(&var_68)
sub_140745b20(&var_78)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(arg3)
sub_140745b20(arg4)
sub_140745b20(arg5)
return sub_140745b20(arg6)
