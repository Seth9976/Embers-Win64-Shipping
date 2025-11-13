// 函数: sub_141c326e0
// 地址: 0x141c326e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb8)

if (rcx != 0)
    if (rcx[5] != 0)
        int64_t* rcx_1 = rcx[4]
        (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)
        rcx[5] = 0
        rcx = *(arg1 + 0xb8)
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx, 1)

DeleteCriticalSection(arg1 + 0x88)
int64_t result = sub_140846380(arg1 + 0x70)
int64_t rcx_4 = *(arg1 + 0x50)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x40)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x20)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
