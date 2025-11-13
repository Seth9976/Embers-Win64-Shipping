// 函数: sub_141bc75f0
// 地址: 0x141bc75f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** i = arg1[0x2f]
int64_t arg_8 = arg2

for (; i != &i[sx.q(arg1[0x30].d)]; i = &i[1])
    void* result = *i
    
    if (*(result + 0x408) == arg2)
        if (i == 0 || result == 0)
            break
        
        if (*(result + 0x794) != 0 || *(result + 0x758) != 1)
            return result
        
        *(result + 0x794) = 1
        return result

return sub_141bc7550(arg1, arg2, i, 1, 0, arg3, arg4)
