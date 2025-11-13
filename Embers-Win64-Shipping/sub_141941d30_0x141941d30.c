// 函数: sub_141941d30
// 地址: 0x141941d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2

if (data_143f01c92 != 0)
    sub_140a80f40()
    
    if (data_143f01c92 != 0)
        sub_140a80f40()

arg2.b = 1
void* rax = sub_14190d690(arg1, arg2.b)
int32_t r9 = *(arg3 + 0x84)
int32_t r8_1 = data_1439c7498 - 1
int32_t rdx = *(arg3 + 0x80)
int64_t rax_1 = sx.q(r8_1) * 5
int64_t rcx_2 = *(rax + 8)

if (*(rcx_2 + (rax_1 << 3) + 0x10) != r9 || *(rcx_2 + (rax_1 << 3) + 0x14) != rdx)
    int32_t var_48_1 = *(arg3 + 0x34)
    sub_14190a090(arg1, rax, r8_1, r9, rdx, 0)

if (*(rax + 0x428) != 0)
    data_143effcd8(0x88ec, 0)
    *(rax + 0x428) = 0

float* arg_28
float* rax_3 = arg_28
int32_t r13 = int.d(fconvert.t(*arg4))
int32_t r15 = int.d(fconvert.t(*rax_3))
int32_t r12 = int.d(fconvert.t(rax_3[1]))
int32_t r14_1 = int.d(fconvert.t(arg4[1]))
int32_t rcx_4 = int.d(rax_3[2] - *rax_3)
int32_t rax_4 = int.d(rax_3[3] - rax_3[1])
int64_t rsi_1

if (rsi == 0)
    rsi_1 = 0
else
    rsi_1 = rsi + 0x70

int64_t arg_20 = rsi_1
arg_28.d = 0
int32_t var_58
var_58.q = &arg_28
data_143f000f8(0x8d40, zx.q(sub_14193c970(arg1, 1, &arg_20, nullptr, var_58, nullptr)))
data_143effae0(0x8ce0)
int64_t result =
    data_143eff9b8(zx.q(*(arg3 + 0x84)), 0, zx.q(r15), zx.q(r12), r13, r14_1, rcx_4, rax_4)
*(rax + 0x188) = 0xffffffff
return result
