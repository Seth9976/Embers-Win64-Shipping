// 函数: sub_14200a320
// 地址: 0x14200a320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142009780(arg1, arg2, arg3, arg4, arg5)

if (rax == 0)
    return rax

sub_1408d9160(arg2, arg1 + 0x98, arg5)
sub_1408d9160(arg2, arg1 + 0xa4, arg5)
int64_t* rcx_2 = arg2[1]
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    int32_t rax_3
    rax_3.b = *(arg1 + 0xb0) != 0
    int32_t var_18 = rax_3
    (*(*arg2 + 0x150))(arg2, &var_18, 4)
    *(arg1 + 0xb0) = var_18 != 0
else
    void* rax_1
    rax_1.b = *rdx_2 != 0
    *(arg1 + 0xb0) = rax_1.b
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4

(*(*arg2 + 0x130))(arg2, arg1 + 0xb8)
int64_t rax_7
rax_7.b = 1
*arg4 = 1
return rax_7
