// 函数: sub_14084e230
// 地址: 0x14084e230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x6bc) != 0)
    sub_1408622c0(arg1)
    sub_14084fd50(arg1)

TEB* gsbase

if (data_143ce4568 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce4568)
    
    if (data_143ce4568 == 0xffffffff)
        data_143ce4560 = j_sub_140d2ee50(sub_140bdf730(), -ffffffffffffffff, u"ETickingGroup", 0)
        _Init_thread_footer(&data_143ce4568)

void* rax_3 = *(arg1 + 0x30)
int16_t* const rsi = &data_142d40450
int32_t rbx = 0
int16_t* var_108 = nullptr
int32_t var_100 = 0

if (rax_3 != 0)
    char rcx_3 = *(rax_3 + 0x39)
    char rax_4 = *(rax_3 + 0x38)
    
    if (rax_4 u>= rcx_3)
        rcx_3 = rax_4
    
    int64_t var_80
    int64_t* rax_5 = sub_140bded20(data_143ce4560, &var_80, zx.d(rcx_3))
    
    if (rax_5[1].d != 0)
        *rax_5
    
    int64_t var_90
    int64_t* rax_6 = sub_140d21830(*(arg1 + 0x30), &var_90, 0, 0)
    int16_t* const r8_2
    
    if (rax_6[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *rax_6
    
    sub_140a20d00(&var_108, u" PreReq(%s = %s)", r8_2)
    int64_t rcx_7 = var_90
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = var_80
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((*(arg1 + 0x6b8) & 0x40) != 0)
    int32_t rcx_9 = 0
    int32_t r10_1 = *(arg1 + 0x128)
    int32_t var_f8_1 = 0
    int32_t var_f4_1 = 1
    void* var_f0_1 = arg1 + 0x110
    int32_t var_e8_1 = 0xffffffff
    int64_t var_e4_1 = 0
    
    if (r10_1 != 0)
        void* rax_7 = *(arg1 + 0x120)
        void* r8_3 = arg1 + 0x110
        
        if (rax_7 != 0)
            r8_3 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r8_3
        
        if (rdx_5 != 0)
        label_14084e3e9:
            int32_t rax_14 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_f4_2 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            var_e4_1.d = rcx_9 - rax_15 + 0x1f
            
            if (rcx_9 - rax_15 + 0x1f s> r10_1)
                var_e4_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rbx)
                rcx_9 += 0x20
                rbx += 1
                var_e4_1:4.d = rcx_9
                var_f8_1 = rbx
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r8_3 + (rdx_6 << 2) + 4)
                int32_t var_e8_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_14084e3e9
            
            var_e4_1.d = r10_1
    
    int32_t rdx_8 = *(arg1 + 0x128)
    int128_t var_48_1 = var_f8_1.o
    int32_t r15_1 = 0xffffffff << (rdx_8.b & 0x1f)
    int32_t r8_5 = rdx_8 s>> 5
    int32_t r9_3 = rdx_8 & 0xffffffe0
    int32_t var_a0_1 = r15_1
    int32_t var_9c_1 = rdx_8
    int128_t var_38_1 = 0xffffffff
    int64_t var_b8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_d8 = (arg1 + 0x100).o
    int128_t var_c8_1 = var_48_1
    
    if (rdx_8 != r10_1)
        void* rax_17 = *(arg1 + 0x120)
        void* r10_2 = arg1 + 0x110
        
        if (rax_17 != 0)
            r10_2 = rax_17
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_12 = *(r10_2 + (sx.q(r8_5) << 2)) & r15_1
        int32_t var_9c_3
        
        if (rdx_12 != 0)
        label_14084e4c2:
            int32_t rax_24 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
            int32_t r11_1
            
            if (rax_24 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_9c_2 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> r10_1)
                var_9c_3 = r10_1
        else
            while (true)
                int64_t rcx_14 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r10_2 + (rcx_14 << 2) + 4)
                var_a0_1 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_14084e4c2
            
            var_9c_3 = r10_1
    
    while (true)
        int64_t rax_26 = sx.q(var_c8_1:0xc.d)
        int64_t* rdx_13 = var_d8.q
        
        if (rax_26.d == (var_a0_1.q u>> 0x20).d && var_c8_1.q == arg1 + 0x110
                && rdx_13 == arg1 + 0x100)
            break
        
        int32_t* rdi_3 = *rdx_13 + rax_26 * 0x14
        int64_t* rax_28 = sub_140d3c6e0(rdi_3)
        
        if (rax_28 != 0)
            int64_t r8_6 = *rax_28
            int32_t rax_29 = (*(r8_6 + 0x308))(rax_28, sx.q(rdi_3[2]) + *(arg1 + 0xf0), r8_6)
            int64_t var_60
            int64_t* rax_30 = sub_140bded20(data_143ce4560, &var_60, rax_29)
            
            if (rax_30[1].d != 0)
                *rax_30
            
            int64_t var_70
            int64_t* rax_31 = sub_140d21830(rax_28, &var_70, 0, 0)
            int16_t* const r8_8
            
            if (rax_31[1].d == 0)
                r8_8 = &data_142d40450
            else
                r8_8 = *rax_31
            
            sub_140a20d00(&var_108, u" DataInterface(%s = %s)", r8_8)
            int64_t rcx_22 = var_70
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            int64_t rcx_23 = var_60
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
        
        var_c8_1:8.d &= not.d(var_d8:0xc.d)
        sub_14059bdd0(&var_d8:8)

if (var_100 != 0)
    rsi = var_108

wchar16 (* result)[0x200] = sub_140b1f700(arg2, u"\t\t\tInstance%s", rsi)
int16_t* rcx_26 = var_108

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
