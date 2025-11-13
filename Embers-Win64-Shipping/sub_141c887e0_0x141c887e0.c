// 函数: sub_141c887e0
// 地址: 0x141c887e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int32_t var_10 = 0
uint64_t result = sub_141c8c030(arg1 + 0x28, arg2, &var_18)
uint64_t rsi = var_18

if (*(arg1 + 0x80) != 0)
    uint64_t rbx_1 = rsi
    int64_t rdi_3 = (sx.q(var_10) << 4) + rsi
    
    if (rsi != rdi_3)
        do
            int64_t* rcx_1 = *(arg1 + 0x80)
            result = (*(*rcx_1 + 0x48))(rcx_1, rbx_1)
            rbx_1 += 0x10
        while (rbx_1 != rdi_3)

if (rsi == 0)
    return result

return sub_140a74f90(rsi) __tailcall
