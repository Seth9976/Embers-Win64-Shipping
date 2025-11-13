// 函数: sub_140a40280
// 地址: 0x140a40280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rcx = 0
int64_t rbx = -1
int16_t* var_78 = nullptr
int32_t var_6c = 0
int32_t rdx = 0
int32_t var_70 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rdi_1.d + 1)
        rcx = var_6c
        rdx = var_70
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    var_70 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_78)
    
    memcpy(var_78, arg2, (rdi_1.d + 1) * 2)

sub_140b214e0(&var_78)
int32_t rcx_5 = 0
int32_t var_5c = 0
int16_t* var_68 = nullptr
int32_t var_60 = 0

if (arg3 != 0 && *arg3 != 0)
    do
        rbx += 1
    while (arg3[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx.d + 1)
        rcx_5 = var_5c
        rsi = var_60
    
    int32_t rax_2 = rsi + rbx.d + 1
    var_60 = rax_2
    
    if (rax_2 s> rcx_5)
        sub_140594770(&var_68)
    
    memcpy(var_68, arg3, (rbx.d + 1) * 2)

sub_140b214e0(&var_68)
int16_t* const rbx_2 = &data_142d40450
int16_t* const rdx_6 = &data_142d40450

if (var_60 != 0)
    rdx_6 = var_68

char rax_4 = (*(*arg1 + 0xd8))(arg1, rdx_6)
char rax_6
char rax_8

if (rax_4 != 0)
    int16_t* const rdx_7 = &data_142d40450
    
    if (var_70 != 0)
        rdx_7 = var_78
    
    rax_6 = (*(*arg1 + 0xd8))(arg1, rdx_7)
    
    if (rax_6 == 0)
        int16_t* rdx_8 = &data_142d40450
        
        if (var_70 != 0)
            rdx_8 = var_78
        
        rax_8 = (*(*arg1 + 0xe0))(arg1, rdx_8)

if (rax_4 == 0 || (rax_6 == 0 && rax_8 == 0))
    rbx_2.b = 0
else
    int16_t* r9_1 = &data_142d40450
    void** const var_58 = &data_142e5d240
    
    if (var_70 != 0)
        r9_1 = var_78
    
    int16_t* const rax_9 = &data_142d40450
    int64_t* var_50_1 = arg1
    int16_t* var_40_1 = r9_1
    
    if (var_60 != 0)
        rax_9 = var_68
    
    if (var_60 != 0)
        rbx_2 = var_68
    
    int16_t* const var_48_1 = rax_9
    char r9
    char var_38_1 = r9
    rbx_2 = zx.q((*(*arg1 + 0x148))(arg1, rbx_2, &var_58))
    var_58 = &data_142d6ad38

int16_t* rcx_15 = var_68

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_78

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return zx.q(rbx_2.b)
