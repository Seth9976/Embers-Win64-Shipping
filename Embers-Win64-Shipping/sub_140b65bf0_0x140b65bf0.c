// 函数: sub_140b65bf0
// 地址: 0x140b65bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = data_143de5432

if (data_143e18649 == 0)
    sub_140afef00()
    sub_140599090(&data_14399ff88)
    data_143e18649 = 1

char rax_1

if (arg1 == 0)
    rax_1 = sub_140a4aa30()

if (arg1 != 0 || rax_1 != 0)
    rbx = 1

sub_140b19e60()
sub_140b19e60()
void* rdx_1 = data_1439a8bd0
(*(rdx_1 + 0x18))(&data_1439a8bd0, rdx_1)
int64_t* rcx_1 = data_143ddb418

if (rcx_1 != 0)
    (*(*rcx_1 + 0x18))(rcx_1)

int64_t* rcx_2 = data_143de5de8

if (rcx_2 != 0)
    (*(*rcx_2 + 0x18))(rcx_2)

if (rbx == 0)
    return 1

TerminateProcess(GetCurrentProcess(), 0xc000013a)
noreturn
