// 函数: sub_1419c8e30
// 地址: 0x1419c8e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1

if ((rdi.b & 1) != 0)
    rdi = (rdi s>> 1) + arg1

if (rdi == 0)
    return sub_140b4d910(arg4) __tailcall

sub_1419d9d10()
int64_t* rbx = arg4[1]
void* rax

if ((*(rdi + 0xf8) & 1) == 0)
    rax = *(rdi + 0xf8)
else
    sub_1419c1a30()
    int64_t r9 = *rbx
    rax = (*(r9 + 0x10))(rbx, &data_143f21220, *(rdi + 0xf8) u>> 1, r9)

void* rbx_1 = *(rax + 0x10)
sub_140b50e40(rbx_1, &data_143f20ee0)
jump(*(rbx_1 + 0x40))
