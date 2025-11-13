// 函数: sub_141c9a300
// 地址: 0x141c9a300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141c9fe70(arg1 + 0x190, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 0x190)

int64_t* rcx_1 = rax_3 + 0x20

if (rax_3 == 0)
    rcx_1 = nullptr

if (rcx_1 != 0)
    int128_t* rax_4 = *rcx_1
    
    if (rax_4 != 0)
        return rax_4

int128_t* rax_5 = j_sub_140a82f30(0x80)

if (rax_5 == 0)
    rax_5 = nullptr
else
    *rax_5 = *arg2
    rax_5[1] = *(arg2 + 0x10)
    __builtin_memset(&rax_5[2], 0, 0x60)

*(arg1 + 0x264) += 1
int128_t* arg_18 = rax_5
int64_t* var_28 = arg2
int128_t** var_20_1 = &arg_18
sub_141c8ff10(arg1 + 0x190, &arg_8, &var_28, nullptr)
return arg_18
