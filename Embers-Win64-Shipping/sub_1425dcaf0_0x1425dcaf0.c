// 函数: sub_1425dcaf0
// 地址: 0x1425dcaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a387e0()
void* r8 = arg1 + 0x10
void* r9 = data_14399e720

if (arg1 == 0)
    r8 = nullptr

(*(r9 + 0x20))(&data_14399e720, data_143f376e8, r8, r9)
int64_t* rcx = *(arg1 + 0x18)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = *(arg1 + 0x10)
*(arg1 + 0x18) = 0
int64_t result = NvClothDestroyFactory(rcx_1)
HMODULE hLibModule = *(arg1 + 0x20)

if (hLibModule == 0)
    return result

return FreeLibrary(hLibModule)
