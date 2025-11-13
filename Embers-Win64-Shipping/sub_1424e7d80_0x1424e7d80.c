// 函数: sub_1424e7d80
// 地址: 0x1424e7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_28

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
float var_18[0x4]
float (* result)[0x4] = sub_140ade170(rcx_1, &var_18)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(data_143f65c20, data_143f65be0)
float zmm2[0x4] = var_18
arg3[2] = temp0
*arg3 = zmm2
arg3[1] = zx.o(0)
return result
