// 函数: sub_14104d420
// 地址: 0x14104d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 0x28)
void* rbx = *(arg1 + 0x28)
void* rdx = r8 + 0x28

if (r8 == 0)
    rdx = arg2 + 0x30

if (data_1439b4ad4 != 0 && rdx != 0 && *(rdx + 8) != 0)
    sub_141026da0(*(*(rbx + 0x1c8) + 0x118), rdx)

int64_t* rcx_2 = *(*(rbx + 0x1c8) + 0x30)
int64_t result = (*(*rcx_2 + 0x158))(rcx_2, arg1 + 0x628)

if (*(arg2 + 0xfc) == 0)
    return result

return sub_141037220(rbx + 0x1c0, arg2, 2, 0xffffffff)
