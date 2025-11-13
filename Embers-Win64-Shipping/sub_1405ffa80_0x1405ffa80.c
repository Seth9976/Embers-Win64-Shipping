// 函数: sub_1405ffa80
// 地址: 0x1405ffa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*(arg1 + 0x60) == 0)
    return 

void* arg_8 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)

if (*(arg1 + 0xa0) != 0)
    *(arg1 + 0xa0) = 0

if (*(arg1 + 0xb8) != 0)
    *(arg1 + 0xb8) = 0

int64_t* rcx_1 = *(arg1 + 0xa8)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)
    *(arg1 + 0xa8) = 0

*(arg1 + 0x78) = 0
*(arg1 + 0xd0) = 1

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

if (*(arg1 + 0xc4) != 1)
    int64_t* rcx_3 = *(arg1 + 0x60)
    
    if ((*(*rcx_3 + 0x60))(rcx_3) == 0)
        int64_t* rcx_4 = *(arg1 + 0x68)
        (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)

arg_8 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
int64_t* rcx_6 = *(arg1 + 0x60)
(*(*rcx_6 + 0x68))(rcx_6)
int64_t* rcx_7 = *(arg1 + 0x60)

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7)
    *(arg1 + 0x60) = 0

int64_t* rcx_8 = *(arg1 + 0x48)

if (rcx_8 != 0)
    (*(*rcx_8 + 0x10))(rcx_8)
    *(arg1 + 0x48) = 0

int64_t* rcx_9 = *(arg1 + 0x80)

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)
    *(arg1 + 0x80) = 0

int64_t* rcx_10 = *(arg1 + 0x88)

if (rcx_10 != 0)
    (*(*rcx_10 + 0x10))(rcx_10)
    *(arg1 + 0x88) = 0

int64_t* rcx_11 = *(arg1 + 0x90)

if (rcx_11 != 0)
    (*(*rcx_11 + 0x10))(rcx_11)
    *(arg1 + 0x90) = 0

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0x70) = 0

if (*(arg1 + 0xa0) != 0)
    *(arg1 + 0xa0) = 0

*(arg1 + 0xcc) = 0
*(arg1 + 0xe0) = 0

if (*(arg1 + 0xe4) != 0)
    sub_1405a5410(arg1 + 0xd8, 0)

*(arg1 + 0xf0) = 0

if (*(arg1 + 0xf4) != 0)
    sub_1405a5410(arg1 + 0xe8, 0)

*(arg1 + 0xd0) = 0

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)
