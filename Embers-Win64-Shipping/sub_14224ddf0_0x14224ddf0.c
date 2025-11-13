// 函数: sub_14224ddf0
// 地址: 0x14224ddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int64_t rbx_1
void* r13_1

if (arg2 != 0)
    if (sub_140d3e110(arg1 + 0x218) != 0)
        return sub_140d3c6e0(arg1 + 0x218)
    
    rbx_1 = *(arg1 + 0x208)
    r13_1 = *(arg1 + 0x200)
else
    if (sub_140d3e110(arg1 + 0x210) != 0)
        return sub_140d3c6e0(arg1 + 0x210)
    
    rbx_1 = *(arg1 + 0x1f8)
    r13_1 = *(arg1 + 0x1f0)

uint32_t r15_2 = (rbx_1 u>> 0x20).d

if (r13_1 != 0)
label_14224deca:
    int32_t rcx_5
    rcx_5.b = r15_2 == 0
    void* rbx_2
    
    if ((rcx_5.b & sub_140b5b8a0(rbx_1.d, 0)) == 0)
        int32_t var_94_1 = 1
        int32_t r10_1 = *(r13_1 + 0x1c8)
        void* var_90_1 = r13_1 + 0x1b0
        int32_t rcx_7 = 0
        int32_t var_98_1 = 0
        int32_t r8_2 = 0
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_1 != 0)
            void* rax_8 = *(r13_1 + 0x1c0)
            void* r9_1 = r13_1 + 0x1b0
            
            if (rax_8 != 0)
                r9_1 = rax_8
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_14224dfa9:
                int32_t rax_15 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                int32_t var_94_2 = rax_15
                int32_t rax_16
                
                if (rax_15 == 0)
                    rax_16 = 0x20
                else
                    rax_16 = 0x1f - temp0_2
                
                var_84_1.d = r8_2 - rax_16 + 0x1f
                
                if (r8_2 - rax_16 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_7)
                    r8_2 += 0x20
                    rcx_7 += 1
                    var_84_1:4.d = r8_2
                    var_98_1 = rcx_7
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_14224dfa9
                
                var_84_1.d = r10_1
        
        int32_t rdx_5 = *(r13_1 + 0x1c8)
        var_84_1.d = rdx_5
        int128_t var_38_1 = 0xffffffff
        int128_t var_48_1 = var_98_1.o
        int32_t r12_3 = 0xffffffff << (rdx_5 & 0x1f).b
        int32_t r8_5 = rdx_5 s>> 5
        int32_t r9_3 = rdx_5 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_3 = r12_3
        int128_t var_78 = (r13_1 + 0x1a0).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_5 != r10_1)
            void* rax_20 = *(r13_1 + 0x1c0)
            void* r11_1 = r13_1 + 0x1b0
            
            if (rax_20 != 0)
                r11_1 = rax_20
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_9 = *(r11_1 + (sx.q(r8_5) << 2)) & r12_3
            
            if (rdx_9 != 0)
            label_14224e087:
                int32_t rax_26 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
                int32_t rdi_1
                
                if (rax_26 == 0)
                    rdi_1 = 0x20
                else
                    rdi_1 = 0x1f - temp0_4
                
                var_84_1.d = r9_3 - rdi_1 + 0x1f
                
                if (r9_3 - rdi_1 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rcx_11 = sx.q(r8_5)
                    r9_3 += 0x20
                    r8_5 += 1
                    
                    if (rcx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r11_1 + (rcx_11 << 2) + 4)
                    var_88_3 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_14224e087
                
                var_84_1.d = r10_1
        
        void* rdi_2
        
        while (true)
            int32_t var_5c
            int64_t rdx_10 = sx.q(var_5c)
            int32_t rax_19
            
            if (rdx_10.d != (var_88_3.q u>> 0x20).d || var_68_1.q != r13_1 + 0x1b0)
                rax_19.b = 0
            else
                rax_19.b = 1
            
            int64_t* rcx_13 = var_78.q
            
            if (rax_19.b == 0 || rcx_13 != r13_1 + 0x1a0)
                rax_19.b = 1
            else
                rax_19.b = 0
            
            if (rax_19.b == 0)
                return rsi
            
            rdi_2 = *(*rcx_13 + rdx_10 * 0x10)
            
            if (*(rdi_2 + 0x18) == rbx_1)
                break
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
        
        void* rax_31 = sub_142493230()
        void* rdx_11 = *(rdi_2 + 0x10)
        int64_t rax_32 = sx.q(*(rax_31 + 0x38))
        
        if (rax_32.d s> *(rdx_11 + 0x38) || *(*(rdx_11 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
            void* rax_34 = sub_142577430()
            void* rdx_12 = *(rdi_2 + 0x10)
            int64_t rax_35 = sx.q(*(rax_34 + 0x38))
            
            if (rax_35.d s<= *(rdx_12 + 0x38)
                    && *(*(rdx_12 + 0x30) + (rax_35 << 3)) == rax_34 + 0x30)
                return rdi_2
        else
            void* rbx_3 = *(rdi_2 + 0x1f8)
            
            if (rbx_3 != 0)
                rbx_2 = *(rbx_3 + 0x130)
                goto label_14224dee0
    else
        rbx_2 = *(r13_1 + 0x130)
    label_14224dee0:
        
        if (rbx_2 != 0)
            void* rax_5 = sub_142577430()
            void* rdx = *(rbx_2 + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                return rbx_2
else
    int32_t rcx_4
    rcx_4.b = sub_140b5b8a0(rbx_1.d, 0) == 0
    
    if (((rbx_1 u>> 0x20).d != 0 | rcx_4.b) != 0)
        r13_1 = *(arg1 + 0xa0)
        r15_2 = (rbx_1 u>> 0x20).d
        
        if (r13_1 != 0)
            goto label_14224deca

return rsi
