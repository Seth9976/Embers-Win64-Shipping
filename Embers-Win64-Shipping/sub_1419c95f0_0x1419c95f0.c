// 函数: sub_1419c95f0
// 地址: 0x1419c95f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg2

if ((rbp.b & 1) != 0)
    rbp = (rbp s>> 1) + arg2

if (rbp == 0)
    *arg4 = 0
    return 

sub_1419d9d10()
int64_t* rbx = *arg1
void* rax

if ((*(rbp + 0xf8) & 1) == 0)
    rax = *(rbp + 0xf8)
else
    sub_1419c1a30()
    int64_t r9 = *rbx
    rax = (*(r9 + 0x10))(rbx, &data_143f21220, *(rbp + 0xf8) u>> 1, r9)

void* rsi = *(rax + 0x10)
uint64_t rbx_1 = zx.q(sub_140b50e40(rsi, &data_143f20ee0))
int64_t rax_2 = sub_140a82f30(zx.q(*(rsi + 0x58)), zx.q(*(rsi + 0x60)))
(*(rsi + 0x28))(arg1, rbp - rbx_1, rsi, rax_2)
*arg4 = rbx_1 + rax_2
