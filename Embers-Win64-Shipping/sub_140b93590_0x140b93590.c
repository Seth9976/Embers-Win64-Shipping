// 函数: sub_140b93590
// 地址: 0x140b93590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0
void* rax = sub_140cde0b0()
void* result = sub_140d2d830(sub_140baa6d0(), rax, 0, 0x510, 0, 0, nullptr)

if (result == 0)
    return nullptr

sub_140cd40d0(result)
*result = &data_142e828b0
*(result + 0x28) = 0
*(result + 0x30) = 0
InitializeCriticalSection(result + 0x38)
SetCriticalSectionSpinCount(result + 0x38, 0xfa0)
*(result + 0x60) = 0
*(result + 0x68) = 0
return result
