// 函数: sub_140e1a3b0
// 地址: 0x140e1a3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx
rcx.b = sub_140b5b8a0(*(arg3 + 0x50), 0) == 0
void* rax_1

if ((*(arg3 + 0x54) != 0 | rcx.b) == 0)
    rax_1 = *(arg3 + 0x48)

int64_t rcx_1

if ((*(arg3 + 0x54) != 0 | rcx.b) != 0 || rax_1 == 0)
    rcx_1 = *(arg3 + 0x50)
else
    rcx_1 = *(rax_1 + 0x18)

int64_t arg_10 = rcx_1
int16_t* var_38
sub_140b63b70(&arg_10, &var_38)
sub_140b20c40(&var_38)
int16_t* const rbx_1 = &data_142d40450
int16_t* rdx_1

if (arg2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg2

int16_t* const rcx_4 = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rcx_4 = var_38

if (sub_140a54510(rcx_4, rdx_1) != 0)
    int16_t* var_18
    sub_140b11c80(&var_18, arg2)
    int16_t* var_28
    sub_140b11c80(&var_28, &var_38)
    int16_t* rdx_4 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        rdx_4 = var_18
    
    int32_t var_20
    
    if (var_20 != 0)
        rbx_1 = var_28
    
    int32_t rax_3 = sub_140a54510(rbx_1, rdx_4)
    int16_t* rcx_8 = var_28
    
    if (rax_3 != 0)
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int16_t* rcx_10 = var_18
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_1.b = 0
    else
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int16_t* rcx_9 = var_18
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_1.b = 1
else
    rbx_1.b = 1

int16_t* rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return zx.q(rbx_1.b)
