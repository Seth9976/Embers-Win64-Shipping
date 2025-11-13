// 函数: sub_141dce090
// 地址: 0x141dce090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x140))
        break
    
    void* rcx = *(*(arg1 + 0x138) + (sx.q(i) << 3))
    
    if (rcx != 0)
        result = sub_14208b040(rcx, arg1)
        
        if (result != 0)
            void* rcx_1 = *(result + 0x28)
            
            if (rcx_1 != 0 && sub_1420964b0(rcx_1).b != 0)
                result.b = 1
                return result

result.b = 0
return result
