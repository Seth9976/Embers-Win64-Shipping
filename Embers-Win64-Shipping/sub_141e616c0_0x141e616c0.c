// 函数: sub_141e616c0
// 地址: 0x141e616c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int64_t* rdx_5

if (*(arg1 + 0x3e0) == *(arg1 + 0x40c))
label_141e6174f:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x410
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e6174f_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x3d8)
            
            if (*rdx_5 == arg2)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e6174f_2
        
        if (rax_4 == 0xffffffff)
        label_141e6174f_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

if (rax_5 != 0)
    int32_t rcx_2 = 0
    int32_t r8_2 = 0
    void* r13_2 = *rax_5 + 0x88
    int32_t rbx_1 = *(r13_2 + 0x28)
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = r13_2 + 0x10
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (rbx_1 != 0)
        void* rax_6 = *(r13_2 + 0x20)
        void* r9_1 = r13_2 + 0x10
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_8 = *r9_1
        
        if (rdx_8 != 0)
        label_141e61808:
            int32_t rax_13 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_a4_2 = rax_13
            int64_t arg_10
            arg_10.d = temp0_2
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            var_94_1.d = r8_2 - rax_14 + 0x1f
            
            if (r8_2 - rax_14 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_2)
                r8_2 += 0x20
                rcx_2 += 1
                var_94_1:4.d = r8_2
                var_a8_1 = rcx_2
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141e61808
            
            var_94_1.d = rbx_1
    
    int32_t rdx_10 = *(r13_2 + 0x28)
    int32_t rdi_1 = 0xffffffff << (rdx_10.b & 0x1f)
    int32_t rcx_7 = rdx_10 & 0xffffffe0
    int32_t r8_5 = rdx_10 s>> 5
    void* var_88_1
    var_88_1.d = r8_5
    int128_t var_70_1 = 0xffffffff
    int64_t var_40_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_80_1
    var_80_1:8.d = rdi_1
    var_80_1:0xc.d = rdx_10
    var_70_1.d = rcx_7
    int64_t* var_60_1 = r13_2.o.q
    int128_t var_50_1 = var_a8_1.o
    
    if (rdx_10 != rbx_1)
        void* rax_16 = *(r13_2 + 0x20)
        void* r9_2 = r13_2 + 0x10
        
        if (rax_16 != 0)
            r9_2 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_14 = *(r9_2 + (sx.q(r8_5) << 2)) & rdi_1
        
        if (rdx_14 != 0)
        label_141e618e9:
            int32_t rax_22 = neg.d(rdx_14) & rdx_14
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t arg_8 = temp0_4
            int32_t r10_1
            
            if (rax_22 == 0)
                r10_1 = 0x20
            else
                r10_1 = 0x1f - temp0_4
            
            var_80_1:0xc.d = rcx_7 - r10_1 + 0x1f
            
            if (rcx_7 - r10_1 + 0x1f s> rbx_1)
                var_80_1:0xc.d = rbx_1
        else
            while (true)
                int64_t rdx_15 = sx.q(r8_5)
                rcx_7 += 0x20
                r8_5 += 1
                var_70_1.d = rcx_7
                var_88_1.d = r8_5
                
                if (rdx_15.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_14 = *(r9_2 + (rdx_15 << 2) + 4)
                var_80_1:8.d = 0xffffffff
                
                if (rdx_14 != 0)
                    goto label_141e618e9
            
            var_80_1:0xc.d = rbx_1
    
    while (true)
        int64_t rax_24 = sx.q(var_50_1:0xc.d)
        
        if (rax_24.d == (var_80_1:8.q u>> 0x20).d && var_50_1.q == r13_2 + 0x10
                && var_60_1 == r13_2)
            break
        
        int32_t* rdi_4 = *var_60_1 + 0x10 + rax_24 * 0x90
        uint64_t rax_25 = sub_140d3c6e0(rdi_4)
        uint64_t rbx_2 = rax_25
        
        if (rax_25 != 0)
        label_141e619bb:
            int64_t rdi_5 = sx.q(arg3[1].d)
            int32_t rax_29 = (rdi_5 + 1).d
            arg3[1].d = rax_29
            
            if (rax_29 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            r12.b = 1
            *(*arg3 + (rdi_5 << 3)) = rbx_2
        else if (*(rdi_4 + 0x10) != rax_25)
            if (rax_25.d == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_25 = zx.q(data_1439aaa30)
            
            if (rax_25.d != rdi_4[2] || *rdi_4 != 0xffffffff)
                void* rax_26 = sub_140d2bce0(&rdi_4[4])
                sub_140d3a3a0(rdi_4, rax_26)
                
                if (rax_26 != 0 || data_143e1d7b4 == rax_26.b)
                    int32_t rax_27 = 0
                    
                    if (0 == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_27 = data_1439aaa30
                    
                    rdi_4[2] = rax_27
                
                uint64_t rax_28 = sub_140d3c6e0(rdi_4)
                rbx_2 = rax_28
                
                if (rax_28 != 0)
                    goto label_141e619bb
        
        int32_t var_54
        var_50_1:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)

return zx.q(r12.b)
