// 函数: sub_1417cfe40
// 地址: 0x1417cfe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x88, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142fcc460
    result_1[1] = *(arg1 + 8)
    *(result_1 + 0x10) = *(arg1 + 0x10)
    result_1[4] = *(arg1 + 0x20)
    void* rax = *(arg1 + 0x28)
    result_1[5] = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    result_1[6] = *(arg1 + 0x30)
    result_1[7] = *(arg1 + 0x38)
    result_1[8] = *(arg1 + 0x40)
    result_1[9] = *(arg1 + 0x48)
    result_1[0xa] = *(arg1 + 0x50)
    result_1[0xb] = *(arg1 + 0x58)
    *(result_1 + 0x60) = *(arg1 + 0x60)
    result_1[0xe] = *(arg1 + 0x70)
    result_1[0xf].d = *(arg1 + 0x78)
    result_1[0x10] = *(arg1 + 0x80)
    result = &data_142fcc4b8
    *result_1 = &data_142fcc4b8

return result
