// 函数: sub_142860f10
// 地址: 0x142860f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t var_10_1

if (*(arg1 + 0x38) == 0)
label_142860fdc:
    int32_t* rcx_3 = *(arg1 + 8)
    int32_t r9_1
    
    if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) != 0)
    label_14286104c:
        int32_t* rcx_6 = *(arg1 + 8)
        int32_t rax_11
        
        if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0)
            rax_11 = *rcx_6
        
        if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0 && rax_11 s>= 0x304)
            if (rax_11 != 0x10000 || *(*(arg1 + 0xa8) + 0xf0) != 0)
                goto label_142861093
            
            goto label_14286107c
        
        if (*(*(arg1 + 0xa8) + 0xf0) == 0)
        label_14286107c:
            var_10_1 = 0x30e
            r9_1 = 0x9a
            goto label_14286101b
        
    label_142861093:
        *(*(arg1 + 0xa8) + 0xf0) = 0
        void* rdx_3 = *(arg1 + 0xa8)
        int64_t rdi_1 = *(rdx_3 + 0x220)
        
        if (rdi_1 == arg2[1])
            if (sub_1428bc500(*arg2, rdx_3 + 0x1a0, rdi_1) != 0)
                sub_142856580(arg1, 0x33, 0x16c, 0x95, "ssl\statem\statem_lib.c", 0x31e)
            else if (rdi_1 u<= 0x40)
                uint32_t count = rdi_1.d
                int64_t rcx_8 = *(arg1 + 0xa8)
                
                if (*(arg1 + 0x38) == 0)
                    memcpy(rcx_8 + 0x390, rcx_8 + 0x1a0, count)
                    *(*(arg1 + 0xa8) + 0x3d0) = rdi_1
                else
                    memcpy(rcx_8 + 0x348, rcx_8 + 0x1a0, count)
                    *(*(arg1 + 0xa8) + 0x388) = rdi_1
                
                int32_t* rax_17 = *(arg1 + 8)
                void* r10_1 = *(rax_17 + 0xc0)
                
                if ((*(r10_1 + 0x60) & 8) != 0)
                    return 1
                
                int32_t rax_18 = *rax_17
                
                if (rax_18 s< 0x304 || rax_18 == 0x10000)
                    return 1
                
                int32_t rax_19
                
                if (*(arg1 + 0x38) == 0)
                    if ((*(r10_1 + 0x18))(arg1, arg1 + 0x1ac, arg1 + 0x16c, 0, *(arg1 + 0x508) + 8)
                            != 0)
                        int64_t r8_4 = *(*(arg1 + 8) + 0xc0)
                        
                        if ((*(r8_4 + 0x20))(arg1, 0x111, r8_4) != 0)
                            rax_19 = sub_14287be50(arg1)
                            goto label_1428611f6
                else
                    if (*(arg1 + 0x758) == 4)
                        return 1
                    
                    rax_19 = (*(r10_1 + 0x20))(arg1, 0x121)
                label_1428611f6:
                    
                    if (rax_19 != 0)
                        return 1
            else
                sub_142856580(arg1, 0x50, 0x16c, 0x44, "ssl\statem\statem_lib.c", 0x327)
        else
            sub_142856580(arg1, 0x32, 0x16c, 0x6f, "ssl\statem\statem_lib.c", 0x317)
    else
        int32_t rax_7 = *rcx_3
        
        if (rax_7 s< 0x304 || rax_7 == 0x10000)
            goto label_14286104c
        
        if (sub_14285b7b0(arg1 + 0x800) == 0)
            goto label_14286104c
        
        var_10_1 = 0x307
        r9_1 = 0xb6
    label_14286101b:
        sub_142856580(arg1, 0xa, 0x16c, r9_1, "ssl\statem\statem_lib.c", var_10_1)
else
    bool cond:0_1 = *(arg1 + 0x758) == 4
    *(arg1 + 0x80) = 0
    
    if (not(cond:0_1))
        *(arg1 + 0x70) = 1
    
    int32_t* rcx = *(arg1 + 8)
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0)
        goto label_142860fdc
    
    int32_t rax_2 = *rcx
    
    if (rax_2 s< 0x304 || rax_2 == 0x10000 || *(arg1 + 0x778) != 0)
        goto label_142860fdc
    
    if (sub_1428821e0(arg1, 1) != 0)
        int64_t* rax_4 = sub_142891ee0()
        *(arg1 + 0x778) = rax_4
        
        if (rax_4 != 0)
            if (sub_142891c70(rax_4, *(*(arg1 + 0xa8) + 0xe8)) != 0)
                goto label_142860fdc
            
            var_10_1 = 0x92b
        else
            var_10_1 = 0x924
        
        sub_142856580(arg1, 0x50, 0x26a, 0x44, "ssl\statem\statem_lib.c", var_10_1)
return 0
