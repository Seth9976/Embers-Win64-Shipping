// 函数: sub_14097e9f0
// 地址: 0x14097e9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = arg1[0x47]
uint64_t r14_1 = sx.q(arg1[0x48].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x48]])
    r14_1 = 0

if (r14_1 != 0)
    do
        (*(*arg1 + 0x638))(arg1, *rbx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != r14_1)

jump(*(*arg1 + 0x440))
