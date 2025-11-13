// 函数: sub_141763250
// 地址: 0x141763250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
int32_t* r9 = *(**arg1 + (sx.q(arg2) << 3))
void* rdx_1 = arg1[1]
int32_t zmm1 = *(rdx_1 + 0x74)
int64_t var_30 = *(rdx_1 + 0x58)
int32_t* rax_2 = arg1[2]
int32_t var_38 = *(rdx_1 + 0x70)
int32_t var_34 = zmm1
int32_t* rax_3 = arg1[3]
int32_t var_28 = *rax_2
int32_t var_24 = *rax_3
int64_t rdx_2 = *(r9 + 8)
int32_t var_1c = *(rdx_1 + 0x6c)
int32_t var_20 = *arg1[4]
int32_t rcx_2 = r9[4]
int64_t var_10 = arg1[5]
int64_t rax_7 = sx.q(*r9)
float (* rcx_4)[0x4]

if (rcx_2 == 1)
    rcx_4 = rax_7 * 0xe0 + *(rdx_2 + 0x10)
else if (rcx_2 != 2)
    rcx_4 = rax_7 * 0x140 + *(rdx_2 + 0x30)
else
    rcx_4 = rax_7 * 0xe0 + *(rdx_2 + 0x20)

return sub_14176cd70(rcx_4, arg1[6], &var_28, &var_38)
