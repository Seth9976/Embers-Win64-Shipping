// 函数: sub_142c9d880
// 地址: 0x142c9d880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rsi = *(arg2 + 0x110)
void* rcx = *rsi
int128_t* rdi = *(arg2 + 0xd8)
int128_t* r9 = rcx + 8

if (rcx == 0)
    r9 = rdi

void* rbx = *(arg2 + 0xd0)
sub_14058f370(rbx, *(arg2 + 0x68), "Fail to start video record ", r9)

if (*(rbx + 0x148) == 0)
    *(rbx + 0x148) = 1
    int128_t* rax_1 = *(arg2 + 0x108)
    *(arg2 + 0x70) = *rax_1
    *(arg2 + 0x80) = rax_1[1].q
    sub_140591af0(rbx, rdi, *(arg2 + 0xe0), *(arg2 + 0xe8), *(arg2 + 0xf0), *(arg2 + 0xf8), 
        *(arg2 + 0x100), arg2 + 0x70, rsi)
    *(rbx + 0x148) = 0

return 0
