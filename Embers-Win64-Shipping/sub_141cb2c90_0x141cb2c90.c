// 函数: sub_141cb2c90
// 地址: 0x141cb2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rdx = arg2[1]
int32_t arg_10 = *(arg1 + 0x148) - *(arg1 + 0x174)
int32_t* rcx_1 = *rdx

if (&rcx_1[1] u> rdx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *rcx_1
    *rdx += 4

int64_t result

if ((arg2[5].b & 2) == 0)
    result = zx.q(*(arg2 + 0x29))
    int64_t* r14_3
    
    if ((result.b & 1) != 0 || arg_10 s< 0)
        result.b |= 1
        *(arg2 + 0x29) = result.b
        r14_3 = arg1 + 0xf0
    else
        int64_t rax_40 = (*(*arg2 + 0x28))(arg2)
        int64_t rdx_25 = *arg2
        r14_3 = arg1 + 0xf0
        int64_t rax_43
        int32_t rdx_26
        rdx_26:rax_43 = sx.o(rax_40 - (*(rdx_25 + 0x20))(arg2, rdx_25))
        int32_t rax_45 = ((rax_43 + (zx.q(rdx_26) & 3)) s>> 2).d
        
        if (arg_10 s<= rax_45)
            rax_45 = arg_10
        
        result = sub_141c9c580(r14_3, rax_45)
        int32_t rbx_6 = 0
        
        if (arg_10 s> 0)
            do
                int64_t rax_46 = *arg2
                performanceCount = 0
                (*(rax_46 + 0x140))(arg2, &performanceCount)
                
                if ((*(arg2 + 0x29) & 1) != 0)
                    return sub_141c9c580(r14_3, 0)
                
                int64_t* rax_47
                int512_t zmm1
                rax_47, zmm1 = sub_141c8f520(r14_3, &performanceCount)
                result = sub_141cb3600(rax_47, arg2, zmm1)
                
                if ((*(arg2 + 0x29) & 1) != 0)
                    return sub_141c9c580(r14_3, 0)
                
                rbx_6 += 1
            while (rbx_6 s< arg_10)
    
    if ((*(arg2 + 0x29) & 1) != 0)
        return sub_141c9c580(r14_3, 0)
else
    void* r10_1 = arg1 + 0x140
    int32_t r11_1 = *(r10_1 + 0x28)
    void* r13_1 = r10_1 + 0x10
    int32_t rcx_3 = 0
    void* arg_18 = r10_1
    int32_t r8_1 = 0
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = r13_1
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (r11_1 != 0)
        void* rax_5 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_141cb2db8:
            int32_t rax_12 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_a4_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_94_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r11_1)
                var_94_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_94_1:4.d = r8_1
                var_a8_1 = rcx_3
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141cb2db8
            
            var_94_1.d = r11_1
    
    int32_t rdx_6 = *(r10_1 + 0x28)
    int32_t r15_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int128_t var_70_1 = 0xffffffff
    int64_t var_40_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    arg3.o = var_a8_1.o
    int128_t var_80_1
    var_80_1:8.d = r15_1
    var_80_1:0xc.d = rdx_6
    int64_t* var_60_1 = r10_1.o.q
    int128_t var_50_1 = arg3.o
    
    if (rdx_6 != r11_1)
        void* rax_15 = *(r13_1 + 0x10)
        void* r10_2 = r13_1
        
        if (rax_15 != 0)
            r10_2 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_2 + (sx.q(r8_4) << 2)) & r15_1
        
        if (rdx_10 != 0)
        label_141cb2e82:
            int32_t rax_22 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rbx_1
            
            if (rax_22 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            var_80_1:0xc.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_80_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_2 + (rcx_8 << 2) + 4)
                var_80_1:8.d = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141cb2e82
            
            var_80_1:0xc.d = r11_1
        
        r10_1 = arg_18
    
    while (true)
        result = sx.q(var_50_1:0xc.d)
        
        if (result.d == (var_80_1:8.q u>> 0x20).d && var_50_1.q == r13_1 && var_60_1 == r10_1)
            break
        
        void* rbx_2 = *var_60_1 + result * 0x18
        (*(*arg2 + 0x140))(arg2, rbx_2)
        int64_t* rcx_12 = arg2[1]
        int64_t* r15_2 = *(rbx_2 + 8)
        int64_t* rdx_13 = *rcx_12
        
        if (&rdx_13[1] u<= rcx_12[1])
            *r15_2 = *rdx_13
            int64_t* rax_28 = arg2[1]
            *rax_28 += 8
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg2, r15_2, arg3)
        else
            (*(*arg2 + 0x150))(arg2, r15_2, 8)
        
        int64_t* rcx_14 = arg2[1]
        performanceCount.d = r15_2[2].d
        int32_t* rdx_15 = *rcx_14
        
        if (&rdx_15[1] u> rcx_14[1])
            int32_t* rdx_16 = &performanceCount
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_16, arg3)
            else
                (*(*arg2 + 0x150))(arg2, rdx_16, 4)
        else
            performanceCount.d = *rdx_15
            *rcx_14 += 4
        
        int32_t rdx_17 = performanceCount.d
        
        if ((arg2[5].b & 1) != 0)
            int64_t r14_1 = sx.q(r15_2[2].d)
            
            if (rdx_17 s> r14_1.d)
                r15_2[2].d = rdx_17
                int32_t i_2 = rdx_17 - r14_1.d
                
                if (rdx_17 s> *(r15_2 + 0x14))
                    sub_1405c5060(&r15_2[1])
                    rdx_17 = performanceCount.d
                
                int32_t* rcx_19 = r14_1 * 0x50 + r15_2[1]
                
                if (i_2 != 0)
                    void* rax_34 = &rcx_19[5]
                    int32_t i
                    
                    do
                        *rcx_19 = 0
                        rcx_19 = &rcx_19[0x14]
                        *(rax_34 - 0x10) = 0
                        *(rax_34 - 8) = 0
                        __builtin_memset(rax_34, 0, 0x34)
                        rax_34 += 0x50
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rdx_17 = performanceCount.d
            else if (rdx_17 s< r14_1.d)
                arg3 = sub_141caaa70(&r15_2[1], rdx_17, r14_1.d - rdx_17, 1)
                rdx_17 = performanceCount.d
            
            r13_1 = var_a0_1
        
        int32_t i_1 = 0
        
        if (rdx_17 s> 0)
            do
                arg3 = sub_141cb31a0(sx.q(i_1) * 0x50 + r15_2[1], arg2, arg3)
                i_1 += 1
            while (i_1 s< performanceCount.d)
        
        (*(*arg2 + 0x140))(arg2, &r15_2[0x15])
        sub_140cae270(arg2, &r15_2[3], arg3)
        sub_1409ad9b0(arg2, &r15_2[9], arg3)
        arg3 = sub_141c958a0(arg2, &r15_2[0xb], arg3)
        sub_141cb3520(&r15_2[0x16], arg2, arg3)
        int32_t var_54
        var_50_1:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
        r10_1 = arg_18

return result
