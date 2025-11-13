// 函数: sub_14212dc60
// 地址: 0x14212dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)

if ((*(rbx + 0x20b) & 1) != 0)
    int64_t result
    result.b = (*(rbx + 0x198) & 0xc0) == 0
    return result

int32_t rcx
rcx.b = sub_140b5b8a0(*(rbx + 0xe4), 0) == 0

if ((*(rbx + 0xe8) != 0 | rcx.b) == 0)
    void* rbx_1 = *(arg1 + 0x28)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*(rbx_1 + 0xf8), 0) == 0
    
    if ((*(rbx_1 + 0xfc) != 0 | rcx_1.b) == 0)
        return 1

return 0
