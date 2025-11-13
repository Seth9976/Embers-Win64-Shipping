// 函数: sub_14285db30
// 地址: 0x14285db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*(arg1 + 0x818) = arg2
uint64_t rdi = arg3

if (arg3 == 0)
    int64_t rbx_1 = 0xe
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
        rbx_1 = 5
    
    rdi = rbx_1 + 3 + zx.q(sub_142851cc0(arg1) + 0x50)
    
    if (sub_14285eb60(arg1) != 0)
        rdi += 0x400
    
    if ((*(arg1 + 0x5c4) & 0x800) == 0)
        rdi = rdi + 0x53 + rbx_1

void* rbx_2 = arg1 + 0x848
int64_t rsi = 0

if (arg2 != 0)
    do
        int64_t rcx_1 = *rbx_2
        
        if (rcx_1 == 0)
            goto label_14285dc01
        
        if (*(rbx_2 + 0x10) != rdi)
            sub_1428a6780(rcx_1)
            *rbx_2 = 0
        label_14285dc01:
            int64_t rax_5 = sub_1428a6730(rdi)
            
            if (rax_5 == 0)
                *(arg1 + 0x818) = rsi
                sub_142856580(arg1, 0xffffffff, 0x123, 0x41, "ssl\record\ssl3_buffer.c", 0x81)
                return 0
            
            *(rbx_2 + 8) = 0
            *(rbx_2 + 0x18) = 0
            *(rbx_2 + 0x20) = 0
            *rbx_2 = rax_5
            *(rbx_2 + 0x10) = rdi
        
        rsi += 1
        rbx_2 += 0x28
    while (rsi u< arg2)

return 1
