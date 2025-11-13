// 函数: sub_14285fe10
// 地址: 0x14285fe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = *(arg1 + 0x38)

if (rax == 0 && *(arg1 + 0x758) != 4)
    *(arg1 + 0x70) = 1

int32_t* rcx = *(arg1 + 8)
void* r8 = *(rcx + 0xc0)

if ((*(r8 + 0x60) & 8) != 0)
label_14285fe99:
    void* r10_1 = *(*(arg1 + 8) + 0xc0)
    int64_t rdx
    int64_t r8_1
    
    if (*(arg1 + 0x38) == 0)
        rdx = *(r10_1 + 0x30)
        r8_1 = *(r10_1 + 0x38)
    else
        rdx = *(r10_1 + 0x40)
        r8_1 = *(r10_1 + 0x48)
    
    int64_t rax_4 = (*(r10_1 + 0x28))(arg1, rdx, r8_1, *(arg1 + 0xa8) + 0x118)
    
    if (rax_4 != 0)
        *(*(arg1 + 0xa8) + 0x198) = rax_4
        
        if (sub_142873970(arg2, *(arg1 + 0xa8) + 0x118, rax_4) != 0)
            int32_t* rcx_7 = *(arg1 + 8)
            int32_t rax_8
            
            if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0)
                rax_8 = *rcx_7
            
            int32_t rax_9
            
            if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) != 0 || rax_8 s< 0x304 || rax_8 == 0x10000)
                void* r9_3 = *(arg1 + 0x508)
                rax_9 = sub_142852000(arg1, "CLIENT_RANDOM", r9_3 + 0x50, *(r9_3 + 8))
            
            if (((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0 && rax_8 s>= 0x304 && rax_8 != 0x10000)
                    || rax_9 != 0)
                if (rax_4 u<= 0x40)
                    uint32_t count = rax_4.d
                    int64_t rcx_9 = *(arg1 + 0xa8)
                    
                    if (*(arg1 + 0x38) != 0)
                        memcpy(rcx_9 + 0x390, rcx_9 + 0x118, count)
                        *(*(arg1 + 0xa8) + 0x3d0) = rax_4
                        return 1
                    
                    memcpy(rcx_9 + 0x348, rcx_9 + 0x118, count)
                    *(*(arg1 + 0xa8) + 0x388) = rax_4
                    return 1
                
                sub_142856580(arg1, 0x50, 0x167, 0x44, "ssl\statem\statem_lib.c", 0x23b)
        else
            sub_142856580(arg1, 0x50, 0x167, 0x44, "ssl\statem\statem_lib.c", 0x227)
else
    int32_t rcx_1 = *rcx
    
    if (rcx_1 s< 0x304 || rcx_1 == 0x10000 || rax != 0 || *(*(arg1 + 0xa8) + 0x248) != 0)
        goto label_14285fe99
    
    if ((*(r8 + 0x20))(arg1, 0x92) != 0)
        goto label_14285fe99

return 0
