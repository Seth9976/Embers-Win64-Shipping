// 函数: sub_140b99bc0
// 地址: 0x140b99bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140af5690(data_143ddb400, Internationalization.AssetGroupClasses", 0, 1, arg3)
int64_t* result_1 = result

if (result != 0)
    int32_t rbx_1 = result_1[5].d
    int32_t r8 = 0
    int32_t rcx_1 = 0
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = &result_1[2]
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (rbx_1 != 0)
        void* rax = result_1[4]
        void* r9_1 = &result_1[2]
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_140b99ca8:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_a4_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_94_1.d = rcx_1 - rax_8 + 0x1f
            
            if (rcx_1 - rax_8 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8)
                rcx_1 += 0x20
                r8 += 1
                var_94_1:4.d = rcx_1
                var_a8_1 = r8
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_140b99ca8
            
            var_94_1.d = rbx_1
    
    int32_t rdx_5 = result_1[5].d
    int128_t var_40_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_50_1 = var_a8_1.o
    int32_t r8_2 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_60_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_98_3 = rsi_1
    var_94_1.d = rdx_5
    int128_t var_80 = result_1.o
    int128_t var_70_1 = var_50_1
    
    if (rdx_5 != rbx_1)
        void* rax_10 = result_1[4]
        void* r10_1 = &result_1[2]
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi_1
        
        if (rdx_9 != 0)
        label_140b99d72:
            int32_t rax_17 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_94_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_2)
                r9_3 += 0x20
                r8_2 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
                var_98_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_140b99d72
            
            var_94_1.d = rbx_1
    
    while (true)
        result = sx.q(var_70_1:0xc.d)
        int64_t rcx_8 = var_80.q
        
        if (result.d == (var_98_3.q u>> 0x20).d && var_70_1.q == &result_1[2] && rcx_8 == result_1)
            break
        
        int64_t* rdx_12 = result * 0x30 + *rcx_8
        int64_t rax_19 = *rdx_12
        int32_t rax_20 = rdx_12[4].d
        int32_t rcx_9 = rax_20 - 1
        
        if (rax_20 == 0)
            rcx_9 = 0
        
        int64_t* rax_21 = 0x18
        
        if (rcx_9 s<= 0)
            rax_21 = 8
        
        int16_t* rdx_13
        
        if (*(rax_21 + rdx_12 + 8) == 0)
            rdx_13 = &data_142d40450
        else
            rdx_13 = *(rax_21 + rdx_12)
        
        int64_t i_1
        sub_140b58260(&i_1, rdx_13, 1)
        void* rbx_2 = *arg1
        int64_t i = i_1
        int64_t* rcx_11 = *(rbx_2 + 0x50)
        int64_t rdx_14 = sx.q(*(rbx_2 + 0x58))
        int64_t rdi_2 = rdx_14 * 2
        void* r8_3 = &rcx_11[rdi_2]
        
        if (rcx_11 == r8_3)
        label_140b99e3e:
            var_a8_1.q = i
            int64_t var_a0_2 = rax_19
            int32_t rax_23 = (rdx_14 + 1).d
            *(rbx_2 + 0x58) = rax_23
            
            if (rax_23 s> *(rbx_2 + 0x5c))
                sub_1405a4f90(rbx_2 + 0x50)
            
            *(*(rbx_2 + 0x50) + (rdi_2 << 3)) = var_a8_1.o
        else
            while (*rcx_11 != i)
                rcx_11 = &rcx_11[2]
                
                if (rcx_11 == r8_3)
                    goto label_140b99e3e
        
        var_70_1:8.d &= not.d(var_80:0xc.d)
        sub_14059bdd0(&var_80:8)

return result
