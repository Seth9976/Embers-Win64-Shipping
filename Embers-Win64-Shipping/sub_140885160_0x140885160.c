// 函数: sub_140885160
// 地址: 0x140885160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140b55c80(arg1)
int64_t* rcx_1

if ((*arg2 & 1) == 0)
    rcx_1 = *arg2
else
    sub_1406edca0()
    int64_t r9_1 = *rax
    rcx_1 = (*(r9_1 + 0x10))(rax, &data_143cdf8c8, *arg2 u>> 1, r9_1)

void* rax_3 = (*(*rcx_1 + 0x268))(rcx_1)
void* rbx_1 = *arg3

if ((rbx_1.b & 1) != 0)
    rbx_1 = (rbx_1 s>> 1) + arg3

if (rbx_1 == 0)
    return sub_140b56590(arg1, 0)

sub_1406edef0()
uint64_t rdi_1 = zx.q(sub_140b50e40(rax_3, &data_143cdf860))
int64_t var_28
sub_140a2e390(&var_28, u"TMemoryImagePtr<%s>", *(rax_3 + 8))
void arg_10
sub_140b56840(arg1, &arg_10, &var_28, rdi_1.d)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140b565a0(&arg_10, rbx_1 - rdi_1, rax_3)
