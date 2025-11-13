// 函数: sub_142166630
// 地址: 0x142166630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int32_t rsi = 0
int32_t arg_8 = 0
int64_t* r12 = arg4
void* r13 = arg3

if (((*(*(arg1 + 0x130) + 0xa4) u>> 1).b & 1) != 0)
    char rax_2 = sub_142166d10(arg1, &arg_10, arg3, arg4, arg6)
    int64_t rcx = *r12
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    return zx.q(rax_2)

arg_8 = 0
void* result

while (true)
    if (*(arg1 + 0x300) == 0)
        void*** rax_4 = j_sub_140a82f30(0x118)
        void*** rax_5
        
        if (rax_4 == 0)
            rax_5 = nullptr
        else
            void* rcx_1 = *(arg1 + 0x130)
            rax_5 =
                sub_141f79f40(rax_4, arg1, sx.q((*(rcx_1 + 0xa0) << 3) - *(rcx_1 + 0x130) - 0x235))
        
        *(arg1 + 0x300) = rax_5
        rax_5[0x16].b = 0
        *(*(arg1 + 0x300) + 0xb1) = 1
        void* rax_7 = *(arg1 + 0x300)
        *(rax_7 + 0xf1) |= 2
        sub_140b560b0(*(arg1 + 0x300), 0)
        int64_t* r9 = *(arg1 + 0x300)
        *(arg1 + 0x308) = 0
        int64_t* rcx_4 = r9[1]
        int32_t* r8_1 = *rcx_4
        
        if (&r8_1[1] u<= rcx_4[1])
            *(arg1 + 0x308) = *r8_1
            int64_t* rax_10 = r9[1]
            *rax_10 += 4
        else if ((*(r9 + 0x29) & 0x20) != 0)
            sub_140b54070(r9, arg1 + 0x308, arg5)
        else
            (*(*r9 + 0x150))(r9, arg1 + 0x308, 4)
    
    *(arg1 + 0x17c)
    int16_t* var_e8
    int32_t var_e0
    bool cond:5_1
    
    if (*(arg1 + 0x150) != *(arg1 + 0x17c))
        int16_t* r9_5
        
        if (r13 != 0)
            arg_8.q = *(r13 + 0x18)
            sub_140b63b70(&arg_8, &var_e8)
            r9_5 = &data_142d40450
            rsi = 1
            
            if (var_e0 != 0)
                r9_5 = var_e8
        else if (r12[1].d == 0)
            r9_5 = &data_142d40450
        else
            r9_5 = *r12
        
        sub_140af98a0("Unknown", 0x491, ExportNetGUID - CurrentExportNetGUIDs.Num() != 0 (%s).", 
            r9_5)
        cond:5_1 = (rsi.b & 1) == 0
        goto label_142166cc3
    
    void* rcx_6 = *(arg1 + 0x300)
    char var_b0 = 0
    int64_t var_a8_1 = 0
    var_e8 = nullptr
    int64_t var_a8_2 = *(rcx_6 + 0xa0)
    var_b0 = *(rcx_6 + 0x29) & 1
    *(*(arg1 + 0x310) + 0x152) = 1
    int32_t r14_1 = r12[1].d
    int64_t r15_1 = *r12
    var_e0 = r14_1
    
    if (r14_1 != 0)
        sub_1405a4c70(&var_e8, r14_1, 0)
        memcpy(var_e8, r15_1, r14_1 * 2)
    else
        int32_t var_dc_1 = 0
    
    sub_14216b1e0(arg1, *(arg1 + 0x300), arg2, r13, &var_e8, arg6)
    *(*(arg1 + 0x310) + 0x152) = 0
    int32_t rax_19 = *(arg1 + 0x150)
    void* rdx_12 = *(arg1 + 0x300)
    int32_t rax_20 = rax_19 - *(arg1 + 0x17c)
    
    if (rax_19 == *(arg1 + 0x17c))
        sub_140b51990(&var_b0, rdx_12)
    else
        void* var_d0
        
        if ((*(rdx_12 + 0x29) & 1) == 0)
            var_e8 = nullptr
            int32_t rbx_2 = 0
            int32_t var_e0_1 = 0
            int16_t* r14_2 = nullptr
            int32_t var_dc_2 = 0
            
            if (rax_20 s> 0)
                sub_1405dadb0(&var_e8, rax_20)
                rbx_2 = var_e0_1
                r14_2 = var_e8
            
            int32_t r9_4 = *(arg1 + 0x170)
            void* r8_8 = arg1 + 0x158
            int32_t var_d8_2 = 0
            int32_t rcx_20 = 0
            int32_t var_d4_3 = 1
            var_d0 = r8_8
            int32_t var_c8_3 = 0xffffffff
            int32_t var_c4_1 = 0
            int32_t var_c0_2 = 0
            
            if (r9_4 != 0)
                void* rax_39 = *(r8_8 + 0x10)
                
                if (rax_39 != 0)
                    r8_8 = rax_39
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r9_4 - 1)
                int32_t rdx_23 = *r8_8
                int32_t var_c4_3
                
                if (rdx_23 != 0)
                label_142166b07:
                    int32_t rax_46 = neg.d(rdx_23) & rdx_23
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_46)
                    int32_t var_d4_4 = rax_46
                    int32_t rax_47
                    
                    if (rax_46 == 0)
                        rax_47 = 0x20
                    else
                        rax_47 = 0x1f - temp0_4
                    
                    int32_t var_c4_2 = rcx_20 - rax_47 + 0x1f
                    
                    if (rcx_20 - rax_47 + 0x1f s> r9_4)
                        var_c4_3 = r9_4
                else
                    while (true)
                        int64_t rdx_24 = sx.q(rsi)
                        rcx_20 += 0x20
                        rsi += 1
                        var_c0_2 = rcx_20
                        var_d8_2 = rsi
                        
                        if (rdx_24.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_23 = *(r8_8 + (rdx_24 << 2) + 4)
                        var_c8_3 = 0xffffffff
                        
                        if (rdx_23 != 0)
                            goto label_142166b07
                    
                    var_c4_3 = r9_4
            
            int128_t var_88_2 = 0xffffffff
            int128_t var_98_2 = var_d8_2.o
            var_d8_2.o = (arg1 + 0x148).o
            int64_t var_b8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            var_c8_3.o = var_98_2
            
            if (0 s< r9_4)
                int32_t i_2
                int32_t i = i_2
                
                do
                    int64_t rsi_1 = sx.q(rbx_2)
                    int64_t r12_1 = *var_d8_2.q
                    rbx_2 = (rsi_1 + 1).d
                    
                    if (rbx_2 s> var_dc_2)
                        sub_1405a4cf0(&var_e8)
                        r14_2 = var_e8
                    
                    *(r14_2 + (rsi_1 << 2)) = *(r12_1 + sx.q(i) * 0xc)
                    var_c0_2 &= not.d(var_d0:4.d)
                    sub_14059bdd0(&var_d0)
                    i = i_2
                while (i s< *(var_c8_3.q + 0x18))
                
                r12 = arg4
            
            uint64_t* rsi_2 = *(arg1 + 0x300) + 0xf8
            
            if (rbx_2 != 0)
                int32_t rax_56 = rsi_2[1].d
                int32_t rdx_27 = rax_56 + rbx_2
                
                if (rdx_27 s> *(rsi_2 + 0xc))
                    sub_1405dadb0(rsi_2, rdx_27)
                    rax_56 = rsi_2[1].d
                
                memmove(*rsi_2 + (sx.q(rax_56) << 2), r14_2, rbx_2 << 2)
                rsi_2[1].d += rbx_2
            
            if (r14_2 != 0)
                sub_140a74f90(r14_2)
            
            sub_14084eee0(arg1 + 0x148, 0)
            *(arg1 + 0x308) += 1
            int64_t rcx_29 = *r12
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            result.b = 1
            break
        
        sub_140b51990(&var_b0, rdx_12)
        sub_14084eee0(arg1 + 0x148, 0)
        int32_t r15_2
        
        if (*(arg1 + 0x308) != 0)
            r15_2 = arg_8
        
        if (*(arg1 + 0x308) == 0 || r15_2 == 1)
            int16_t* const r9_3
            
            if (arg3 != 0)
                arg_8.q = *(arg3 + 0x18)
                sub_140b63b70(&arg_8, &var_e8)
                r9_3 = &data_142d40450
                rsi = 4
                
                if (var_e0 != 0)
                    r9_3 = var_e8
            else if (r12[1].d == 0)
                r9_3 = &data_142d40450
            else
                r9_3 = *r12
            
            sub_140af98a0("Unknown", 0x4bc, 
                ExportNetGUID - Failed to serialize NetGUID into single bunch. (%s)", r9_3)
            cond:5_1 = (rsi.b & 4) == 0
        label_142166cc3:
            
            if (not(cond:5_1))
                int16_t* rcx_32 = var_e8
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
            
            sub_140afbb40()
        else
            int32_t r11_1 = *(arg1 + 0x170)
            void* r9_2 = arg1 + 0x158
            int32_t var_d4_1 = 1
            int32_t rcx_12 = 0
            int32_t var_d8_1 = 0
            int32_t r8_5 = 0
            var_d0 = r9_2
            int32_t var_c8_1 = 0xffffffff
            int32_t var_c4
            var_c4.q = 0
            
            if (r11_1 != 0)
                void* rax_21 = *(r9_2 + 0x10)
                
                if (rax_21 != 0)
                    r9_2 = rax_21
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r11_1 - 1)
                int32_t rdx_15 = *r9_2
                
                if (rdx_15 != 0)
                label_142166919:
                    int32_t rax_28 = neg.d(rdx_15) & rdx_15
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_28)
                    int32_t var_d4_2 = rax_28
                    int32_t rax_29
                    
                    if (rax_28 == 0)
                        rax_29 = 0x20
                    else
                        rax_29 = 0x1f - temp0_2
                    
                    var_c4 = r8_5 - rax_29 + 0x1f
                    
                    if (r8_5 - rax_29 + 0x1f s> r11_1)
                        var_c4 = r11_1
                else
                    while (true)
                        int64_t rdx_16 = sx.q(rcx_12)
                        r8_5 += 0x20
                        rcx_12 += 1
                        int32_t var_c0_1 = r8_5
                        var_d8_1 = rcx_12
                        
                        if (rdx_16.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_15 = *(r9_2 + (rdx_16 << 2) + 4)
                        int32_t var_c8_2 = 0xffffffff
                        
                        if (rdx_15 != 0)
                            goto label_142166919
                    
                    var_c4 = r11_1
            
            void* var_50_1 = arg1 + 0x148
            int128_t var_88_1 = 0xffffffff
            arg5.o = var_d8_1.o
            int128_t var_78 = (arg1 + 0x148).o
            int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int128_t var_68_1 = arg5.o
            
            if (0 s< r11_1)
                int32_t i_1 = var_68_1:0xc.d
                
                do
                    int64_t rdx_17 = sx.q(i_1) * 3
                    int64_t rcx_14 = *var_78.q
                    void* rax_33
                    rax_33, arg5 = sub_14215b400(arg1 + 0xe0, *(rcx_14 + (rdx_17 << 2)), 
                        rcx_14 + (rdx_17 << 2))
                    *rax_33 -= 1
                    var_68_1:8.d &= not.d(var_78:0xc.d)
                    sub_14059bdd0(&var_78:8)
                    i_1 = var_68_1:0xc.d
                while (i_1 s< *(var_68_1.q + 0x18))
            
            sub_142167020(arg1, arg5)
            r13 = arg3
            arg_8 = r15_2 + 1
            
            if (r15_2 + 1 s< 2)
                continue
    
    int64_t rcx_33 = *r12
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    result.b = 0
    break

return result
