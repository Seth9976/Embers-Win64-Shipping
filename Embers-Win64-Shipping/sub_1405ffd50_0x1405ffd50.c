// 函数: sub_1405ffd50
// 地址: 0x1405ffd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* arg_8 = arg1 + 0xa0
EnterCriticalSection(arg1 + 0xa0)
sub_1405fd9c0(**(arg1 + 0x10), 0)
int64_t* rcx_2 = *(arg1 + 0x160)

if (rcx_2 != 0)
    sub_1405fdc30(*rcx_2, 0)

int64_t* rcx_4 = *(arg1 + 0x168)

if (rcx_4 != 0)
    sub_1405fdad0(*rcx_4, 0)

*(arg1 + 0x148) = -1
*(arg1 + 0x150) = -1
sub_1405f5320(arg1 + 0x50, 0)
sub_1405f5320(arg1 + 0x130, 0)
sub_1405f5320(arg1 + 0x90, 0)
int64_t result = sub_1405f5320(arg1 + 0x1b0, 0)
*(arg1 + 0xd0) = 0

if (*(arg1 + 0xd4) != 0)
    result = sub_1405947f0(arg1 + 0xc8, 0)

int64_t* rcx_11 = *(arg1 + 0xe8)

if (rcx_11 != 0)
    result = (*(*rcx_11 + 0x60))(rcx_11)
    int64_t* rcx_12 = *(arg1 + 0xe8)
    
    if (rcx_12 != 0)
        result = (*(*rcx_12 + 0x10))(rcx_12)
        *(arg1 + 0xe8) = 0

int64_t* rcx_13 = *(arg1 + 0x140)

if (rcx_13 != 0)
    result = (*(*rcx_13 + 0x10))(rcx_13)
    *(arg1 + 0x140) = 0

*(arg1 + 0xf0) = 0
*(arg1 + 0x158) = 0

if (arg1 == -0xa0)
    return result

return LeaveCriticalSection(arg1 + 0xa0)
