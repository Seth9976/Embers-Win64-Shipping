// 函数: sub_142337630
// 地址: 0x142337630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg1[1].d)
int32_t result = 0

if (i_1 s> 0)
    int64_t* r8_1 = *arg1
    int64_t i
    
    do
        void* rcx = *r8_1
        r8_1 = &r8_1[1]
        int32_t result_1 = *(rcx + 0x15c)
        
        if (result u>= result_1)
            result_1 = result
        
        result = result_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
