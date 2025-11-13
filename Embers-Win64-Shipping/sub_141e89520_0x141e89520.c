// 函数: sub_141e89520
// 地址: 0x141e89520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f39be1 == 0)
    return 

int128_t var_18 = zx.o(0)
sub_141e75650(&var_18)
sub_141e8d480(&var_18)
data_143f39bf0 = data_143de547c
data_143de547c = 0
data_143f39be2 = 1
int64_t* rbx_1 = var_18:8.q
data_143f39be1 = 0

if (rbx_1 != 0)
    (*(*rbx_1 + 0x20))(rbx_1, 0xffffffff, 0)
    sub_140a4fc50(rbx_1)

void* rcx_5 = var_18.q

if (rcx_5 == 0)
    return 

int32_t rax = *(rcx_5 + 0x48)
*(rcx_5 + 0x48) -= 1

if (rax == 1)
    return sub_140a2f6e0(var_18.q) __tailcall
