// 函数: sub_140a55050
// 地址: 0x140a55050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t rcx = 0
int32_t var_30 = 0
int32_t var_2c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx = var_2c
        rdx = var_30
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_30 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_38)
    
    memcpy(var_38, arg2, (rbx_1.d + 1) * 2)

int64_t var_28
int64_t* rax_2 = sub_140a300d0(&var_38, &var_28, *(arg1 + 0x10), *(arg1 + 0x18), 1)

if (&var_38 != rax_2)
    int16_t* rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    var_38 = *rax_2
    *rax_2 = 0
    var_30 = rax_2[1].d
    int32_t var_2c_1 = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = *(arg1 + 8)
int16_t* const rbx_4 = &data_142d40450
int16_t* const rdx_4 = &data_142d40450
int64_t rax_5 = *rcx_8

if (arg3 == 0)
    if (var_30 != 0)
        rdx_4 = var_38
    
    if ((*(rax_5 + 0x70))(rcx_8, rdx_4) != 0 && *(arg1 + 0x20) != 0)
        int64_t* rcx_11 = *(arg1 + 8)
        int16_t* rdx_6 = &data_142d40450
        
        if (var_30 != 0)
            rdx_6 = var_38
        
        (*(*rcx_11 + 0x80))(rcx_11, rdx_6)
    
    int64_t* rcx_12 = *(arg1 + 8)
    
    if (var_30 != 0)
        rbx_4 = var_38
    
    if ((*(*rcx_12 + 0x180))(rcx_12, rbx_4, arg2, 0, 0) != 0)
        rbx_4.b = 1
    else
        rbx_4.b = 0
else
    if (var_30 != 0)
        rdx_4 = var_38
    
    if ((*(rax_5 + 0x178))(rcx_8, rdx_4) != 0)
        rbx_4.b = 1
    else
        int64_t* rcx_9 = *(arg1 + 8)
        
        if (var_30 != 0)
            rbx_4 = var_38
        
        if ((*(*rcx_9 + 0xd8))(rcx_9, rbx_4) == 0)
            rbx_4.b = 0
        else
            rbx_4.b = 1

int16_t* rcx_10 = var_38

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return zx.q(rbx_4.b)
