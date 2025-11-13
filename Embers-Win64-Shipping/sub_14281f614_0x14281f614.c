// 函数: sub_14281f614
// 地址: 0x14281f614
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 8)
int64_t rdi = *(arg1 + 0x10)
int32_t result

while (true)
    if (rbx == rdi)
        return -1
    
    result = sub_14281f704(rbx, arg2)
    
    if (result s>= 0)
        break
    
    rbx = &rbx[8]

return result
