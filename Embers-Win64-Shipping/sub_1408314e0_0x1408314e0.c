// 函数: sub_1408314e0
// 地址: 0x1408314e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_14074a210(*(arg1 + 0x14))

if (result == 0)
    return result

if (data_14399fa54 u> *(arg1 + 0x200) + data_14396f020)
    return sub_14084d9f0(arg2) __tailcall

int64_t* rax_1 = arg2[3]

if (rax_1 != 0)
    int64_t rcx_3 = *rax_1
    int32_t rbx_1 = rax_1[6].d
    int32_t rcx_4 = 0
    int32_t r8_4 = 0
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = &rax_1[3]
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rbx_1 != 0)
        void* rax_2 = rax_1[5]
        void* r9_2 = &rax_1[3]
        
        if (rax_2 != 0)
            r9_2 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_2
        
        if (rdx_3 != 0)
        label_1408315e8:
            int32_t rax_9 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_94_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_84_1.d = r8_4 - rax_10 + 0x1f
            
            if (r8_4 - rax_10 + 0x1f s> rbx_1)
                var_84_1.d = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_4)
                r8_4 += 0x20
                rcx_4 += 1
                var_84_1:4.d = r8_4
                var_98_1 = rcx_4
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_2 + (rdx_4 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1408315e8
            
            var_84_1.d = rbx_1
    
    int32_t rdx_5 = rax_1[6].d
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_7 = rdx_5 s>> 5
    int32_t r9_4 = rdx_5 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_5
    int128_t var_78 = (&rax_1[1]).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_5 != rbx_1)
        void* rax_12 = rax_1[5]
        void* r10_2 = &rax_1[3]
        
        if (rax_12 != 0)
            r10_2 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_2 + (sx.q(r8_7) << 2)) & r12_1
        
        if (rdx_9 != 0)
        label_1408316b2:
            int32_t rax_19 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r11_2
            
            if (rax_19 == 0)
                r11_2 = 0x20
            else
                r11_2 = 0x1f - temp0_4
            
            var_84_1.d = r9_4 - r11_2 + 0x1f
            
            if (r9_4 - r11_2 + 0x1f s> rbx_1)
                var_84_1.d = rbx_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_7)
                r9_4 += 0x20
                r8_7 += 1
                
                if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_2 + (rcx_9 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1408316b2
            
            var_84_1.d = rbx_1
    
    while (true)
        int32_t var_5c
        int64_t rax_21 = sx.q(var_5c)
        int64_t* rdx_10 = var_78.q
        
        if (rax_21.d == (var_88_3.q u>> 0x20).d && var_68_1.q == &rax_1[3] && rdx_10 == &rax_1[1])
            break
        
        int64_t rcx_11 = rax_21 * 3
        int64_t rax_22 = *rdx_10
        int64_t* r9_6 = *(rax_22 + (rcx_11 << 3))
        (*(*r9_6 + 0x10))(r9_6, sx.q(*(rax_22 + (rcx_11 << 3) + 8)) + rcx_3, &arg2[2])
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

int64_t rdi_2 = sx.q(*(arg1 + 0x210))
int32_t rax_25 = (rdi_2 + 1).d
*(arg1 + 0x210) = rax_25

if (rax_25 s> *(arg1 + 0x214))
    sub_1407755b0(arg1 + 0x208)

return sub_14081a360(rdi_2 * 0x58 + *(arg1 + 0x208), arg2)
