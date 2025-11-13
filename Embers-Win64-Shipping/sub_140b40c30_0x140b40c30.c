// 函数: sub_140b40c30
// 地址: 0x140b40c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143de7a40

if (rbx == 0)
    return 

EnterCriticalSection(rbx + 0x50)
void* rax_1 = data_143de7a40

if (*(rax_1 + 8) != *(rax_1 + 0x34))
    sub_140b1f640(arg1, u"Manually tracked object counts:")
    void* r13_1 = data_143de7a40
    int32_t rcx_2 = 0
    int32_t rdi_1 = *(r13_1 + 0x28)
    int32_t var_98 = 0
    int32_t r8_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = r13_1 + 0x10
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rdi_1 != 0)
        void* rax_2 = *(r13_1 + 0x20)
        void* r9_1 = r13_1 + 0x10
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_140b40d38:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_94_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_84_1:4.d = r8_1
                var_98 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_140b40d38
            
            var_84_1.d = rdi_1
    
    int32_t rdx_6 = *(r13_1 + 0x28)
    double zmm2[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_48_1 = var_98.o
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_88_2 = r12_1
    var_84_1.d = rdx_6
    int128_t var_78 = r13_1.o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_6 != rdi_1)
        void* rax_12 = *(r13_1 + 0x20)
        void* r10_1 = r13_1 + 0x10
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_10 != 0)
        label_140b40e02:
            int32_t rax_19 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r11_1
            
            if (rax_19 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
                var_88_2 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140b40e02
            
            var_84_1.d = rdi_1
    
    while (true)
        int32_t var_5c
        int64_t rax_21 = sx.q(var_5c)
        int64_t* rdx_11 = var_78.q
        
        if (rax_21.d == (var_88_2.q u>> 0x20).d && var_68_1.q == r13_1 + 0x10 && rdx_11 == r13_1)
            break
        
        int32_t* rdi_2 = *rdx_11 + rax_21 * 0x14
        int64_t* rax_23 = sub_140b63b70(rdi_2, &var_98)
        int16_t* const r8_5
        
        if (rax_23[1].d == 0)
            r8_5 = &data_142d40450
        else
            r8_5 = *rax_23
        
        rdi_2[2]
        sub_140b1f700(arg1, u"\t%s: %d instances", r8_5)
        int64_t rcx_12 = var_98.q
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    sub_140b1f640(arg1, &data_142d40450)

if (rbx != -0x50)
    LeaveCriticalSection(rbx + 0x50)
