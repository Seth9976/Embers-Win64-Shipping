// 函数: sub_140e5d410
// 地址: 0x140e5d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = *(*arg2 + 0x10)
int64_t* var_90 = rax_1
int64_t* var_f8 = rax_1
int32_t r10_1 = sub_140b5ead0(rax_1.d) + var_f8:4.d
void* r12

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_140e5d4c8_1:
    r12 = sub_140e481c0(arg1 + 0x58, r10_1, &var_90)
else
    void* r8 = arg1 + 0x90
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(r10_1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140e5d4c8_2:
        r12 = sub_140e481c0(arg1 + 0x58, r10_1, &var_90)
    else
        int64_t* r8_3
        
        while (true)
            r8_3 = (sx.q(rax_5) << 7) + *(arg1 + 0x58)
            
            if (*r8_3 == var_90)
                break
            
            rax_5 = r8_3[0xf].d
            
            if (rax_5 == 0xffffffff)
                goto label_140e5d4c8
        
        if (rax_5 == 0xffffffff || r8_3 == 0)
        label_140e5d4c8:
            r12 = sub_140e481c0(arg1 + 0x58, r10_1, &var_90)
        else
            r12 = &r8_3[1]

int64_t var_70

if (*(r12 + 0x60) == 0)
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (r12 + 0x60 == &var_70)
    label_140e5d53a:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        *(r12 + 0x60) = *arg2
        int64_t* rdi_1 = *(r12 + 0x68)
        
        if (rbx_1 == rdi_1)
            goto label_140e5d53a
        
        *(r12 + 0x68) = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

int64_t rbx_2 = *(*arg2 + 0x18)
int32_t rcx_8
rcx_8.b = sub_140b5b8a0(rbx_2.d, 0) == 0
rcx_8.b |= (rbx_2 u>> 0x20).d != 0
int64_t var_d8

if (rcx_8.b != 0)
    void* rcx_9 = *arg2
    var_f8 = *(rcx_9 + 0x10)
    var_d8 = *(rcx_9 + 0x18)
    sub_140e48470(arg1 + 0xa8, &var_d8, &var_f8)

void* r15_1 = *arg3
int64_t* rsi_1 = arg3[1]

if (rsi_1 != 0)
    rsi_1[1].d += 1

void* r13 = *arg2
char var_118

for (int32_t i = 0; i u< 2; i += 1)
    int64_t rbx_5 = sx.q(i) << 5
    int64_t* r14_2 = *(r15_1 + 0x40) + rbx_5
    
    if (sub_140d6df00(r14_2) != 0 && sub_140d6dea0(r14_2) == 0)
        var_118 = 1
        sub_140e659a0(arg1, &var_70, *(r13 + 0x10), *(r15_1 + 0x40) + rbx_5, 1)
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp7_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)

void* r12_2 = r12

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp6_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* r13_1 = arg3
int32_t rax_20 = *(r12_2 + 8)
int64_t* rbx_8 = *(*r13_1 + 0x74)
var_f8 = rbx_8

if (rax_20 == *(r12_2 + 0x34))
labelid_b7:
    var_f8 = nullptr
else
    int32_t rax_22 = sub_140b5ead0(rbx_8.d) + var_f8:4.d
    void* r8_7 = r12_2 + 0x38
    void* rcx_19 = *(r8_7 + 8)
    
    if (rcx_19 != 0)
        r8_7 = rcx_19
    
    int32_t rax_24 = *(r8_7 + (((sx.q(*(r12_2 + 0x48)) - 1) & sx.q(rax_22)) << 2))
    
    if (rax_24 == 0xffffffff)
    label_140e5d6f0:
        var_f8 = nullptr
    else
        int64_t r8_8 = *r12_2
        int64_t rdx_10
        
        while (true)
            rdx_10 = sx.q(rax_24)
            int64_t rcx_21 = rdx_10 << 5
            
            if (*(rcx_21 + r8_8) == rbx_8)
                break
            
            rax_24 = *(rcx_21 + r8_8 + 0x18)
            
            if (rax_24 == 0xffffffff)
                goto label_140e5d6f0_2
        
        if (rax_24 == 0xffffffff)
        label_140e5d6f0_1:
            var_f8 = nullptr
        else
            int64_t rdx_12 = rdx_10 << 5
            
            if (rdx_12 == neg.q(r8_8))
            label_140e5d6f0_2:
                var_f8 = nullptr
            else
                int64_t* rax_29 = *(rdx_12 + r8_8 + 0x10)
                var_f8 = rax_29
                
                if (rax_29 != 0)
                    rax_29[1].d += 1

int64_t* rax_25 = r13_1[1]
int64_t* rcx_22 = *r13_1
int64_t* var_b8 = rcx_22

if (rax_25 != 0)
    rax_25[1].d += 1
    rcx_22 = *r13_1

int64_t* var_a8 = rcx_22 + 0x74
int64_t* var_a0 = &var_b8
int32_t var_e0
sub_140e47e10(r12_2, &var_e0, &var_a8, nullptr)

if (rax_25 != 0)
    rax_25[1].d -= 1
    
    if (rax_25[1].d == 1)
        (**rax_25)(rax_25)
        int32_t temp9_1 = *(rax_25 + 0xc)
        *(rax_25 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rax_25 + 8))(rax_25, 1)

int32_t rdi_2 = 0
int32_t var_108 = 0

while (true)
    var_d8 = data_143e202b8
    int64_t* rax_31 = data_143e202c0
    int64_t* rax_32 = data_143e202c8
    
    if (rax_32 != 0)
        rax_32[1].d += 1
    
    int32_t var_c0 = var_c0 & 0xfffffff0
    var_118.q = &var_d8
    int64_t r12_3
    void*** rbx_17
    uint128_t zmm1_1
    
    if (sub_140e69510(arg1, var_90, *(*r13_1 + 0x74), rdi_2.b, var_118) != 0)
        int32_t rdi_10 = 0
        int32_t i_1 = 0
        uint32_t rsi_2 = 0
        int32_t var_ec_1 = 0
        uint32_t rax_62 = 0
        int64_t rbx_18 = 0.q
        uint32_t r15_4
        
        do
            r15_4 = rax_62
            int32_t rcx_41
            rcx_41.b = rsi_2 == 0
            
            if ((rcx_41.b & sub_140b5b8a0(rdi_10, 0)) == 0)
                break
            
            int64_t* rbx_21 = sx.q(i_1) * 0x50 + *(r12_2 + 0x50)
            sub_140e637c0(rbx_21, &var_e0, &var_d8)
            int64_t rax_65 = sx.q(var_e0)
            int64_t rax_67
            
            if (rax_65.d != 0xffffffff)
                rax_67 = rax_65 * 0x30
            
            if (rax_65.d == 0xffffffff || rax_67 == neg.q(*rbx_21))
                int64_t var_80_2 = 0
                rbx_18 = 0
            else
                rbx_18 = *(rax_67 + *rbx_21 + 0x20)
                int64_t var_80_1 = rbx_18
            
            int32_t var_f0_1
            var_f0_1.q = rbx_18
            rdi_10 = var_f0_1
            i_1 += 1
            rsi_2 = (rbx_18 u>> 0x20).d
            rax_62 = rsi_2
            r15_4 = rsi_2
        while (i_1 u< 2)
        
        int32_t rcx_43
        rcx_43.b = sub_140b5b8a0(rdi_10, 0) == 0
        rcx_43.b |= r15_4 != 0
        
        if (rcx_43.b != 0)
            int64_t* rbx_22
            int64_t* rdi_12
            
            if (*(r12_2 + 8) == *(r12_2 + 0x34))
            label_140e5db29:
                rbx_22 = nullptr
                rdi_12 = nullptr
            else
                int32_t rax_72 = sub_140b5ead0(rdi_10) + var_ec_1
                void* r8_17 = r12_2 + 0x38
                void* rcx_45 = *(r8_17 + 8)
                
                if (rcx_45 != 0)
                    r8_17 = rcx_45
                
                int32_t rax_74 = *(r8_17 + (((sx.q(*(r12_2 + 0x48)) - 1) & sx.q(rax_72)) << 2))
                
                if (rax_74 == 0xffffffff)
                    goto label_140e5db29
                
                int64_t rdx_24 = *r12_2
                int64_t rdi_11
                
                while (true)
                    rdi_11 = sx.q(rax_74)
                    int64_t rcx_47 = rdi_11 << 5
                    
                    if (*(rcx_47 + rdx_24) == rbx_18)
                        break
                    
                    rax_74 = *(rcx_47 + rdx_24 + 0x18)
                    
                    if (rax_74 == 0xffffffff)
                        goto label_140e5db29
                
                if (rax_74 == 0xffffffff)
                    goto label_140e5db29
                
                int64_t rdi_13 = rdi_11 << 5
                void* rdi_14 = rdi_13 + rdx_24
                
                if (rdi_13 == neg.q(rdx_24))
                    goto label_140e5db29
                
                rbx_22 = *(rdi_14 + 8)
                rdi_12 = *(rdi_14 + 0x10)
                
                if (rdi_12 != 0)
                    rdi_12[1].d += 1
            
            int64_t rax_75 = sx.q(var_108)
            sub_140e85a30(rax_75 * 0x50 + *(r12_2 + 0x50), (*rbx_22)[rax_75 * 2])
            int64_t* rax_76 = j_sub_140a82f30(0x20)
            int64_t* rsi_4 = rax_76
            
            if (rax_76 == 0)
                rsi_4 = nullptr
            else
                *rax_76 = data_143e202b8
                rax_76[1] = data_143e202c0
                void* rcx_53 = data_143e202c8
                rax_76[2] = rcx_53
                
                if (rcx_53 != 0)
                    *(rcx_53 + 8) += 1
                
                rax_76[3].d &= 0xfffffff0
            
            void*** rax_77 = j_sub_140a82f30(0x18)
            void*** r14_4 = rax_77
            
            if (rax_77 == 0)
                r14_4 = nullptr
            else
                rax_77[1].d = 1
                *(rax_77 + 0xc) = 1
                *r14_4 = &data_142ed9e68
                r14_4[2] = rsi_4
            
            int64_t** rbx_24 = *rbx_22 + (rax_75 << 4)
            int64_t* rax_78 = *rbx_24
            *rbx_24 = rsi_4
            int64_t* rsi_5 = rbx_24[1]
            int64_t* var_50_1 = rax_78
            rbx_24[1] = r14_4
            int64_t* var_48_1 = rsi_5
            
            if (rsi_5 != 0)
                rsi_5[1].d -= 1
                
                if (rsi_5[1].d == 1)
                    (**rsi_5)(rsi_5)
                    int32_t temp30_1 = *(rsi_5 + 0xc)
                    *(rsi_5 + 0xc) -= 1
                    
                    if (temp30_1 == 1)
                        (*(*rsi_5 + 8))(rsi_5, 1)
            
            if (rdi_12 != 0)
                rdi_12[1].d -= 1
                
                if (rdi_12[1].d == 1)
                    (**rdi_12)(rdi_12)
                    int32_t temp32_1 = *(rdi_12 + 0xc)
                    *(rdi_12 + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*rdi_12 + 8))(rdi_12, 1)
        
        int64_t* rax_83 = j_sub_140a82f30(0x20)
        int64_t* rbx_25 = rax_83
        
        if (rax_83 == 0)
            rbx_25 = nullptr
        else
            *rbx_25 = var_d8
            rbx_25[1] = rax_31
            rbx_25[2] = rax_32
            
            if (rax_32 != 0)
                rax_32[1].d += 1
            
            rbx_25[3].d &= 0xfffffff0
            rbx_25[3].d |= var_c0 & 0xf
        
        void*** rax_88 = j_sub_140a82f30(0x18)
        
        if (rax_88 != 0)
            rax_88[1].d = 1
            *rax_88 = &data_142ed9e68
            *(rax_88 + 0xc) = 1
            rax_88[2] = rbx_25
        
        var_b8 = rbx_25
        zmm1_1 = var_b8.o
        r12_3 = sx.q(var_108)
        rbx_17 = _mm_bsrli_si128(zmm1_1, 8).q
        var_d8.o = zmm1_1
        uint128_t* rcx_60 = (r12_3 << 4) + **arg3
        
        if (rbx_17 != 0)
            rbx_17[1].d += 1
            rbx_17 = rax_88
        
        if (&var_d8 != rcx_60)
            uint128_t zmm0_2 = *rcx_60
            *rcx_60 = zmm1_1
            rbx_17 = rax_88
            var_d8.o = zmm0_2
        
        if (rax_31 != 0)
            rax_31[1].d -= 1
            
            if (rax_31[1].d == 1)
                (**rax_31)(rax_31)
                int32_t temp26_1 = *(rax_31 + 0xc)
                *(rax_31 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*rax_31 + 8))(rax_31, 1)
            
            rbx_17 = rax_88
        
    label_140e5dd63:
        
        if (rbx_17 == 0)
            rdi_2 = var_108
        else
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t temp28_1 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (temp28_1 == 1)
                    (*rbx_17)[1](rbx_17, 1)
            
            rdi_2 = var_108
    else
        r12_3 = sx.q(rdi_2)
        int64_t r15_3 = r12_3 << 5
        int64_t* rbx_11 = *(*arg3 + 0x40) + r15_3
        
        if (sub_140d6df00(rbx_11) != 0 && sub_140d6dea0(rbx_11) == 0)
            int32_t rbx_12 = 0
            int32_t i_2 = 0
            uint32_t rdi_3 = 0
            uint32_t rax_38 = 0
            uint32_t r14_3
            
            do
                r14_3 = rax_38
                int32_t rcx_29
                rcx_29.b = rdi_3 == 0
                
                if ((rcx_29.b & sub_140b5b8a0(rbx_12, 0)) == 0)
                    break
                
                int64_t* rbx_15 = sx.q(i_2) * 0x50 + *(r12 + 0x50)
                int32_t var_98
                sub_140e637c0(rbx_15, &var_98, *(*arg3 + 0x40) + r15_3)
                int64_t rax_44 = sx.q(var_98)
                int64_t rdi_5
                
                if (rax_44.d != 0xffffffff)
                    rdi_5 = rax_44 * 0x30
                
                int64_t rdi_7
                
                if (rax_44.d == 0xffffffff || rdi_5 == neg.q(*rbx_15))
                    int64_t var_88_2 = 0
                    rdi_7 = 0
                else
                    rdi_7 = *(rdi_5 + *rbx_15 + 0x20)
                    int64_t var_88_1 = rdi_7
                
                var_d8 = rdi_7
                i_2 += 1
                rbx_12 = var_d8.d
                rdi_3 = (rdi_7 u>> 0x20).d
                rax_38 = rdi_3
                r14_3 = rdi_3
            while (i_2 u< 2)
            
            int32_t rcx_31
            rcx_31.b = r14_3 == 0
            
            if ((rcx_31.b & sub_140b5b8a0(rbx_12, 0)) != 0)
                int64_t* rax_46 = j_sub_140a82f30(0x20)
                int64_t* rbx_16 = rax_46
                
                if (rax_46 == 0)
                    rbx_16 = nullptr
                else
                    int64_t* r8_15 = *(*arg3 + 0x40) + r15_3
                    *rbx_16 = *r8_15
                    rbx_16[1] = r8_15[1]
                    void* rax_50 = r8_15[2]
                    rbx_16[2] = rax_50
                    
                    if (rax_50 != 0)
                        *(rax_50 + 8) += 1
                    
                    rbx_16[3].d ^= (rbx_16[3].d ^ r8_15[3].d) & 1
                    int32_t rcx_35 = ((r8_15[3].d ^ rbx_16[3].d) & 2) ^ rbx_16[3].d
                    rbx_16[3].d = rcx_35
                    int32_t rdx_19 = ((rcx_35 ^ r8_15[3].d) & 4) ^ rcx_35
                    rbx_16[3].d = rdx_19
                    rbx_16[3].d = ((rdx_19 ^ r8_15[3].d) & 8) ^ rdx_19
                
                void*** rax_58 = j_sub_140a82f30(0x18)
                
                if (rax_58 != 0)
                    rax_58[1].d = 1
                    *rax_58 = &data_142ed9e68
                    *(rax_58 + 0xc) = 1
                    rax_58[2] = rbx_16
                
                var_a8 = rbx_16
                zmm1_1 = var_a8.o
                int64_t rax_59 = *arg3
                rbx_17 = _mm_bsrli_si128(zmm1_1, 8).q
                var_d8.o = zmm1_1
                uint128_t* rcx_38 = (r12_3 << 4) + *rax_59
                
                if (rbx_17 != 0)
                    rbx_17[1].d += 1
                    rbx_17 = rax_58
                
                if (&var_d8 != rcx_38)
                    uint128_t zmm0_1 = *rcx_38
                    *rcx_38 = zmm1_1
                    rbx_17 = rax_58
                    var_d8.o = zmm0_1
                
                if (rax_31 != 0)
                    rax_31[1].d -= 1
                    
                    if (rax_31[1].d == 1)
                        (**rax_31)(rax_31)
                        int32_t temp33_1 = *(rax_31 + 0xc)
                        *(rax_31 + 0xc) -= 1
                        
                        if (temp33_1 == 1)
                            (*(*rax_31 + 8))(rax_31, 1)
                    
                    rbx_17 = rax_58
                
                goto label_140e5dd63
            
            rdi_2 = var_108
    int64_t* rbx_26 = *(**arg3 + r12_3 * 0x10)
    bool rax_97 = sub_140d6df00(rbx_26)
    char rax_98
    
    if (rax_97 != 0)
        rax_98 = sub_140d6dea0(rbx_26)
    
    if (rax_97 == 0 || rax_98 != 0)
        r12_2 = r12
    else
        void* rcx_68 = *arg3
        int64_t var_5c = *(rcx_68 + 0x74)
        int64_t* rax_103 = (zx.q(rdi_2.b) << 4) + *rcx_68
        int64_t* rbx_27 = rax_103[1]
        
        if (rbx_27 != 0)
            rbx_27[1].d += 1
        
        var_70 = *rax_103
        int64_t* var_68_1 = &var_5c
        r12_2 = r12
        void var_60
        sub_140e47960(r12_3 * 0x50 + *(r12_2 + 0x50), &var_60, &var_70, nullptr)
        
        if (rbx_27 != 0)
            rbx_27[1].d -= 1
            
            if (rbx_27[1].d == 1)
                (**rbx_27)(rbx_27)
                int32_t temp19_1 = *(rbx_27 + 0xc)
                *(rbx_27 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rbx_27 + 8))(rbx_27, 1)
    
    if (rax_32 != 0)
        rax_32[1].d -= 1
        
        if (rax_32[1].d == 1)
            (**rax_32)(rax_32)
            int32_t temp14_1 = *(rax_32 + 0xc)
            *(rax_32 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rax_32 + 8))(rax_32, 1)
    
    rdi_2 += 1
    var_108 = rdi_2
    
    if (rdi_2 u>= 2)
        break
    
    r13_1 = arg3

int64_t* rbx_28 = var_f8

if (rbx_28 != 0)
    rbx_28[1].d -= 1
    
    if (rbx_28[1].d == 1)
        (**rbx_28)(rbx_28)
        int32_t temp21_1 = *(rbx_28 + 0xc)
        *(rbx_28 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rbx_28 + 8))(rbx_28, 1)

int64_t* result = arg3
int64_t* rbx_29 = result[1]

if (rbx_29 != 0)
    rbx_29[1].d -= 1
    
    if (rbx_29[1].d == 1)
        result = (**rbx_29)(rbx_29)
        int32_t temp22_1 = *(rbx_29 + 0xc)
        *(rbx_29 + 0xc) -= 1
        
        if (temp22_1 == 1)
            return (*(*rbx_29 + 8))(rbx_29, 1)

return result
