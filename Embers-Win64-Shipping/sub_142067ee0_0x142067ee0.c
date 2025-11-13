// 函数: sub_142067ee0
// 地址: 0x142067ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (arg2 s< 0 || rdi.d s>= arg1[0x94].d || arg3[1].d == 0)
    int64_t result
    result.b = 0
    return result

char rax = arg1[0xbc].b

if ((rax & 1) != 0)
    arg1[0xbc].b = rax | 4

int32_t rsi

if (rdi.d s>= arg1[0x9b].d)
    rsi = rdi.d
else
    rsi = *(arg1[0x9a] + (rdi << 2))

char rax_2 = sub_1420a3110(arg1, rdi.d, arg3, arg4)

if (rax_2 != 0 && arg1[0x88] != 0 && rsi != 0xffffffff)
    int64_t rbp_1 = sx.q(arg1[0x95].d)
    int64_t var_18 = 0
    int32_t var_10_1 = rbp_1.d
    int64_t rdi_1 = arg1[0x96] + (sx.q(rbp_1.d * rdi.d) << 2)
    
    if (rbp_1.d != 0)
        sub_140638750(&var_18, rbp_1.d, 0)
        memcpy(var_18, rdi_1, (rbp_1 << 2).d)
    else
        int32_t var_c_1 = 0
    
    sub_1420a3090(&arg1[0x9f], rsi, &var_18)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return zx.q(rax_2)
