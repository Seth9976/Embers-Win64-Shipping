// 函数: sub_140cdb8f0
// 地址: 0x140cdb8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = *(arg1 + 0x70)

if (result == 0)
    return nullptr

int64_t arg_8
int64_t rcx

if (result == 0)
    arg_8 = 0
    rcx = 0
    goto label_140cdb914

while (true)
    rcx = *(result + 0x28)
    arg_8 = rcx
label_140cdb914:
    
    if (rcx == arg2)
        return result
    
    result = *(result + 0x58)
    
    if (result == 0)
        return nullptr
