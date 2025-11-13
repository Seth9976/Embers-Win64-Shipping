// 函数: sub_142494660
// 地址: 0x142494660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x1b0))
int64_t* rcx

if (result.d == 0)
    rcx = nullptr
else
    rcx = *(arg2 + 0x1a8)

if (rcx != 0)
label_142494698:
    result = (*(*rcx + 0x38))(rcx, 0)
    int64_t rcx_1 = *(arg2 + 0x1a8)
    
    if (rcx_1 != 0)
        result = sub_140a84c80(rcx_1, 0, 0)
        *(arg2 + 0x1a8) = result
    
    *(arg2 + 0x1b0) = 0
else if (result.d != 0)
    rcx = *(arg2 + 0x1a8)
    
    if (rcx != 0)
        goto label_142494698

int64_t rcx_2 = *(arg2 + 0x1a8)

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall
