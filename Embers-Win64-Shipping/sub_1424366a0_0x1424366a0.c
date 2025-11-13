// 函数: sub_1424366a0
// 地址: 0x1424366a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint64_t var_28
uint64_t var_18
uint64_t* rdx
int32_t rbx_1

if (*(arg1 + 0x90) == 0)
    var_18 = 0
    rdx = &var_18
    int64_t var_10_1 = 0
    rbx_1 = 2
else
    int32_t rbx = *(arg1 + 0x30)
    int64_t rsi_1 = *(arg1 + 0x28)
    var_28 = 0
    int32_t var_20_1 = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&var_28, rbx, 0)
        memcpy(var_28, rsi_1, rbx * 2)
        rdx = &var_28
        rbx_1 = 1
    else
        rdx = &var_28
        int32_t var_1c_1 = 0
        rbx_1 = 1

sub_140596d10(arg2, rdx)

if ((rbx_1.b & 2) != 0)
    uint64_t rcx_3 = var_18
    rbx_1 &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rbx_1.b & 1) != 0)
    uint64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
