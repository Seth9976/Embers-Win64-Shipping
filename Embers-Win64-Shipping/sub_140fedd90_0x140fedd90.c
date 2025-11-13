// 函数: sub_140fedd90
// 地址: 0x140fedd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void* rbx = nullptr
int64_t* rsi = *arg3
void* rdi

if (rcx != 0)
    rdi = (*(*rcx + 0x48))(rcx)
else
    rdi = nullptr

if (rsi != 0)
    rbx = (*(*rsi + 0x48))(rsi)

if (rdi != 0 && rbx != 0)
    sub_140fdc700(rdi, rbx)
