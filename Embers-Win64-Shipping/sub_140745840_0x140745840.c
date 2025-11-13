// 函数: sub_140745840
// 地址: 0x140745840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d20910()
Concurrency::task_canceled::task_canceled(arg1)
void*** rdi = nullptr
arg1[5] = 0
*arg1 = &data_142d9f388
arg1[6] = 0
arg1[7].d = 0x200
*(arg1 + 0x3c) = 0x41a00000
void*** rax_1 = j_sub_140a82f30(0x260)

if (rax_1 != 0)
    rdi = sub_140744830(rax_1, arg1[7].d, *(arg1 + 0x3c))

int64_t* rcx_2 = arg1[5]
arg1[5] = rdi

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

return arg1
