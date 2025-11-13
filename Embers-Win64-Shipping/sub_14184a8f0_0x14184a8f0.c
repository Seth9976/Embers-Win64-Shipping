// 函数: sub_14184a8f0
// 地址: 0x14184a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_bb8
int64_t rax_1 = __security_cookie ^ &var_bb8
void* r12 = arg1
char var_b28 = 0
sub_140b214e0(arg1 + 0xd8)
int64_t* rbx = r12 + 0xe8
sub_140b214e0(rbx)
int64_t* r14 = r12 + 0xf8
sub_140b214e0(r14)
sub_140a464c0()
int16_t* const rdx

if (*(r12 + 0xe0) == 0)
    rdx = &data_142d40450
else
    rdx = *(r12 + 0xd8)

int64_t r8
r8.b = 1
(*(data_14399ea08 + 0x58))(&data_14399ea08, rdx, r8)
sub_140a464c0()
int16_t* const rdx_1

if (rbx[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rbx

int64_t r8_1
r8_1.b = 1
(*(data_14399ea08 + 0x58))(&data_14399ea08, rdx_1, r8_1)
sub_140a464c0()
int16_t* const rdx_2

if (r14[1].d == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *r14

int64_t r8_2
r8_2.b = 1
(*(data_14399ea08 + 0x58))(&data_14399ea08, rdx_2, r8_2)
void*** rax_5 = sub_1418a0e20()
void*** rcx_3 = *(r12 + 0x538)

if (rcx_3 != rax_5)
    void*** r8_3 = rcx_3
    *(r12 + 0x538) = rax_5
    rcx_3 = rax_5
    
    if (r8_3 != 0)
        (**r8_3)(r8_3, 1)
        rcx_3 = *(r12 + 0x538)

int64_t var_678 = 0
void** const var_668 = &data_142da2668
void* var_660 = r12
int64_t (* var_688)(int64_t* arg1) = sub_14182a5a0
(*rcx_3)[8](rcx_3, &var_688)
sub_14059a980(r12 + 0x380, 0)
int64_t* rcx_6 = *(r12 + 0x5e8)
(*(*rcx_6 + 0x48))(rcx_6, r12 + 0x380)
sub_14059a980(r12 + 0x3d0, 0)
int64_t* rcx_8 = *(r12 + 0x5e8)
(*(*rcx_8 + 0x50))(rcx_8, r12 + 0x68, r12 + 0x3d0)
int32_t rsi = *(r12 + 0xb8)
void* r15 = r12 + 0x420
int32_t r13 = arg2[1].d
int32_t var_b30 = rsi
int32_t var_b10 = r13
void* var_ae0 = r15
sub_14059a980(r15, 0)
char* var_b90
int32_t var_918
void*** var_908

if (r13 s> 0)
    sub_141813e70(r15, arg2)
else if (rsi != 3)
    int64_t var_278
    sub_141823570(r15, sub_140967750(r12 + 0x3d0, &var_278, r12 + 0x380))
    int32_t var_230_1 = 0
    int64_t var_238
    
    if (var_238 != 0)
        sub_140a74f90(var_238)
    
    sub_14059ad90(&var_278, 0)
    int64_t var_258
    
    if (var_258 != 0)
        sub_140a74f90(var_258)
    
    int64_t rcx_55 = var_278
    
    if (rcx_55 != 0)
        sub_140a74f90(rcx_55)
else
    int64_t* rcx_11 = *(r12 + 0x5e8)
    void* var_ac0 = nullptr
    int32_t var_ab8_1 = 0
    (*(*rcx_11 + 0x80))(rcx_11, &var_ac0)
    void* rcx_12 = var_ac0
    int64_t rsi_1 = sx.q(var_ab8_1)
    void* i = rsi_1 * 0xa8 + rcx_12
    
    if (rcx_12 != i)
        int64_t* rdi_1 = rcx_12 + 0x60
        
        do
            int64_t var_468
            __builtin_memset(&var_468, 0, 0x2c)
            int32_t var_43c_1 = 0x80
            int32_t var_438_1 = 0xffffffff
            int32_t var_434_1 = 0
            int64_t var_428_1 = 0
            int32_t var_420_1 = 0
            sub_1418235f0(&var_468, &rdi_1[-0xc])
            int64_t var_418
            sub_140596d10(&var_418, &rdi_1[-2])
            int64_t var_408
            sub_140596d10(&var_408, rdi_1)
            int64_t var_3f8
            sub_140596d10(&var_3f8, &rdi_1[2])
            int64_t var_3e8
            sub_140596d10(&var_3e8, &rdi_1[4])
            int64_t var_3d8
            sub_140596d10(&var_3d8, &rdi_1[6])
            char var_3c8_1 = rdi_1[8].b
            sub_140598750(r15, &var_918)
            int64_t* var_910
            *var_910 = 0
            int64_t r14_1 = var_408
            int32_t var_400
            var_910[1].d = var_400
            
            if (var_400 != 0)
                sub_1405a4c70(var_910, var_400, 0)
                memcpy(*var_910, r14_1, var_400 * 2)
            else
                *(var_910 + 0xc) = 0
            
            var_910[2].d = 0xffffffff
            int32_t rax_12 = var_910[1].d
            int16_t* rdx_17
            
            if (rax_12 == 0)
                rdx_17 = &data_142d40450
            else
                rdx_17 = *var_910
            
            int32_t rcx_22 = rax_12 - 1
            
            if (rax_12 == 0)
                rcx_22 = 0
            
            var_b90 = nullptr
            sub_14059a6d0(r15, &var_908, sub_1405969c0(rcx_22, rdx_17), var_910, var_918, var_b90)
            int64_t rcx_24 = var_3d8
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            int64_t rcx_25 = var_3e8
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int64_t rcx_26 = var_3f8
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            int64_t rcx_27 = var_408
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            int64_t rcx_28 = var_418
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            int32_t var_420_2 = 0
            
            if (var_428_1 != 0)
                sub_140a74f90(var_428_1)
            
            sub_14059ad90(&var_468, 0)
            int64_t var_448
            
            if (var_448 != 0)
                sub_140a74f90(var_448)
            
            int64_t rcx_32 = var_468
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
            
            rdi_1 = &rdi_1[0x15]
        while (&rdi_1[-0xc] != i)
        
        rsi_1 = zx.q(var_ab8_1)
        rcx_12 = var_ac0
        r12 = arg1
    
    if (rsi_1.d != 0)
        void* rbx_2 = rcx_12 + 0x80
        int32_t i_1
        
        do
            int64_t rcx_33 = *(rbx_2 + 0x10)
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            int64_t rcx_34 = *rbx_2
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            int64_t rcx_35 = *(rbx_2 - 0x10)
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            int64_t rcx_36 = *(rbx_2 - 0x20)
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
            
            int64_t rcx_37 = *(rbx_2 - 0x30)
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            *(rbx_2 - 0x38) = 0
            int64_t rcx_38 = *(rbx_2 - 0x40)
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            sub_14059ad90(rbx_2 - 0x80, 0)
            int64_t rcx_40 = *(rbx_2 - 0x60)
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            int64_t rcx_41 = *(rbx_2 - 0x80)
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            rbx_2 += 0xa8
            i_1 = rsi_1.d
            rsi_1 = zx.q(rsi_1.d - 1)
        while (i_1 != 1)
        rcx_12 = var_ac0
        r12 = arg1
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    r13 = var_b10
    rsi = var_b30

char var_b58
char* var_a00 = &var_b58

if (*(r15 + 8) - *(r15 + 0x34) s> 0)
    sub_140a6c1e0(r15)
    char** var_b08_1 = &var_a00
    sub_14181b5f0(*r15, *(r15 + 8) - *(r15 + 0x34), var_b58)

sub_1405a4480(r15)
uint64_t result
int64_t performanceCount

if (r13 s> 0)
label_14184aeb0:
    int32_t r11_1 = *(r15 + 0x28)
    void* r13_2 = r15 + 0x10
    int32_t var_96c_1 = 1
    int32_t rcx_48 = 0
    int32_t var_970_1 = 0
    int32_t r8_9 = 0
    void* var_968_1 = r13_2
    int32_t var_960_1 = 0xffffffff
    int64_t var_95c_1 = 0
    int32_t var_a18
    
    if (r11_1 != 0)
        void* rax_21 = *(r13_2 + 0x10)
        void* r9_2 = r13_2
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_24 = *r9_2
        
        if (rdx_24 != 0)
        label_14184af54:
            int32_t rax_28 = neg.d(rdx_24) & rdx_24
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_28)
            int32_t var_96c_2 = rax_28
            var_a18 = temp0_1
            int32_t rax_29
            
            if (rax_28 == 0)
                rax_29 = 0x20
            else
                rax_29 = 0x1f - temp0_1
            
            var_95c_1.d = r8_9 - rax_29 + 0x1f
            
            if (r8_9 - rax_29 + 0x1f s> r11_1)
                var_95c_1.d = r11_1
        else
            while (true)
                int64_t rdx_25 = sx.q(rcx_48)
                r8_9 += 0x20
                rcx_48 += 1
                var_95c_1:4.d = r8_9
                var_970_1 = rcx_48
                
                if (rdx_25.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_24 = *(r9_2 + (rdx_25 << 2) + 4)
                int32_t var_960_2 = 0xffffffff
                
                if (rdx_24 != 0)
                    goto label_14184af54
            
            var_95c_1.d = r11_1
    
    int32_t rdx_38 = *(r15 + 0x28)
    int128_t var_9c0 = var_970_1.o
    int32_t r8_22 = rdx_38 s>> 5
    int32_t rbx_5 = 0xffffffff << (rdx_38.b & 0x1f)
    int32_t r9_4 = rdx_38 & 0xffffffe0
    int32_t var_900_1 = r8_22
    void* var_8f8_1 = r13_2
    int32_t var_8f0_1 = rbx_5
    int32_t var_8ec_1 = rdx_38
    int32_t var_8e8_1 = r9_4
    int64_t var_9b0_1 = 0xffffffff
    int64_t var_818_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t zmm1_1 = var_9c0
    int128_t var_838 = r15.o
    int128_t var_828_1 = zmm1_1
    int32_t var_ad8
    
    if (rdx_38 != r11_1)
        void* rax_44 = *(r13_2 + 0x10)
        void* r10_1 = r13_2
        
        if (rax_44 != 0)
            r10_1 = rax_44
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_42 = *(r10_1 + (sx.q(r8_22) << 2)) & rbx_5
        int32_t var_8ec_3
        
        if (rdx_42 != 0)
        label_14184b2b2:
            int32_t rax_51 = neg.d(rdx_42) & rdx_42
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_51)
            int32_t var_8fc_1 = rax_51
            var_ad8 = temp0_3
            int32_t rax_52
            
            if (rax_51 == 0)
                rax_52 = 0x20
            else
                rax_52 = 0x1f - temp0_3
            
            int32_t var_8ec_2 = r9_4 - rax_52 + 0x1f
            
            if (r9_4 - rax_52 + 0x1f s> r11_1)
                var_8ec_3 = r11_1
        else
            while (true)
                int64_t rcx_72 = sx.q(r8_22)
                r9_4 += 0x20
                r8_22 += 1
                int32_t var_8e8_2 = r9_4
                int32_t var_900_2 = r8_22
                
                if (rcx_72.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_42 = *(r10_1 + (rcx_72 << 2) + 4)
                var_8f0_1 = 0xffffffff
                
                if (rdx_42 != 0)
                    goto label_14184b2b2
            
            var_8ec_3 = r11_1
    
    uint64_t performanceCount_3 = var_8f0_1.q u>> 0x20
    performanceCount = performanceCount_3
    
    while (true)
        int64_t rcx_74 = sx.q(var_828_1:0xc.d)
        
        if (rcx_74.d != performanceCount_3.d || var_828_1.q != r13_2)
            performanceCount_3.b = 0
        else
            performanceCount_3.b = 1
        
        int64_t* r14_2 = var_838.q
        
        if (performanceCount_3.b == 0 || r14_2 != r15)
            performanceCount_3.b = 1
        else
            performanceCount_3.b = 0
        
        int32_t var_b98
        
        if (performanceCount_3.b != 0)
            int64_t r14_3 = *r14_2
            int64_t rsi_3 = rcx_74 * 3
            int32_t rbx_6 = *(r12 + 0x70)
            int32_t rax_55 = *(r14_3 + (rsi_3 << 3) + 8)
            int32_t rdi_2 = rax_55 - 1
            
            if (rax_55 == 0)
                rdi_2 = 0
            
            int32_t rax_57
            
            if (rbx_6 == 0)
                rax_57 = rbx_6 + 2
            
            if (rbx_6 != 0 || rdi_2 == 0xffffffff)
                rax_57 = 1
            
            int64_t r15_1 = *(r12 + 0x68)
            int32_t rcx_75 = rax_57 + rdi_2
            int64_t var_ad0 = 0
            
            if (rbx_6 != 0 || rcx_75 != 0)
                sub_1405a4c70(&var_ad0, rbx_6 + rcx_75, 0)
                memcpy(var_ad0, r15_1, rbx_6 * 2)
            else
                int32_t var_ac4_1 = 0
            
            sub_140a2cf70(&var_ad0, *(r14_3 + (rsi_3 << 3)), rdi_2)
            int32_t rax_58 = *(r14_3 + (rsi_3 << 3) + 8)
            int32_t rbx_7 = *(r12 + 0xf0)
            int32_t rdi_3 = rax_58 - 1
            
            if (rax_58 == 0)
                rdi_3 = 0
            
            int32_t rax_60
            
            if (rbx_7 == 0)
                rax_60 = rbx_7 + 2
            
            if (rbx_7 != 0 || rdi_3 == 0xffffffff)
                rax_60 = 1
            
            int64_t r15_2 = *(r12 + 0xe8)
            int32_t rcx_79 = rax_60 + rdi_3
            int64_t var_ab0 = 0
            
            if (rbx_7 != 0 || rcx_79 != 0)
                sub_1405a4c70(&var_ab0, rbx_7 + rcx_79, 0)
                memcpy(var_ab0, r15_2, rbx_7 * 2)
            else
                int32_t var_aa4_1 = 0
            
            sub_140a2cf70(&var_ab0, *(r14_3 + (rsi_3 << 3)), rdi_3)
            int32_t rbx_9
            
            if (rbx_6 == 0)
                rbx_9 = 0
            else
                rbx_9 = rbx_6 - 1
            
            int64_t* rcx_87
            int64_t* rbx_11
            void* r8_29
            
            if (rbx_9 s>= sub_140b69690())
                rbx_11 = *(r12 + 0x538)
                sub_1405d9400()
                int64_t var_6a8 = data_143cd6fd8
                void* rdx_50 = data_143cd6fe0
                void* var_6a0_1 = rdx_50
                
                if (rdx_50 != 0)
                    *(rdx_50 + 8) += 1
                
                rcx_87 = &var_6a8
                r8_29 = data_1439c6770
                int32_t var_698_1 = data_143cd6fe8
            else
                int32_t rbx_10 = rbx_7 - 1
                
                if (rbx_7 == 0)
                    rbx_10 = 0
                
                if (rbx_10 s>= sub_140b69690())
                    rbx_11 = *(r12 + 0x538)
                    sub_1405d9400()
                    int64_t var_6c0 = data_143cd6fd8
                    void* rdx_49 = data_143cd6fe0
                    void* var_6b8_1 = rdx_49
                    
                    if (rdx_49 != 0)
                        *(rdx_49 + 8) += 1
                    
                    rcx_87 = &var_6c0
                    r8_29 = data_1439c6768
                    int32_t var_6b0_1 = data_143cd6fe8
                else
                    int64_t rcx_83 = var_ab0
                    
                    if (rcx_83 != 0)
                        sub_140a74f90(rcx_83)
                    
                    int64_t rcx_84 = var_ad0
                    
                    if (rcx_84 != 0)
                        sub_140a74f90(rcx_84)
                    
                    var_828_1:8.d &= not.d(var_838:0xc.d)
                    sub_14059bdd0(&var_838:8)
                    performanceCount_3 = performanceCount
                    r15 = r12 + 0x420
                    continue
            
            var_b98.q = rcx_87
            (*(*rbx_11 + 0x38))(rbx_11, 0xa, r8_29, 0, var_b98, var_b90)
            int64_t rcx_90 = var_ab0
            
            if (rcx_90 != 0)
                sub_140a74f90(rcx_90)
            
            int64_t rcx_91 = var_ad0
            
            if (rcx_91 != 0)
                sub_140a74f90(rcx_91)
            
            result.b = 0
            break
        
        int32_t r11_2 = *(r12 + 0x3a8)
        performanceCount_3.b = (*(r12 + 0xbc) & 0xfffffffd) == 0
        int32_t var_99c_1 = 1
        void* var_998_1 = r12 + 0x390
        int32_t r14_4 = 0xe
        int32_t var_990_1 = 0xffffffff
        
        if (performanceCount_3.b != 0)
            r14_4 = 0xb
        
        int32_t var_9a0_1 = 0
        int32_t rcx_92 = 0
        int64_t var_98c_1 = 0
        int32_t r8_30 = 0
        int32_t var_ae8
        int32_t r13_3
        
        if (r11_2 == 0)
            r13_3 = 0x20
        else
            void* rax_69 = *(r12 + 0x3a0)
            void* r9_6 = r12 + 0x390
            
            if (rax_69 != 0)
                r9_6 = rax_69
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_2 - 1)
            int32_t rdx_53 = *r9_6
            
            if (rdx_53 != 0)
            label_14184b62f:
                r13_3 = 0x20
                int32_t rax_76 = neg.d(rdx_53) & rdx_53
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_76)
                int32_t var_99c_2 = rax_76
                var_ae8 = temp0_4
                int32_t rax_77
                
                if (rax_76 == 0)
                    rax_77 = 0x20
                else
                    rax_77 = 0x1f - temp0_4
                
                var_98c_1.d = r8_30 - rax_77 + 0x1f
                
                if (r8_30 - rax_77 + 0x1f s> r11_2)
                    var_98c_1.d = r11_2
            else
                while (true)
                    int64_t rdx_54 = sx.q(rcx_92)
                    r8_30 += 0x20
                    rcx_92 += 1
                    var_98c_1:4.d = r8_30
                    var_9a0_1 = rcx_92
                    
                    if (rdx_54.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        r13_3 = 0x20
                        var_98c_1.d = r11_2
                        break
                    
                    rdx_53 = *(r9_6 + (rdx_54 << 2) + 4)
                    int32_t var_990_2 = 0xffffffff
                    
                    if (rdx_53 != 0)
                        goto label_14184b62f
        
        int32_t rsi_4 = *(r12 + 0x3a8)
        void* r11_3 = r12 + 0x380
        int32_t rdx_55 = *(r11_3 + 0x28)
        void* var_8d8_1 = r12 + 0x390
        int128_t var_948 = var_9a0_1.o
        int32_t rbx_12 = 0xffffffff << (rdx_55 & 0x1f).b
        int64_t var_938_1 = 0xffffffff
        int32_t r8_33 = rdx_55 s>> 5
        int32_t r9_8 = rdx_55 & 0xffffffe0
        var_9b0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_8e0_1 = r8_33
        int32_t var_8d0_1 = rbx_12
        int32_t var_8cc_1 = rdx_55
        int32_t var_8c8_1 = r9_8
        void* var_9c8_1
        var_9c8_1.o = r11_3.o
        var_9c0 = var_948
        int32_t var_b38
        
        if (rdx_55 != rsi_4)
            void* rax_81 = *(r12 + 0x3a0)
            void* r10_2 = r12 + 0x390
            
            if (rax_81 != 0)
                r10_2 = rax_81
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(rsi_4 - 1)
            int32_t rdx_59 = *(r10_2 + (sx.q(r8_33) << 2)) & rbx_12
            int32_t var_8cc_3
            
            if (rdx_59 != 0)
            label_14184b787:
                int32_t rax_87 = neg.d(rdx_59) & rdx_59
                uint64_t rflags_4
                int32_t temp0_6
                temp0_6, rflags_4 = _bit_scan_reverse(rax_87)
                int32_t var_8dc_1 = rax_87
                var_b38 = temp0_6
                
                if (rax_87 != 0)
                    r13_3 = 0x1f - temp0_6
                
                int32_t var_8cc_2 = r9_8 - r13_3 + 0x1f
                
                if (r9_8 - r13_3 + 0x1f s> rsi_4)
                    var_8cc_3 = rsi_4
            else
                while (true)
                    int64_t rcx_96 = sx.q(r8_33)
                    r9_8 += 0x20
                    r8_33 += 1
                    int32_t var_8c8_2 = r9_8
                    int32_t var_8e0_2 = r8_33
                    
                    if (rcx_96.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_59 = *(r10_2 + (rcx_96 << 2) + 4)
                    var_8d0_1 = 0xffffffff
                    
                    if (rdx_59 != 0)
                        goto label_14184b787
                
                var_8cc_3 = rsi_4
            r11_3 = r12 + 0x380
        
        int64_t* var_b48
        
        while (true)
            int64_t rcx_98 = sx.q(var_9b0_1:4.d)
            int32_t rax_80
            
            if (rcx_98.d != (var_8d0_1.q u>> 0x20).d || var_9c0:8.q != r12 + 0x390)
                rax_80.b = 0
            else
                rax_80.b = 1
            
            if (rax_80.b == 0 || var_9c8_1 != r11_3)
                rax_80.b = 1
            else
                rax_80.b = 0
            
            if (rax_80.b == 0)
                break
            
            int64_t* rbx_13 = *var_9c8_1 + rcx_98 * 0x18
            
            if (*sub_140960120(r15, &var_b48, rbx_13) == 0xffffffff)
                int64_t* rcx_101 = *(r12 + 0x558)
                (*(*rcx_101 + 0x40))(rcx_101, rbx_13, zx.q(r14_4))
            
            var_9b0_1.d &= not.d(var_9c0:4.d)
            sub_14059bdd0(&var_9c0)
            r11_3 = r12 + 0x380
        
        int32_t var_38c_1 = 0x80
        int64_t var_3b8
        __builtin_memset(&var_3b8, 0, 0x2c)
        int32_t var_384_1 = 0
        int64_t var_378_1 = 0
        int32_t var_370_1 = 0
        int32_t var_388_1 = 0xffffffff
        int32_t var_368_1 = 0xa
        int32_t var_364_1 = 0x28
        sub_1405ae080(&var_3b8)
        int64_t var_848 = 0
        int64_t var_840_1 = 0
        void var_598
        int32_t rbx_14 = sub_1418205a0(&var_598, &var_848)[3].d
        sub_141822a10(&var_598)
        void* rcx_106 = data_143ddb400
        var_b98.q = &data_143de5780
        int32_t var_b24 = rbx_14 + 0x50
        char rax_95
        int128_t zmm3_1
        rax_95, zmm3_1 = sub_140af3c10(rcx_106, Portal.BuildPatch", ChunkStoreMemorySize"
            , &var_b24, var_b98)
        int32_t var_b2c
        char rax_96
        char rax_97
        
        if (rax_95 == 0)
            void* rcx_107 = data_143ddb400
            var_b30 = rbx_14 + 0x28
            var_b2c = 0x28
            var_b98.q = &data_143de5780
            rax_96 = sub_140af3c10(rcx_107, Portal.BuildPatch", CloudChunkStoreMemorySize"
                , &var_b30, var_b98)
            var_b98.q = &data_143de5780
            rax_97, zmm3_1 =
                sub_140af3c10(data_143ddb400, Portal.BuildPatch", InstallChunkStoreMemorySize"
                , &var_b2c, var_b98)
        
        int32_t rdx_65
        
        if (rax_95 == 0 && (rax_96 != 0 || rax_97 != 0))
            rdx_65 = var_b2c + var_b30
        else
            rdx_65 = var_b24
        
        int32_t rax_98
        
        if (rdx_65 s>= 0x40)
            rax_98 = 0x800
            
            if (rdx_65 s< 0x800)
                rax_98 = rdx_65
        else
            rax_98 = 0x40
        
        int64_t* rcx_109 = *(r12 + 0x5b0)
        var_b24 = rax_98
        int64_t rax_100 = (*(*rcx_109 + 0x60))(rcx_109)
        *(r12 + 0x150) += rax_100
        int64_t* rcx_110 = *(r12 + 0x5b0)
        (*(*rcx_110 + 0x38))(rcx_110, 0)
        int64_t* rcx_111 = *(r12 + 0x5b0)
        (*(*rcx_111 + 0x30))(rcx_111, 0)
        int64_t rbx_17 = *(r12 + 0x528)
        void*** rax_103 = j_sub_140a82f30(0x18)
        var_ae8.q = rax_103
        void*** rdi_5 = rax_103
        
        if (rax_103 == 0)
            rdi_5 = nullptr
            var_ae8.q = 0
        else
            rdi_5[1] = rbx_17
            *rdi_5 = &data_142fe5900
            rdi_5[2].d = 0x12
        
        void*** rax_104
        int128_t zmm2_1
        rax_104, zmm2_1 = sub_14187c160(*(r12 + 0x5e8), r15)
        void var_318
        (*rax_104)[1](rax_104, &var_318)
        void*** rax_106 = sub_14187c0f0(rax_104)
        var_908 = rax_106
        void var_648
        int64_t* rax_107 = sub_140596d10(&var_648, r12 + 0xd8)
        int64_t var_6e0 = *rax_107
        *rax_107 = 0
        int32_t var_6d8_1 = rax_107[1].d
        int32_t var_6d4_1 = *(rax_107 + 0xc)
        rax_107[1] = 0
        int64_t var_6c8_1 = 0x4000000000000000
        int32_t var_6d0_1 = 0x32
        int64_t rcx_119 = *rax_107
        
        if (rcx_119 != 0)
            sub_140a74f90(rcx_119)
        
        void*** rax_108 =
            sub_14187c8a0(*(r12 + 0x528), rdi_5, *(r12 + 0x568), &var_6e0, zmm2_1, zmm3_1)
        void*** rdi_6 = rax_108
        var_a18.q = rax_108
        void*** rax_109 = sub_1418a1010(var_b24, rax_106, rax_108, *(r12 + 0x560))
        int64_t rsi_7 = *(r12 + 0x5a0)
        int64_t r14_5 = *(r12 + 0x538)
        int64_t rbx_19 = *(r12 + 0x5d0)
        int64_t r12_2 = *(r12 + 0x530)
        performanceCount = *(r12 + 0x528)
        void var_5b8
        int64_t* rax_111
        int512_t zmm1_2
        int128_t zmm2_2
        int128_t zmm3_2
        rax_111, zmm1_2, zmm2_2, zmm3_2 = sub_1418292e0(arg1, &var_5b8)
        var_b98.q = rax_104
        void*** rax_113 = sub_14187bf90(rax_111, r12_2, performanceCount, rax_109, zmm1_2, zmm2_2, 
            zmm3_2, var_b98, var_ae8.q, rbx_19, r14_5, rsi_7)
        int64_t* rbx_20 = *(arg1 + 0x5e8)
        int64_t r14_6 = *(arg1 + 0x5a8)
        performanceCount = *(arg1 + 0x538)
        int64_t rax_115 = *(arg1 + 0x528)
        int64_t* rax_117 = (*rax_113)[5](rax_113)
        int32_t var_7e4_1 = 0x80
        int64_t var_810
        __builtin_memset(&var_810, 0, 0x2c)
        int32_t var_7dc_1 = 0
        int64_t var_7d0_1 = 0
        int32_t var_7c8_1 = 0
        int32_t var_7e0_1 = 0xffffffff
        sub_1405af100(&var_810, rax_117)
        int32_t var_874_1 = 0x80
        int64_t var_8a0
        __builtin_memset(&var_8a0, 0, 0x2c)
        int32_t var_86c_1 = 0
        int64_t var_860_1 = 0
        int32_t var_858_1 = 0
        int32_t var_870_1 = 0xffffffff
        int32_t var_850 = 0xa
        int32_t var_84c = 0x28
        sub_140b30de0(&var_8a0, &var_810)
        var_b98.q = &data_143de5780
        sub_140af3c10(data_143ddb400, Portal.BuildPatch", InstallSourceBatchFetchMinimum", 
            &var_850, var_b98)
        var_b98.q = &data_143de5780
        sub_140af3c10(data_143ddb400, Portal.BuildPatch", InstallSourceBatchFetchMaximum", 
            &var_84c, var_b98)
        int32_t rdx_75 = var_850
        int32_t rcx_129 = 0x3e8
        int32_t rax_118
        
        if (rdx_75 s>= 1)
            rax_118 = 0x3e8
            
            if (rdx_75 s< 0x3e8)
                rax_118 = rdx_75
        else
            rax_118 = 1
        
        int32_t rdx_76 = var_84c
        var_850 = rax_118
        
        if (rdx_76 s>= rax_118)
            if (rdx_76 s< 0x3e8)
                rcx_129 = rdx_76
            
            rax_118 = rcx_129
        
        var_84c = rax_118
        int32_t var_7c8_2 = 0
        
        if (var_7d0_1 != 0)
            sub_140a74f90(var_7d0_1)
        
        sub_14094b3a0(&var_810)
        var_b98.q = performanceCount
        void*** performanceCount_4 =
            sub_1418a0b70(&var_8a0, rax_115, rax_109, rax_104, var_b98, r14_6, arg1 + 0x4c0, rbx_20)
        void*** performanceCount_2 = performanceCount_4
        int64_t* rax_122 = (*rax_113)[5](rax_113)
        void** rdx_78 = *performanceCount_4
        void var_2c8
        void var_228
        sub_141835020(sub_141835020(&var_318, &var_228, rdx_78[5](performanceCount_4, rdx_78)), 
            &var_2c8, rax_122)
        int32_t var_1e0_1 = 0
        int64_t var_1e8
        
        if (var_1e8 != 0)
            sub_140a74f90(var_1e8)
        
        sub_14094b3a0(&var_228)
        int64_t* rbx_22 = *(arg1 + 0x558)
        void var_98
        (*(*rbx_22 + 0x20))(rbx_22, sub_141842470(&var_318, &var_98, (*rax_113)[5](rax_113)), 1)
        int32_t var_50_1 = 0
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        sub_14094b3a0(&var_98)
        int64_t* r12_4 = *(arg1 + 0x558)
        void*** performanceCount_9 = performanceCount_2
        performanceCount = *r12_4 + 0x20
        int64_t* rax_131 = (*rax_113)[5](rax_113)
        void** rdx_83 = *performanceCount_9
        void var_1d8
        void var_188
        (*performanceCount)(r12_4, 
            sub_141835020(sub_141842470(&var_318, &var_188, rdx_83[5](performanceCount_9, rdx_83)), 
                &var_1d8, rax_131), 
            3)
        int32_t var_190_1 = 0
        int64_t var_198
        
        if (var_198 != 0)
            sub_140a74f90(var_198)
        
        sub_14094b3a0(&var_1d8)
        int32_t var_140_1 = 0
        int64_t var_148
        
        if (var_148 != 0)
            sub_140a74f90(var_148)
        
        sub_14094b3a0(&var_188)
        int64_t* rcx_153 = *(arg1 + 0x558)
        (*(*rcx_153 + 0x20))(rcx_153, &var_2c8, 5)
        void var_548
        void*** rax_138 = sub_14187c960(sub_141829900(arg1, &var_548), *(arg1 + 0x598))
        int32_t var_764_1 = 0x80
        int32_t var_760_1 = 0xffffffff
        int64_t var_790
        __builtin_memset(&var_790, 0, 0x2c)
        int32_t var_75c_1 = 0
        int64_t var_750_1 = 0
        int32_t var_748_1 = 0
        sub_1405af100(&var_790, &var_2c8)
        int64_t rbx_25 = *(arg1 + 0x5e8)
        int64_t r14_10 = *(arg1 + 0x5b0)
        performanceCount = *(arg1 + 0x538)
        int64_t rax_140 = *(arg1 + 0x5d0)
        var_a00 = *(arg1 + 0x5c8)
        var_b48 = *(arg1 + 0x530)
        void var_510
        int64_t* rax_143
        int128_t zmm2_3
        int128_t zmm3_3
        rax_143, zmm2_3, zmm3_3 = sub_141829490(arg1, &var_510)
        int64_t performanceCount_1 = performanceCount
        int64_t var_b88_3 = rax_140
        int64_t var_b90_3 = var_ae8.q
        var_b98.q = rax_104
        void*** rax_147 = sub_14187c280(rax_143, var_b48, rax_109, var_a00, zmm2_3, zmm3_3, 
            var_b98, var_b90_3, var_b88_3, performanceCount_1, rax_138, r14_10, rbx_25, &var_790)
        int64_t var_b18_1 = 1
        void**** var_b20 = nullptr
        sub_1405a4d70(&var_b20)
        int64_t rbx_26 = sx.q(var_b18_1.d)
        void**** r9_20 = var_b20
        int32_t rdx_94 = var_b18_1:4.d
        int32_t rcx_160 = (rbx_26 + 1).d
        *r9_20 = rax_113
        performanceCount = performanceCount_2
        var_b2c = rcx_160
        var_b18_1.d = rcx_160
        
        if (rcx_160 s> rdx_94)
            sub_1405a4d70(&var_b20)
            rcx_160 = var_b18_1.d
            rdx_94 = var_b18_1:4.d
            r9_20 = var_b20
            var_b2c = rcx_160
        
        r9_20[rbx_26] = performanceCount
        int32_t rbx_27 = rcx_160 + 1
        var_b18_1.d = rbx_27
        
        if (rbx_27 s> rdx_94)
            sub_1405a4d70(&var_b20)
            rcx_160 = var_b2c
            r9_20 = var_b20
            rbx_27 = var_b18_1.d
        
        int32_t var_920_1 = rbx_27
        r9_20[sx.q(rcx_160)] = rax_147
        int64_t var_928 = 0
        
        if (rbx_27 != 0)
            sub_1405c4a00(&var_928, rbx_27, 0)
            memcpy(var_928, var_b20, rbx_27 << 3)
        else
            int32_t var_91c_1 = 0
        
        void*** var_a08 = sub_14187be60(&var_928)
        void*** rax_151 = j_sub_140a82f30(0x118)
        int64_t var_740
        
        if (rax_151 == 0)
            var_b48 = nullptr
        else
            var_740 = *(arg1 + 0x5e8)
            void var_738
            sub_140596d10(&var_738, arg1 + 0x68)
            void var_728
            sub_140596d10(&var_728, rbx)
            void var_718
            sub_140596d10(&var_718, r14)
            int64_t var_708 = 0
            int64_t var_700_1 = 0
            int32_t rdx_103 = *(var_ae0 + 8) - *(var_ae0 + 0x34)
            
            if (rdx_103 s> 0)
                sub_14061cd70(&var_708, rdx_103)
            
            bool cond:15_1 = *(var_ae0 + 0x28) == 0
            int32_t rcx_171 = 0
            int32_t var_8ac_1 = 0
            int32_t var_8c0 = 0
            int32_t var_8bc_1 = 1
            int32_t var_8b0_1 = 0xffffffff
            int32_t var_8a8_1 = 0
            
            if (not(cond:15_1))
                sub_14059bdd0(&var_8c0)
                rcx_171 = var_8ac_1
            
            double zmm2_4[0x2] = var_8b0_1.o
            var_9c0 = var_8c0.o
            double var_9b0_2[0x2] = zmm2_4
            int128_t zmm1_3 = var_9c0
            double temp0_8[0x2] = _mm_unpackhi_pd(zmm2_4, zmm2_4[0])
            void* var_950_1
            var_950_1.o = var_ae0.o
            var_948 = zmm1_3
            var_938_1 = temp0_8.q
            
            if (rcx_171 s< *(var_ae0 + 0x28))
                int32_t i_2 = var_938_1:4.d
                
                do
                    int64_t rbx_29 = sx.q(var_700_1.d)
                    int64_t rax_155 = *var_950_1
                    int32_t rax_156 = (rbx_29 + 1).d
                    var_700_1.d = rax_156
                    
                    if (rax_156 s> var_700_1:4.d)
                        sub_1405a4f90(&var_708)
                    
                    sub_140596d10((rbx_29 << 4) + var_708, rax_155 + sx.q(i_2) * 0x18)
                    var_938_1.d &= not.d(var_948:4.d)
                    sub_14059bdd0(&var_948)
                    i_2 = var_938_1:4.d
                while (i_2 s< *(var_948:8.q + 0x18))
                
                rdi_6 = var_a18.q
            
            var_b28 = 0x1f
            int64_t performanceCount_8 = *(arg1 + 0x5b8)
            int32_t var_6f8_1 = *(arg1 + 0xb8)
            int64_t rax_163 = *(arg1 + 0x550)
            int64_t rax_164 = *(arg1 + 0x538)
            void*** rax_165 = var_a08
            performanceCount = *(arg1 + 0x528)
            performanceCount_1 = performanceCount_8
            var_b88_3 = rax_163
            var_b90_3 = rax_164
            var_b98.q = rax_104
            void var_4c0
            var_b48 = sub_14181e3b0(rax_151, sub_141820760(&var_4c0, &var_740), performanceCount, 
                rax_165, var_b98, var_b90_3, var_b88_3, performanceCount_1)
        
        if ((var_b28 & 0x10) != 0)
            sub_141822ac0(&var_740)
        
        var_918.q = arg1
        int64_t var_980 = 0
        void**** var_910_1 = &performanceCount_2
        int32_t var_978_1 = 0
        void*** rax_172 = sub_1405978f0(0x28, &var_980)
        
        if (rax_172 != 0)
            int128_t zmm0_4 = var_918.o
            *rax_172 = &data_142fe5cd8
            *(rax_172 + 8) = zmm0_4
            rax_172[4] = sub_140a387b0()
            *rax_172 = &data_142fe5d30
        
        void* rbx_31 = nullptr
        void* var_b00
        
        if (var_978_1 != 0 && var_980 != 0)
            sub_1408d6c30(&var_b48[0x20], &var_b00, &var_980)
            rbx_31 = var_b00
        
        sub_140745b20(&var_980)
        void**** var_330_1 = &var_a08
        void*** var_348_1 = nullptr
        void** const var_338 = &data_142da2668
        int64_t var_628 = 0
        int64_t (* var_358_1)(int64_t* arg1) = sub_14182a740
        int64_t (* var_638)(int64_t* arg1) = sub_14182a740
        sub_14074cce0(&var_338, &var_628)
        (*rdi_6)[5](rdi_6, &var_638)
        int64_t (* var_5f8)(int64_t* arg1) = var_358_1
        int64_t var_5e8 = 0
        
        if (var_358_1 != 0)
            void** const* rcx_188 = &var_338
            
            if (var_348_1 != 0)
                rcx_188 = var_348_1
            
            (**rcx_188)(rcx_188, &var_5e8)
        
        (*rax_109)[5](rax_109, &var_5f8)
        void* rdx_114 = nullptr
        int64_t var_7b0_1 = 0
        int64_t var_7a8_1 = 0
        void* var_7b8_1 = arg1 + 0x5f8
        void* var_7c0 = arg1 + 0x118
        void* var_7a0_1 = arg1 + 0x368
        void* var_798_1 = arg1 + 0x369
        void*** performanceCount_5 = performanceCount_2
        
        if (performanceCount_5 != 0)
            rdx_114 = &performanceCount_5[1]
        
        sub_141845680(&var_7c0, rdx_114)
        void* rdx_115
        
        if (rax_147 == 0)
            rdx_115 = nullptr
        else
            rdx_115 = &rax_147[1]
        
        sub_141845680(&var_7c0, rdx_115)
        int64_t* rax_182 = var_b48
        void* rdx_116 = &rax_182[1]
        
        if (rax_182 == 0)
            rdx_116 = nullptr
        
        sub_141845680(&var_7c0, rdx_116)
        
        if (var_b10 s<= 0)
            EnterCriticalSection(arg1 + 0x118)
            int32_t var_310
            int32_t var_2e4
            *(arg1 + 0x164) = var_310 - var_2e4
            int32_t var_2c0
            int32_t var_294
            *(arg1 + 0x168) = var_2c0 - var_294
            void*** performanceCount_6 = performanceCount_2
            void var_138
            int64_t* rax_189 =
                sub_141842470(&var_318, &var_138, (*performanceCount_6)[5](performanceCount_6))
            *(arg1 + 0x16c) = rax_189[1].d - *(rax_189 + 0x34)
            int32_t var_f0_1 = 0
            int64_t var_f8
            
            if (var_f8 != 0)
                sub_140a74f90(var_f8)
            
            sub_14094b3a0(&var_138)
            void var_e8
            int64_t* rax_193 = sub_141842470(&var_318, &var_e8, (*rax_113)[5](rax_113))
            *(arg1 + 0x170) = rax_193[1].d - *(rax_193 + 0x34)
            int32_t var_a0_1 = 0
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            sub_14094b3a0(&var_e8)
            
            if (arg1 != -0x118)
                LeaveCriticalSection(arg1 + 0x118)
        
        int64_t* rcx_208 = *(arg1 + 0x5e8)
        char rax_197 = (*(*rcx_208 + 0xa0))(rcx_208)
        int32_t rax_198
        
        if (rax_197 != 0)
            rax_198 = *(arg1 + 0x428)
            var_b58 = 1
        
        if (rax_197 == 0 || rax_198 != *(arg1 + 0x454))
            var_b58 = 0
        
        int64_t* rcx_210 = *(arg1 + 0x5e8)
        int32_t zmm0_5 = 0x3d4ccccd
        int32_t var_af0
        
        if ((*(*rcx_210 + 0xa8))(rcx_210) == 0)
            var_af0 = 0
        else
            if (var_b58 != 0)
                zmm0_5 = 0x3ca3d70a
            
            var_af0 = zmm0_5
        
        if (*(arg1 + 0xbc) u< 2)
            zmm0_5 = 0x3dfa4fa5
        else
            zmm0_5 = 0x3d088889
        
        int32_t var_a5c = zmm0_5
        int64_t rax_202 = *(arg1 + 0x2c0)
        int32_t var_a78 = 0
        int32_t var_a74 = 3
        var_b38.q = arg1 + 0x2c0
        (*(rax_202 + 0x20))(arg1 + 0x2c0, &var_a74, &var_a78)
        int64_t* rcx_212 = var_b38.q
        int32_t var_a70 = 0x3d4ccccd
        int32_t var_a6c = 5
        (*(*rcx_212 + 0x20))(rcx_212, &var_a6c, &var_a70)
        zmm0_5 = 0x3f800000
        
        if (*(arg1 + 0x428) - *(arg1 + 0x454) s<= 0)
            zmm0_5 = (zx.o(0)).d
        
        int64_t* rcx_214 = var_b38.q
        int32_t var_a68 = zmm0_5
        int32_t var_a64 = 4
        (*(*rcx_214 + 0x20))(rcx_214, &var_a64, &var_a68)
        int64_t* rcx_215 = var_b38.q
        int32_t var_a60 = 6
        (*(*rcx_215 + 0x20))(rcx_215, &var_a60, &var_af0)
        int64_t* rcx_216 = var_b38.q
        int32_t var_a58 = 7
        (*(*rcx_216 + 0x20))(rcx_216, &var_a58, &var_a5c)
        
        if (var_b58 != 0)
            int64_t* rcx_217 = var_b38.q
            int32_t var_a54 = 0x3f800000
            int32_t var_a50 = 3
            (*(*rcx_217 + 0x18))(rcx_217, &var_a50, &var_a54)
            int64_t* rcx_218 = var_b38.q
            int32_t var_a4c = 0x3f800000
            int32_t var_a48 = 4
            (*(*rcx_218 + 0x18))(rcx_218, &var_a48, &var_a4c)
            int64_t* rcx_219 = var_b38.q
            int32_t var_a44 = 0x3f800000
            int32_t var_a40 = 5
            (*(*rcx_219 + 0x18))(rcx_219, &var_a40, &var_a44)
        
        void* rcx_223 = arg1
        
        if (*(rcx_223 + 0x428) - *(rcx_223 + 0x454) s> 0)
            int64_t* rcx_220 = var_b38.q
            int32_t var_a3c = 0x3f800000
            int32_t var_a38 = 1
            (*(*rcx_220 + 0x18))(rcx_220, &var_a38, &var_a3c)
            sub_141851300(arg1 + 0x618)
            rcx_223 = arg1
        
        var_b00 = rcx_223 + 0x658
        sub_141850bb0(rcx_223 + 0x658)
        int64_t* rcx_225 = var_b48[0xc]
        
        if (rcx_225 != 0)
            (*(*rcx_225 + 0x18))(rcx_225)
        
        sub_141851300(var_b00)
        void* rcx_228 = &var_b48[0x20]
        
        if (rbx_31 != 0)
            int64_t* rax_218 = nullptr
            int32_t i_3 = 0
            int32_t i_4 = 0
            
            if (*(rcx_228 + 8) s> 0)
                int64_t* r8_62 = var_b48
                var_ad8.q = 0
                
                do
                    int64_t rcx_229 = *rcx_228
                    var_b38.q = rcx_229
                    
                    if (*(rax_218 + rcx_229 + 8) != 0)
                        int64_t* rcx_230 = *(rax_218 + rcx_229)
                        
                        if (rcx_230 != 0)
                            void var_690
                            
                            if (*(*(*rcx_230 + 0x30))(rcx_230, &var_690) == rbx_31)
                                int64_t* rbx_32 = var_ad8.q
                                int64_t rax_221 = var_b38.q
                                
                                if (*(rbx_32 + rax_221 + 8) != 0)
                                    int64_t* rcx_231 = *(rbx_32 + rax_221)
                                    
                                    if (rcx_231 != 0)
                                        (*(*rcx_231 + 0x38))(rcx_231, 0)
                                        int64_t rax_223 = var_b38.q
                                        int64_t rcx_232 = *(rbx_32 + rax_223)
                                        
                                        if (rcx_232 != 0)
                                            int64_t rdx_129 = var_b38.q
                                            *(rbx_32 + rdx_129) = sub_140a84c80(rcx_232, 0, 0)
                                            rax_223 = rdx_129
                                        
                                        *(rbx_32 + rax_223 + 8) = 0
                                
                                sub_140599630(&var_b48[0x20], 0)
                                break
                            
                            rax_218 = var_ad8.q
                            i_3 = i_4
                            r8_62 = var_b48
                    
                    i_3 += 1
                    rcx_228 = &r8_62[0x20]
                    rax_218 = &rax_218[2]
                    i_4 = i_3
                    var_ad8.q = rax_218
                while (i_3 s< *(rcx_228 + 8))
        
        EnterCriticalSection(arg1 + 0x118)
        void* lpCriticalSection = &var_b48[0xf]
        EnterCriticalSection(lpCriticalSection)
        var_b00 = var_b48[0x1e]
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        *(arg1 + 0x2b0) = var_b00
        EnterCriticalSection(lpCriticalSection)
        void* rax_229 = var_b48[0x1f]
        var_b00 = rax_229
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
            rax_229 = var_b00
        
        *(arg1 + 0x2b8) = rax_229
        
        if (arg1 != -0x118)
            LeaveCriticalSection(arg1 + 0x118)
        
        int64_t* rcx_242 = *(arg1 + 0x5f0)
        (*(*rcx_242 + 0x20))(rcx_242, arg1 + 0x420)
        sub_141822da0(&var_7c0)
        
        if (var_358_1 != 0)
            void** const* rcx_244 = &var_338
            
            if (var_348_1 != 0)
                rcx_244 = var_348_1
            
            (*rcx_244)[2](rcx_244)
        
        int64_t* rcx_245 = var_b48
        (*(*rcx_245 + 0x28))(rcx_245, 1)
        void*** rcx_246 = var_a08
        
        if (rcx_246 != 0)
            (**rcx_246)(rcx_246, 1)
        
        void**** rax_235 = var_b20
        
        if (rax_235 != 0)
            sub_140a74f90(rax_235)
        
        if (rax_147 != 0)
            (**rax_147)(rax_147, 1)
        
        if (rax_138 != 0)
            (*rax_138)[1](rax_138, 1)
        
        int32_t var_280_1 = 0
        int64_t var_288
        
        if (var_288 != 0)
            sub_140a74f90(var_288)
        
        sub_14094b3a0(&var_2c8)
        void*** performanceCount_7 = performanceCount_2
        
        if (performanceCount_7 != 0)
            (**performanceCount_7)(performanceCount_7, 1)
        
        (**rax_113)(rax_113, 1)
        (**rax_109)(rax_109, 1)
        int64_t* rcx_254 = var_a18.q
        (**rcx_254)(rcx_254, 1)
        void*** rax_242 = var_908
        
        if (rax_242 != 0)
            void** r8_63 = *rax_242
            (*r8_63)(rax_242, 1, r8_63)
        
        int32_t var_2d0_1 = 0
        int64_t var_2d8
        
        if (var_2d8 != 0)
            sub_140a74f90(var_2d8)
        
        int32_t zmm0_6 = sub_14094b3a0(&var_318)
        (**rax_104)(rax_104, 1)
        int64_t* rcx_259 = var_ae8.q
        
        if (rcx_259 != 0)
            (**rcx_259)(rcx_259, 1)
        
        EnterCriticalSection(arg1 + 0x118)
        int64_t* rcx_261 = *(arg1 + 0x598)
        int32_t rax_246 = (*(*rcx_261 + 0x28))(rcx_261)
        int64_t* rcx_262 = *(arg1 + 0x598)
        *(arg1 + 0x174) = rax_246
        int32_t rax_248 = (*(*rcx_262 + 0x30))(rcx_262)
        int64_t* rcx_263 = *(arg1 + 0x5b0)
        *(arg1 + 0x180) = rax_248
        int32_t rax_250 = (*(*rcx_263 + 0x68))(rcx_263)
        int64_t* rcx_264 = *(arg1 + 0x5b0)
        *(arg1 + 0x184) = rax_250
        int32_t rax_252 = (*(*rcx_264 + 0x70))(rcx_264)
        int64_t* rcx_265 = *(arg1 + 0x5b0)
        *(arg1 + 0x188) = rax_252
        (*(*rcx_265 + 0x78))(rcx_265)
        int64_t* rcx_266 = *(arg1 + 0x5a8)
        *(arg1 + 0x284) = zmm0_6
        int32_t rax_255 = (*(*rcx_266 + 0x30))(rcx_266)
        int64_t* rcx_267 = *(arg1 + 0x5a0)
        *(arg1 + 0x178) = rax_255
        int32_t rax_257 = (*(*rcx_267 + 0x20))(rcx_267)
        int64_t* rcx_268 = *(arg1 + 0x5a8)
        *(arg1 + 0x17c) = rax_257
        int32_t rax_259 = (*(*rcx_268 + 0x38))(rcx_268)
        int64_t* rcx_269 = *(arg1 + 0x560)
        *(arg1 + 0x18c) = rax_259
        int32_t rax_261 = (*(*rcx_269 + 0x40))(rcx_269)
        int64_t* rcx_270 = *(arg1 + 0x568)
        *(arg1 + 0x190) = rax_261
        int32_t rax_263 = (*(*rcx_270 + 0x28))(rcx_270)
        int64_t* rcx_271 = *(arg1 + 0x568)
        *(arg1 + 0x194) = rax_263
        int32_t rax_265 = (*(*rcx_271 + 0x30))(rcx_271)
        int64_t* rcx_272 = *(arg1 + 0x5a0)
        *(arg1 + 0x198) = rax_265
        int32_t rax_267 = (*(*rcx_272 + 0x28))(rcx_272)
        int64_t* rcx_273 = *(arg1 + 0x5b0)
        *(arg1 + 0x19c) = rax_267
        int32_t* var_6f0
        (*(*rcx_273 + 0x88))(rcx_273, &var_6f0)
        int32_t* rcx_274 = var_6f0
        *(arg1 + 0x288) = rcx_274[4]
        *(arg1 + 0x28c) = rcx_274[3]
        *(arg1 + 0x290) = rcx_274[2]
        *(arg1 + 0x294) = rcx_274[1]
        int64_t* rcx_275 = *(arg1 + 0x5b0)
        *(arg1 + 0x298) = *rcx_274
        int32_t rax_275 = (*(*rcx_275 + 0x98))(rcx_275)
        int32_t* rcx_276 = var_6f0
        *(arg1 + 0x1a8) = rax_275
        
        if (rcx_276 != 0)
            sub_140a74f90(rcx_276)
        
        if (arg1 != -0x118)
            LeaveCriticalSection(arg1 + 0x118)
        
        int64_t* rcx_278 = *(arg1 + 0x538)
        char rax_277 = (*(*rcx_278 + 8))(rcx_278)
        void*** rsi_8
        rsi_8.b = rax_277 == 0
        
        if (rax_277 == 0)
            int32_t var_9cc = 0x3f800000
            int64_t rax_278 = *(arg1 + 0x2c0)
            int32_t var_a34 = 1
            (*(rax_278 + 0x18))(arg1 + 0x2c0, &var_a34, &var_9cc)
            int64_t rax_279 = *(arg1 + 0x2c0)
            int32_t var_a30 = 0x3f800000
            int32_t var_a2c = 2
            (*(rax_279 + 0x18))(arg1 + 0x2c0, &var_a2c, &var_a30)
            int64_t r9_22 = *(arg1 + 0x2c0)
            int32_t var_a28 = 0x3f800000
            int32_t var_a24 = 3
            (*(r9_22 + 0x18))(arg1 + 0x2c0, &var_a24, &var_a28, r9_22, var_b98, var_b90_3, 
                var_b88_3, performanceCount_1)
            int64_t r9_23 = *(arg1 + 0x2c0)
            int32_t var_a20 = 0x3f800000
            int32_t var_a1c = 4
            (*(r9_23 + 0x18))(arg1 + 0x2c0, &var_a1c, &var_a20, r9_23)
            sub_141851300(arg1 + 0x618)
        
        result = zx.q(rsi_8.b)
        break
else
    char rax_18
    
    if (rsi != 3)
        rax_18 = sub_14182acc0(r12, r15)
    
    if (rsi != 3 && rax_18 == 0)
        EnterCriticalSection(r12 + 0x118)
        *(r12 + 0x15c) = *(r12 + 0x428) - *(r12 + 0x454)
        
        if (r12 != -0x118)
            LeaveCriticalSection(r12 + 0x118)
        
        goto label_14184aeb0
    
    int64_t* rcx_56 = *(r12 + 0x5f0)
    (*(*rcx_56 + 0x20))(rcx_56, r15)
    int32_t var_9f8 = 0
    int64_t rax_32 = *(r12 + 0x2c0)
    int32_t var_9f4 = 3
    (*(rax_32 + 0x20))(r12 + 0x2c0, &var_9f4, &var_9f8)
    int64_t rax_33 = *(r12 + 0x2c0)
    int32_t var_9e0 = 0
    int32_t var_9dc = 4
    (*(rax_33 + 0x20))(r12 + 0x2c0, &var_9dc, &var_9e0)
    int64_t rax_34 = *(r12 + 0x2c0)
    int32_t var_9d8 = 0
    int32_t var_9d4 = 5
    (*(rax_34 + 0x20))(r12 + 0x2c0, &var_9d4, &var_9d8)
    int64_t rax_35 = *(r12 + 0x2c0)
    int32_t var_9d0 = 0x3e4ccccd
    int32_t var_a10 = 6
    (*(rax_35 + 0x20))(r12 + 0x2c0, &var_a10, &var_9d0)
    int64_t rax_36 = *(r12 + 0x2c0)
    int32_t var_aa0 = 0x3f800000
    int32_t var_a9c = 7
    (*(rax_36 + 0x20))(r12 + 0x2c0, &var_a9c, &var_aa0)
    int64_t rax_37 = *(r12 + 0x2c0)
    int32_t var_a98 = 0x3f800000
    int32_t var_a94 = 1
    (*(rax_37 + 0x18))(r12 + 0x2c0, &var_a94, &var_a98)
    int64_t rax_38 = *(r12 + 0x2c0)
    int32_t var_a90 = 0x3f800000
    int32_t var_a8c = 2
    (*(rax_38 + 0x18))(r12 + 0x2c0, &var_a8c, &var_a90)
    int64_t rax_39 = *(r12 + 0x2c0)
    int32_t var_a88 = 0x3f800000
    int32_t var_a84 = 3
    (*(rax_39 + 0x18))(r12 + 0x2c0, &var_a84, &var_a88)
    int64_t rax_40 = *(r12 + 0x2c0)
    int32_t var_a80 = 0x3f800000
    int32_t var_a7c = 4
    (*(rax_40 + 0x18))(r12 + 0x2c0, &var_a7c, &var_a80)
    EnterCriticalSection(r12 + 0x618)
    
    if ((r12 + 0x618)->__offset(0x38).b != 0)
        bool cond:3_1 = (r12 + 0x618)->__offset(0x39).b != 0
        (r12 + 0x618)->__offset(0x38).b = 0
        
        if (not(cond:3_1))
            QueryPerformanceCounter(&performanceCount)
            (r12 + 0x618)->__offset(0x30).q += performanceCount - (r12 + 0x618)->__offset(0x28).q
    
    LeaveCriticalSection(r12 + 0x618)
    result.b = 1
__security_check_cookie(rax_1 ^ &var_bb8)
return result
