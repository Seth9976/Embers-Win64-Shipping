// 函数: sub_142583110
// 地址: 0x142583110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x68
    int32_t i
    
    do
        void* rcx = r14
        r14 -= -0x80
        *(rcx + 0x68) = *rbx_1
        *(rcx + 0x6c) = rbx_1[1].b
        *(rcx + 0x6d) = *(rbx_1 + 5)
        
        if (rcx + 0x70 != &rbx_1[2])
            int64_t rsi_1 = sx.q(rbx_1[4])
            int64_t r15_1 = *(rbx_1 + 8)
            int32_t r8 = *(rcx + 0x7c)
            *(rcx + 0x78) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4b20(rcx + 0x70, rsi_1.d, r8)
                memcpy(*(rcx + 0x70), r15_1, rsi_1.d * 0x1c)
            else
                *(rcx + 0x7c) = 0
        
        rbx_1 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
