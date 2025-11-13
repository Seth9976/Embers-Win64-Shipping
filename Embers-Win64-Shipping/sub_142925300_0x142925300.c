// 函数: sub_142925300
// 地址: 0x142925300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t arg_8 = 0x10
char* rbx = arg1 + 0xef
char* r10 = rbx

for (int32_t i = 0; i s< 0x10; )
    char temp0_1 = *r10
    *r10 += 1
    
    if (temp0_1 != 0xff)
        break
    
    i += 1
    r10 -= 1

if (sub_1428927c0(*(arg1 + 0xa0), arg1 + 0xc0, &arg_8, arg1 + 0xe0, 0x10) != 0 && arg_8 == 0x10)
    if (*(arg1 + 0xb8) == 0x10)
    label_1429253df:
        
        for (int32_t i_1 = 0; i_1 s< 0x10; )
            char temp1_1 = *rbx
            *rbx += 1
            
            if (temp1_1 != 0xff)
                break
            
            i_1 += 1
            rbx -= 1
        
        int32_t var_48_1 = 0x10
        
        if (sub_1428927c0(*(arg1 + 0xa0), arg1 + 0xe0, &arg_8, arg1 + 0xe0, 0x10) != 0
                && arg_8 == 0x10)
            if (*(arg1 + 0xb8) == 0x18)
                *(arg1 + 0xe8) = *(arg1 + 0xe0)
                *(arg1 + 0xe0) = *(arg1 + 0xd8)
            
            void* rdx_4
            uint64_t r8_4
            
            if ((*(arg1 + 0x1c) & 1) != 0)
                sub_142924fd0(arg1 + 0xa0, arg2, arg3)
                r8_4 = arg5
                rdx_4 = arg4
            label_1429254b3:
                sub_142924fd0(arg1 + 0xa0, rdx_4, r8_4)
            label_1429254d7:
                
                if (sub_142892480(*(arg1 + 0xa0), *(arg1 + 0xb0), nullptr, arg1 + 0xc0, nullptr, 1)
                        != 0)
                    return 1
            else
                if (arg2 == 0 && arg6 == 0 && arg4 == 0)
                label_142925485:
                    
                    if (arg3 == 0)
                        goto label_1429254d7
                    
                    r8_4 = *(arg1 + 0x88)
                    rdx_4 = arg1 + 0x108
                    goto label_1429254b3
                
                var_48_1.q = arg7
                
                if (sub_142925060(arg1 + 0xa0, arg2, arg3, arg6, 0x10, arg4, arg5) != 0)
                    goto label_142925485
    else
        char* rcx_1 = rbx
        
        for (int32_t i_2 = 0; i_2 s< 0x10; )
            char temp2_1 = *rcx_1
            *rcx_1 += 1
            
            if (temp2_1 != 0xff)
                break
            
            i_2 += 1
            rcx_1 -= 1
        
        if (sub_1428927c0(*(arg1 + 0xa0), arg1 + 0xd0, &arg_8, arg1 + 0xe0, 0x10) != 0
                && arg_8 == 0x10)
            goto label_1429253df

return 0
