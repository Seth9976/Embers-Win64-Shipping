// 函数: sub_1426cf150
// 地址: 0x1426cf150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t r12 = sx.q(arg4)
int32_t var_258 = r12.d
int64_t* result_1 = arg2
void* r15 = arg1
int32_t var_2b0 = 0
int64_t* result

if (arg3 == 0 || *(arg3 + 0x40) == 0)
    *arg2 = 0
    result = arg2
    arg2[1] = 0
else
    int32_t i = 0
    void* rbx_2
    
    if (*(arg1 + 0xb0) s> 0)
        void* r9 = *(arg1 + 0xa8)
        int32_t* rcx = r9 + 0x158
        void* rdx = r9 + 0x170
        
        do
            if (*rdx == *(arg3 + 0x18) && *rcx == r12.d)
                int64_t rcx_1 = sx.q(i) * 0x178
                rbx_2 = r9 + 8 + rcx_1
                
                if (r9 + 8 != neg.q(rcx_1))
                    goto label_1426cfa6a
                
                goto label_1426cf23e
            
            i += 1
            rdx += 0x178
            rcx = &rcx[0x5e]
        while (i s< *(r15 + 0xb0))
    
label_1426cf23e:
    TEB* gsbase
    
    if (data_143f722a0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f722a0)
        
        if (data_143f722a0 == 0xffffffff)
            data_143f72298 = sub_14273bc70()
            _Init_thread_footer(&data_143f722a0)
    
    void* rcx_4 = data_143f72298
    int64_t var_2a0
    void* var_280
    void** var_278
    int64_t var_268
    int64_t var_228
    int64_t var_218
    int64_t var_1f0
    int64_t* rax_8
    int32_t rbx_4
    int16_t* const rdi
    
    if (rcx_4 == 0)
        var_2a0 = *(arg3 + 0x18)
        int64_t* rax_10 = sub_140b63b70(&var_2a0, &var_1f0)
        rdi = &data_142d40450
        int16_t* const r8_3
        
        if (rax_10[1].d == 0)
            r8_3 = &data_142d40450
        else
            r8_3 = *rax_10
        
        sub_140a2e390(&var_268, u"%s_%d", r8_3)
        rax_8 = &var_268
        rbx_4 = 0x18
    else
        int64_t* rax_5 = sub_140bdef30(rcx_4, &var_228, r12)
        rdi = &data_142d40450
        
        if (rax_5[1].d != 0)
            *rax_5
        
        var_280 = *(arg3 + 0x18)
        int64_t* rax_7 = sub_140b63b70(&var_280, &var_218)
        int16_t* const r8_2
        
        if (rax_7[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *rax_7
        
        sub_140a2e390(&var_278, u"%s_%s", r8_2)
        rax_8 = &var_278
        rbx_4 = 7
    
    int16_t* r13_1 = *rax_8
    *rax_8 = 0
    int32_t r14_1 = rax_8[1].d
    rax_8[1] = 0
    
    if ((rbx_4.b & 0x10) != 0)
        int64_t rcx_9 = var_268
        rbx_4 &= 0xffffffef
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    if ((rbx_4.b & 8) != 0)
        int64_t rcx_10 = var_1f0
        rbx_4 &= 0xfffffff7
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    if ((rbx_4.b & 4) != 0)
        void** rcx_11 = var_278
        rbx_4 &= 0xfffffffb
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    
    if ((rbx_4.b & 2) != 0)
        int64_t rcx_12 = var_218
        rbx_4 &= 0xfffffffd
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    if ((rbx_4.b & 1) != 0)
        int64_t rcx_13 = var_228
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    if (r14_1 != 0)
        rdi = r13_1
    
    int32_t r13_2 = 0
    int32_t var_2e8_1 = 0x7f800000
    void* rax_12 = sub_140d2e1f0(arg3, r15, *sub_140b58260(&var_1f0, rdi, 1), 0xfffffff, 0, 0)
    var_280 = rax_12
    void* r14_2 = rax_12
    void* var_1d8
    sub_1426c5940(&var_1d8)
    int64_t rax_13 = *(arg3 + 0x18)
    int64_t var_180_1 = *(r14_2 + 0x18)
    var_2a0 = *(r14_2 + 0x30)
    var_1d8 = r14_2
    int64_t* rax_16 = sub_140b63b70(&var_2a0, &var_268)
    int64_t var_190
    
    if (&var_190 != rax_16)
        int64_t rcx_18 = var_190
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        var_190 = *rax_16
        *rax_16 = 0
        int32_t var_188_1 = rax_16[1].d
        int32_t var_184_1 = *(rax_16 + 0xc)
        rax_16[1] = 0
    
    int64_t rcx_19 = var_268
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int32_t var_80_1 = r12.d
    int64_t rbx_6 = sx.q(*(r15 + 0xb0))
    int32_t rax_20 = (rbx_6 + 1).d
    *(r15 + 0xb0) = rax_20
    
    if (rax_20 s> *(r15 + 0xb4))
        sub_1426e8480(r15 + 0xa8)
    
    void** rbx_7 = *(r15 + 0xa8)
    rbx_7[rbx_6 * 0x2f] = var_1d8
    void var_1d0
    sub_1426c56d0(&rbx_7[1 + rbx_6 * 0x2f], &var_1d0)
    rbx_7[rbx_6 * 0x2f + 0x2e] = rax_13
    rbx_2 = &(*(r15 + 0xa8))[1 + rbx_6 * 0x2f]
    void* var_250_1 = rbx_2
    sub_1426ca9a0(&var_1d0)
    int32_t i_1 = 0
    int32_t var_2c4_1 = 0
    int32_t i_2 = 0
    
    if (*(r14_2 + 0x40) s> 0)
        int64_t r12_1 = 0
        int64_t var_248_1 = 0
        
        do
            void* rbx_10 = *(*(r14_2 + 0x38) + (r12_1 << 3))
            
            if (rbx_10 == 0)
            label_1426cfb3c:
                int32_t rcx_57 = *(r14_2 + 0x40)
                int32_t rax_67 = rcx_57 - i_1
                
                if (rax_67 != 1)
                    int64_t r9_5 = *(r14_2 + 0x38)
                    memmove(r9_5 + (sx.q(i_1) << 3), r9_5 + (sx.q(i_1 + 1) << 3), (rax_67 - 1) << 3)
                    rcx_57 = *(r14_2 + 0x40)
                
                rbx_2 = var_250_1
                i_1 -= 1
                *(r14_2 + 0x40) = rcx_57 - 1
                r12_1 -= 1
            else
                void* rdi_2 = *(rbx_10 + 0x28)
                
                if (rdi_2 == 0 || *(rdi_2 + 0x40) == 0)
                    goto label_1426cfb3c
                
                void* rax_24 = sub_14273b6f0()
                
                if (rax_24 == 0)
                    goto label_1426cfb3c
                
                void* rdx_9 = *(rdi_2 + 0x40)
                int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                
                if (rax_25.d s> *(rdx_9 + 0x38)
                        || *(*(rdx_9 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30 || rdx_9 == 0)
                    goto label_1426cfb3c
                
                int32_t var_2e8_2 = 0x7f800000
                int64_t var_240_1 = 0
                void* rax_27 = sub_140d2e1f0(rbx_10, r15, 0, 0xfffffff, 0, 0)
                int32_t var_2e8_3 = 0x7f800000
                int64_t var_238_1 = 0
                void* rax_28 = sub_140d2e1f0(*(rbx_10 + 0x28), r15, 0, 0xfffffff, 0, 0)
                void* rcx_27 = rax_28
                *(*(r14_2 + 0x38) + (r12_1 << 3)) = rax_27
                *(rax_27 + 0x28) = rcx_27
                int32_t rdx_12 = *(rbx_10 + 0x38)
                
                if (rdx_12 != 0)
                    if (rdx_12 s> 1)
                        void* r8_7 = *(*(rbx_10 + 0x30) + (sx.q(*(rbx_10 + 0x38)) << 3) - 8)
                        
                        if (r8_7 != 0 && *(r8_7 + 0x30) == 0)
                            int32_t j = 0
                            
                            if (rdx_12 s> 0)
                                int64_t* rdx_14 = nullptr
                                
                                do
                                    void* r8_8 = *(rdx_14 + *(rbx_10 + 0x30))
                                    
                                    if (r8_8 != 0)
                                        *(r8_8 + 0x30) = j
                                    
                                    j += 1
                                    rdx_14 = &rdx_14[1]
                                while (j s< *(rbx_10 + 0x38))
                        
                        rcx_27 = rax_28
                    
                    char var_2d8_1
                    
                    if (var_258 == 0)
                        var_2d8_1 = 1
                    
                    if (var_258 != 0 || (*(rcx_27 + 0x48) & 1) == 0)
                        var_2d8_1 = 0
                    
                    int64_t r13_3 = sx.q(*(rbx_10 + 0x38))
                    int32_t rsi_2 = -1
                    int64_t rdi_4 = *(rbx_10 + 0x30)
                    void** r15_1 = nullptr
                    uint32_t var_2b0_1 = 0
                    void* var_290_1 = nullptr
                    int32_t var_2c8_1 = 0xffffffff
                    void** var_2c0_1 = nullptr
                    var_278 = nullptr
                    int32_t var_2d0_1 = r13_3.d
                    int32_t var_270_1 = r13_3.d
                    
                    if (r13_3.d != 0)
                        sub_1405c4a00(&var_278, r13_3.d, 0)
                        r15_1 = var_278
                        var_2c0_1 = r15_1
                        memcpy(r15_1, rdi_4, (r13_3 << 3).d)
                        r13_3 = zx.q(var_270_1)
                        var_2d0_1 = r13_3.d
                    else
                        int32_t var_26c_1 = 0
                    
                    int32_t r14_3 = (r13_3 - 1).d
                    void* rbx_12 = *(*(rbx_10 + 0x28) + 0x40)
                    
                    if (r14_3 s>= 0)
                        int64_t* r15_2 = &r15_1[sx.q(r14_3)]
                        int64_t* r12_2 = r15_2
                        void* rcx_33 = &var_2c0_1[sx.q(r14_3 + 1)]
                        var_2d0_1.q = rcx_33
                        int32_t temp4_1
                        
                        do
                            void* rsi_3 = *r15_2
                            
                            if (rsi_3 == 0 || rbx_12 == 0)
                                goto label_1426cf853
                            
                            void* rax_35 = sub_14273b6f0()
                            
                            if (rax_35 == 0)
                            label_1426cf84b:
                                rcx_33 = var_2d0_1.q
                            label_1426cf853:
                                int32_t rax_54 = r13_3.d - r14_3
                                
                                if (rax_54 != 1)
                                    memmove(r12_2, rcx_33, (rax_54 - 1) << 3)
                                
                                r13_3 = zx.q(r13_3.d - 1)
                                rsi_2 = var_2c8_1
                            else
                                int64_t rax_36 = sx.q(*(rax_35 + 0x38))
                                
                                if (rax_36.d s> *(rbx_12 + 0x38)
                                        || *(*(rbx_12 + 0x30) + (rax_36 << 3)) != rax_35 + 0x30)
                                    goto label_1426cf84b
                                
                                void* rax_38 = sub_14273b6f0()
                                int64_t rax_39
                                
                                if (rax_38 != 0)
                                    rax_39 = sx.q(*(rax_38 + 0x38))
                                
                                void* rdi_5
                                
                                if (rax_38 == 0 || rax_39.d s> *(rbx_12 + 0x38)
                                        || *(*(rbx_12 + 0x30) + (rax_39 << 3)) != rax_38 + 0x30)
                                    rdi_5 = nullptr
                                else
                                    rdi_5 = rbx_12
                                
                                void* const rdx_19
                                
                                if (*(rsi_3 + 0x1e8) == 0)
                                    rdx_19 = nullptr
                                else
                                    void* rax_41 = sub_14273b6f0()
                                    
                                    if (rax_41 == 0)
                                        rdx_19 = nullptr
                                    else
                                        rdx_19 = *(rsi_3 + 0x1e8)
                                        int64_t rax_42 = sx.q(*(rax_41 + 0x38))
                                        
                                        if (rax_42.d s> *(rdx_19 + 0x38)
                                                || *(*(rdx_19 + 0x30) + (rax_42 << 3))
                                                != rax_41 + 0x30)
                                            rdx_19 = nullptr
                                
                                if (rdi_5 != rdx_19)
                                    void* const rdi_6
                                    
                                    if (*(rsi_3 + 0x1e8) == 0)
                                        rdi_6 = nullptr
                                    else
                                        void* rax_44 = sub_14273b6f0()
                                        
                                        if (rax_44 == 0)
                                            rdi_6 = nullptr
                                        else
                                            rdi_6 = *(rsi_3 + 0x1e8)
                                            int64_t rax_45 = sx.q(*(rax_44 + 0x38))
                                            
                                            if (rax_45.d s> *(rdi_6 + 0x38)
                                                    || *(*(rdi_6 + 0x30) + (rax_45 << 3))
                                                    != rax_44 + 0x30)
                                                rdi_6 = nullptr
                                    
                                    void* rax_47 = sub_14273b6f0()
                                    int64_t rax_48
                                    
                                    if (rax_47 != 0)
                                        rax_48 = sx.q(*(rax_47 + 0x38))
                                    
                                    void* const rax_50
                                    
                                    if (rax_47 == 0 || rax_48.d s> *(rbx_12 + 0x38)
                                            || *(*(rbx_12 + 0x30) + (rax_48 << 3))
                                            != rax_47 + 0x30)
                                        rax_50 = nullptr
                                    else
                                        rax_50 = rbx_12
                                    
                                    if (rdi_6 == 0)
                                        goto label_1426cf84b
                                    
                                    int64_t rcx_39 = sx.q(*(rdi_6 + 0x38))
                                    
                                    if (rcx_39.d s> *(rax_50 + 0x38)
                                            || *(*(rax_50 + 0x30) + (rcx_39 << 3)) != rdi_6 + 0x30)
                                        goto label_1426cf84b
                                
                                if (var_2d8_1 == 0 || *(rsi_3 + 0x34) != 0)
                                    rsi_2 = var_2c8_1
                                else
                                    uint32_t rax_52 = zx.d(*(rsi_3 + 0xf8))
                                    
                                    if (var_2b0_1 s>= rax_52)
                                        rsi_2 = var_2c8_1
                                    
                                    if (var_2b0_1 s< rax_52 || rsi_2 == 0xffffffff)
                                        var_2b0_1 = rax_52
                                        rsi_2 = r14_3
                                        var_2c8_1 = r14_3
                            
                            r12_2 -= 8
                            rcx_33 = var_2d0_1.q - 8
                            r15_2 -= 8
                            temp4_1 = r14_3
                            r14_3 -= 1
                            var_2d0_1.q = rcx_33
                        while (temp4_1 - 1 s>= 0)
                        var_2d0_1 = r13_3.d
                    
                    void* r15_5 = rax_27
                    void* rdi_7 = r15_5 + 0x30
                    *(rdi_7 + 8) = 0
                    
                    if (r13_3.d s> *(rdi_7 + 0xc))
                        sub_1405c5570(rdi_7, r13_3.d)
                    
                    char rbx_13 = var_2d8_1
                    void** rsi_4
                    void* r14_4
                    
                    if (rbx_13 == 0 || rsi_2 == 0xffffffff)
                        if (r13_3.d s> 0)
                            void** r14_5 = var_2c0_1
                            var_2a0 = 0
                            int64_t rbx_16 = var_2a0
                            uint64_t j_4 = zx.q(r13_3.d)
                            uint64_t j_1
                            
                            do
                                int32_t var_2e8_6 = 0x7f800000
                                void* rax_63 = sub_140d2e1f0(*r14_5, arg1, rbx_16, 0xfffffff, 0, 0)
                                int64_t rsi_6 = sx.q(*(rdi_7 + 8))
                                int32_t rax_64 = (rsi_6 + 1).d
                                *(rdi_7 + 8) = rax_64
                                
                                if (rax_64 s> *(rdi_7 + 0xc))
                                    sub_1405a4d70(rdi_7)
                                
                                r14_5 = &r14_5[1]
                                *(*rdi_7 + (rsi_6 << 3)) = rax_63
                                j_1 = j_4
                                j_4 -= 1
                            while (j_1 != 1)
                            goto label_1426cf98a
                        
                        rsi_4 = var_2c0_1
                        r14_4 = var_290_1
                    else
                        void* r15_3 = arg1
                        int64_t r12_3 = sx.q(rsi_2)
                        rsi_4 = var_2c0_1
                        int32_t var_2e8_4 = 0x7f800000
                        int32_t var_2f0_4 = 0
                        var_228 = 0
                        void* rax_56 =
                            sub_140d2e1f0(rsi_4[r12_3], r15_3, var_228, 0xfffffff, 0, var_2f0_4)
                        r14_4 = rax_56
                        var_290_1 = rax_56
                        int64_t rbx_14 = 0
                        
                        if (r13_3.d s<= 0)
                            rbx_13 = var_2d8_1
                            r15_5 = rax_27
                        else
                            uint64_t j_3 = zx.q(r13_3.d)
                            uint64_t j_2
                            
                            do
                                if (rbx_14 != r12_3)
                                    void* rcx_44 = rsi_4[rbx_14]
                                    int32_t var_2e8_5 = 0x7f800000
                                    int32_t var_2f0_5 = 0
                                    var_218 = 0
                                    void* rax_57 = sub_140d2e1f0(rcx_44, r15_3, var_218, 0xfffffff, 
                                        0, var_2f0_5)
                                    int64_t rsi_5 = sx.q(*(rdi_7 + 8))
                                    int32_t rax_58 = (rsi_5 + 1).d
                                    *(rdi_7 + 8) = rax_58
                                    
                                    if (rax_58 s> *(rdi_7 + 0xc))
                                        sub_1405a4d70(rdi_7)
                                    
                                    *(*rdi_7 + (rsi_5 << 3)) = rax_57
                                    r15_3 = arg1
                                
                                rbx_14 += 1
                                j_2 = j_3
                                j_3 -= 1
                            while (j_2 != 1)
                        label_1426cf98a:
                            r13_3 = zx.q(var_2d0_1)
                            rsi_4 = var_2c0_1
                            r14_4 = var_290_1
                            rbx_13 = var_2d8_1
                            r15_5 = rax_27
                    
                    if (r13_3.d != 0 && (*(rax_28 + 0x48) & 1) != 0)
                        void var_2b8
                        void* var_2a8_2 = &var_2b8
                        sub_1426c4ac0(*rdi_7, *(rdi_7 + 8))
                        
                        if (rbx_13 != 0 && r14_4 != 0)
                            int64_t rbx_15 = sx.q(*(rdi_7 + 8))
                            int32_t rax_61 = (rbx_15 + 1).d
                            *(rdi_7 + 8) = rax_61
                            
                            if (rax_61 s> *(rdi_7 + 0xc))
                                sub_1405a4d70(rdi_7)
                            
                            *(*rdi_7 + (rbx_15 << 3)) = r14_4
                    
                    rbx_2 = var_250_1
                    r15 = arg1
                    sub_1426cf000(r15, r15_5, var_2c4_1, rdi_7, rbx_2)
                    
                    if (rsi_4 != 0)
                        sub_140a74f90(rsi_4)
                    
                    r12_1 = var_248_1
                    r14_2 = var_280
                    i_1 = i_2
                else
                    rbx_2 = var_250_1
                    var_268 = 0
                    int64_t var_260_1 = 0
                    sub_1426cf000(r15, rax_27, r13_2, &var_268, rbx_2)
            
            var_2c4_1 += 1
            i_1 += 1
            r13_2 = var_2c4_1
            r12_1 += 1
            i_2 = i_1
            var_248_1 = r12_1
        while (i_1 s< *(r14_2 + 0x40))
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    result_1 = arg2
label_1426cfa6a:
    
    if (*(rbx_2 + 0x118) != 0)
        uint64_t* rax_72 = j_sub_140a82f30(0x168)
        uint64_t* rbx_17
        
        if (rax_72 == 0)
            rbx_17 = nullptr
        else
            rbx_17 = sub_1426c56d0(rax_72, rbx_2)
        
        void*** rax_74 = j_sub_140a82f30(0x18)
        
        if (rax_74 == 0)
            rax_74 = nullptr
        else
            rax_74[1].d = 1
            *rax_74 = &data_143477ff0
            *(rax_74 + 0xc) = 1
            rax_74[2] = rbx_17
        
        *result_1 = rbx_17
        result_1[1] = rax_74
    else
        *result_1 = 0
        result_1[1] = 0
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_318)
return result
