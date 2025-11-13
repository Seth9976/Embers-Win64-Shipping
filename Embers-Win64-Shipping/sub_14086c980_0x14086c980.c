// 函数: sub_14086c980
// 地址: 0x14086c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    char* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rcx = r12
        void* rbp_1 = r12
        r12 += 0xd8
        *(rcx + 8) = *rbx_1
        *(rcx + 0x10) = rbx_1[8]
        *(rcx + 0x14) = *(rbx_1 + 0xc)
        sub_140747710(rcx + 0x20, &rbx_1[0x18])
        sub_14086c240(rbp_1 + 0x50, &rbx_1[0x48])
        *(rbp_1 + 0x60) = *(rbx_1 + 0x58)
        *(rbp_1 + 0x64) = rbx_1[0x5c]
        
        if (rbp_1 + 0x68 != &rbx_1[0x60])
            int64_t rsi_1 = sx.q(*(rbx_1 + 0x68))
            int64_t r15_1 = *(rbx_1 + 0x60)
            int32_t r8 = *(rbp_1 + 0x74)
            *(rbp_1 + 0x70) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_140638750(rbp_1 + 0x68, rsi_1.d, r8)
                memcpy(*(rbp_1 + 0x68), r15_1, (rsi_1 << 2).d)
            else
                *(rbp_1 + 0x74) = 0
        
        sub_141f98dc0(rbp_1 + 0x78)
        rbx_1 = &rbx_1[0xd8]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
