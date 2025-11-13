// 函数: sub_140864940
// 地址: 0x140864940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b1f640(arg2, u"=== FNiagaraWorldManager Dumping Detailed Information")
TEB* gsbase

if (data_143ce4710 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce4710)
    
    if (data_143ce4710 == 0xffffffff)
        data_143ce4708 = j_sub_140d2ee50(sub_140bdf730(), -ffffffffffffffff, u"ETickingGroup", 0)
        _Init_thread_footer(&data_143ce4710)

int32_t i = 0
int64_t* r15 = arg1 + 0x1d8
int32_t i_1 = 0
uint64_t result

do
    result = zx.q(r15[-3].d)
    
    if (result.d != *(r15 + 0x14))
        int64_t var_70
        int64_t* rax_2 = sub_140bded20(data_143ce4708, &var_70, i)
        int16_t* const r8_3
        
        if (rax_2[1].d == 0)
            r8_3 = &data_142d40450
        else
            r8_3 = *rax_2
        
        sub_140b1f700(arg2, u"TickingGroup %s", r8_3)
        int64_t rcx_3 = var_70
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int32_t r10_1 = r15[1].d
        void* r9_1 = &r15[-2]
        int32_t rcx_4 = 0
        int32_t var_b4_1 = 1
        int32_t r8_4 = 0
        int32_t var_b8_1 = 0
        void* var_b0_1 = r9_1
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r10_1 != 0)
            void* rax_3 = *r15
            
            if (rax_3 != 0)
                r9_1 = rax_3
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_140864a78:
                int32_t rax_10 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_b4_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                var_a4_1.d = r8_4 - rax_11 + 0x1f
                
                if (r8_4 - rax_11 + 0x1f s> r10_1)
                    var_a4_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_4)
                    r8_4 += 0x20
                    rcx_4 += 1
                    var_a4_1:4.d = r8_4
                    var_b8_1 = rcx_4
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_a8_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_140864a78
                
                var_a4_1.d = r10_1
        
        int32_t rbx_1 = r15[1].d
        int128_t var_38_1 = 0xffffffff
        int128_t var_48_1 = var_b8_1.o
        int32_t rdi_1 = 0xffffffff << (r10_1.b & 0x1f)
        int32_t r8_7 = r10_1 s>> 5
        int32_t r9_3 = r10_1 & 0xffffffe0
        int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_a8_3 = rdi_1
        var_a4_1.d = r10_1
        int128_t var_98 = (&r15[-4]).o
        int128_t var_88_1 = var_48_1
        
        if (r10_1 != rbx_1)
            void* rax_13 = *r15
            void* r10_2 = &r15[-2]
            
            if (rax_13 != 0)
                r10_2 = rax_13
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx_1 - 1)
            int32_t rdx_8 = *(r10_2 + (sx.q(r8_7) << 2)) & rdi_1
            
            if (rdx_8 != 0)
            label_140864b52:
                int32_t rax_20 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_4
                
                var_a4_1.d = r9_3 - rax_21 + 0x1f
                
                if (r9_3 - rax_21 + 0x1f s> rbx_1)
                    var_a4_1.d = rbx_1
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_7)
                    r9_3 += 0x20
                    r8_7 += 1
                    
                    if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r10_2 + (rcx_9 << 2) + 4)
                    var_a8_3 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_140864b52
                
                var_a4_1.d = rbx_1
        
        while (true)
            result = sx.q(var_88_1:0xc.d)
            int64_t* rbx_2 = var_98.q
            
            if (result.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == &r15[-2] && rbx_2 == &r15[-4])
                break
            
            void* rbx_4 = *((result << 5) + *rbx_2 + 8)
            
            if (sub_140d3c6e0(rbx_4 + 0x20) != 0 && (*(rbx_4 + 0xd68) & 1) != 0
                    && *(rbx_4 + 0x38) != 0)
                int64_t var_60
                int64_t* rax_26 = sub_140d21830(sub_140d3c6e0(rbx_4 + 0x20), &var_60, 0, 0)
                int16_t* const r8_8
                
                if (rax_26[1].d == 0)
                    r8_8 = &data_142d40450
                else
                    r8_8 = *rax_26
                
                sub_140b1f700(arg2, u"\tSimulation %s", r8_8)
                int64_t rcx_15 = var_60
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                sub_14084e690(rbx_4, arg2)
            
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
        
        i = i_1
    
    i += 1
    r15 = &r15[0xa]
    i_1 = i
while (i s< 7)

return result
