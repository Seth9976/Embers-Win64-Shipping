// 函数: sub_141dabed0
// 地址: 0x141dabed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = *arg2
void* rax_1 = arg2[1]
void* var_70 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, zx.q(arg1[0x4b].d), 0xe, &var_78)
int64_t* rbx = nullptr
int32_t var_48 = 6
int64_t var_38 = 0
void** const var_50 = &data_1432388d0
void** const var_40 = &data_143238880
int64_t var_30 = 0
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *arg3
    rax_3 = (*(*rcx + 0x40))(rcx)

if (arg4 == 0 || rax_3 != 0xc8)
    (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
else
    int64_t* rcx_1 = *arg3
    int64_t var_60 = 0
    int64_t var_58_1 = 0
    int64_t var_88
    (*(*rcx_1 + 0x48))(rcx_1, &var_88)
    int64_t r12_1 = var_88
    uint64_t var_98 = 0
    int32_t var_80
    int32_t var_90_1 = var_80
    
    if (var_80 != 0)
        sub_1405a4c70(&var_98, var_80, 0)
        memcpy(var_98, r12_1, var_80 * 2)
    else
        int32_t var_8c_1 = 0
    
    char rax_6 = var_40[5](&var_40, &var_98)
    uint64_t rcx_5 = var_98
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rax_6 == 0)
        (*(*arg1 + 0x198))(arg1)
        *(arg1 + 0x29c) = 1
    else
        int32_t var_48_1 = 0
    
    int64_t rcx_7 = var_88
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    void** const var_68_1 = &data_143238880
    sub_141d8e7a0(&var_60)

if (arg5[1].d != 0)
    int64_t* rcx_10 = *arg5
    
    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
        if (arg5[1].d != 0)
            rbx = *arg5
        
        (*(*rbx + 0x50))(rbx, &var_50)

var_40 = &data_143238880
sub_141d8e7a0(&var_38)
int64_t* rbx_1 = arg2[1]
var_40 = &data_142e1f570
var_50 = &data_142d5a028

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return sub_140745b20(arg5)
