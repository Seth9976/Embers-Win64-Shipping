// 函数: sub_141faa400
// 地址: 0x141faa400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) != 0)
    sub_141fca460(arg1)

if (*(arg1 + 0x50) != 0)
    int32_t rcx = 0
    int32_t rdi_1 = *(arg1 + 0xb0)
    int32_t var_98_1 = 0
    int32_t r8_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = arg1 + 0x98
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rdi_1 != 0)
        void* rax_1 = *(arg1 + 0xa8)
        void* r9_1 = arg1 + 0x98
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141faa4d8:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_84_1:4.d = r8_1
                var_98_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141faa4d8
            
            var_84_1.d = rdi_1
    
    int32_t rdx_5 = *(arg1 + 0xb0)
    int128_t var_38_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r14_1
    var_84_1.d = rdx_5
    int128_t var_78 = (arg1 + 0x88).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_5 != rdi_1)
        void* rax_11 = *(arg1 + 0xa8)
        void* r10_1 = arg1 + 0x98
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
        
        if (rdx_9 != 0)
        label_141faa5a2:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141faa5a2
            
            var_84_1.d = rdi_1
    
    while (true)
        int32_t var_5c
        int64_t rax_20 = sx.q(var_5c)
        int64_t* rdx_10 = var_78.q
        
        if (rax_20.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x98
                && rdx_10 == arg1 + 0x88)
            break
        
        int32_t* r14_2 = *rdx_10 + rax_20 * 0xc
        void* r9_5 = *(*(arg1 + 0x50) + 0x58)
        int32_t* rdx_14
        
        if (*(r9_5 + 0x4c8) == *(r9_5 + 0x4f4))
        label_141faa663:
            rdx_14 = nullptr
        else
            void* r8_5 = r9_5 + 0x4f8
            void* rdx_11 = *(r8_5 + 8)
            int64_t r10_2 = sx.q(*r14_2)
            
            if (rdx_11 != 0)
                r8_5 = rdx_11
            
            int32_t rax_24 = *(r8_5 + (((sx.q(*(r9_5 + 0x508)) - 1) & r10_2) << 2))
            
            if (rax_24 == 0xffffffff)
            label_141faa663_1:
                rdx_14 = nullptr
            else
                while (true)
                    rdx_14 = sx.q(rax_24) * 0x60 + *(r9_5 + 0x4c0)
                    
                    if (*rdx_14 == r10_2.d)
                        break
                    
                    rax_24 = rdx_14[0x16]
                    
                    if (rax_24 == 0xffffffff)
                        goto label_141faa663_2
                
                if (rax_24 == 0xffffffff)
                label_141faa663_2:
                    rdx_14 = nullptr
        
        if (rdx_14[4] != rdx_14[0xf])
            void* rdi_2 = &rdx_14[0x10]
            int64_t rsi_2 = sx.q(rdx_14[0x14]) - 1
            uint32_t r9_7 = (arg1 u>> 4).d
            int32_t r8_8 = (0x9e3779b9 - r9_7) ^ r9_7 << 8
            int32_t rcx_14 = neg.d(r8_8 + r9_7) ^ r8_8 u>> 0xd
            int32_t r9_10 = (r9_7 - r8_8 - rcx_14) ^ rcx_14 u>> 0xc
            int32_t r8_11 = (r8_8 - r9_10 - rcx_14) ^ r9_10 << 0x10
            int32_t rcx_17 = (rcx_14 - r8_11 - r9_10) ^ r8_11 u>> 5
            int32_t r9_13 = (r9_10 - r8_11 - rcx_17) ^ rcx_17 u>> 3
            int32_t r8_14 = (r8_11 - r9_13 - rcx_17) ^ r9_13 << 0xa
            void* rax_40 = *(rdx_14 + 0x48)
            
            if (rax_40 != 0)
                rdi_2 = rax_40
            
            int32_t i =
                *(rdi_2 + (((sx.q(rcx_17 - r8_14 - r9_13) ^ zx.q(r8_14) u>> 0xf) & rsi_2) << 2))
            
            if (i != 0xffffffff)
                void* r10_3 = *(rdx_14 + 8)
                
                do
                    int64_t i_1 = sx.q(i)
                    int64_t rax_44 = i_1 * 2
                    
                    if (*(r10_3 + (rax_44 << 3)) == arg1)
                        int64_t r9_14 = i_1 * 2
                        int64_t rax_46 = sx.q(*(r10_3 + (r9_14 << 3) + 0xc)) & rsi_2
                        void* rcx_23 = rdi_2 + (rax_46 << 2)
                        
                        for (int32_t j = *(rdi_2 + (rax_46 << 2)); j != 0xffffffff; j = *rcx_23)
                            if (j == i)
                                *rcx_23 = *(r10_3 + (r9_14 << 3) + 8)
                                break
                            
                            rcx_23 = r10_3 + 8 + (sx.q(j) << 4)
                        
                        void* r11_3 = &rdx_14[6]
                        int32_t r10_4 = rol.d(1, i.b)
                        
                        if (rdx_14[0xf] != 0)
                            *(*(rdx_14 + 8) + sx.q(rdx_14[0xe]) * 0x10) = i
                        
                        int64_t rcx_28 = *(rdx_14 + 8)
                        *(rcx_28 + (r9_14 << 3)) = 0xffffffff
                        int32_t rax_51
                        
                        if (rdx_14[0xf] s<= 0)
                            rax_51 = -1
                        else
                            rax_51 = rdx_14[0xe]
                        
                        *(rcx_28 + (r9_14 << 3) + 4) = rax_51
                        rdx_14[0xf] += 1
                        rdx_14[0xe] = i
                        void* rax_52 = *(r11_3 + 0x10)
                        
                        if (rax_52 != 0)
                            r11_3 = rax_52
                        
                        if (i s< 0)
                            i += 0x1f
                        
                        int64_t rax_53 = sx.q(i s>> 5)
                        *(r11_3 + (rax_53 << 2)) &= not.d(r10_4)
                        break
                    
                    i = *(r10_3 + (rax_44 << 3) + 8)
                while (i != 0xffffffff)
        
        if (rdx_14[4] == rdx_14[0xf])
            sub_141fc3770(*(*(arg1 + 0x50) + 0x58) + 0x4c0, r14_2)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    sub_1409740e0(*(*(arg1 + 0x50) + 0x58) + 0x518, arg1)
    void* rcx_34 = *(*(arg1 + 0x50) + 0x58)
    *(rcx_34 + 0x510) -= *(arg1 + 4)
    sub_1409740e0(*(*(arg1 + 0x50) + 0x58) + 0x568, arg1)

sub_14084eee0(arg1 + 0x88, 0)
*(arg1 + 4) = 0
*(arg1 + 0x48) = 0
int64_t result = sub_140d3a3a0(arg1 + 0xd8, nullptr)
*(arg1 + 8) &= 0xfffffff5
*(arg1 + 0x40) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x60) = 0
int64_t** rdi_3 = *(arg1 + 0x30)
*(arg1 + 0x30) = 0

if (rdi_3 != 0)
    void* rsi_3 = rdi_3[1]
    
    if (rsi_3 != 0)
        sub_141fa6880(rsi_3)
        j_sub_140a74f90(rsi_3)
    
    sub_141fa8b80(rdi_3, *rdi_3)
    result = j_sub_140a74f90(rdi_3)

int64_t** rdi_4 = *(arg1 + 0x38)
*(arg1 + 0x38) = 0

if (rdi_4 == 0)
    return result

void* rbx_1 = rdi_4[1]

if (rbx_1 != 0)
    sub_141fa6880(rbx_1)
    j_sub_140a74f90(rbx_1)

sub_141fa8b80(rdi_4, *rdi_4)
return j_sub_140a74f90(rdi_4)
