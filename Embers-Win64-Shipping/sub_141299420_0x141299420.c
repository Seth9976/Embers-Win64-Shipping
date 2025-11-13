// 函数: sub_141299420
// 地址: 0x141299420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1411463f0(arg2, arg4)
int64_t* rcx_1 = *(*arg2 + 0x20)
void* rax_2

if (rcx_1 != 0)
    rax_2 = (*(*rcx_1 + 0x248))(rcx_1)

void* const rax_3

if (rcx_1 == 0 || rax_2 == 0)
    rax_3 = nullptr
else
    rax_3 = sub_1413e9440(rax_2)

sub_1412998b0(arg2, rax_3, &arg4[0xa])
sub_1413aa7b0(&data_143ec4c60, zx.q(arg2[0x2a9].d), arg3, (*(arg2 + 0x497c) u>> 0xb).b & 1, 
    &arg4[0x1f])

if (sub_1414207f0(arg2) != 0 && sub_14141f470(arg2) != 0)
    *(arg4 + 0x248) = *(sub_14141f470(arg2) + 8)

arg4[0x25].q = *(data_1439b7100 + 0x10)
int64_t result = data_14395f4d0
*(arg4 + 0x258) = result
return result
