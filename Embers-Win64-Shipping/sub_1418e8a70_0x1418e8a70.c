// 函数: sub_1418e8a70
// 地址: 0x1418e8a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x240)

if (*(rdi + 0x78) != 0)
    sub_1418c86c0(rdi, 0, 0)

void* rdx = *(rdi + 0x70)
int64_t i = 0
uint32_t result

if (*(arg1 + 0x11c) == 0)
    result = sub_1418e06e0(arg1 + 0x248, rdx)
else
    void* r8_1 = *(arg1 + 0x448)
    *(r8_1 + 0x38) = 2
    *(r8_1 + 0x68) = rdx
    *(r8_1 + 0x70) = *(rdx + 0x98)
    *(arg1 + 0x448) = 0
    result = sub_1418e06e0(arg1 + 0x248, rdx)
    int64_t rdi_1 = data_143efb470
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        result = GetCurrentThreadId()
        rcx_2.b = result != data_143de5470
    
    if (*(rdi_1 + (rcx_2 << 2)) != 0)
        result = sub_1418c5bc0(arg1)
        
        if (*(arg1 + 0x150) != 0)
            result = sub_1418c21f0(arg1)
            *(arg1 + 0x150) = 0

if (*(arg1 + 0x121) == 0)
    int64_t** rdi_2 = arg1 + 0x10
    
    do
        int64_t* rdx_1 = rdi_2[-1]
        
        if (rdx_1 == 0)
            break
        
        int64_t* r8_2 = *rdi_2
        
        if (r8_2 != 0)
            result = sub_1418e5fb0(arg1, rdx_1, r8_2, arg1 + 0xe0)
        
        i += 1
        rdi_2 = &rdi_2[3]
    while (i s< 8)
    
    int64_t* rdx_2 = *(arg1 + 0xc8)
    
    if (rdx_2 != 0)
        int64_t* r8_3 = *(arg1 + 0xd0)
        
        if (r8_3 != 0)
            result = sub_1418e5fb0(arg1, rdx_2, r8_3, arg1 + 0xe0)

if (*(arg1 + 0x471) != 0)
    void* rdi_3 = *(arg1 + 0x240)
    int64_t rsi = *(*(arg1 + 0x140) + 0x1580)
    
    if (*(rdi_3 + 0x78) != 0)
        sub_1418c86c0(rdi_3, 0, 0)
    
    result = sub_1418fde70(arg1 + 0x468, *(*(rdi_3 + 0x70) + 0x40), rsi)

if (*(arg1 + 0x138) != 0)
    return result

return (*(*(arg1 + 0x468) + 0x18))(arg1 + 0x468)
