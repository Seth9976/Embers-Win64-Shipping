// 函数: sub_14119c160
// 地址: 0x14119c160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_141193740(arg1, &arg2[2], u"ShaderDrawDebugDataBuffer", 0)
void*** rax_1 = sub_141193740(arg1, &arg2[4], u"ShaderDrawDebugIndirectDataBuffer", 0)
*arg3 = *arg2
arg3[1] = arg2[1]
int32_t rdx_3 = *(data_143e6a848 + 4)

if (rdx_3 s<= 1)
    rdx_3 = 1

arg3[2] = rdx_3
int32_t rax_2 = 0

if ((rax[7].d & 0x100) != 0)
    rax_2 = 0x1c

int16_t var_2c = 0
int32_t var_30 = rax_2
void*** rax_3 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1] = rax[1]
    rax_3[2] = 0
    *(rax_3 + 0x18) = rax.o
    *rax_3 = &data_142f285c0

*(arg3 + 0x10) = rax_3
int32_t rax_4 = 0

if ((rax_1[7].d & 0x100) != 0)
    rax_4 = 0x1c

int16_t var_2c_1 = 0
int32_t var_30_1 = rax_4
void*** result = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (result == 0)
    *(arg3 + 0x18) = 0
else
    result[1] = rax_1[1]
    result[2] = 0
    *(result + 0x18) = rax_1.o
    *result = &data_142f285c0
    *(arg3 + 0x18) = result

return result
