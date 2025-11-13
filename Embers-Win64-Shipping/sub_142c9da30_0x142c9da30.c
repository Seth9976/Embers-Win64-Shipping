// 函数: sub_142c9da30
// 地址: 0x142c9da30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int128_t* rbx = *(arg2 + 0x50)
void* rdi = *(arg2 + 0x20)
sub_14058f370(rdi, *(arg2 + 0x28), "Fail to save screenshot "", rbx)

if (*(rdi + 0x148) == 0)
    *(rdi + 0x148) = 1
    *(arg2 + 0x30) = *rbx
    *(arg2 + 0x40) = rbx[1]
    rbx[1].q = 0
    *(rbx + 0x18) = 7
    *rbx = 0
    sub_1405921a0(rdi, arg2 + 0x30)
    *(rdi + 0x148) = 0

return 0
