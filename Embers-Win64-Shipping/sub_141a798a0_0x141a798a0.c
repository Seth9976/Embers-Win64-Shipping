// 函数: sub_141a798a0
// 地址: 0x141a798a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int64_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdx_2 = arg_10
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
void* result = sub_141a4a590(arg1, rdx_2)

if (arg3 == result)
    return result

int64_t rbx_1 = sx.q(*(result + 8))
int64_t rsi_1 = *result
int32_t r8_2 = *(arg3 + 0xc)
arg3[1].d = rbx_1.d

if (rbx_1.d == 0 && r8_2 == 0)
    *(arg3 + 0xc) = rbx_1.d
    return result

sub_140808f70(arg3, rbx_1.d, r8_2)
return memcpy(*arg3, rsi_1, (rbx_1 * 0x18).d)
