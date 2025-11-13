// 函数: sub_14266ce10
// 地址: 0x14266ce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if ((*(rcx + 0xb0) & 1) != 0)
    return &__return_addr

int32_t var_48
uint128_t var_40
char rax = sub_142659330(rcx, arg2, &var_48, &var_40)
int32_t rsi_1 = arg4 | 4
sub_14266b610(arg1, arg2, arg3, rsi_1)
int32_t arg_8
sub_142664630(arg1, &arg_8, arg2, arg3, rsi_1)
int64_t rcx_3 = sx.q(arg_8)

if (rcx_3.d != 0xffffffff)
    void* rdx_4 = (rcx_3 << 6) + **arg1
    bool cond:0_1 = *(rdx_4 + 0x30) == 0
    *(rdx_4 + 0x14) = var_48
    int64_t var_30
    int32_t var_28
    
    if (cond:0_1)
        *(rdx_4 + 0x18) = var_40
        *(rdx_4 + 0x28) = var_30
        *(rdx_4 + 0x30) = var_28
    else if (var_28.b != 0)
        float temp0_1[0x4] = __minss_xmmss_memss((*(rdx_4 + 0x18))[0], var_40.d)
        int64_t temp0_2 = __minss_xmmss_memss((*(rdx_4 + 0x1c)).d, var_40:4.d)
        *(rdx_4 + 0x18) = temp0_1[0]
        float temp0_3[0x4] = __minss_xmmss_memss(var_40:8.d[0], *(rdx_4 + 0x20))
        *(rdx_4 + 0x1c) = temp0_2.d
        int64_t temp0_4 = __maxss_xmmss_memss((*(rdx_4 + 0x24)).d, var_40:0xc.d)
        *(rdx_4 + 0x20) = temp0_3[0]
        float temp0_5[0x4] = __maxss_xmmss_memss(var_30.d[0], *(rdx_4 + 0x28))
        *(rdx_4 + 0x24) = temp0_4.d
        int64_t temp0_6 = __maxss_xmmss_memss((*(rdx_4 + 0x2c)).d, var_30:4.d)
        *(rdx_4 + 0x28) = temp0_5[0]
        *(rdx_4 + 0x2c) = temp0_6.d
    *(rdx_4 + 0x34) &= 0xfe
    *(rdx_4 + 0x34) |= rax

return sub_14266d3d0(arg1, arg2, 1)
