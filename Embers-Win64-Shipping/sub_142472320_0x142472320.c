// 函数: sub_142472320
// 地址: 0x142472320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2
int64_t result

if (arg4 != 0)
    char* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rcx = r12
        void* r14_1 = r12
        r12 += 0xb0
        *(rcx + 8) = *rbx_1
        *(rcx + 9) = rbx_1[1]
        *(rcx + 0xc) = *(rbx_1 + 4)
        *(rcx + 0x10) = rbx_1[8]
        *(rcx + 0x14) = *(rbx_1 + 0xc)
        *(rcx + 0x1c) = *(rbx_1 + 0x14)
        *(rcx + 0x20) = *(rbx_1 + 0x18)
        *(rcx + 0x24) = *(rbx_1 + 0x1c)
        *(r14_1 + 0x90) = *(rbx_1 + 0x88)
        *(r14_1 + 0x94) = rbx_1[0x8c]
        *(r14_1 + 0x95) = rbx_1[0x8d]
        
        if (r14_1 + 0x98 != &rbx_1[0x90])
            int32_t rsi_1 = *(rbx_1 + 0x98)
            int64_t r15_1 = *(rbx_1 + 0x90)
            int32_t r8 = *(r14_1 + 0xa4)
            *(r14_1 + 0xa0) = rsi_1
            
            if (rsi_1 != 0 || r8 != 0)
                sub_1405c4b20(r14_1 + 0x98, rsi_1, r8)
                memcpy(*(r14_1 + 0x98), r15_1, rsi_1 * 0x1c)
            else
                *(r14_1 + 0xa4) = 0
        
        result = *(rbx_1 + 0xa0)
        rbx_1 = &rbx_1[0xb0]
        *(r14_1 + 0xa8) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
