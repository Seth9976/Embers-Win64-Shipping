// 函数: sub_14063eaf0
// 地址: 0x14063eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
void* result = __security_cookie ^ &var_1e8
void* result_1 = result
int32_t rsi = 1

if (arg5 s>= 1)
    rsi = arg5

int32_t var_1b4 = rsi
arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    result = sub_140638c50(arg3, 0)

if (arg1 != 0)
    result = sub_1423de540(data_143f5b298, arg1, 0)
    
    if (result != 0)
        int64_t r15
        int64_t var_38_1 = r15
        uint64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        void* var_58_1 = nullptr
        int32_t var_50_1 = 0
        int32_t var_f8 = 5
        char var_a0_1 = 0
        void* var_f0
        sub_1405ab0f0(&var_f0, result, arg2)
        char var_a0_2 = 1
        sub_1406277a0(&var_f8)
        int64_t* var_188
        int64_t* var_148
        int96_t var_e8
        char i
        int64_t var_c0
        
        if (i == 0)
            int64_t* var_c8
            int64_t* rdi_1 = var_c8
            
            do
                int64_t rax_1 = sub_1425b0750()
                int64_t r8_1 = *rdi_1
                void* rax_2 = (*(r8_1 + 0x610))(rdi_1, rax_1, r8_1)
                
                if (rax_2 != 0 && sub_140d23de0(rax_2) != 0)
                    int64_t* rdi_2 = *(rax_2 + 0x440)
                    void var_12c
                    
                    if (*sub_14062d4e0(&var_98, &var_12c, rdi_2) == 0xffffffff)
                        var_188 = rdi_2
                        var_148 = &var_188
                        void var_128
                        sub_1406254b0(&var_98, &var_128, &var_148, nullptr)
                        int32_t var_18c
                        sub_14062d4e0(&var_98, &var_18c, *(rax_2 + 0x440))
                        int64_t rax_5 = sx.q(var_18c)
                        int64_t rcx_11
                        
                        if (rax_5.d == 0xffffffff)
                            rcx_11 = nullptr
                        else
                            rcx_11 = (rax_5 << 5) + var_98
                        
                        *(rcx_11 + 0x10) = 0
                        
                        if (*(rcx_11 + 0x14) != 0)
                            sub_140638c50(rcx_11 + 8, 0)
                    
                    int32_t var_190
                    sub_14062d4e0(&var_98, &var_190, *(rax_2 + 0x440))
                    int64_t rax_6 = sx.q(var_190)
                    int64_t rcx_16
                    
                    if (rax_6.d == 0xffffffff)
                        rcx_16 = nullptr
                    else
                        rcx_16 = (rax_6 << 5) + var_98
                    
                    int64_t rdi_3 = sx.q(*(rcx_16 + 0x10))
                    int32_t rax_7 = (rdi_3 + 1).d
                    *(rcx_16 + 0x10) = rax_7
                    
                    if (rax_7 s> *(rcx_16 + 0x14))
                        sub_1405a4d70(rcx_16 + 8)
                    
                    *(*(rcx_16 + 8) + (rdi_3 << 3)) = var_c8
                
                int32_t rdx_8 = var_e8:8.d
                int32_t var_b8
                int32_t r8_6 = var_b8
                void* r13_1 = var_f0
                int32_t var_d8
                int32_t rsi_3 = var_d8 + 1
                
                if (rsi_3 s>= rdx_8 + r8_6)
                label_14063eed6:
                    int64_t var_c8_1 = 0
                    char var_d4 = 1
                    break
                
                int64_t r12_1 = sx.q(rsi_3) << 3
                
                while (true)
                    if (rsi_3 s>= rdx_8)
                        rdi_1 = *(var_c0 + (sx.q(rsi_3 - rdx_8) << 3))
                    else
                        rdi_1 = *(r12_1 + var_e8.q)
                    
                    int32_t var_d0 = var_d0 + 1
                    
                    if (rdi_1 != 0)
                        void* rax_15 = sub_141dc9840(rdi_1)
                        
                        if (rax_15 != 0)
                            void* const rax_22
                            
                            if ((var_f8.b & 1) != 0)
                                int32_t rax_16 = *(rdi_1 + 0xc)
                                
                                if (rax_16 s>= data_143e1d9b4)
                                    rax_22 = nullptr
                                else
                                    int16_t temp3_1
                                    int32_t temp4_1
                                    temp3_1:temp4_1 = sx.q(rax_16)
                                    uint32_t rdx_10 = zx.d(temp3_1)
                                    int32_t rax_18 = temp4_1 + rdx_10
                                    rax_22 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_18.w) - rdx_10) * 0x18
                            
                            if ((var_f8.b & 1) == 0 || ((*(rax_22 + 8) u>> 0x1d).b & 1) == 0)
                                int32_t rcx_25 = var_f8
                                
                                if (((rcx_25 u>> 1).b & 1) == 0)
                                    goto label_14063ee01
                                
                                uint64_t rax_26 = sub_1405949a0()
                                
                                if (rax_26.b != 0)
                                    rcx_25 = var_f8
                                label_14063ee01:
                                    
                                    if (((rcx_25 u>> 2).b & 1) == 0)
                                    label_14063ee7e:
                                        
                                        if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                rax_15) == r13_1)
                                            if (rax_15 == *(r13_1 + 0x30))
                                                break
                                            
                                            void* rax_28 = sub_1425bd0d0()
                                            void* rdx_12 = rdi_1[2]
                                            int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                                            
                                            if (rax_29.d s> *(rdx_12 + 0x38))
                                                break
                                            
                                            if (*(*(rdx_12 + 0x30) + (rax_29 << 3))
                                                    != rax_28 + 0x30)
                                                break
                                    else
                                        if ((*(rax_15 + 0x1f4) & 0x20) == 0
                                                || (*(rax_15 + 0x1f6) & 8) != 0)
                                            rax_26 = zx.q(*(rax_15 + 0x1f5))
                                        
                                        if (((*(rax_15 + 0x1f4) & 0x20) != 0
                                                && (*(rax_15 + 0x1f6) & 8) == 0) || (rax_26.b & 0x40) != 0
                                                || rax_26.b s< 0)
                                            r15.b = 1
                                        else
                                            r15.b = 0
                                        
                                        void* rcx_27 = *(rax_15 + 0xb8)
                                        char* r14_1 = *(rax_15 + 0x248)
                                        
                                        if (rcx_27 != 0)
                                            rax_26 = sub_1424359b0(rcx_27)
                                        
                                        if (rcx_27 == 0 || rax_26 == 0 || r14_1 == rax_26)
                                            rcx_27.b = 1
                                        else
                                            rcx_27.b = 0
                                        
                                        if (r14_1 == 0 || *r14_1 == 2)
                                            rax_26.b = 1
                                        else
                                            rax_26.b = 0
                                        
                                        if (rcx_27.b != 0 || rax_26.b != 0)
                                            rax_26.b = 1
                                        
                                        if (r15.b != 0 && rax_26.b != 0)
                                            goto label_14063ee7e
                        
                        r8_6 = var_b8
                        rdx_8 = var_e8:8.d
                    
                    rsi_3 += 1
                    r12_1 += 8
                    
                    if (rsi_3 s>= rdx_8 + r8_6)
                        goto label_14063eed6
                
                var_c8 = rdi_1
                var_d8 = rsi_3
            while (i == 0)
            
            rsi = var_1b4
        
        if (var_a0_2 != 0)
            char var_a0_3 = 0
            int64_t var_a8
            sub_142441560(var_f0, var_a8)
            
            if (var_c0 != 0)
                sub_140a74f90(var_c0)
            
            int64_t rcx_32 = var_e8.q
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
        
        int32_t rcx_33 = 0
        int32_t var_1ac_1 = 1
        int32_t r8_9 = 0
        int32_t var_1b0 = 0
        int128_t var_88
        int128_t* var_1a8_1 = &var_88
        int32_t var_1a0_1 = 0xffffffff
        int64_t var_19c_1 = 0
        int128_t* var_78
        int32_t var_70
        
        if (var_70 != 0)
            int128_t* r9 = &var_88
            
            if (var_78 != 0)
                r9 = var_78
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_70 - 1)
            int32_t rdx_16 = *r9
            
            if (rdx_16 != 0)
            label_14063ef9b:
                int32_t rax_39 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_39)
                int32_t var_1ac_2 = rax_39
                int32_t rax_40
                
                if (rax_39 == 0)
                    rax_40 = 0x20
                else
                    rax_40 = 0x1f - temp0_2
                
                int32_t rax_41 = r8_9 - rax_40 + 0x1f
                
                if (rax_41 s> var_70)
                    rax_41 = var_70
                
                var_19c_1.d = rax_41
            else
                while (true)
                    int64_t rdx_17 = sx.q(rcx_33)
                    r8_9 += 0x20
                    rcx_33 += 1
                    var_19c_1:4.d = r8_9
                    var_1b0 = rcx_33
                    
                    if (rdx_17.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_19c_1.d = var_70
                        break
                    
                    rdx_16 = *(r9 + (rdx_17 << 2) + 4)
                    var_1a0_1 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_14063ef9b
        
        uint128_t zmm4_1 = var_1a0_1.o
        var_c0.w = 0
        uint128_t zmm0_1 = var_1b0.o
        int64_t* var_180 = &var_98
        int16_t var_158_1 = &var_98
        uint128_t var_178 = zmm0_1
        int128_t zmm2_1 = var_180.o
        int64_t* var_c8_2 = &var_98
        uint128_t var_168_1 = zmm4_1
        uint128_t zmm3 = var_178
        zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
        int32_t rcx_35 = _mm_bsrli_si128(zmm4_1, 4).d
        var_f8.o = zmm2_1
        uint128_t var_e8_1 = zmm3
        var_168_1 = zmm0_1
        uint128_t var_d8_1 = zmm0_1
        
        if (rcx_35 s< *(zmm3.q + 0x18))
            int32_t i_1 = var_e8_1:0xc.d
            
            do
                int64_t rdi_5 = sx.q(i_1) << 5
                int64_t r15_1 = *var_f8.q
                
                if (*(rdi_5 + r15_1 + 0x10) s>= rsi)
                    int64_t* rbx_4 = **(rdi_5 + r15_1 + 8)
                    int64_t rax_45 = sub_1425b0750()
                    int64_t r8_11 = *rbx_4
                    int64_t* rax_46 = (*(r8_11 + 0x610))(rbx_4, rax_45, r8_11)
                    var_188 = rax_46
                    int64_t* r12_2 = rax_46
                    
                    if (rax_46 != 0)
                        int64_t* rbx_5 = *(rdi_5 + r15_1 + 8)
                        float (* rsi_4)[0x4] = nullptr
                        int32_t r14_2 = 0
                        var_1b0.q = 0
                        var_1a8_1:4.d = 0
                        int64_t* rax_47 = &rbx_5[sx.q(*(rdi_5 + r15_1 + 0x10))]
                        var_148 = rax_47
                        
                        if (rbx_5 != rax_47)
                            int32_t r12_3 = 0
                            
                            do
                                int64_t* r13_2 = *rbx_5
                                void* rdi_6 = r13_2[0x26]
                                uint128_t* rdi_7
                                
                                if (rdi_6 == 0)
                                    rdi_7 = &data_143dbb0c0
                                else
                                    rdi_7 = rdi_6 + 0x1c0
                                
                                int64_t r15_2 = sx.q(r14_2)
                                r14_2 = (r15_2 + 1).d
                                var_1a8_1.d = r14_2
                                
                                if (r14_2 s> r12_3)
                                    sub_140638970(&var_1b0)
                                    r14_2 = var_1a8_1.d
                                    rsi_4 = var_1b0.q
                                    r12_3 = var_1a8_1:4.d
                                
                                int64_t rdx_21 = r15_2 * 6
                                *(rsi_4 + (rdx_21 << 3)) = *rdi_7
                                *(rsi_4 + (rdx_21 << 3) + 0x10) = rdi_7[1]
                                *(rsi_4 + (rdx_21 << 3) + 0x20) = rdi_7[2]
                                
                                if (arg4 != 0)
                                    sub_141dbe590(r13_2, 0, 1)
                                
                                rbx_5 = &rbx_5[1]
                            while (rbx_5 != var_148)
                            
                            r12_2 = var_188
                        
                        sub_142427eb0(&var_180)
                        var_158_1:1.b &= 0xfb
                        var_158_1.b = 1
                        double zmm1_1[0x2] = *(r12_2 + 0x1c0)
                        var_148.o = zmm1_1
                        
                        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1_1, *(r12_2 + 0x180), 4))
                                != 0)
                            *(r12_2 + 0x180) = zmm1_1
                            void var_104
                            int32_t* rax_49 = sub_140adf5d0(&var_148, &var_104)
                            r12_2[0x32] = *rax_49
                            r12_2[0x33].d = rax_49[2]
                        
                        zmm1_1 = *(r12_2 + 0x1d0)
                        int32_t rax_51 = r12_2[0x33].d
                        uint64_t var_110 = r12_2[0x32]
                        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        int32_t var_138 = zmm1_1[0].d
                        int32_t var_130_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0].d
                        int32_t var_134_1 = zmm0_1.d
                        int32_t var_108_1 = rax_51
                        void* rax_53 =
                            sub_1420efae0(result, sub_14065d100(), &var_138, &var_110, &var_180)
                        
                        if (rax_53 != 0)
                            int64_t* rcx_43 = *(rax_53 + 0x220)
                            (*(*rcx_43 + 0x8a0))(rcx_43, r12_2[0x88])
                            int32_t rax_56 = (*(*r12_2 + 0x6a0))(r12_2)
                            int32_t r15_3 = 0
                            
                            if (rax_56 s> 0)
                                do
                                    int64_t* rbx_6 = *(rax_53 + 0x220)
                                    int64_t r8_14 = *r12_2
                                    (*(*rbx_6 + 0x550))(rbx_6, zx.q(r15_3), 
                                        (*(r8_14 + 0x548))(r12_2, zx.q(r15_3), r8_14))
                                    r15_3 += 1
                                while (r15_3 s< rax_56)
                                
                                rsi_4 = var_1b0.q
                            
                            float (* rbx_7)[0x4] = rsi_4
                            void* rdi_11 = &rsi_4[sx.q(r14_2) * 3]
                            
                            if (rsi_4 != rdi_11)
                                do
                                    sub_14207bf10(*(rax_53 + 0x220), rbx_7)
                                    rbx_7 = &rbx_7[3]
                                while (rbx_7 != rdi_11)
                            
                            int64_t rbx_8 = sx.q(arg3[1].d)
                            int32_t rax_59 = (rbx_8 + 1).d
                            arg3[1].d = rax_59
                            
                            if (rax_59 s> *(arg3 + 0xc))
                                sub_140638870(arg3)
                            
                            *(*arg3 + (rbx_8 << 3)) = rax_53
                        
                        if (rsi_4 != 0)
                            sub_140a74f90(rsi_4)
                        
                        rsi = var_1b4
                
                var_e8_1:8.d &= not.d(var_f0:4.d)
                sub_14059bdd0(&var_f0)
                i_1 = var_e8_1:0xc.d
            while (i_1 s< *(var_e8_1.q + 0x18))
            
            if (var_c0.b != 0 && var_c0:1.b != 0)
                int64_t* rsi_6 = var_c8_2
                int32_t i_4 = 1
                int32_t r8_17 = rsi_6[1].d - *(rsi_6 + 0x34)
                
                if (r8_17 u>= 4)
                    uint32_t rcx_52 = r8_17 u>> 1
                    uint64_t rflags_2
                    int32_t temp0_9
                    temp0_9, rflags_2 = _bit_scan_reverse(rcx_52 + 8)
                    uint64_t rflags_3
                    char temp0_10
                    temp0_10, rflags_3 = _bit_scan_reverse(rcx_52 + 7)
                    i_4 =
                        1 << ((not.d((0x7c000000 - (temp0_9 << 0x1a)) s>> 0x1f)).b & (temp0_10 + 1))
                
                if (r8_17 s> 0)
                    int32_t rax_68 = rsi_6[9].d
                    void* r14_3 = &rsi_6[9]
                    
                    if (rax_68 == 0 || rax_68 s< i_4 || rax_68 s> i_4)
                        void* rbx_9 = &rsi_6[7]
                        *r14_3 = i_4
                        int64_t rcx_57 = *(rbx_9 + 8)
                        
                        if (rcx_57 != 0)
                            *(rbx_9 + 8) = sub_140a84c80(rcx_57, 0, 0)
                            i_4 = *r14_3
                        
                        if (i_4 != 0)
                            int64_t rcx_58 = *(rbx_9 + 8)
                            
                            if (i_4 u> 1)
                                *(rbx_9 + 8) = sub_140a84c80(rcx_58, sx.q(i_4) << 2, 0)
                            else if (rcx_58 != 0)
                                *(rbx_9 + 8) = sub_140a84c80(rcx_58, 0, 0)
                            
                            if (i_4 s> 0)
                                int64_t r8_18 = 0
                                uint64_t i_3 = zx.q(i_4)
                                uint64_t i_2
                                
                                do
                                    void* rcx_59 = *(rbx_9 + 8)
                                    void* rax_71 = rbx_9
                                    int64_t rdx_35 = (sx.q(*r14_3) - 1) & r8_18
                                    
                                    if (rcx_59 != 0)
                                        rax_71 = rcx_59
                                    
                                    r8_18 += 1
                                    *(rax_71 + (rdx_35 << 2)) = 0xffffffff
                                    i_2 = i_3
                                    i_3 -= 1
                                while (i_2 != 1)
                            
                            int32_t rdi_13 = rsi_6[5].d
                            void* r9_2 = &rsi_6[2]
                            int32_t rcx_60 = 0
                            int32_t var_1ac_3 = 1
                            int32_t r10_2 = 0
                            var_1b0 = 0
                            int32_t r8_19 = 0
                            void* var_1a8_2 = r9_2
                            int32_t var_1a0_2 = 0xffffffff
                            int64_t var_19c_2 = 0
                            
                            if (rdi_13 != 0)
                                void* rax_72 = *(r9_2 + 0x10)
                                r10_2 = rdi_13
                                
                                if (rax_72 != 0)
                                    r9_2 = rax_72
                                
                                int32_t temp5_1
                                int32_t temp6_1
                                temp5_1:temp6_1 = sx.q(rdi_13 - 1)
                                int32_t rdx_38 = *r9_2
                                
                                if (rdx_38 != 0)
                                label_14063f4ab:
                                    int32_t rax_79 = neg.d(rdx_38) & rdx_38
                                    uint64_t rflags_4
                                    int32_t temp0_11
                                    temp0_11, rflags_4 = _bit_scan_reverse(rax_79)
                                    int32_t var_1ac_4 = rax_79
                                    int32_t rax_80
                                    
                                    if (rax_79 == 0)
                                        rax_80 = 0x20
                                    else
                                        rax_80 = 0x1f - temp0_11
                                    
                                    int32_t rax_81 = r8_19 - rax_80 + 0x1f
                                    
                                    if (rax_81 s> rdi_13)
                                        rax_81 = rdi_13
                                    
                                    r10_2 = rax_81
                                    var_19c_2.d = rax_81
                                else
                                    while (true)
                                        int64_t rdx_39 = sx.q(rcx_60)
                                        r8_19 += 0x20
                                        rcx_60 += 1
                                        var_19c_2:4.d = r8_19
                                        var_1b0 = rcx_60
                                        
                                        if (rdx_39.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                            var_19c_2.d = rdi_13
                                            break
                                        
                                        rdx_38 = *(r9_2 + (rdx_39 << 2) + 4)
                                        var_1a0_2 = 0xffffffff
                                        
                                        if (rdx_38 != 0)
                                            goto label_14063f4ab
                            
                            var_180 = rsi_6
                            var_178 = var_1b0.o
                            double var_168_2 = var_1a0_2.o[0]
                            
                            if (r10_2 s< rdi_13)
                                int32_t r10_3 = var_168_2:4.d
                                
                                while (true)
                                    int64_t* r9_5 = (sx.q(r10_3) << 5) + *rsi_6
                                    uint32_t rcx_63 = (*r9_5 u>> 4).d
                                    int32_t rdx_41 = (0x9e3779b9 - rcx_63) ^ rcx_63 << 8
                                    int32_t r8_23 = neg.d(rdx_41 + rcx_63) ^ rdx_41 u>> 0xd
                                    int32_t rcx_66 = (rcx_63 - rdx_41 - r8_23) ^ r8_23 u>> 0xc
                                    int32_t rdx_44 = (rdx_41 - rcx_66 - r8_23) ^ rcx_66 << 0x10
                                    int32_t r8_26 = (r8_23 - rdx_44 - rcx_66) ^ rdx_44 u>> 5
                                    int32_t rcx_69 = (rcx_66 - rdx_44 - r8_26) ^ r8_26 u>> 3
                                    int32_t rdx_47 = (rdx_44 - rcx_69 - r8_26) ^ rcx_69 << 0xa
                                    int32_t r8_30 =
                                        ((r8_26 - rdx_47 - rcx_69) ^ rdx_47 u>> 0xf) & (*r14_3 - 1)
                                    *(r9_5 + 0x1c) = r8_30
                                    void* rcx_70 = *(rbx_9 + 8)
                                    void* rax_99 = rbx_9
                                    
                                    if (rcx_70 != 0)
                                        rax_99 = rcx_70
                                    
                                    r9_5[3].d =
                                        *(rax_99 + (((sx.q(*r14_3) - 1) & sx.q(r8_30)) << 2))
                                    void* rcx_71 = *(rbx_9 + 8)
                                    void* rax_102 = rbx_9
                                    
                                    if (rcx_71 != 0)
                                        rax_102 = rcx_71
                                    
                                    *(rax_102 + (((sx.q(*r14_3) - 1) & sx.q(r8_30)) << 2)) = r10_3
                                    var_168_2.d &= not.d(var_178:4.d)
                                    sub_14059bdd0(&var_178)
                                    r10_3 = var_168_2:4.d
                                    
                                    if (r10_3 s>= *(var_178:8.q + 0x18))
                                        break
                                    
                                    rsi_6 = var_180
        
        sub_14062ca00(&var_98, 0)
        int32_t rax_106 = var_50_1
        
        if (rax_106 s> 0)
            int64_t r8_31 = 0
            uint64_t r9_6 = zx.q(rax_106)
            
            while (true)
                void var_60
                void* rcx_74 = &var_60
                int64_t rdx_56 = sx.q(rax_106 - 1) & r8_31
                
                if (var_58_1 != 0)
                    rcx_74 = var_58_1
                
                r8_31 += 1
                *(rcx_74 + (rdx_56 << 2)) = 0xffffffff
                uint64_t temp2_1 = r9_6
                r9_6 -= 1
                
                if (temp2_1 == 1)
                    break
                
                rax_106 = var_50_1
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        result = sub_14062ca00(&var_98, 0)
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        uint64_t rcx_78 = var_98
        
        if (rcx_78 != 0)
            result = sub_140a74f90(rcx_78)

__security_check_cookie(result_1 ^ &var_1e8)
return result
