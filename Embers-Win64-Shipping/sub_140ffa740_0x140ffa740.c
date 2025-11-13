// 函数: sub_140ffa740
// 地址: 0x140ffa740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = *arg4
        
        if (result != 0)
            void* rcx = *(result + 0x20)
            
            if (rcx != 0)
                if (arg2 == 0)
                    *(rcx + 0x10) = arg2.b
                
                *(rcx + 8) = arg2
                
                if (arg2 != 3)
                    result = *(result + 0x20)
                    *(result + 0x10) = 0
        
        arg4 = &arg4[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (arg6 == 0)
    return result

jump(*(*arg6 + 0x10))
