// 函数: sub_1419c9d30
// 地址: 0x1419c9d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg2

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + arg2

if (rbx == 0)
    return sub_140b56590(arg1, 0) __tailcall

sub_1419d9d10()
int64_t* rax = sub_140b55c80(arg1)
void* rax_1

if ((*(rbx + 0xf8) & 1) == 0)
    rax_1 = *(rbx + 0xf8)
else
    sub_1419c1a30()
    int64_t r9_1 = *rax
    rax_1 = (*(r9_1 + 0x10))(rax, &data_143f21220, *(rbx + 0xf8) u>> 1, r9_1)

void* rsi_1 = *(rax_1 + 0x10)
uint64_t rbp = zx.q(sub_140b50e40(rsi_1, &data_143f20ee0))
int64_t var_18
sub_140a2e390(&var_18, u"TMemoryImagePtr<%s>", *(rsi_1 + 8))
void arg_10
sub_140b56840(arg1, &arg_10, &var_18, rbp.d)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140b565a0(&arg_10, rbx - rbp, rsi_1)
