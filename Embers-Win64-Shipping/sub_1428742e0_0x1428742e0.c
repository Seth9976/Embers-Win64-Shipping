// 函数: sub_1428742e0
// 地址: 0x1428742e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
arg1[2] = 0
arg1[3] = 0
void* rax = sub_1428a6a70(0x28)
arg1[5] = rax

if (rax == 0)
    sub_1428a5670((rax + 0x14).d, 0x279, (rax + 0x41).d, "ssl\packet.c", 0x62)
    return 0

if (arg2 != 0)
    *(rax + 0x18) = arg2
    *(arg1[5] + 0x10) = arg2
    int64_t rcx_1 = arg1[5]
    
    if (rcx_1 == 0)
        goto label_1428743e5
    
    int64_t rdx_1 = arg1[3]
    
    if (arg1[4] - rdx_1 u< arg2)
        goto label_1428743e5
    
    if (arg1[1] == 0)
        int64_t* r8_2 = *arg1
        int64_t rcx_2 = *r8_2
        
        if (rcx_2 - rdx_1 u< arg2)
            if (arg2 u> rcx_2)
                rcx_2 = arg2
            
            int64_t rdx_2
            
            if (rcx_2 u<= 0x7fffffffffffffff)
                rdx_2 = rcx_2 * 2
                
                if (rdx_2 u< 0x100)
                    rdx_2 = 0x100
            else
                rdx_2 = -1
            
            if (sub_1428a7260(r8_2, rdx_2) == 0)
                rcx_1 = arg1[5]
            label_1428743e5:
                sub_1428a6780(rcx_1)
                arg1[5] = 0
                return 0
    
    int64_t rdx_4 = arg1[1]
    int64_t rcx_4
    
    if (rdx_4 == 0)
        rcx_4 = *(*arg1 + 8)
    else
        rcx_4 = rdx_4
    
    int64_t rax_10 = arg1[2]
    arg1[3] += arg2
    arg1[2] = rax_10 + arg2
    
    if (rdx_4 == 0)
        rdx_4 = *(*arg1 + 8)
    
    *(arg1[5] + 8) = rcx_4 + rax_10 - rdx_4

return 1
