// 函数: sub_1425c0080
// 地址: 0x1425c0080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t* rax = sub_1425bf990(arg1, &var_38, arg3)
int16_t* const rbx = &data_142d40450
int16_t* const rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t* rcx = *(arg1 + 8)
char rax_2 = (*(*rcx + 0x70))(rcx, rdx_1)
int64_t rcx_1 = var_38

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t var_28
int64_t* rdx_2 = &var_28
char rbx_1

if (rax_2 == 0)
    int64_t* rax_7 = sub_1425bf990(arg1, rdx_2, arg2)
    
    if (rax_7[1].d != 0)
        rbx = *rax_7
    
    int64_t* rcx_6 = *(arg1 + 8)
    rbx_1 = (*(*rcx_6 + 0x180))(rcx_6, rbx, arg3, zx.q(arg4), arg5)
else
    int64_t* rax_3 = sub_1425bf990(arg1, rdx_2, arg3)
    int16_t* const rsi_1
    
    if (rax_3[1].d == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *rax_3
    
    int16_t** rax_4 = sub_1425bf990(arg1, &var_38, arg2)
    
    if (rax_4[1].d != 0)
        rbx = *rax_4
    
    int64_t* rcx_4 = *(arg1 + 8)
    char rax_6 = (*(*rcx_4 + 0x180))(rcx_4, rbx, rsi_1, zx.q(arg4), arg5)
    int64_t rcx_5 = var_38
    rbx_1 = rax_6
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return zx.q(rbx_1)
