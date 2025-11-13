// 函数: sub_140ab0c60
// 地址: 0x140ab0c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
uint64_t var_28
int64_t var_18
int64_t* rcx_1
int32_t rbx

if (arg3 + 1 u<= 1)
    int32_t rbx_1 = arg2[1].d
    int64_t rsi_1 = *arg2
    var_28 = 0
    int32_t var_20_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_28, rbx_1, 0)
        memcpy(var_28, rsi_1, rbx_1 * 2)
    else
        int32_t var_1c_1 = 0
    
    rcx_1 = &var_28
    rbx = 2
else
    int16_t* const r8
    
    if (arg2[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg2
    
    sub_140a2e390(&var_18, u"%s_locchunk%d", r8)
    rcx_1 = &var_18
    rbx = 1

*arg1 = *rcx_1
*rcx_1 = 0
arg1[1].d = rcx_1[1].d
int32_t rax_3 = *(rcx_1 + 0xc)
rcx_1[1] = 0
*(arg1 + 0xc) = rax_3

if ((rbx.b & 2) != 0)
    uint64_t rcx_4 = var_28
    rbx &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rbx.b & 1) != 0)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg1
