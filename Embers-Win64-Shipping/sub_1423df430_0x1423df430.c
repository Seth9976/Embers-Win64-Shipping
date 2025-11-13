// 函数: sub_1423df430
// 地址: 0x1423df430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 1

if (arg3 != 0)
    r14.b = sub_142168a40(arg3) != 3

if (arg2 != 0)
    int64_t* rcx_1 = *(arg2 + 0x188)
    
    if (rcx_1 != 0)
        return sub_1424aead0(rcx_1, arg4)

void** rbx_1 = *(arg1 + 0xc38)
int64_t rdi_1 = 0
void* result = &rbx_1[sx.q(*(arg1 + 0xc40))]
uint64_t rsi_2 = sx.q(*(arg1 + 0xc40)) << 3 u>> 3

if (rbx_1 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        void* rcx_2 = *rbx_1
        result = *(rcx_2 + 0x1a0)
        
        if (result != 0 && *(result + 0x30) == arg3)
            int64_t* rcx_3 = *(rcx_2 + 0x218)
            
            if (rcx_3 != 0)
                result = sub_1424aead0(rcx_3, arg4)
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != rsi_2)

return result
