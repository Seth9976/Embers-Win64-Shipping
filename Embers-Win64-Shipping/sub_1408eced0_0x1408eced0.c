// 函数: sub_1408eced0
// 地址: 0x1408eced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_142452380()
    void* rdx_1 = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int32_t rcx_1 = 0
        void* r14_1 = arg1 + 0x1a0
        int32_t var_88_1 = 0
        int32_t r10_1 = *(r14_1 + 0x28)
        int32_t var_84_1 = 1
        int32_t r8_2 = 0
        void* var_80_1 = r14_1 + 0x10
        int32_t var_78_1 = 0xffffffff
        int64_t var_74_1 = 0
        
        if (r10_1 != 0)
            void* rax_4 = *(r14_1 + 0x20)
            void* r9_1 = r14_1 + 0x10
            
            if (rax_4 != 0)
                r9_1 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_1408ecfa9:
                int32_t rax_11 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_84_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                var_74_1.d = r8_2 - rax_12 + 0x1f
                
                if (r8_2 - rax_12 + 0x1f s> r10_1)
                    var_74_1.d = r10_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_1)
                    r8_2 += 0x20
                    rcx_1 += 1
                    var_74_1:4.d = r8_2
                    var_88_1 = rcx_1
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    int32_t var_78_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_1408ecfa9
                
                var_74_1.d = r10_1
        
        int32_t rdx_6 = *(r14_1 + 0x28)
        var_74_1.d = rdx_6
        int128_t var_28_1 = 0xffffffff
        int128_t var_38_1 = var_88_1.o
        int32_t r15_1 = 0xffffffff << (rdx_6 & 0x1f).b
        int32_t r8_5 = rdx_6 s>> 5
        int32_t r9_3 = rdx_6 & 0xffffffe0
        int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_78_3 = r15_1
        int128_t var_68 = r14_1.o
        int128_t var_58_1 = var_38_1
        
        if (rdx_6 != r10_1)
            void* rax_16 = *(r14_1 + 0x20)
            void* r11_1 = r14_1 + 0x10
            
            if (rax_16 != 0)
                r11_1 = rax_16
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_10 = *(r11_1 + (sx.q(r8_5) << 2)) & r15_1
            
            if (rdx_10 != 0)
            label_1408ed086:
                int32_t rax_22 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
                int32_t rbx_1
                
                if (rax_22 == 0)
                    rbx_1 = 0x20
                else
                    rbx_1 = 0x1f - temp0_4
                
                var_74_1.d = r9_3 - rbx_1 + 0x1f
                
                if (r9_3 - rbx_1 + 0x1f s> r10_1)
                    var_74_1.d = r10_1
            else
                while (true)
                    int64_t rcx_5 = sx.q(r8_5)
                    r9_3 += 0x20
                    r8_5 += 1
                    
                    if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r11_1 + (rcx_5 << 2) + 4)
                    var_78_3 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_1408ed086
                
                var_74_1.d = r10_1
        
        while (true)
            int64_t rdx_11 = sx.q(var_58_1:0xc.d)
            int32_t rax_15
            
            if (rdx_11.d != (var_78_3.q u>> 0x20).d || var_58_1.q != r14_1 + 0x10)
                rax_15.b = 0
            else
                rax_15.b = 1
            
            int64_t* rcx_7 = var_68.q
            
            if (rax_15.b == 0 || rcx_7 != r14_1)
                rax_15.b = 1
            else
                rax_15.b = 0
            
            if (rax_15.b == 0)
                return nullptr
            
            void* rbx = *(*rcx_7 + rdx_11 * 0x10)
            
            if (rbx != 0)
                void* rax_25 = sub_1408ea240()
                void* rdx_12 = *(rbx + 0x10)
                int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                
                if (rax_26.d s<= *(rdx_12 + 0x38)
                        && *(*(rdx_12 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30)
                    return rbx
            
            int32_t var_5c
            var_58_1:8.d &= not.d(var_5c)
            sub_14059bdd0(&var_68:8)
    
    void* rax_30 = sub_1408ea240()
    void* rdx_13 = *(arg1 + 0x10)
    int64_t rax_31 = sx.q(*(rax_30 + 0x38))
    
    if (rax_31.d s<= *(rdx_13 + 0x38) && *(*(rdx_13 + 0x30) + (rax_31 << 3)) == rax_30 + 0x30
            && sub_1408e50d0(arg1) != 0)
        return arg1

return nullptr
