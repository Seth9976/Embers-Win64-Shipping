// 函数: sub_14285d870
// 地址: 0x14285d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax_1 = *(arg1 + 0x820)

if (rax_1 != 0)
    goto label_14285d91a

uint64_t rbx_1 = 0x4150

if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
    rbx_1 = 0x4148

if (sub_14285eb60(arg1) != 0)
    rbx_1 += 0x400

uint64_t rdi_1 = *(arg1 + 0x828)

if (rdi_1 u<= rbx_1)
    rdi_1 = rbx_1

rax_1 = sub_1428a6730(rdi_1)
int32_t rax_3
int32_t r8_2

if (rax_1 != 0)
    *(arg1 + 0x820) = rax_1
    *(arg1 + 0x830) = rdi_1
label_14285d91a:
    *(arg1 + 0x1648) = rax_1
    int64_t rbx_2 = 0xe
    void* rax_4 = *(arg1 + 8)
    *(arg1 + 0x818) = 1
    
    if ((*(*(rax_4 + 0xc0) + 0x60) & 8) == 0)
        rbx_2 = 5
    
    uint64_t rdi_3 = rbx_2 + 3 + zx.q(sub_142851cc0(arg1) + 0x50)
    
    if (sub_14285eb60(arg1) != 0)
        rdi_3 += 0x400
    
    if ((*(arg1 + 0x5c4) & 0x800) == 0)
        rdi_3 = rdi_3 + 0x53 + rbx_2
    
    void* rbx_3 = arg1 + 0x848
    int64_t rsi_1 = 0
    
    while (true)
        int64_t rcx_6 = *rbx_3
        
        if (rcx_6 == 0)
            goto label_14285d9bb
        
        if (*(rbx_3 + 0x10) != rdi_3)
            sub_1428a6780(rcx_6)
            *rbx_3 = 0
        label_14285d9bb:
            int64_t rax_8 = sub_1428a6730(rdi_3)
            
            if (rax_8 == 0)
                *(arg1 + 0x818) = rsi_1
                rax_3 = 0x81
                r8_2 = 0x123
                break
            
            *(rbx_3 + 8) = 0
            *(rbx_3 + 0x18) = 0
            *(rbx_3 + 0x20) = 0
            *rbx_3 = rax_8
            *(rbx_3 + 0x10) = rdi_3
        
        rsi_1 += 1
        rbx_3 += 0x28
        
        if (rsi_1 u>= 1)
            return 1
else
    rax_3 = 0x46
    r8_2 = 0x9c

sub_142856580(arg1, 0xffffffff, r8_2, 0x41, "ssl\record\ssl3_buffer.c", rax_3)
return 0
