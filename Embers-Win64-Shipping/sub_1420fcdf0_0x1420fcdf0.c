// 函数: sub_1420fcdf0
// 地址: 0x1420fcdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t r12 = 0
void* r13 = arg1
int32_t i_3
int32_t var_1e8
int64_t var_1e4
uint64_t j_5
uint64_t var_1b0
int32_t var_190
void* var_180
uint64_t j_3
void var_118

if (data_143a2e510 - data_143a2e53c s> 0 || data_143a2e5b0 - data_143a2e5dc s> 0
        || data_143a2e650 - data_143a2e67c s> 0)
    EnterCriticalSection(&data_143a2e5f8)
    int32_t rdi_1 = data_143a2e5b0
    int32_t rsi_1 = data_143a2e5dc
    int32_t rbx_1 = 0
    data_143a2e620 = r13
    int64_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x20)
    int32_t r13_1 = 0
    int32_t r14_2 = rdi_1 - rsi_1
    int32_t r15_1 = 0
    data_143a2e628.o = var_1c8.o
    var_1e8 = 0
    data_143a2e638 = 0
    var_1e4 = 0
    int32_t var_1dc_1 = 0
    sub_1405ba450(&data_143a2e5a8, &i_3, arg1)
    int64_t i_6 = sx.q(i_3)
    
    if (i_6.d != 0xffffffff)
        int64_t rax_8 = data_143a2e5a8
        int64_t r8_2 = i_6 * 5
        var_1e8.o = *(rax_8 + (r8_2 << 3) + 8)
        uint64_t var_1d8_1 = *(rax_8 + (r8_2 << 3) + 0x18)
        sub_142101490(&data_143a2e5a8, i_6.d)
        r13_1 = var_1dc_1
        r12 = var_1e4:4.d
        r15_1 = var_1e4.d
        rbx_1 = var_1e8
        rsi_1 = data_143a2e5dc
        rdi_1 = data_143a2e5b0
        var_1b0 = var_1d8_1
    
    if (r14_2 s> 0 && rdi_1 == rsi_1)
        sub_140d2af80(&data_143e1d990, &data_143a2e5a0)
    
    LeaveCriticalSection(&data_143a2e5f8)
    void* rdi_2 = nullptr
    void* var_188_1 = nullptr
    r13 = arg1
    
    if ((rbx_1 | r15_1 | r12 | r13_1) != 0)
        void* rax_10
        rax_10, zmm6 = sub_1420f7670(r13)
        var_188_1 = rax_10
        sub_140de7870(rax_10 + 0x80, &var_1e8)
        int128_t* rbx_5 = var_1e4
        rbx_5[1].q = var_1b0
        *rbx_5 = zmm6
        *(rbx_5 + 0x18) = 0xffffffff
        sub_141836270(rax_10 + 0x80, &var_1b0, sub_140a6b260(rbx_5, 0x10), rbx_5, var_1e8, nullptr)
    
    bool cond:1_1 = *(r13 + 0xa0) s<= 0
    int32_t i = 0
    i_3 = 0
    
    if (not(cond:1_1))
        void* r14_3 = nullptr
        var_180 = nullptr
        
        do
            int64_t rax_12 = *(r13 + 0x98)
            
            if (*(rax_12 + (r14_3 << 3)) != 0)
                void* var_58_1 = nullptr
                int32_t var_50_1 = 0
                int32_t var_4c_1 = 0x18
                void* rsi_3 = *(rax_12 + (r14_3 << 3))
                void* rax_13 = sub_142459c10()
                
                if (rax_13 != 0)
                    void* rax_14 = sub_142459c10()
                    
                    if (rax_14 != 0)
                        int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                        
                        if (rax_15.d s<= *(rax_13 + 0x38)
                                && *(*(rax_13 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
                            rdi_2 = rax_13
                
                void* r8_4 = &var_118
                
                if (rdi_2 != sub_142459c10())
                    sub_1419f71f0(rsi_3, rax_13, r8_4)
                else
                    sub_1419f6fe0(rsi_3, rax_13, r8_4)
                
                rdi_2 = nullptr
                int32_t var_1f4_1 = 0
                
                if (var_50_1 s> 0)
                    int64_t rdx_7 = 0
                    int64_t var_198_1 = 0
                    int32_t rdi_8
                    
                    do
                        void* rcx_7 = &var_118
                        
                        if (var_58_1 != 0)
                            rcx_7 = var_58_1
                        
                        int64_t rbx_7 = *(rcx_7 + rdx_7)
                        var_1e8.q = rbx_7
                        EnterCriticalSection(&data_143a2e558)
                        int64_t rcx_8 = data_143a2e580:8
                        int64_t r8_5 = rbx_7
                        data_143a2e580.q = rbx_7
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                            r8_5 = data_143a2e580.q
                        
                        int32_t rdi_3 = data_143a2e510
                        int32_t rsi_4 = data_143a2e53c
                        data_143a2e580:8 = 0
                        int32_t r15_3 = rdi_3 - rsi_4
                        data_143a2e590 = 0
                        int128_t* var_1a0_1 = nullptr
                        int32_t j_6 = 0
                        sub_1405ba560(&data_143a2e508, &var_190, r8_5)
                        int64_t rdx_9 = sx.q(var_190)
                        int128_t* rbx_8 = nullptr
                        
                        if (rdx_9.d != 0xffffffff)
                            int64_t* r8_8 = data_143a2e508 + 8 + (rdx_9 << 5)
                            
                            if (&j_3 != r8_8)
                                int128_t* r12_1 = *r8_8
                                *r8_8 = 0
                                rbx_8 = r12_1
                                j_6 = r8_8[1].d
                                r8_8[1] = 0
                                var_1a0_1 = r12_1
                            
                            sub_142101580(&data_143a2e508, rdx_9.d)
                            rsi_4 = data_143a2e53c
                            rdi_3 = data_143a2e510
                        
                        int128_t* r13_2 = rbx_8
                        
                        if (r15_3 s> 0 && rdi_3 == rsi_4)
                            sub_140d2af80(&data_143e1d990, &data_143a2e500)
                        
                        LeaveCriticalSection(&data_143a2e558)
                        
                        if (j_6 s> 0)
                            void* r12_2 = &r13_2[1]
                            j_3 = zx.q(j_6)
                            uint64_t j
                            
                            do
                                void* rax_20 = var_188_1
                                
                                if (rax_20 == 0)
                                    rax_20 = sub_1420f7670(arg1)
                                    var_188_1 = rax_20
                                
                                int64_t* rax_21 = sub_1420f61b0(rax_20, r13_2, 0)
                                int64_t* r14_4 = *r12_2
                                int64_t* rcx_13 = *rax_21
                                void* rdx_11 = *r14_4
                                *rax_21 = rdx_11
                                
                                if (rdx_11 != 0)
                                    *(rdx_11 + 0x1c) += 1
                                
                                if (rcx_13 != 0)
                                    int32_t temp3_1 = *(rcx_13 + 0x1c)
                                    *(rcx_13 + 0x1c) -= 1
                                    
                                    if (temp3_1 == 1)
                                        (*(*rcx_13 + 0x40))()
                                
                                void* rax_23 = r14_4[1]
                                int64_t* rcx_14 = rax_21[1]
                                rax_21[1] = rax_23
                                
                                if (rax_23 != 0)
                                    *(rax_23 + 0x18) += 1
                                
                                if (rcx_14 != 0)
                                    rcx_14[3].d -= 1
                                    
                                    if (rcx_14[3].d == 1)
                                        (*(*rcx_14 + 0x38))()
                                
                                if (&rax_21[2] != &r14_4[2])
                                    int64_t rsi_5 = sx.q(r14_4[3].d)
                                    int64_t r15_4 = r14_4[2]
                                    int32_t r8_9 = *(rax_21 + 0x1c)
                                    rax_21[3].d = rsi_5.d
                                    
                                    if (rsi_5.d != 0 || r8_9 != 0)
                                        sub_1405a4be0(&rax_21[2], rsi_5.d, r8_9)
                                        memcpy(rax_21[2], r15_4, (rsi_5 << 4).d)
                                    else
                                        *(rax_21 + 0x1c) = rsi_5.d
                                
                                if (&rax_21[4] != &r14_4[4])
                                    int64_t rsi_6 = sx.q(r14_4[5].d)
                                    int64_t r15_5 = r14_4[4]
                                    int32_t r8_12 = *(rax_21 + 0x2c)
                                    rax_21[5].d = rsi_6.d
                                    
                                    if (rsi_6.d != 0 || r8_12 != 0)
                                        sub_1405a4be0(&rax_21[4], rsi_6.d, r8_12)
                                        memcpy(rax_21[4], r15_5, (rsi_6 << 4).d)
                                    else
                                        *(rax_21 + 0x2c) = rsi_6.d
                                
                                rax_21[6] = r14_4[6]
                                int64_t* rbx_11 = *r12_2
                                
                                if (rbx_11 != 0)
                                    int64_t rcx_19 = rbx_11[4]
                                    
                                    if (rcx_19 != 0)
                                        sub_140a74f90(rcx_19)
                                    
                                    int64_t rcx_20 = rbx_11[2]
                                    
                                    if (rcx_20 != 0)
                                        sub_140a74f90(rcx_20)
                                    
                                    int64_t* rcx_21 = rbx_11[1]
                                    
                                    if (rcx_21 != 0)
                                        rcx_21[3].d -= 1
                                        
                                        if (rcx_21[3].d == 1)
                                            (*(*rcx_21 + 0x38))(rcx_21)
                                    
                                    int64_t* rcx_22 = *rbx_11
                                    
                                    if (rcx_22 != 0)
                                        int32_t temp10_1 = *(rcx_22 + 0x1c)
                                        *(rcx_22 + 0x1c) -= 1
                                        
                                        if (temp10_1 == 1)
                                            (*(*rcx_22 + 0x40))(rcx_22)
                                    
                                    j_sub_140a74f90(rbx_11)
                                
                                r13_2 += 0x18
                                r12_2 += 0x18
                                j = j_3
                                j_3 -= 1
                            while (j != 1)
                        
                        EnterCriticalSection(&data_143a2e698)
                        int64_t r8_15 = var_1e8.q
                        int32_t rdi_5 = data_143a2e650
                        int32_t rsi_7 = data_143a2e67c
                        var_1e8.q = 0
                        var_1e4 = 0
                        int32_t r14_6 = rdi_5 - rsi_7
                        int32_t rbx_12 = 0
                        int32_t r15_6 = 0
                        data_143a2e6c8.o = var_1e8.o
                        data_143a2e6c0 = r8_15
                        int32_t r12_3 = 0
                        data_143a2e6d8 = 0
                        int32_t r13_3 = 0
                        int64_t var_1c8_1 = 0
                        int64_t var_1c0_1 = 0
                        j_3 = 0
                        sub_1405ba450(&data_143a2e648, &var_1b0, r8_15)
                        int64_t rdx_18 = sx.q(var_1b0.d)
                        
                        if (rdx_18.d == 0xffffffff)
                            zmm6 = var_1c8_1.o
                        else
                            int64_t rax_30 = data_143a2e648
                            int64_t rcx_24 = rdx_18 * 5
                            zmm6 = *(rax_30 + (rcx_24 << 3) + 8)
                            var_1c8_1.o = zmm6
                            j_5 = *(rax_30 + (rcx_24 << 3) + 0x18)
                            sub_142101490(&data_143a2e648, rdx_18.d)
                            r13_3 = var_1c0_1:4.d
                            r12_3 = var_1c0_1.d
                            r15_6 = var_1c8_1:4.d
                            rbx_12 = var_1c8_1.d
                            rsi_7 = data_143a2e67c
                            rdi_5 = data_143a2e650
                            j_3 = j_5
                        
                        if (r14_6 s> 0 && rdi_5 == rsi_7)
                            sub_140d2af80(&data_143e1d990, &data_143a2e640)
                        
                        LeaveCriticalSection(&data_143a2e698)
                        
                        if ((rbx_12 | r15_6 | r12_3 | r13_3) != 0)
                            var_1e8.o = zmm6
                            int32_t rax_32 = sub_140a6b260(&var_1e8, 0x10)
                            void* r8_23
                            
                            if (*(var_188_1 + 0x128) == *(var_188_1 + 0x154))
                            label_1420fd51f:
                                r8_23 = sub_1420f2e00(var_188_1 + 0x120, rax_32, &var_1e8)
                            else
                                void* rdx_19 = *(var_188_1 + 0x160)
                                void* r9_2 = var_188_1 + 0x158
                                
                                if (rdx_19 != 0)
                                    r9_2 = rdx_19
                                
                                int32_t rax_33 = *(r9_2
                                    + (((sx.q(*(var_188_1 + 0x168)) - 1) & sx.q(rax_32)) << 2))
                                
                                if (rax_33 == 0xffffffff)
                                label_1420fd51f_1:
                                    r8_23 = sub_1420f2e00(var_188_1 + 0x120, rax_32, &var_1e8)
                                else
                                    void* r8_21
                                    
                                    while (true)
                                        r8_21 = sx.q(rax_33) * 0x90 + *(var_188_1 + 0x120)
                                        
                                        if (((*(r8_21 + 4) ^ var_1e4.d)
                                                | (*(r8_21 + 8) ^ var_1e4:4.d)
                                                | (*(r8_21 + 0xc) ^ var_1dc_1)
                                                | (var_1e8 ^ *r8_21)) == 0)
                                            break
                                        
                                        rax_33 = *(r8_21 + 0x80)
                                        
                                        if (rax_33 == 0xffffffff)
                                            goto label_1420fd51f_2
                                    
                                    if (rax_33 == 0xffffffff || r8_21 == 0)
                                    label_1420fd51f_2:
                                        r8_23 = sub_1420f2e00(var_188_1 + 0x120, rax_32, &var_1e8)
                                    else
                                        r8_23 = r8_21 + 0x10
                            
                            uint64_t j_7 = j_3
                            *r8_23 = *j_7
                            *(r8_23 + 0x10) = *(j_7 + 0x10)
                            *(r8_23 + 0x20) = *(j_7 + 0x20)
                            *(r8_23 + 0x30) = *(j_7 + 0x30)
                            *(r8_23 + 0x40) = *(j_7 + 0x40)
                            *(r8_23 + 0x50) = *(j_7 + 0x50)
                            *(r8_23 + 0x54) = *(j_7 + 0x54)
                            
                            if (r8_23 + 0x58 != j_7 + 0x58)
                                int32_t j_4 = *(j_7 + 0x60)
                                int16_t* rbx_19 = *(j_7 + 0x58)
                                int32_t r8_24 = *(r8_23 + 0x64)
                                *(r8_23 + 0x60) = j_4
                                
                                if (j_4 != 0 || r8_24 != 0)
                                    sub_1405a4c70(r8_23 + 0x58, j_4, r8_24)
                                    
                                    if (j_4 != 0)
                                        void* rdx_28 = *(r8_23 + 0x58) - rbx_19
                                        int32_t j_1
                                        
                                        do
                                            *(rbx_19 + rdx_28) = *rbx_19
                                            rbx_19 = &rbx_19[1]
                                            j_1 = j_4
                                            j_4 -= 1
                                        while (j_1 != 1)
                                else
                                    *(r8_23 + 0x64) = j_4
                            
                            int64_t rcx_38 = *(j_7 + 0x58)
                            
                            if (rcx_38 != 0)
                                sub_140a74f90(rcx_38)
                            
                            j_sub_140a74f90(j_7)
                        
                        if (var_1a0_1 != 0)
                            sub_140a74f90(var_1a0_1)
                        
                        rdi_8 = var_1f4_1 + 1
                        rdx_7 = var_198_1 + 8
                        var_1f4_1 = rdi_8
                        var_198_1 = rdx_7
                    while (rdi_8 s< var_50_1)
                    r14_3 = var_180
                    rdi_2 = nullptr
                    i = i_3
                    r13 = arg1
                
                if (var_58_1 != 0)
                    sub_140a74f90(var_58_1)
            
            i += 1
            r14_3 += 1
            i_3 = i
            var_180 = r14_3
        while (i s< *(r13 + 0xa0))
    
    int64_t* i_1 = *(r13 + 0xc8)
    int64_t* i_5 = i_1
    void* rax_40 = &i_1[sx.q(*(r13 + 0xd0))]
    var_1e8.q = rax_40
    
    if (i_1 != rax_40)
        do
            int64_t* rbx_20 = *i_1
            (*(*rbx_20 + 0x510))(rbx_20)
            EnterCriticalSection(&data_143a2e558)
            int64_t rcx_43 = data_143a2e580:8
            data_143a2e580.q = rbx_20
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
                rbx_20 = data_143a2e580.q
            
            int32_t rsi_10 = data_143a2e53c
            data_143a2e580:8 = 0
            int32_t rdi_9 = data_143a2e510
            data_143a2e590 = 0
            int32_t r15_8 = rdi_9 - rsi_10
            int128_t* var_198_2 = nullptr
            int32_t r14_8 = 0
            sub_1405ba560(&data_143a2e508, &var_1b0, rbx_20)
            int64_t rdx_32 = sx.q(var_1b0.d)
            int128_t* rbx_21 = nullptr
            
            if (rdx_32.d != 0xffffffff)
                int128_t** r8_28 = data_143a2e508 + 8 + (rdx_32 << 5)
                
                if (&var_180 != r8_28)
                    int128_t* r13_4 = *r8_28
                    *r8_28 = nullptr
                    rbx_21 = r13_4
                    r14_8 = r8_28[1].d
                    r8_28[1] = 0
                    var_198_2 = r13_4
                
                sub_142101580(&data_143a2e508, rdx_32.d)
                rsi_10 = data_143a2e53c
                rdi_9 = data_143a2e510
            
            int128_t* r13_5 = rbx_21
            
            if (r15_8 s> 0 && rdi_9 == rsi_10)
                sub_140d2af80(&data_143e1d990, &data_143a2e500)
            
            LeaveCriticalSection(&data_143a2e558)
            
            if (r14_8 s> 0)
                void* r12_4 = &r13_5[1]
                var_180 = zx.q(r14_8)
                void* j_2
                
                do
                    void* rax_43 = var_188_1
                    
                    if (rax_43 == 0)
                        rax_43 = sub_1420f7670(arg1)
                        var_188_1 = rax_43
                    
                    int64_t* rax_44 = sub_1420f61b0(rax_43, r13_5, 0)
                    int64_t* rsi_11 = *r12_4
                    void* rax_45 = *rsi_11
                    int64_t* rcx_48 = *rax_44
                    *rax_44 = rax_45
                    
                    if (rax_45 != 0)
                        *(rax_45 + 0x1c) += 1
                    
                    if (rcx_48 != 0)
                        int32_t temp0_1 = *(rcx_48 + 0x1c)
                        *(rcx_48 + 0x1c) -= 1
                        
                        if (temp0_1 == 1)
                            (*(*rcx_48 + 0x40))()
                    
                    void* rax_47 = rsi_11[1]
                    int64_t* rcx_49 = rax_44[1]
                    rax_44[1] = rax_47
                    
                    if (rax_47 != 0)
                        *(rax_47 + 0x18) += 1
                    
                    if (rcx_49 != 0)
                        rcx_49[3].d -= 1
                        
                        if (rcx_49[3].d == 1)
                            (*(*rcx_49 + 0x38))()
                    
                    if (&rax_44[2] != &rsi_11[2])
                        int64_t r14_9 = sx.q(rsi_11[3].d)
                        int64_t r15_9 = rsi_11[2]
                        int32_t r8_29 = *(rax_44 + 0x1c)
                        rax_44[3].d = r14_9.d
                        
                        if (r14_9.d != 0 || r8_29 != 0)
                            sub_1405a4be0(&rax_44[2], r14_9.d, r8_29)
                            memcpy(rax_44[2], r15_9, (r14_9 << 4).d)
                        else
                            *(rax_44 + 0x1c) = r14_9.d
                    
                    if (&rax_44[4] != &rsi_11[4])
                        int64_t r14_10 = sx.q(rsi_11[5].d)
                        int64_t r15_10 = rsi_11[4]
                        int32_t r8_32 = *(rax_44 + 0x2c)
                        rax_44[5].d = r14_10.d
                        
                        if (r14_10.d != 0 || r8_32 != 0)
                            sub_1405a4be0(&rax_44[4], r14_10.d, r8_32)
                            memcpy(rax_44[4], r15_10, (r14_10 << 4).d)
                        else
                            *(rax_44 + 0x2c) = r14_10.d
                    
                    rax_44[6] = rsi_11[6]
                    int64_t* rbx_24 = *r12_4
                    
                    if (rbx_24 != 0)
                        int64_t rcx_54 = rbx_24[4]
                        
                        if (rcx_54 != 0)
                            sub_140a74f90(rcx_54)
                        
                        int64_t rcx_55 = rbx_24[2]
                        
                        if (rcx_55 != 0)
                            sub_140a74f90(rcx_55)
                        
                        int64_t* rcx_56 = rbx_24[1]
                        
                        if (rcx_56 != 0)
                            rcx_56[3].d -= 1
                            
                            if (rcx_56[3].d == 1)
                                (*(*rcx_56 + 0x38))(rcx_56)
                        
                        int64_t* rcx_57 = *rbx_24
                        
                        if (rcx_57 != 0)
                            int32_t temp6_1 = *(rcx_57 + 0x1c)
                            *(rcx_57 + 0x1c) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rcx_57 + 0x40))(rcx_57)
                        
                        j_sub_140a74f90(rbx_24)
                    
                    r13_5 += 0x18
                    r12_4 += 0x18
                    j_2 = var_180
                    var_180 -= 1
                while (j_2 != 1)
                i_1 = i_5
            
            if (var_198_2 != 0)
                sub_140a74f90(var_198_2)
            
            i_1 = &i_1[1]
            i_5 = i_1
        while (i_1 != var_1e8.q)
        
        r13 = arg1
    
    void* rcx_60 = *(r13 + 0x1e0)
    
    if (rcx_60 != 0)
        sub_142102a80(rcx_60)
    
    r12 = 0

void* result = zx.q(data_143a2e6f0 - data_143a2e71c)

if (result.d s> 0)
    bool cond:2_1 = *(r13 + 0xa0) s<= 0
    int32_t i_2 = 0
    result = *(r13 + 0x1e0)
    var_180 = result
    int32_t i_4 = 0
    
    if (not(cond:2_1))
        int64_t* r14_11 = nullptr
        int64_t* var_1a0_2 = nullptr
        
        do
            result = *(r13 + 0x98)
            
            if (*(r14_11 + result) != 0)
                void* result_1 = nullptr
                int32_t var_50_2 = 0
                int32_t var_4c_2 = 0x18
                void* rsi_12 = *(r14_11 + result)
                void* rax_56 = sub_142459c10()
                void* rdi_11
                
                if (rax_56 == 0)
                    rdi_11 = nullptr
                else
                    void* rax_57 = sub_142459c10()
                    
                    if (rax_57 == 0)
                        rdi_11 = nullptr
                    else
                        int64_t rax_58 = sx.q(*(rax_57 + 0x38))
                        
                        if (rax_58.d s> *(rax_56 + 0x38))
                            rdi_11 = nullptr
                        else
                            rdi_11 = rax_56
                            
                            if (*(*(rax_56 + 0x30) + (rax_58 << 3)) != rax_57 + 0x30)
                                rdi_11 = nullptr
                
                void* r8_35 = &var_118
                
                if (rdi_11 != sub_142459c10())
                    result = sub_1419f71f0(rsi_12, rax_56, r8_35)
                else
                    result = sub_1419f6fe0(rsi_12, rax_56, r8_35)
                
                i_3 = 0
                
                if (var_50_2 s> 0)
                    int64_t r8_36 = 0
                    int64_t var_198_3 = 0
                    int32_t i_7
                    
                    do
                        result = &var_118
                        
                        if (result_1 != 0)
                            result = result_1
                        
                        void* const rdi_12 = *(result + r8_36)
                        
                        if (rdi_12 == 0)
                            rdi_12 = nullptr
                        else
                            void* rax_61 = sub_142580450()
                            void* rdx_41 = *(rdi_12 + 0x10)
                            result = sx.q(*(rax_61 + 0x38))
                            
                            if (result.d s> *(rdx_41 + 0x38))
                                rdi_12 = nullptr
                            else
                                void* result_2 = result
                                result = *(rdx_41 + 0x30)
                                
                                if (*(result + (result_2 << 3)) != rax_61 + 0x30)
                                    rdi_12 = nullptr
                        
                        if (rdi_12 != 0)
                            EnterCriticalSection(&data_143a2e738)
                            int32_t rsi_13 = data_143a2e6f0
                            int32_t r14_12 = data_143a2e71c
                            j_3 = 0
                            int64_t var_168_1 = 0
                            int32_t r13_6 = 0
                            int32_t r15_12 = rsi_13 - r14_12
                            data_143a2e768.o = j_3.o
                            data_143a2e760 = rdi_12
                            int32_t rbx_26 = 0
                            data_143a2e778 = 0
                            int64_t var_1c8_2 = 0
                            int64_t var_1c0_2 = 0
                            sub_1405ba450(&data_143a2e6e8, &var_1b0, rdi_12)
                            int64_t rdx_43 = sx.q(var_1b0.d)
                            
                            if (rdx_43.d == 0xffffffff)
                                zmm6 = var_1c8_2.o
                            else
                                int64_t rax_62 = data_143a2e6e8
                                int64_t rcx_64 = rdx_43 * 5
                                zmm6 = *(rax_62 + (rcx_64 << 3) + 8)
                                var_1c8_2.o = zmm6
                                j_5 = *(rax_62 + (rcx_64 << 3) + 0x18)
                                sub_142101490(&data_143a2e6e8, rdx_43.d)
                                r14_12 = data_143a2e71c
                                rsi_13 = data_143a2e6f0
                                rbx_26 = var_1c0_2:4.d
                                r13_6 = var_1c8_2:4.d
                                r12 = var_1c8_2.d
                            
                            if (r15_12 s> 0 && rsi_13 == r14_12)
                                sub_140d2af80(&data_143e1d990, &data_143a2e6e0)
                            
                            result = LeaveCriticalSection(&data_143a2e738)
                            
                            if ((rbx_26 | var_1c0_2.d | r13_6 | r12) == 0)
                                r12 = 0
                            else
                                void* r13_7 = var_180
                                
                                if (r13_7 == 0)
                                    void* rax_63
                                    rax_63, zmm6 = sub_1420f7670(arg1)
                                    r13_7 = rax_63
                                    var_180 = rax_63
                                
                                r12 = 0
                                int64_t var_158 = 0
                                int32_t var_150_1 = 0
                                int64_t var_148
                                __builtin_memset(&var_148, 0, 0x21)
                                int64_t var_120_1 = 0
                                sub_1420f6090(r13_7 + 0x170, &var_1e8)
                                int32_t* rbx_30 = var_1e4
                                *rbx_30 = zmm6
                                sub_1420f38a0(&rbx_30[4], &var_158)
                                rbx_30[0x14] = 0xffffffff
                                sub_1420f7bc0(r13_7 + 0x170, &var_190, sub_140a6b260(rbx_30, 0x10), 
                                    rbx_30, var_1e8, nullptr)
                                int64_t r14_13 = *(r13_7 + 0x170)
                                void* rsi_14 = sx.q(var_190) * 0x58
                                int64_t var_138
                                
                                if (var_138 != 0)
                                    sub_140a74f90(var_138)
                                
                                int64_t rcx_72 = var_148
                                
                                if (rcx_72 != 0)
                                    sub_140a74f90(rcx_72)
                                
                                *(rsi_14 + r14_13 + 0x10) = *j_5
                                *(rsi_14 + r14_13 + 0x14) = *(j_5 + 4)
                                *(rsi_14 + r14_13 + 0x18) = *(j_5 + 8)
                                sub_14081d8c0(rsi_14 + 0x20 + r14_13, j_5 + 0x10)
                                sub_14081d8c0(rsi_14 + 0x30 + r14_13, j_5 + 0x20)
                                *(rsi_14 + r14_13 + 0x40) = *(j_5 + 0x30)
                                *(rsi_14 + r14_13 + 0x48) = *(j_5 + 0x38)
                                int64_t rcx_77 = *(j_5 + 0x20)
                                
                                if (rcx_77 != 0)
                                    sub_140a74f90(rcx_77)
                                
                                int64_t rcx_78 = *(j_5 + 0x10)
                                
                                if (rcx_78 != 0)
                                    sub_140a74f90(rcx_78)
                                
                                result = j_sub_140a74f90(j_5)
                        
                        i_7 = i_3 + 1
                        r8_36 = var_198_3 + 8
                        i_3 = i_7
                        var_198_3 = r8_36
                    while (i_7 s< var_50_2)
                    r14_11 = var_1a0_2
                    i_2 = i_4
                    r13 = arg1
                
                if (result_1 != 0)
                    result = sub_140a74f90(result_1)
            
            i_2 += 1
            r14_11 = &r14_11[1]
            i_4 = i_2
            var_1a0_2 = r14_11
        while (i_2 s< *(r13 + 0xa0))

__security_check_cookie(rax_1 ^ &var_228)
return result
