// 函数: sub_140d3f4f0
// 地址: 0x140d3f4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x11d0)
void var_1208
int64_t rax_1 = __security_cookie ^ &var_1208
arg8 |= 0x10000000
void* result_2 = nullptr
void* const result

if (arg3 == 0)
    int64_t var_10a8
    sub_140d398e0(&var_10a8, arg4)
    int64_t rax_22 = var_10a8
    int64_t var_11e8 = rax_22
    int32_t rdi_1 = sub_140b5ead0(rax_22.d) + var_11e8:4.d
    void* const result_1 = nullptr
    bool z_1
    
    if (0 == data_143e1adfc)
        data_143e1adfc = 0
        z_1 = true
    else
        data_143e1adfc
        z_1 = false
    
    uint32_t rax_25
    
    if (not(z_1) && data_143de5480 != 0)
        rax_25.b = GetCurrentThreadId() == data_143de5470
    
    CRITICAL_SECTION* lpCriticalSection
    
    if (z_1 || (data_143de5480 != 0 && rax_25.b == 0))
        lpCriticalSection = arg1
        EnterCriticalSection(arg1)
    else
        lpCriticalSection = nullptr
    
    void* var_1060
    void* r8_3
    
    if (arg1->__offset(0x30).d == arg1->__offset(0x5c).d)
    labelid_4d:
        r8_3 = var_1060
    else
        void* rcx_18 = arg1->__offset(0x68).q
        void* __offset(_RTL_CRITICAL_SECTION, 0x60) r8_1 = arg1 + 0x60
        
        if (rcx_18 != 0)
            r8_1 = rcx_18
        
        int32_t rax_28 = *(r8_1 + (((sx.q(arg1->__offset(0x70).d) - 1) & sx.q(rdi_1)) << 2))
        
        if (rax_28 == 0xffffffff)
        labelid_4d:
            r8_3 = var_1060
        else
            int64_t r8_2 = arg1->__offset(0x28).q
            int64_t rdx_13
            
            while (true)
                rdx_13 = sx.q(rax_28)
                int64_t rcx_20 = rdx_13 << 5
                
                if (*(rcx_20 + r8_2) == rdi_1)
                    break
                
                rax_28 = *(rcx_20 + r8_2 + 0x18)
                
                if (rax_28 == 0xffffffff)
                    goto label_140d3f84a_2
            
            if (rax_28 == 0xffffffff)
            label_140d3f84a:
                r8_3 = var_1060
            else
                int64_t rdx_14 = rdx_13 << 5
                
                if (rdx_14 == neg.q(r8_2))
                label_140d3f84a_1:
                    r8_3 = var_1060
                else
                    int64_t* r13 = rdx_14 + r8_2 + 8
                    
                    if (r13 == 0)
                    label_140d3f84a_2:
                        r8_3 = var_1060
                    else
                        uint64_t r10_1 = r13[1]
                        int64_t* var_1168_1 = r13
                        int128_t* rax_39
                        
                        if (r10_1 == 0 || *r13 != 0)
                            int32_t r11_2 = data_1439aadb8
                            void* r9_1 = &data_1439aada0
                            void* var_11b0_1 = &data_1439aada0
                            int32_t rcx_27 = 0
                            int32_t var_11b8_1 = 0
                            int32_t r8_6 = 0
                            int32_t var_11b4_1 = 1
                            int32_t var_11a8_1 = 0xffffffff
                            int64_t var_11a4_1 = 0
                            
                            if (r11_2 != 0)
                                void* rax_40 = data_1439aadb0
                                
                                if (rax_40 != 0)
                                    r9_1 = rax_40
                                
                                int32_t temp1_1
                                int32_t temp2_1
                                temp1_1:temp2_1 = sx.q(r11_2 - 1)
                                int32_t rdx_22 = *r9_1
                                
                                if (rdx_22 != 0)
                                label_140d3fa3e:
                                    int32_t rax_47 = ((rdx_22 - 1) & rdx_22) ^ rdx_22
                                    uint64_t rflags_2
                                    int32_t temp0_5
                                    temp0_5, rflags_2 = _bit_scan_reverse(rax_47)
                                    int32_t var_11b4_2 = rax_47
                                    int32_t rax_48
                                    
                                    if (rax_47 == 0)
                                        rax_48 = 0x20
                                    else
                                        rax_48 = 0x1f - temp0_5
                                    
                                    var_11a4_1.d = r8_6 - rax_48 + 0x1f
                                    
                                    if (r8_6 - rax_48 + 0x1f s> r11_2)
                                        var_11a4_1.d = r11_2
                                else
                                    while (true)
                                        int64_t rdx_23 = sx.q(rcx_27)
                                        r8_6 += 0x20
                                        rcx_27 += 1
                                        var_11a4_1:4.d = r8_6
                                        var_11b8_1 = rcx_27
                                        
                                        if (rdx_23.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_22 = *(r9_1 + (rdx_23 << 2) + 4)
                                        int32_t var_11a8_2 = 0xffffffff
                                        
                                        if (rdx_22 != 0)
                                            goto label_140d3fa3e
                                    
                                    var_11a4_1.d = r11_2
                            
                            int128_t var_11d8_1 = var_11b8_1.o
                            int64_t* var_10b0_1 = &data_1439aad90
                            int128_t var_10d8
                            rax_39 = &var_10d8
                            int128_t var_11c8_1 = 0xffffffff
                            double temp0_6[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                            var_10d8 = (&data_1439aad90).o
                            int128_t var_10c8_1 = var_11d8_1
                            int64_t var_10b8_1 = temp0_6.q
                        else
                            int32_t rdi_2 = *(r10_1 + 0x28)
                            void* r9 = r10_1 + 0x10
                            int64_t var_11e0
                            var_11e0:4.d = 1
                            int32_t rcx_25 = 0
                            var_11e0.d = 0
                            int32_t r8_4 = 0
                            int128_t var_11d8
                            var_11d8.q = r9
                            var_11d8:8.d = 0xffffffff
                            var_11d8:0xc.q = 0
                            
                            if (rdi_2 != 0)
                                void* rax_29 = *(r9 + 0x10)
                                
                                if (rax_29 != 0)
                                    r9 = rax_29
                                
                                int32_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(rdi_2 - 1)
                                int32_t rdx_18 = *r9
                                
                                if (rdx_18 != 0)
                                label_140d3f94c:
                                    int32_t rax_36 = ((rdx_18 - 1) & rdx_18) ^ rdx_18
                                    uint64_t rflags_1
                                    int32_t temp0_3
                                    temp0_3, rflags_1 = _bit_scan_reverse(rax_36)
                                    var_11e0:4.d = rax_36
                                    int32_t rax_37
                                    
                                    if (rax_36 == 0)
                                        rax_37 = 0x20
                                    else
                                        rax_37 = 0x1f - temp0_3
                                    
                                    var_11d8:0xc.d = r8_4 - rax_37 + 0x1f
                                    
                                    if (r8_4 - rax_37 + 0x1f s> rdi_2)
                                        var_11d8:0xc.d = rdi_2
                                else
                                    while (true)
                                        int64_t rdx_19 = sx.q(rcx_25)
                                        r8_4 += 0x20
                                        rcx_25 += 1
                                        int128_t var_11c8
                                        var_11c8.d = r8_4
                                        var_11e0.d = rcx_25
                                        
                                        if (rdx_19.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_18 = *(r9 + (rdx_19 << 2) + 4)
                                        var_11d8:8.d = 0xffffffff
                                        
                                        if (rdx_18 != 0)
                                            goto label_140d3f94c
                                    
                                    var_11d8:0xc.d = rdi_2
                            
                            int32_t var_11b8
                            var_11b8.q = r10_1
                            int128_t var_1108
                            rax_39 = &var_1108
                            double zmm2_1[0x2] = var_11d8
                            uint64_t var_10e0_1 = r10_1
                            int64_t var_11b0
                            var_11b0.o = var_11e0.o
                            int64_t var_11a4
                            var_11a4:4.o = zmm2_1
                            double temp0_4[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
                            var_1108 = var_11b8.o
                            int32_t var_11a8
                            int128_t var_10f8_1 = var_11a8.o
                            int64_t var_10e8_1 = temp0_4.q
                        
                        int128_t zmm1_2 = rax_39[1]
                        int128_t var_1160 = *rax_39
                        int128_t var_1150_1 = zmm1_2
                        int128_t var_1140_1 = rax_39[2]
                        uint64_t rax_50
                        
                        if (r10_1 != 0)
                            rax_50 = r10_1
                        
                        if (r10_1 == 0 || *r13 != 0)
                            rax_50 = 0
                        
                        uint64_t r15
                        r15.b = rax_50 != 0
                        char var_1130_1 = r15.b
                        
                        if (*r13 != 0 || r10_1 != 0)
                            rax_50.b = 0
                        else
                            rax_50.b = 1
                        
                        uint64_t r14
                        r14.b = 0
                        char var_112f_1 = rax_50.b
                        char var_112e_1 = 0
                    label_140d3fafd:
                        r8_3 = var_1060
                        
                        while (true)
                            uint64_t rcx_29 = zx.q(var_1150_1:0xc.d)
                            
                            if (r15.b == 0)
                                rax_50.b = rax_50.b == 0
                            else
                                rax_50.b = rcx_29.d s< *(var_1150_1.q + 0x18)
                            
                            if (rax_50.b == 0)
                                break
                            
                            void** rcx_32
                            
                            if (r15.b == 0)
                                rcx_32 = (zx.q((sbb.q(rcx_29, rcx_29, r14.b != 0)).d) & 8) + r13
                            else
                                rcx_32 = (sx.q(rcx_29.d) << 4) + *var_1160.q
                            
                            void* result_3 = *rcx_32
                            
                            if (*(result_3 + 0x18) == var_10a8 && (*(result_3 + 8) & arg7) == 0
                                    && (arg6 != 0 || *(result_3 + 0x20) == 0))
                                if (arg2 != 0)
                                    if (arg5 == 0)
                                        void* rax_53 = *(result_3 + 0x10)
                                        int64_t rcx_36 = sx.q(*(arg2 + 0x38))
                                        
                                        if (rcx_36.d s<= *(rax_53 + 0x38))
                                            rax_50 = 1
                                        
                                        if (rcx_36.d s> *(rax_53 + 0x38)
                                                || *(*(rax_53 + 0x30) + (rcx_36 << 3))
                                                != arg2 + 0x30)
                                            rax_50 = 0
                                    else
                                        rax_50.b = *(result_3 + 0x10) == arg2
                                
                                if (arg2 == 0 || rax_50.d != 0)
                                    int32_t rax_55 = *(result_3 + 0xc)
                                    
                                    if (rax_55 s>= data_143e1d9b4)
                                        rax_50 = 0
                                    else
                                        uint32_t rdx_25 = zx.d(rax_55.w)
                                        
                                        if (rax_55 s< 0)
                                            rax_55 += 0xffff
                                            rdx_25 -= 0x10000
                                        
                                        rax_50 = *(data_143e1d9a0 + (sx.q(rax_55 s>> 0x10) << 3))
                                            + sx.q(rdx_25) * 0x18
                                    
                                    if ((*(rax_50 + 8) & arg8) == 0)
                                        void* rcx_40 = *(result_3 + 0x20)
                                        int32_t var_1058
                                        
                                        if (var_1058 == 0)
                                            result_1 = result_3
                                            break
                                        
                                        rax_50 = zx.q(var_1058 - 1)
                                        int64_t i = sx.q(rax_50.d)
                                        void var_10a0
                                        
                                        if (rax_50.d s> 0)
                                            do
                                                if (rcx_40 == 0)
                                                    goto label_140d3fce8
                                                
                                                void* rax_60 = &var_10a0
                                                
                                                if (r8_3 != 0)
                                                    rax_60 = r8_3
                                                
                                                if (*(rcx_40 + 0x18) != *(rax_60 + (i << 3)))
                                                    goto label_140d3fce8
                                                
                                                rcx_40 = *(rcx_40 + 0x20)
                                                i -= 1
                                            while (i s> 0)
                                        
                                        if (rcx_40 != 0)
                                            int64_t rcx_41 = *(rcx_40 + 0x18)
                                            void* rax_61 = &var_10a0
                                            var_11e8 = rcx_41
                                            
                                            if (r8_3 != 0)
                                                rax_61 = r8_3
                                            
                                            int64_t rax_62 = *rax_61
                                            int64_t var_1128 = rax_62
                                            
                                            if (rcx_41 == rax_62)
                                                result_1 = result_3
                                                break
                                            
                                            if ((rcx_41 u>> 0x20).d == (rax_62 u>> 0x20).d)
                                                void var_1048
                                                int32_t rax_63 = sub_140b5e700(&var_11e8, &var_1048)
                                                void var_848
                                                rax_50 = sub_140b5e700(&var_1128, &var_848)
                                                
                                                if (rax_63 u< rax_50.d)
                                                    r8_3 = var_1060
                                                else
                                                    uint64_t r8_8 = zx.q(rax_50.d)
                                                    
                                                    if (sub_140a546e0(
                                                            &var_1048
                                                                + ((zx.q(rax_63) - r8_8) << 1), 
                                                            &var_848, r8_8).d == 0)
                                                        r8_3 = var_1060
                                                        result_1 = result_3
                                                        break
                                                    
                                                    r8_3 = var_1060
                            
                        label_140d3fce8:
                            
                            if (r15.b != 0)
                                var_1150_1:8.d &= not.d(var_1160:0xc.d)
                                sub_14059bdd0(&var_1160:8)
                                rax_50 = zx.q(var_112f_1)
                                r14 = zx.q(var_112e_1)
                                r15 = zx.q(var_1130_1)
                                r13 = var_1168_1
                                goto label_140d3fafd
                            
                            if (r14.b == 0 && r13[1] != 0)
                                rax_50.b = 0
                                r14.b = 1
                                var_112f_1 = 0
                                var_112e_1 = 1
                                continue
                            
                            rax_50.b = 1
                            var_112f_1 = 1
                            r14 = 1
                            var_112e_1 = 1
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
        r8_3 = var_1060
    
    if (r8_3 != 0)
        sub_140a74f90(r8_3)
    
    result = result_1
else
    int32_t r14_3 = (arg3 s>> 6).d + sub_140b5ead0(arg4.d) + arg4:4.d
    bool z
    
    if (0 == data_143e1adfc)
        data_143e1adfc = 0
        z = true
    else
        data_143e1adfc
        z = false
    
    uint32_t rax_4
    
    if (not(z) && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    CRITICAL_SECTION* lpCriticalSection_1
    
    if (z || (data_143de5480 != 0 && rax_4.b == 0))
        lpCriticalSection_1 = arg1
        EnterCriticalSection(arg1)
    else
        lpCriticalSection_1 = nullptr
    
    int32_t var_1188_1 = r14_3
    int64_t var_1184_1 = -1
    sub_140b9ddc0(&arg1[3], arg1->__offset(0x80).d - arg1->__offset(0xac).d, 0)
    int64_t rax_5 = sx.q(*(arg1 + 0xc0))
    
    if (rax_5.d != 0)
        void* r8 = arg1 + 0xb0
        void* rcx_5 = *(r8 + 8)
        
        if (rcx_5 != 0)
            r8 = rcx_5
        
        int32_t i_1 = *(r8 + (((rax_5 - 1) & sx.q(r14_3)) << 2))
        var_1184_1:4.d = i_1
        var_1184_1.d = i_1
        
        if (i_1 != 0xffffffff)
            int64_t DebugInfo = arg1[3].DebugInfo
            int32_t i_3 = i_1
            var_1184_1.d = i_1
            
            do
                i_1 = *(DebugInfo + sx.q(i_1) * 0x18 + 0x10)
                
                if (*(DebugInfo + sx.q(i_3) * 0x18) == r14_3)
                    break
                
                var_1184_1.d = i_1
                i_3 = i_1
            while (i_1 != 0xffffffff)
            
            var_1184_1:4.d = i_1
    
    uint128_t zmm1_1 = (&arg1[3]).o
    
    if ((_mm_bsrli_si128(zmm1_1, 8).q u>> 0x20).d != 0xffffffff)
        int64_t DebugInfo_1 = arg1[3].DebugInfo
        int32_t i_2 = var_1184_1:4.d
        int32_t i_4 = zmm1_1:0xc.d
    label_140d3f690:
        void* result_4 = *(DebugInfo_1 + sx.q(i_4) * 0x18 + 8)
        
        if (*(result_4 + 0x18) != arg4 || (*(result_4 + 8) & arg7) != 0
            || *(result_4 + 0x20) != arg3)
        label_140d3f741:
            i_4 = i_2
            
            while (i_2 != 0xffffffff)
                i_2 = *(DebugInfo_1 + sx.q(i_2) * 0x18 + 0x10)
                
                if (*(DebugInfo_1 + sx.q(i_4) * 0x18) == zmm1_1:8.d)
                    goto label_140d3f690
                
                i_4 = i_2
        else
            int32_t rax_11
            
            if (arg2 != 0)
                if (arg5 == 0)
                    void* rax_12 = *(result_4 + 0x10)
                    int64_t rcx_9 = sx.q(*(arg2 + 0x38))
                    
                    if (rcx_9.d s<= *(rax_12 + 0x38))
                        rax_11 = 1
                    
                    if (rcx_9.d s> *(rax_12 + 0x38)
                            || *(*(rax_12 + 0x30) + (rcx_9 << 3)) != arg2 + 0x30)
                        rax_11 = 0
                else
                    rax_11.b = *(result_4 + 0x10) == arg2
            
            if (arg2 != 0 && rax_11 == 0)
                goto label_140d3f741
            
            int32_t rax_14 = *(result_4 + 0xc)
            void* const rdx_8
            
            if (rax_14 s>= data_143e1d9b4)
                rdx_8 = nullptr
            else
                uint32_t rcx_10 = zx.d(rax_14.w)
                
                if (rax_14 s< 0)
                    rax_14 += 0xffff
                    rcx_10 -= 0x10000
                
                rdx_8 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(rcx_10) * 0x18
            
            if ((*(rdx_8 + 8) & arg8) != 0)
                goto label_140d3f741
            
            result_2 = result_4
    
    if (lpCriticalSection_1 != 0)
        LeaveCriticalSection(lpCriticalSection_1)
    
    result = result_2

__security_check_cookie(rax_1 ^ &var_1208)
return result
