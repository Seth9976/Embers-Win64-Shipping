// 函数: sub_1417829b0
// 地址: 0x1417829b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result_2 = *arg2
void** result = nullptr
char r10 = *(result_2 + 0xc)

if (r10 u>= 2)
    result = result_2

if (result != 0)
    result = nullptr
    
    if (r10 u>= 1)
        result = result_2
    
    if (result != 0)
        void** result_1 = nullptr
        
        if (*(result + 0xc) u>= 2)
            result_1 = result
        
        if (result_1 != 0)
            result = *result_1
            
            if (*(sx.q(result_1[1].d) + result[0x73]) == 4)
                int512_t zmm2
                zmm2.o = *arg1[1]
                jump(*(**arg1 + 0x20))

return result
