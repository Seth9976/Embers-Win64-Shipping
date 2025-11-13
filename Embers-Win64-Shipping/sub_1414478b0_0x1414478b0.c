// 函数: sub_1414478b0
// 地址: 0x1414478b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140b55c80(arg1)
int64_t rax_1

if ((*(arg2 + 0x100) & 1) == 0)
    rax_1 = *(arg2 + 0x100)
else
    sub_1419c1ad0()
    int64_t r9_1 = *rax
    rax_1 = (*(r9_1 + 0x10))(rax, &data_143f21288, *(arg2 + 0x100) u>> 1, r9_1)

void* rax_2 = (*(rax_1 + 0x38))(*(arg2 + 0x108) & 0xf)
void* rbx_1 = *arg3

if ((rbx_1.b & 1) != 0)
    rbx_1 = (rbx_1 s>> 1) + arg3

if (rbx_1 == 0)
    return sub_140b56590(arg1, 0)

sub_1419db4f0()
uint64_t rdi_1 = zx.q(sub_140b50e40(rax_2, &data_143f21a18))
int64_t var_28
sub_140a2e390(&var_28, u"TMemoryImagePtr<%s>", *(rax_2 + 8))
void arg_10
sub_140b56840(arg1, &arg_10, &var_28, rdi_1.d)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140b565a0(&arg_10, rbx_1 - rdi_1, rax_2)
