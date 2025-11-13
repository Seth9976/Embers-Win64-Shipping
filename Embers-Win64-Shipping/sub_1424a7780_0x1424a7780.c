// 函数: sub_1424a7780
// 地址: 0x1424a7780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rcx = r15
        r15 += 0x40
        *(rcx + 8) = *rbx_1
        *(rcx + 0x10) = *(rbx_1 + 8)
        *(rcx + 0x20) = rbx_1[3].d
        *(rcx + 0x24) = *(rbx_1 + 0x1c)
        *(rcx + 0x2c) = *(rbx_1 + 0x24)
        
        if (rcx + 0x30 != &rbx_1[5])
            int64_t rsi_1 = sx.q(rbx_1[6].d)
            int64_t r14_1 = rbx_1[5]
            int32_t r8 = *(rcx + 0x3c)
            *(rcx + 0x38) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_141a73160(rcx + 0x30, rsi_1.d, r8)
                memcpy(*(rcx + 0x30), r14_1, rsi_1.d * 0x88)
            else
                *(rcx + 0x3c) = 0
        
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
