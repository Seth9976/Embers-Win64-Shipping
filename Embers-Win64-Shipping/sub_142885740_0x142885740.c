// 函数: sub_142885740
// 地址: 0x142885740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* buffer1 = *arg1

if (buffer1 == 0)
    *arg1 = arg2
    return arg2

void* buffer1_1 = nullptr

while (true)
    int32_t rax_2 = memcmp(buffer1, arg2, 8)
    
    if (rax_2 s> 0)
        *(arg2 + 0x10) = buffer1
        
        if (buffer1_1 == 0)
            *arg1 = arg2
            break
    else
        if (rax_2 == 0)
            return nullptr
        
        buffer1_1 = buffer1
        buffer1 = *(buffer1 + 0x10)
        
        if (buffer1 != 0)
            continue
        else
            *(arg2 + 0x10) = buffer1
    
    *(buffer1_1 + 0x10) = arg2
    break

return arg2
