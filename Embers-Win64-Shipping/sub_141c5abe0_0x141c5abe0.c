// 函数: sub_141c5abe0
// 地址: 0x141c5abe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rsi = arg3.d
int64_t var_28 = 0
int32_t var_1c = 0

if (arg1 s> 8 || arg3.d s> 8)
    int32_t rdi_2 = arg1 * rsi
    int32_t var_20_1 = rdi_2
    
    if (rdi_2 s> 0)
        sub_140775270(&var_28)
        rbx = var_28
    
    memset(rbx, 0, sx.q(rdi_2) << 2)
else
    int64_t* r8_3 = ((sx.q(arg1 + (arg3 << 3).d) - 9) << 4) + data_143f34e00
    int64_t rdi = sx.q(r8_3[1].d)
    int64_t rbp_1 = *r8_3
    int32_t var_20 = rdi.d
    
    if (rdi.d != 0)
        sub_141c457d0(&var_28, rdi.d, 0)
        rbx = var_28
        memcpy(rbx, rbp_1, (rdi << 2).d)

uint64_t result = sub_141c36c90(arg1, rsi, arg2, arg4, rbx)

if (rbx == 0)
    return result

return sub_140a74f90(rbx) __tailcall
