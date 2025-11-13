// 函数: sub_140902950
// 地址: 0x140902950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x70)
int32_t arg_8 = 0
uint64_t rsi = 0
uint64_t var_38
uint64_t var_28
uint64_t* rcx
int32_t rbx_1

if (rax == 0)
    int64_t var_20_1 = 0
    rcx = &var_28
    rbx_1 = 2
else
    int32_t rbx = *(rax + 0xc8)
    int64_t rbp_1 = *(rax + 0xc0)
    var_38 = 0
    int32_t var_30_1 = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&var_38, rbx, 0)
        rsi = var_38
        memcpy(rsi, rbp_1, rbx * 2)
        rcx = &var_38
        rbx_1 = 1
    else
        rcx = &var_38
        int32_t var_2c_1 = 0
        rbx_1 = 1

*rcx = 0
int32_t rax_1 = rcx[1].d
*arg2 = rsi
arg2[1].d = rax_1
int32_t rax_2 = *(rcx + 0xc)
rcx[1] = 0
*(arg2 + 0xc) = rax_2

if ((rbx_1.b & 2) != 0)
    uint64_t rcx_3 = var_28
    rbx_1 &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rbx_1.b & 1) != 0)
    uint64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
