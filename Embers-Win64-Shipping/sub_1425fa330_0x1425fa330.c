// 函数: sub_1425fa330
// 地址: 0x1425fa330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result = TryEnterCriticalSection(arg1 + 0x210)

if (result == 0)
    return result

int16_t* const rdi_1 = &data_142d40450
int16_t* rdx

if (*(arg1 + 0x240) == 0)
    rdx = &data_142d40450
else
    rdx = *(arg1 + 0x238)

int16_t* const rcx_1

if (*(arg1 + 0x28) == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *(arg1 + 0x20)

if (sub_140a54510(rcx_1, rdx) != 0)
    int16_t* rdx_1
    
    if (*(arg1 + 0x240) == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *(arg1 + 0x238)
    
    if (arg2[1].d != 0)
        rdi_1 = *arg2
    
    if (sub_140a54510(rdi_1, rdx_1) == 0)
        sub_140597df0(arg1 + 0x248, arg1 + 0x238)
        *(arg1 + 0x1c4)
        *(arg1 + 0x1c4) = 1

return LeaveCriticalSection(arg1 + 0x210)
