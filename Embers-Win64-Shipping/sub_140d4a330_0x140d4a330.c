// 函数: sub_140d4a330
// 地址: 0x140d4a330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_20 = nullptr
int32_t var_18 = 0
void* rax = sub_140ce37a0(*arg2, &var_20, 0)
int16_t** rbx

if (rax != 0)
    int16_t* const rdx_1 = &data_142d40450
    *arg2 = rax
    
    if (var_18 != 0)
        rdx_1 = var_20
    
    int64_t var_28
    sub_140b58260(&var_28, rdx_1, 1)
    *arg1 = var_28
    sub_140d6e260(arg1)
    rbx.b = 1
else
    rbx.b = 0

int16_t* rcx_3 = var_20

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rbx.b)
