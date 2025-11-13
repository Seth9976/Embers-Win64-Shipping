// 函数: sub_140b9e970
// 地址: 0x140b9e970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
*(arg1 + 0x324) = 1
int64_t* var_c8 = nullptr
int32_t var_c0 = 0
int64_t rbx_1 = *(*(arg1 + 0xa0) + 0x18)
TEB* gsbase

if (data_143e1a5d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1a5d8)
    
    if (data_143e1a5d8 == 0xffffffff)
        __builtin_memset(&data_1439a9780, 0, 0x2c)
        data_1439a97ac = 0x80
        data_1439a97b0 = 0xffffffff
        data_1439a97b4 = 0
        data_1439a97c0 = 0
        data_1439a97c8 = 0
        atexit(&data_142cc16e0)
        _Init_thread_footer(&data_143e1a5d8)

sub_140ba96a0(&data_1439a9780, rbx_1, &var_c8)

if (sub_140bac910() == 0)
    int64_t rdx_3 = sx.q(var_c0)
    
    if (rdx_3.d != 0)
        int32_t r15_1 = 0
        int64_t* r10_1 = var_c8
        int32_t rdi_1 = 0
        int64_t rbx_2 = 0
        int64_t r12
        r12.b = *r10_1 != *(*(arg1 + 0xa0) + 0x18)
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_2 += 1
            rdi_1 += 1
            
            if (rbx_2 s< rdx_3)
                void* rcx_2 = rbx_2 * 0x2c + r10_1
                
                do
                    int32_t rax_5
                    rax_5.b = *rcx_2 != *(*(arg1 + 0xa0) + 0x18)
                    
                    if (zx.d(r12.b) != rax_5)
                        break
                    
                    rdi_1 += 1
                    rbx_2 += 1
                    rcx_2 += 0x2c
                while (rbx_2 s< rdx_3)
            
            int32_t r14_2 = rdi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r15_1 != r9_1.d)
                    memmove(sx.q(r15_1) * 0x2c + r10_1, r9_1 * 0x2c + r10_1, r14_2 * 0x2c)
                    r10_1 = var_c8
                
                r15_1 += r14_2
            
            r12.b ^= 1
            r14 = nullptr
        while (rbx_2 s< rdx_3)
        
        var_c0 = r15_1

int64_t rsi_2 = *(sub_140bdf670() + 0x18)
void* rax_9 = sub_140bdf670()
int32_t arg_8 = 0
int64_t rdi_3 = *(*(rax_9 + 0x20) + 0x18)
int16_t* var_b8
int32_t var_b0
int32_t var_ac
int16_t* var_a8
int32_t var_a0
int64_t var_90
int16_t* var_80
int64_t var_70
int32_t arg_10
int32_t i_1

if (var_c0 s> 0)
    int64_t rdx_7 = 0
    int32_t arg_24 = 0
    int64_t var_88_1 = 0
    void* r12_1 = arg1 + 8
    int32_t rcx_37
    
    do
        int64_t rbx_3 = sx.q(*(r12_1 + 8))
        void* r15_3 = var_c8 + rdx_7
        int32_t rax_10 = (rbx_3 + 1).d
        *(r12_1 + 8) = rax_10
        
        if (rax_10 s> *(r12_1 + 0xc))
            sub_1407c3b60(r12_1)
        
        int64_t rcx_6 = rbx_3 * 0x38
        
        if (rcx_6 != neg.q(*r12_1))
            r14 = sub_140cd3b40(rcx_6 + *r12_1, nullptr)
        
        *(r14 + 0x14) = *(r15_3 + 0x18)
        *(r14 + 0xc) = *(r15_3 + 0x10)
        *r14 = *(r15_3 + 8)
        int32_t rcx_8
        rcx_8.b = *(r15_3 + 0x24) == 0
        bool cond:1_1 = (rcx_8.b & sub_140b5b8a0(*(r15_3 + 0x20), 0)) != 0
        int32_t rax_17 = *(arg1 + 0x10)
        
        if (cond:1_1)
        label_140b9eb8c:
            r14[1].d = not.d(rax_17)
        else
            int32_t temp4_1 = rax_17
            rax_17 -= 2
            
            if (temp4_1 - 2 s>= 0)
                int64_t rdx_9 = sx.q(rax_17)
                int64_t* rcx_10 = rdx_9 * 0x38 + *r12_1
                int64_t temp7_1
                
                do
                    if (*rcx_10 == *(r15_3 + 0x20))
                        goto label_140b9eb8c
                    
                    rax_17 -= 1
                    rcx_10 -= 0x38
                    temp7_1 = rdx_9
                    rdx_9 -= 1
                while (temp7_1 - 1 s>= 0)
        
        int64_t rbx_5 = sx.q(*(r12_1 + 8))
        int32_t rax_19 = (rbx_5 + 1).d
        *(r12_1 + 8) = rax_19
        
        if (rax_19 s> *(r12_1 + 0xc))
            sub_1407c3b60(r12_1)
        
        int64_t rcx_12 = rbx_5 * 0x38
        int64_t* rbx_6
        
        if (rcx_12 == neg.q(*r12_1))
            r14 = nullptr
            rbx_6 = nullptr
        else
            rbx_6 = sub_140cd3b40(rcx_12 + *r12_1, nullptr)
            r14 = nullptr
        
        int32_t* arg_20
        arg_20.d = *sub_140b5e500(&i_1, 0xcf)
        *(rbx_6 + 0x14) = arg_20
        sub_140b63580(&data_143de5770, &var_90)
        *(rbx_6 + 0xc) = var_90
        *rbx_6 = *r15_3
        
        if (*(r15_3 + 0x18) == rsi_2 && data_143de5452 == 0 && *(r15_3 + 0x10) == rdi_3)
            int64_t var_60
            int64_t* rax_25 = sub_140b63b70(r15_3, &var_60)
            int16_t* rcx_17 = *rax_25
            int32_t rdx_13 = rax_25[1].d
            int32_t rdx_14 = neg.d(rdx_13)
            *rax_25 = 0
            int32_t r8_4 = rax_25[1].d
            var_b8 = rcx_17
            int32_t rcx_18 = *(rax_25 + 0xc)
            int32_t rdx_17 = sbb.d(rdx_14, rdx_14, rdx_13 != 0) + 2 + r8_4
            var_ac = rcx_18
            rax_25[1] = 0
            
            if (rdx_17 s> rcx_18)
                sub_1405947f0(&var_b8, rdx_17)
            
            sub_140a20ba0(&var_b8, &data_142d404c4, 1)
            int16_t* r12_2 = var_b8
            var_b0.q = 0
            var_b8 = nullptr
            int64_t* rax_27 = sub_140b63b70(r15_3 + 8, &var_70)
            int32_t r14_3
            int16_t* r15_5
            
            if (r8_4 s> 1)
                int32_t rax_28 = rax_27[1].d
                int32_t r14_4 = rax_28 - 1
                int32_t rax_29 = 0
                
                if (rax_28 == 0)
                    r14_4 = 0
                
                if (r8_4 == 0 && r14_4 != 0)
                    rax_29 = r8_4 + 1
                
                int32_t rdx_20 = r14_4 + r8_4 + rax_29
                var_a8 = r12_2
                var_a0 = r8_4
                
                if (rdx_20 s> var_ac)
                    sub_1405947f0(&var_a8, rdx_20)
                
                sub_140a20ba0(&var_a8, *rax_27, r14_4)
                r15_5 = var_a8
                r14_3 = var_ac
                var_a8 = nullptr
                var_a0 = 0
            else
                r15_5 = *rax_27
                *rax_27 = 0
                r14_3 = rax_27[1].d
                rax_27[1] = 0
                
                if (r12_2 != 0)
                    sub_140a74f90(r12_2)
            
            int64_t rcx_26 = var_60
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            int64_t rcx_27 = var_70
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            int16_t* const rdx_22 = &data_142d40450
            
            if (r14_3 != 0)
                rdx_22 = r15_5
            
            sub_140b58260(&var_80, rdx_22, 1)
            int16_t* rbx_8 = var_80
            arg_10.q = rbx_8
            sub_140d214f0()
            int64_t* rcx_34
            
            if (data_1439aac98 == data_1439aacc4)
            label_140b9eddb:
                r14 = nullptr
                rcx_34 = nullptr
            else
                int32_t rax_31 = sub_140b5ead0(rbx_8.d) + arg3
                void* r8_6 = &data_1439aacc8
                void* rcx_31 = data_1439aacd0
                
                if (rcx_31 != 0)
                    r8_6 = rcx_31
                
                int32_t rax_33 = *(r8_6 + (((sx.q(data_1439aacd8) - 1) & sx.q(rax_31)) << 2))
                
                if (rax_33 == 0xffffffff)
                    goto label_140b9eddb
                
                while (true)
                    rcx_34 = sx.q(rax_33) * 0x70 + data_1439aac90
                    
                    if (*rcx_34 == rbx_8)
                        break
                    
                    rax_33 = rcx_34[0xd].d
                    
                    if (rax_33 == 0xffffffff)
                        goto label_140b9eddb
                
                if (rax_33 == 0xffffffff)
                    goto label_140b9eddb
                
                r14 = nullptr
            
            void* rax_34 = &rcx_34[1]
            
            if (rcx_34 == 0)
                rax_34 = nullptr
            
            if (rax_34 != 0)
                (*(rax_34 + 8))()
            
            if (r15_5 != 0)
                sub_140a74f90(r15_5)
            
            r12_1 = arg1 + 8
        
        rcx_37 = arg_8 + 1
        rdx_7 = var_88_1 + 0x2c
        arg_8 = rcx_37
        var_88_1 = rdx_7
    while (rcx_37 s< var_c0)

int32_t r15_6 = *(arg1 + 0x20)
int64_t rbx_9 = sx.q(r15_6)
int32_t rax_35 = (rbx_9 + 1).d
*(arg1 + 0x20) = rax_35

if (rax_35 s> *(arg1 + 0x24))
    sub_1408888d0(arg1 + 0x18)

int64_t rcx_40 = rbx_9 << 7
int32_t* r12_3

if (rcx_40 == neg.q(*(arg1 + 0x18)))
    r12_3 = nullptr
else
    r12_3 = sub_140cd3ae0(rcx_40 + *(arg1 + 0x18))

int64_t rbx_11 = *(*(arg1 + 0xa0) + 0x18)
arg_8.q = rbx_11
sub_140d212c0()
void* const rcx_46

if (data_1439aace8 == data_1439aad14)
label_140b9eedc:
    rcx_46 = nullptr
else
    int32_t rax_38 = sub_140b5ead0(rbx_11.d) + arg2
    void* r8_8 = &data_1439aad18
    void* rcx_44 = data_1439aad20
    
    if (rcx_44 != 0)
        r8_8 = rcx_44
    
    int32_t rax_40 = *(r8_8 + (((sx.q(data_1439aad28) - 1) & sx.q(rax_38)) << 2))
    
    if (rax_40 == 0xffffffff)
    label_140b9eedc_1:
        rcx_46 = nullptr
    else
        int64_t r8_9 = data_1439aace0
        
        while (true)
            int64_t rdx_31 = sx.q(rax_40) * 3
            rcx_46 = r8_9 + (rdx_31 << 3)
            
            if (*(r8_9 + (rdx_31 << 3)) == rbx_11)
                break
            
            rax_40 = *(rcx_46 + 0x10)
            
            if (rax_40 == 0xffffffff)
                goto label_140b9eedc_2
        
        if (rax_40 == 0xffffffff)
        label_140b9eedc_2:
            rcx_46 = nullptr

void* rax_41 = rcx_46 + 8

if (rcx_46 == 0)
    rax_41 = nullptr

int64_t rcx_47

if (rax_41 == 0)
    arg_8.q = 0
    rcx_47 = arg_8.q
else
    rcx_47 = *rax_41

*r12_3 = rcx_47
r12_3[4] = r15_6 + 1
*(r12_3 + 0x52) = 1
r12_3[7] |= 1

if (data_143de5452 != 0)
    sub_140cbbb90(arg1, &var_80, r15_6, 0, 0)
    int16_t* const rdx_33 = &data_142d40450
    int32_t var_78
    
    if (var_78 != 0)
        rdx_33 = var_80
    
    sub_140d21640(&var_90, *sub_140b58260(&arg_8, rdx_33, 1))
    sub_140b5b8a0(var_90.d, 0)
    sub_140b5b8a0(var_90.d, 0)
    rbx_11.b = var_90 == rsi_2
    arg_8.b = rbx_11.b
    void* rax_44 = sub_140bdfe30()
    int64_t* var_88_2
    int64_t* r12_4
    
    if (rbx_11.b != 0)
        int64_t rbx_12 = sx.q(*(arg1 + 0x20))
        int32_t rax_46 = (rbx_12 + 1).d
        *(arg1 + 0x20) = rax_46
        
        if (rax_46 s> *(arg1 + 0x24))
            sub_1408888d0(arg1 + 0x18)
        
        int64_t rcx_55 = rbx_12 << 7
        
        if (rcx_55 == neg.q(*(arg1 + 0x18)))
            goto label_140b9efa9
        
        int64_t* rax_47 = sub_140cd3ae0(rcx_55 + *(arg1 + 0x18))
        var_88_2 = rax_47
        r12_4 = rax_47
        
        if (rax_47 != 0)
            var_b8 = nullptr
            var_b0.q = 0
            sub_1405947f0(&var_b8, 0xa)
            int32_t r14_5 = var_ac
            int32_t rbx_13 = var_b0 + 0xa
            
            if (rbx_13 s> r14_5)
                sub_140594770(&var_b8)
                r14_5 = var_ac
            
            int16_t* r15_7 = var_b8
            UnDecorator::getReferenceType(r15_7, u"Default__", 0x14)
            int16_t** rax_48 = sub_140b63b70(r12_3, &var_70)
            int16_t* rbx_14
            int32_t rsi_3
            
            if (rbx_13 s> 1)
                int32_t rax_49 = rax_48[1].d
                int32_t rsi_4 = rax_49 - 1
                int32_t rax_50 = 0
                
                if (rax_49 == 0)
                    rsi_4 = 0
                
                if (rbx_13 == 0 && rsi_4 != 0)
                    rax_50 = rbx_13 + 1
                
                var_a8 = r15_7
                int32_t rdx_39 = rbx_13 + rsi_4 + rax_50
                var_a0 = rbx_13
                
                if (rdx_39 s> r14_5)
                    sub_1405947f0(&var_a8, rdx_39)
                
                sub_140a20ba0(&var_a8, *rax_48, rsi_4)
                rsi_3 = r14_5
                rbx_14 = var_a8
            else
                rbx_14 = *rax_48
                *rax_48 = nullptr
                rsi_3 = rax_48[1].d
                rax_48[1] = 0
                
                if (r15_7 != 0)
                    sub_140a74f90(r15_7)
            
            int64_t rcx_64 = var_70
            
            if (rcx_64 != 0)
                sub_140a74f90(rcx_64)
            
            int16_t* rdx_41 = &data_142d40450
            
            if (rsi_3 != 0)
                rdx_41 = rbx_14
            
            sub_140b58260(&i_1, rdx_41, 1)
            *r12_4 = i_1.q
            r12_4[2].d = *(arg1 + 0x20)
            *(r12_4 + 0x52) = 2
            *(r12_4 + 0x1c) |= 0x11
            *(r12_4 + 0xc) = r12_3[4]
            
            if (rbx_14 != 0)
                sub_140a74f90(rbx_14)
        
        goto label_140b9f130
    
    if (var_90 == *(rax_44 + 0x18))
    label_140b9efa9:
        r12_4 = nullptr
        var_88_2 = nullptr
    label_140b9f130:
        var_a8 = r12_3
        int32_t i = 0
        int64_t* var_a0_1 = r12_4
        arg_10 = 0
        i_1 = 0
        
        do
            void* rcx_67 = (&var_a8)[sx.q(i)]
            
            if (rcx_67 != 0)
                int32_t r14_6 = 0
                *(rcx_67 + 0x68) = arg_10
                int32_t rdx_42 = var_c0
                
                if (rdx_42 s> 0)
                    int32_t r12_5 = 0
                    int64_t r15_8 = 0
                    
                    do
                        if ((*(sx.q(i_1) + r15_8 + var_c8 + 0x28) & 1) != 0)
                            *(rcx_67 + 0x6c) += 1
                            int64_t rsi_5 = sx.q(*(arg1 + 0x2f8))
                            int32_t rax_60 = (rsi_5 + 1).d
                            *(arg1 + 0x2f8) = rax_60
                            
                            if (rax_60 s> *(arg1 + 0x2fc))
                                sub_1405a4cf0(arg1 + 0x2f0)
                            
                            *(*(arg1 + 0x2f0) + (rsi_5 << 2)) = not.d(r12_5)
                            arg_10 += 1
                            rdx_42 = var_c0
                        
                        r14_6 += 1
                        r12_5 += 2
                        r15_8 += 0x2c
                    while (r14_6 s< rdx_42)
                
                int32_t r14_7 = 0
                
                if (rdx_42 s> 0)
                    int32_t r12_6 = 0
                    int64_t r15_9 = 0
                    
                    do
                        if ((*(sx.q(i_1) + r15_9 + var_c8 + 0x28) & 2) != 0)
                            *(rcx_67 + 0x70) += 1
                            int64_t rsi_6 = sx.q(*(arg1 + 0x2f8))
                            int32_t rax_64 = (rsi_6 + 1).d
                            *(arg1 + 0x2f8) = rax_64
                            
                            if (rax_64 s> *(arg1 + 0x2fc))
                                sub_1405a4cf0(arg1 + 0x2f0)
                            
                            *(*(arg1 + 0x2f0) + (rsi_6 << 2)) = not.d(r12_6)
                            arg_10 += 1
                            rdx_42 = var_c0
                        
                        r14_7 += 1
                        r12_6 += 2
                        r15_9 += 0x2c
                    while (r14_7 s< rdx_42)
                
                if (arg_8.b != 0 && rcx_67 == var_88_2)
                    *(rcx_67 + 0x74) += 1
                    int64_t rdi_5 = sx.q(*(arg1 + 0x2f8))
                    int32_t rax_67 = (rdi_5 + 1).d
                    *(arg1 + 0x2f8) = rax_67
                    
                    if (rax_67 s> *(arg1 + 0x2fc))
                        sub_1405a4cf0(arg1 + 0x2f0)
                    
                    *(*(arg1 + 0x2f0) + (rdi_5 << 2)) = r12_3[4]
                    arg_10 += 1
                    rdx_42 = var_c0
                
                int32_t r14_8 = 0
                
                if (rdx_42 s> 0)
                    int32_t r12_7 = 0
                    int64_t r15_10 = 0
                    
                    do
                        if ((*(sx.q(i_1) + r15_10 + var_c8 + 0x28) & 4) != 0)
                            *(rcx_67 + 0x74) += 1
                            int64_t rsi_7 = sx.q(*(arg1 + 0x2f8))
                            int32_t rax_72 = (rsi_7 + 1).d
                            *(arg1 + 0x2f8) = rax_72
                            
                            if (rax_72 s> *(arg1 + 0x2fc))
                                sub_1405a4cf0(arg1 + 0x2f0)
                            
                            *(*(arg1 + 0x2f0) + (rsi_7 << 2)) = not.d(r12_7)
                            arg_10 += 1
                            rdx_42 = var_c0
                        
                        r14_8 += 1
                        r12_7 += 2
                        r15_10 += 0x2c
                    while (r14_8 s< rdx_42)
                
                int32_t r14_9 = 0
                
                if (rdx_42 s> 0)
                    int32_t r12_8 = 0
                    int64_t r15_11 = 0
                    
                    do
                        if ((*(sx.q(i_1) + r15_11 + var_c8 + 0x28) & 8) != 0)
                            *(rcx_67 + 0x78) += 1
                            int64_t rsi_8 = sx.q(*(arg1 + 0x2f8))
                            int32_t rax_76 = (rsi_8 + 1).d
                            *(arg1 + 0x2f8) = rax_76
                            
                            if (rax_76 s> *(arg1 + 0x2fc))
                                sub_1405a4cf0(arg1 + 0x2f0)
                            
                            *(*(arg1 + 0x2f0) + (rsi_8 << 2)) = not.d(r12_8)
                            arg_10 += 1
                            rdx_42 = var_c0
                        
                        r14_9 += 1
                        r12_8 += 2
                        r15_11 += 0x2c
                    while (r14_9 s< rdx_42)
            
            i = i_1 + 1
            i_1 = i
        while (i u< 2)
    
    int16_t* rcx_82 = var_80
    
    if (rcx_82 != 0)
        sub_140a74f90(rcx_82)

void* result = *(arg1 + 0xa0)
*(result + 0x50) |= 0x10
int64_t* rcx_83 = var_c8

if (rcx_83 == 0)
    return result

return sub_140a74f90(rcx_83)
