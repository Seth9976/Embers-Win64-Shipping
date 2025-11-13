// 函数: sub_1423f48c0
// 地址: 0x1423f48c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10 = arg2
uint64_t r10_2 = zx.q(arg2.d) & 0xffffff

if (r10_2.d s>= *(arg1 + 0x10))
    return 

void* rax_1 = *(arg1 + 0x28)
void* r9_1 = arg1 + 0x18

if (rax_1 != 0)
    r9_1 = rax_1

if (not(test_bit(*(r9_1 + (zx.q(r10_2.d) u>> 5 << 2)), r10_2.d & 0x1f)))
    return 

void* rcx_4 = r10_2 * 0x90 + *(arg1 + 8)

if (*(rcx_4 + 0x70) != arg2 || *(rcx_4 + 1) != 2)
    return 

if (*(arg1 + 0x150) == data_143de5458)
    double zmm0 = *(arg1 + 0x140) f+ *(rcx_4 + 8)
    *(rcx_4 + 1) = 1
    void* var_18 = arg1 + 8
    *(rcx_4 + 8) = zmm0
    int32_t var_10 = *(arg1 + 0x10) - *(arg1 + 0x3c)
    sub_1423cd1b0(arg1 + 0x40, &arg_10, &var_18)
    sub_1423ebfb0(arg1 + 0x50, &arg_10)
    return 

*(rcx_4 + 1) = 0
void arg_18
sub_1423ccbd0(arg1 + 0xa0, &arg_18, &arg_10, nullptr)
sub_1423ebfb0(arg1 + 0x50, &arg_10)
