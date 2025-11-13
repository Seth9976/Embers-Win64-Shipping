// 函数: sub_1420e4140
// 地址: 0x1420e4140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *(arg1 + 0x11f)

if ((rdx & 1) == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x190)
int64_t rdi_1 = 0
uint64_t rsi_2 = sx.q(*(arg1 + 0x198)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x198))])
    rsi_2 = 0

if (rsi_2 != 0)
    do
        void* rcx = *rbx_1
        
        if (rcx != 0)
            sub_142140a10(rcx, 0)
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != rsi_2)
    
    rdx = *(arg1 + 0x11f)

*(arg1 + 0x11f) = rdx & 0xfe
