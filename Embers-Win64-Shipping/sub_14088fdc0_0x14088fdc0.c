// 函数: sub_14088fdc0
// 地址: 0x14088fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x11a) u<= 0
int64_t rbp = *(arg2 + 0x1b0)
int64_t arg_8 = rbp

if (not(cond:0))
    void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint32_t r12_1 = zx.d(*(arg1 + 0x118))
    void* rax_1 = &r8_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r8_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r8_2
    *(arg2 + 8) = &r8_2[1]
    r8_2[1] = 0
    r8_2[3].d = r12_1
    *r8_2 = &data_142d99560
    r8_2[2] = rbp
    r8_2[4] = arg3

int32_t var_34 = arg5
int32_t var_38 = arg4
int32_t var_30 = arg5 + arg4
int32_t var_2c = 0
return sub_14077c870(arg2, &arg_8, arg1 + 0x12c, &var_38, 0)
