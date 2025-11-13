// 函数: sub_142997160
// 地址: 0x142997160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = arg3
int64_t* result = arg2

if (arg3 != 0)
    int64_t i
    
    do
        *result = 0
        result[1] = 0
        int64_t rax_1 = _aligned_malloc(0x100, 0x20)
        result[1] = rax_1
        
        if ((rax_1.b & 0x1f) != 0)
            _aligned_free(rax_1)
            rax_1 = _aligned_malloc(0x120, 0x20)
            result[1] = rax_1
            
            while ((rax_1.b & 0x1f) != 0)
                rax_1 += 1
        
        *result = rax_1
        result = &result[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
