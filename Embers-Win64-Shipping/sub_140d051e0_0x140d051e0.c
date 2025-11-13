// 函数: sub_140d051e0
// 地址: 0x140d051e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t arg_10 = 0
uint64_t var_28 = 0
int32_t var_20
uint64_t rsi_1
int32_t rdi_1

if (arg3 == 0)
    rsi_1 = 0
    var_20 = 0
    rbx = var_28
    rdi_1 = 2
else
    int32_t rdi = arg3[1].d
    int64_t rsi = *arg3
    var_20 = rdi
    
    if (rdi != 0)
        sub_1405a4c70(&var_28, rdi, 0)
        rbx = var_28
        memcpy(rbx, rsi, rdi * 2)
        rsi_1 = var_28
        rdi_1 = 1
    else
        var_20 = 0
        rdi_1 = 1
        rsi_1 = 0

int16_t* const rcx_2 = &data_142d40450
int16_t* rdx_2

rdx_2 = var_20 == 0 ? &data_142d40450 : var_28

if (arg2[1].d != 0)
    rcx_2 = *arg2

int64_t rbp
rbp.b = sub_140a54510(rcx_2, rdx_2) == 0

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

if ((rdi_1.b & 1) != 0 && rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rbp.b)
