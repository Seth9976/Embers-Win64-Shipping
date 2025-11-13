// 函数: sub_142893600
// 地址: 0x142893600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = arg1[4]
int32_t* rdi = arg3

if (rax != 0)
label_14289364c:
    
    if ((*(*rax + 4) & 4) != 0 || rdi != 0)
    label_1428936c2:
        int64_t* rcx_4 = arg1[4]
        void* rax_6 = *rcx_4
        
        if (arg6 == 0)
            int64_t r8_1 = *(rax_6 + 0x70)
            
            if (r8_1 != 0)
                if (r8_1(rcx_4, arg1) s> 0)
                    *(arg1[4] + 0x20) = 0x40
                    goto label_142893786
            else if (*(rax_6 + 0xd0) == 0)
                if (sub_1428bdb60(rcx_4) s> 0)
                    goto label_142893786
            else
                rcx_4[4].d = 8
                arg1[5] = sub_1428937f0
            label_142893786:
                
                if (sub_1428bcb30(arg1[4], 0xffffffff, 0xf8, 1, 0, rdi) s> 0)
                    if (arg2 != 0)
                        *arg2 = arg1[4]
                    
                    if ((*(*arg1[4] + 4) & 4) != 0)
                        return 1
                    
                    if (sub_1428919c0(arg1, rdi, arg4) != 0)
                        int64_t* rcx_8 = arg1[4]
                        int64_t r8_3 = *(*rcx_8 + 0xf8)
                        
                        if (r8_3 != 0)
                            return r8_3(rcx_8, arg1)
                        
                        return 1
        else
            int64_t r8 = *(rax_6 + 0x80)
            
            if (r8 == 0)
                if (*(rax_6 + 0xd8) != 0)
                    rcx_4[4].d = 0x10
                    arg1[5] = sub_1428937f0
                    goto label_142893786
                
                if (sub_1428bdc70(rcx_4) s> 0)
                    goto label_142893786
            else if (r8(rcx_4, arg1) s> 0)
                *(arg1[4] + 0x20) = 0x80
                goto label_142893786
    else
        int32_t arg_8
        int32_t rax_2 = sub_142896880(arg5, &arg_8)
        int32_t* rax_4
        
        if (rax_2 s> 0)
            rax_4 = sub_14289b970(sub_1428a9620(arg_8))
            rdi = rax_4
        
        if (rax_2 s> 0 && rax_4 != 0)
            goto label_1428936c2
        
        sub_1428a5670(6, 0xa1, 0x9e, "crypto\evp\m_sigver.c", 0x2a)
else
    rax = sub_1428bcf30(arg5, arg4)
    arg1[4] = rax
    
    if (rax != 0)
        goto label_14289364c

return 0
