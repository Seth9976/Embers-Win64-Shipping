// 函数: sub_141ca6b60
// 地址: 0x141ca6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t r14 = 0
int64_t result

if (arg1[1].d s<= 0)
label_141ca6bcd:
    int32_t r14_1 = 0
    
    if (arg1[3].d s<= 0)
    label_141ca6c0e:
        int32_t i = 0
        
        if (arg1[5].d s> 0)
            int32_t* r15_3 = nullptr
            
            do
                int64_t rax_3 = arg1[4]
                int32_t rcx_2
                rcx_2.b = *(r15_3 + rax_3 + 4) == 0
                
                if ((rcx_2.b & sub_140b5b8a0(*(r15_3 + rax_3), 0).b) != 0)
                    goto label_141ca6dcd_2
                
                i += 1
                r15_3 = &r15_3[2]
            while (i s< arg1[5].d)
        
        int32_t i_1 = 0
        
        if (arg1[7].d s> 0)
            int32_t* r15_4 = nullptr
            
            do
                int64_t rax_4 = arg1[6]
                int32_t rcx_3
                rcx_3.b = *(r15_4 + rax_4 + 4) == 0
                
                if ((rcx_3.b & sub_140b5b8a0(*(r15_4 + rax_4), 0).b) != 0)
                    goto label_141ca6dcd_2
                
                i_1 += 1
                r15_4 = &r15_4[2]
            while (i_1 s< arg1[7].d)
        
        int32_t var_68_1 = 0
        int32_t r9_1 = arg1[0xd].d
        void* r8_1 = &arg1[0xa]
        int32_t var_64_1 = 1
        int32_t rcx_4 = 0
        void* var_60 = r8_1
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int32_t var_50_1 = 0
        
        if (r9_1 != 0)
            void* rax_5 = *(r8_1 + 0x10)
            
            if (rax_5 != 0)
                r8_1 = rax_5
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_1 - 1)
            int32_t rdx_2 = *r8_1
            int32_t var_54_3
            
            if (rdx_2 != 0)
            label_141ca6d06:
                int32_t rax_12 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                int32_t var_64_2 = rax_12
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13 = 0x20
                else
                    rax_13 = 0x1f - temp0_2
                
                int32_t var_54_2 = rcx_4 - rax_13 + 0x1f
                
                if (rcx_4 - rax_13 + 0x1f s> r9_1)
                    var_54_3 = r9_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rsi)
                    rcx_4 += 0x20
                    rsi += 1
                    var_50_1 = rcx_4
                    var_68_1 = rsi
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r8_1 + (rdx_3 << 2) + 4)
                    var_58_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_141ca6d06
                
                var_54_3 = r9_1
        
        int128_t var_28_1 = 0xffffffff
        double var_38_1[0x2] = var_68_1.o
        var_68_1.o = (&arg1[8]).o
        int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_58_1.o = var_38_1
        
        if (0 s< r9_1)
            int32_t i_3
            int32_t i_2 = i_3
            
            do
                int64_t rdx_5 = sx.q(i_2) * 5
                int64_t rcx_6 = *var_68_1.q
                int32_t rcx_7
                rcx_7.b = *(rcx_6 + (rdx_5 << 3) + 4) == 0
                
                if ((rcx_7.b & sub_140b5b8a0(*(rcx_6 + (rdx_5 << 3)), 0).b) != 0)
                    goto label_141ca6dcd_2
                
                var_50_1 &= not.d(var_60:4.d)
                sub_14059bdd0(&var_60)
                i_2 = i_3
            while (i_2 s< *(var_58_1.q + 0x18))
        
        if (arg2 != 0 || (*(arg1 + 0xe1) == arg2 && arg1[0x1c].b == arg2))
            result.b = 1
        else
        label_141ca6dcd:
            result.b = 0
    else
        int32_t* r15_2 = nullptr
        
        while (true)
            int64_t rax_2 = arg1[2]
            int32_t rcx_1
            rcx_1.b = *(r15_2 + rax_2 + 4) == 0
            
            if ((rcx_1.b & sub_140b5b8a0(*(r15_2 + rax_2), 0).b) != 0)
                break
            
            r14_1 += 1
            r15_2 = &r15_2[2]
            
            if (r14_1 s>= arg1[3].d)
                goto label_141ca6c0e
        
    label_141ca6dcd_1:
        result.b = 0
else
    int32_t* r15_1 = nullptr
    
    while (true)
        int64_t rax_1 = *arg1
        int32_t rcx
        rcx.b = *(r15_1 + rax_1 + 4) == 0
        
        if ((rcx.b & sub_140b5b8a0(*(r15_1 + rax_1), 0).b) != 0)
            break
        
        r14 += 1
        r15_1 = &r15_1[2]
        
        if (r14 s>= arg1[1].d)
            goto label_141ca6bcd
    
label_141ca6dcd_2:
    result.b = 0

return result
