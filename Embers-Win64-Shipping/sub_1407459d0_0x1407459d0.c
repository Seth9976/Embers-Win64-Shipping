// 函数: sub_1407459d0
// 地址: 0x1407459d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d20910()
Concurrency::task_canceled::task_canceled(arg1)
void*** rdi = nullptr
arg1[5] = 0
*arg1 = &data_142d9f008
arg1[6] = 0
void*** rax_1 = j_sub_140a82f30(0x1e0)

if (rax_1 != 0)
    rdi = sub_140744cf0(rax_1, 0x4000)

int64_t* rcx_2 = arg1[5]
arg1[5] = rdi

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

return arg1
