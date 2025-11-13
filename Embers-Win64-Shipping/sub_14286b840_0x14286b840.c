// 函数: sub_14286b840
// 地址: 0x14286b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 3)
    int32_t rax_1
    rax_1, arg4 = sub_14286a940(arg1, arg3)
    
    if (rax_1 != 0)
        if (rax_1 s< 0)
            return 3
        
        goto label_14286b87a
else if (arg2 != 4)
    if (arg2 != 5)
        return 1
    
label_14286baec:
    void* rax_28 = *(arg1 + 0xa8)
    int32_t arg_10 = 0x70
    
    if ((*(*(rax_28 + 0x238) + 0x1c) & 0x20) == 0 || *(arg1 + 0x788) == 0)
        return 1
    
    if (*(arg1 + 0x7a0) != 0)
        int32_t rax_29 = sub_142855270(arg1, &arg_10, arg4)
        
        if (rax_29 s< 0)
            arg1[0xa] = 4
            return 5
        
        if (rax_29 != 2)
            return 1
        
        int32_t rdx_2 = arg_10
        int32_t r9_1 = 0xe2
        
        if (rdx_2 == 0x73)
            r9_1 = 0xdf
        
        sub_142856580(arg1, rdx_2, 0x25e, r9_1, "ssl\statem\statem_srvr.c", 0x4df)
    else
        sub_142856580(arg1, 0x73, 0x25e, 0xdf, "ssl\statem\statem_srvr.c", 0x4d5)
else
label_14286b87a:
    
    if (arg1[0x32] == 0)
        void* rdx = *(arg1 + 0x488)
        int64_t rax_7 = *(rdx + 0x1c8)
        
        if (rax_7 == 0)
        label_14286b91d:
            int32_t* rcx_3 = *(arg1 + 8)
            int32_t rax_11
            
            if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) == 0)
                rax_11 = *rcx_3
            
            if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) == 0 && rax_11 s>= 0x304 && rax_11 != 0x10000)
                goto label_14286b991
            
            int32_t* rax_12 = sub_14284fa00(arg1)
            void* rax_13
            rax_13, arg4 = sub_142870560(arg1, *(*(arg1 + 0x508) + 0x138), rax_12)
            
            if (rax_13 != 0)
                *(*(arg1 + 0xa8) + 0x238) = rax_13
            label_14286b991:
                
                if (arg1[0x32] != 0)
                    goto label_14286ba04
                
                int32_t rax_15
                rax_15, arg4 = sub_142866730(arg1, 1)
                
                if (rax_15 != 0)
                    int64_t r8_3 = *(arg1 + 0x7f8)
                    
                    if (r8_3 != 0)
                        int64_t rdx_5
                        rdx_5.b = (*(*(*(arg1 + 0xa8) + 0x238) + 0x1c) & 6) != 0
                        *(*(arg1 + 0x508) + 0xf0) = r8_3(arg1, rdx_5)
                    
                    if (*(*(arg1 + 0x508) + 0xf0) != 0)
                        arg1[0x19c] = 0
                    
                    goto label_14286ba04
            else
                sub_142856580(arg1, (rax_13 + 0x28).d, 0x17a, 0xc1, "ssl\statem\statem_srvr.c", 
                    0x8cd)
        else
            int32_t rax_8 = rax_7(arg1, *(rdx + 0x1d0))
            
            if (rax_8 != 0)
                if (rax_8 s< 0)
                    arg1[0xa] = 4
                    return 4
                
                arg1[0xa] = 1
                goto label_14286b91d
            
            sub_142856580(arg1, rax_8 + 0x50, 0x17a, 0x179, "ssl\statem\statem_srvr.c", 0x8bb)
    else
        int32_t* rcx = *(arg1 + 8)
        int32_t rax_4
        
        if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
            rax_4 = *rcx
        
        if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0 && rax_4 s>= 0x304 && rax_4 != 0x10000)
            goto label_14286b91d
        
        *(*(arg1 + 0xa8) + 0x238) = *(*(arg1 + 0x508) + 0x128)
    label_14286ba04:
        bool cond:3_1 = arg1[0x18e] == 0xffffffff
        arg1[0x193] = 0
        
        if (cond:3_1)
            goto label_14286bab0
        
        void* rax_20 = *(arg1 + 0x598)
        
        if (rax_20 == 0 || *(rax_20 + 0x220) == 0)
            goto label_14286bab0
        
        int64_t rcx_11 = *(*(arg1 + 0xa8) + 0x2e0)
        
        if (rcx_11 == 0)
            goto label_14286bab0
        
        **(arg1 + 0x488) = rcx_11
        void* rax_23 = *(arg1 + 0x598)
        int32_t rax_24 = (*(rax_23 + 0x220))(arg1, *(rax_23 + 0x228))
        
        if (rax_24 == 0)
            if (*(arg1 + 0x660) != 0)
                arg1[0x193] = 1
            
            goto label_14286bab0
        
        if (rax_24 == 3)
            arg1[0x193] = 0
        label_14286bab0:
            int32_t* rcx_13 = *(arg1 + 8)
            int32_t rax_26
            
            if ((*(*(rcx_13 + 0xc0) + 0x60) & 8) == 0)
                rax_26 = *rcx_13
            
            if ((*(*(rcx_13 + 0xc0) + 0x60) & 8) == 0 && rax_26 s>= 0x304 && rax_26 != 0x10000)
                goto label_14286baec
            
            if (sub_14286b610(arg1) != 0)
                goto label_14286baec
        else
            sub_142856580(arg1, 0x50, 0x233, 0xe2, "ssl\statem\statem_srvr.c", 0x84a)

return 0
