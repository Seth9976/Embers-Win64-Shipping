// 函数: sub_142659630
// 地址: 0x142659630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int32_t rdx_2 = arg1[0x22].d - *(arg1 + 0x13c) + rax

if (rdx_2 s> *(arg3 + 0xc))
    sub_1413f6f70(arg3, rdx_2)

int32_t rax_1 = sub_14265c0d0(arg1, arg2)

if (rax_1 != 0xffffffff)
    int32_t rcx_2 = 0
    void* r10_1 = &arg1[0x21]
    int32_t r11_1 = *(r10_1 + 0x28)
    void* r13_1 = r10_1 + 0x10
    int32_t r8 = 0
    void* arg_18 = r10_1
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = r13_1
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(r13_1 + 0x10)
        void* r9 = r13_1
        
        if (rax_2 != 0)
            r9 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_6 = *r9
        
        if (rdx_6 != 0)
        label_142659728:
            int32_t rax_9 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_a4_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_94_1.d = r8 - rax_10 + 0x1f
            
            if (r8 - rax_10 + 0x1f s> r11_1)
                var_94_1.d = r11_1
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_2)
                r8 += 0x20
                rcx_2 += 1
                var_94_1:4.d = r8
                var_a8_1 = rcx_2
                
                if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r9 + (rdx_7 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_142659728
            
            var_94_1.d = r11_1
    
    int32_t rdx_8 = *(r10_1 + 0x28)
    int128_t var_48_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_8.b & 0x1f)
    int128_t var_58_1 = var_a8_1.o
    int32_t r8_3 = rdx_8 s>> 5
    int32_t r9_2 = rdx_8 & 0xffffffe0
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_98_3 = r14_1
    var_94_1.d = rdx_8
    int128_t var_88 = r10_1.o
    uint128_t var_78_1 = var_58_1
    
    if (rdx_8 != r11_1)
        void* rax_12 = *(r13_1 + 0x10)
        void* r10_2 = r13_1
        
        if (rax_12 != 0)
            r10_2 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_12 = *(r10_2 + (sx.q(r8_3) << 2)) & r14_1
        
        if (rdx_12 != 0)
        label_1426597f2:
            int32_t rax_19 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rbx_1
            
            if (rax_19 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            var_94_1.d = r9_2 - rbx_1 + 0x1f
            
            if (r9_2 - rbx_1 + 0x1f s> r11_1)
                var_94_1.d = r11_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r10_2 + (rcx_7 << 2) + 4)
                var_98_3 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_1426597f2
            
            var_94_1.d = r11_1
        
        r10_1 = arg_18
    
    while (true)
        int64_t rax_21 = sx.q(var_78_1:0xc.d)
        int64_t rcx_9 = var_88.q
        
        if (rax_21.d == (var_98_3.q u>> 0x20).d && var_78_1.q == r13_1 && rcx_9 == r10_1)
            break
        
        void* rbx_3 = rax_21 * 0x34 + *rcx_9
        char rax_22
        
        if (arg4 != 0)
            rax_22 = sub_1405a66e0(rbx_3 + 0x24, arg4, r8_3)
        
        if (arg4 == 0 || rax_22 != 0)
            bool rcx_11 = false
            
            if (rax_1 u<= 0xf)
                rcx_11 = test_bit(*(rbx_3 + 0x20), rax_1)
            
            if (rcx_11 != 0)
                int64_t rsi_1 = sx.q(arg3[1].d)
                int32_t rax_24 = (rsi_1 + 1).d
                arg3[1].d = rax_24
                
                if (rax_24 s> *(arg3 + 0xc))
                    sub_1405c50f0(arg3)
                
                int128_t* rdx_16 = rsi_1 * 0x1c + *arg3
                *rdx_16 = *(rbx_3 + 4)
                rdx_16[1].q = *(rbx_3 + 0x14)
                *(rdx_16 + 0x18) = *(rbx_3 + 0x1c)
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        r8_3 = sub_14059bdd0(&var_88:8)
        r10_1 = arg_18

return zx.q(arg3[1].d - rax)
