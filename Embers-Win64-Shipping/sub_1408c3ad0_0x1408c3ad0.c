// 函数: sub_1408c3ad0
// 地址: 0x1408c3ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d != 1)
    return 

int64_t* rax_1 = *arg2
uint64_t _String_1 = 0
int32_t rdi_1 = rax_1[1].d
int64_t rsi_1 = *rax_1
uint64_t _String_2 = 0

if (rdi_1 != 0)
    sub_1405a4c70(&_String_2, rdi_1, 0)
    _String_1 = _String_2
    memcpy(_String_1, rsi_1, rdi_1 * 2)

uint64_t _String = &data_142d40450

if (rdi_1 != 0)
    _String = _String_1

data_143ceb920 = _wtoi(_String) == 1

if (_String_1 != 0)
    sub_140a74f90(_String_1)
