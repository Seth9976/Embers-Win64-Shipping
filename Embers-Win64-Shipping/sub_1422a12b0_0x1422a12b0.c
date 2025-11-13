// 函数: sub_1422a12b0
// 地址: 0x1422a12b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint64_t var_28
int64_t var_18
int64_t* rax_1
int32_t rbx

if (*(arg1 + 0x22a) s>= 0)
    int32_t rbx_1 = arg1[0x61].d
    int64_t rsi_1 = arg1[0x60]
    var_28 = 0
    int32_t var_20_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_28, rbx_1, 0)
        memcpy(var_28, rsi_1, rbx_1 * 2)
    else
        int32_t var_1c_1 = 0
    
    rax_1 = &var_28
    rbx = 2
else
    rax_1 = (*(*arg1 + 0x680))(arg1, &var_18)
    rbx = 1

sub_140596d10(arg2, rax_1)

if ((rbx.b & 2) != 0)
    uint64_t rcx_3 = var_28
    rbx &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rbx.b & 1) != 0)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
