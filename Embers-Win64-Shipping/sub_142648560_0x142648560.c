// 函数: sub_142648560
// 地址: 0x142648560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 0xb0)
int64_t r10 = sx.q(*(arg1 + 0xb8))
int32_t* r8 = r9
int64_t r14_1 = r10 * 6
void* rax = &r9[r14_1 * 2]
int32_t rsi

if (r9 == rax)
label_1426485b2:
    rsi = -1
else
    while (*arg2 != *r8)
        r8 = &r8[0xc]
        
        if (r8 == rax)
            goto label_1426485b2
    
    rsi = ((r8 - r9) s/ 0x30).d

int64_t result

if (rsi == 0xffffffff)
    int32_t rax_27 = (r10 + 1).d
    *(arg1 + 0xb8) = rax_27
    
    if (rax_27 s> *(arg1 + 0xbc))
        sub_1405c4f50(arg1 + 0xb0)
    
    result = *(arg1 + 0xb0)
    *(result + (r14_1 << 3)) = *arg2
    *(result + (r14_1 << 3) + 0x10) = *(arg2 + 0x10)
    *(result + (r14_1 << 3) + 0x20) = *(arg2 + 0x20)
else
    int64_t r15
    r15.b = 0
    int64_t r14_3 = sx.q(rsi) * 6
    
    if (r9[r14_3 * 2 + 0xb] == 1 && arg2[0xb] == 0)
        int32_t rcx_1 = 0
        int32_t var_68_1 = 0
        int32_t r10_1 = *(arg1 + 0x130)
        void* r9_1 = arg1 + 0x118
        int32_t var_64_1 = 1
        int32_t r8_1 = 0
        void* var_60 = r9_1
        int32_t var_58_1 = 0xffffffff
        int64_t var_54_1 = 0
        
        if (r10_1 != 0)
            void* rax_2 = *(r9_1 + 0x10)
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r10_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_142648678:
                int32_t rax_9 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_64_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_1
                
                var_54_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r10_1)
                    var_54_1.d = r10_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_54_1:4.d = r8_1
                    var_68_1 = rcx_1
                    
                    if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                    var_58_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_142648678
                
                var_54_1.d = r10_1
        
        int128_t var_38_1 = var_68_1.o
        int128_t var_28_1 = 0xffffffff
        var_68_1.o = (arg1 + 0x108).o
        int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_58_1.o = var_38_1
        
        if (0 s< r10_1)
            int32_t i_1
            int32_t i = i_1
            
            do
                if (*(sx.q(i) * 0x34 + *var_68_1.q) == *arg2)
                    r15.b = 1
                    break
                
                var_54_1:4.d &= not.d(var_60:4.d)
                sub_14059bdd0(&var_60)
                i = i_1
            while (i s< *(var_58_1.q + 0x18))
    
    if (r15.b != 0)
        int32_t rcx_5 = *(arg1 + 0xb8)
        int32_t rax_22 = rcx_5 - rsi
        
        if (rax_22 != 1)
            int64_t r9_2 = *(arg1 + 0xb0)
            memmove(r9_2 + (r14_3 << 3), sx.q(rsi + 1) * 0x30 + r9_2, (rax_22 - 1) * 0x30)
            rcx_5 = *(arg1 + 0xb8)
        
        *(arg1 + 0xb8) = rcx_5 - 1
        return sub_1407c4120(arg1 + 0xb0)
    
    result = *(arg1 + 0xb0)
    *(result + (r14_3 << 3)) = *arg2
    *(result + (r14_3 << 3) + 0x10) = *(arg2 + 0x10)
    *(result + (r14_3 << 3) + 0x20) = *(arg2 + 0x20)

return result
