// 函数: sub_141f70b70
// 地址: 0x141f70b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x550)
int32_t result = 0
int32_t result_1 = 0
void* rcx = *(arg1 + 0x5b0)
void* rcx_1

if (rcx == 0)
    void* rcx_2 = *(arg1 + 0x430)
    
    if (rcx_2 != 0)
        rcx_1 = *(rcx_2 + 0x58)
        goto label_141f70ba7
else
    rcx_1 = *(rcx + 0x40)
label_141f70ba7:
    
    if (rcx_1 != 0)
        result_1 = *(rcx_1 + 8)

if (arg2 s>= 0)
    result = result_1
    
    if (arg2 s< result_1)
        result = arg2

*(arg1 + 0x550) = result

if (r9 == result)
    return result

jump(*(*sub_141f88540() + 0x70))
