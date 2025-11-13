// 函数: sub_140feddf0
// 地址: 0x140feddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
void* rdi

if (arg2 != 0)
    rdi = (*(*arg2 + 0x48))(arg2)
else
    rdi = nullptr

if (arg3 != 0)
    rbx = (*(*arg3 + 0x48))(arg3)

if (rdi != 0 && rbx != 0)
    sub_140fdc700(rdi, rbx)
