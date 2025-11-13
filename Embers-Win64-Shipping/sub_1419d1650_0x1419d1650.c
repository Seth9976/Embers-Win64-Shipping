// 函数: sub_1419d1650
// 地址: 0x1419d1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int16_t* rdx = *(arg1 + 0x18)
void* r14 = arg1 + 0x30
void* r12 = arg1
*r14 = *(arg1 + 0x28)
int32_t arg_10

if (rdx != 0)
    int64_t i = *sub_140b58260(&arg_10, rdx, 1)
    sub_1419ce440()
    int32_t rcx_1 = 0
    int32_t rdx_1 = data_143f213d8
    
    if (rdx_1 s<= 0)
    label_1419d16bf:
        rcx_1.b = 0xff
    else
        while (*(data_143f213d0 + (sx.q(rcx_1) << 3)) != i)
            rcx_1 += 1
            
            if (rcx_1 s>= rdx_1)
                goto label_1419d16bf
    
    *(r12 + 0x34) = rcx_1.b

int32_t rax_3 = *(r12 + 0x70)
int128_t* r15 = nullptr
int32_t rdi = 0
int128_t* var_98 = nullptr
int64_t var_90 = 0

if (rax_3 s> 0)
    sub_1405a5130(&var_98, rax_3)
    rax_3 = *(r12 + 0x70)
    rdi = var_90.d
    r15 = var_98

int32_t i_1 = 0

if (rax_3 s> 0)
    do
        int64_t rsi_1 = sx.q(rdi)
        int32_t var_58_1 = 0
        rdi = (rsi_1 + 1).d
        int64_t var_60_1 = sx.q(i_1) * 0x30 + *(r12 + 0x68)
        var_90.d = rdi
        
        if (rdi s> var_90:4.d)
            sub_1405a4df0(&var_98)
            rdi = var_90.d
            r15 = var_98
        
        int64_t rcx_7 = rsi_1 * 3
        i_1 += 1
        *(r15 + (rcx_7 << 3)) = r12.o
        *(r15 + (rcx_7 << 3) + 0x10) = var_58_1.q
    while (i_1 s< *(r12 + 0x70))

int32_t r8_2 = 0
arg_10 = 0

if (rdi s> 0)
    int64_t r10_1 = 0
    int64_t var_78_1 = 0
    
    do
        void* rdx_10 = *(r15 + r10_1 + 8)
        void* r9_1 = r15 + r10_1
        void* var_70_1 = r9_1
        void* var_80_1 = rdx_10
        char r13_1 = *(rdx_10 + 0x14)
        int32_t i_9 = *(rdx_10 + 0x24)
        void* r14_1 = *(rdx_10 + 0x28)
        bool rax_6
        
        if (r13_1 - 5 u<= 3 || r13_1 - 9 u<= 7 || r13_1 - 0x13 u<= 1)
            rax_6 = true
        else
            rax_6 = false
        
        uint64_t i_7
        
        if (rax_6 != 0)
            int32_t i_8 = 1
            
            if (i_9 != 0)
                i_8 = i_9
            
            if (i_8 != 0)
                uint64_t i_6 = zx.q(i_8)
                i_7 = i_6
                int32_t r12_1 = 0
                uint64_t i_2
                
                do
                    int64_t rsi_2 = sx.q(*(r12 + 0x40))
                    int16_t rdx_6 = (*(rdx_10 + 0x10)).w + (*(r9_1 + 0x10)).w + r12_1.w
                    char arg_1a = r13_1
                    int32_t rax_7 = (rsi_2 + 1).d
                    *(r12 + 0x40) = rax_7
                    
                    if (rax_7 s> *(r12 + 0x44))
                        sub_1407c3800(r12 + 0x38, rsi_2.d)
                        i_6 = i_7
                        r9_1 = var_70_1
                    
                    void* rdx_9 = *(r12 + 0x38)
                    
                    if ((rdx_9.b & 1) != 0)
                        rdx_9 = (rdx_9 s>> 1) + r12 + 0x38
                    
                    r12_1 += 8
                    i_2 = i_6
                    i_6 -= 1
                    *(rdx_9 + (rsi_2 << 2)) = rdx_6.d
                    i_7 = i_6
                while (i_2 != 1)
                r15 = var_98
                rdx_10 = var_80_1
                r8_2 = arg_10
                r10_1 = var_78_1
        
        if (r14_1 != 0 && r13_1 != 0x13)
            int32_t i_10 = 1
            
            if (i_9 != 0)
                i_10 = i_9
            
            int32_t i_3 = 0
            i_7.d = i_10
            int32_t i_5 = 0
            
            if (i_10 != 0)
                int64_t r9_2 = r10_1 + 0x18
                int64_t var_70_2 = r9_2
                
                do
                    int32_t j = 0
                    int32_t r13_4 = *(r15 + r9_2 - 8) + *(r14_1 + 0x28) * i_3 + *(rdx_10 + 0x10)
                    
                    if (*(r14_1 + 0x70) s> 0)
                        int64_t r12_2 = r9_2
                        
                        do
                            int32_t rbx_2 = rdi
                            rdi += 1
                            var_90.d = rdi
                            int64_t var_60_2 = sx.q(j) * 0x30 + *(r14_1 + 0x68)
                            
                            if (rdi s> var_90:4.d)
                                sub_1405a4df0(&var_98)
                                r8_2 = arg_10
                                rdi = var_90.d
                                r15 = var_98
                            
                            int32_t r8_4 = r8_2 + 1 + j
                            void* rdx_12 = r15 + sx.q(r8_4) * 0x18
                            memmove(rdx_12 + 0x18, rdx_12, (rbx_2 - r8_4) * 0x18)
                            j += 1
                            r8_2 = arg_10
                            *(r15 + r12_2) = r14_1.o
                            *(r15 + r12_2 + 0x10) = r13_4.q
                            r12_2 += 0x18
                        while (j s< *(r14_1 + 0x70))
                        
                        i_3 = i_5
                        rdx_10 = var_80_1
                        r9_2 = var_70_2
                    
                    r8_2 = arg_10
                    i_3 += 1
                    i_5 = i_3
                while (i_3 u< i_7.d)
                
                r10_1 = var_78_1
        
        r12 = arg_8
        r8_2 += 1
        r10_1 += 0x18
        arg_10 = r8_2
        var_78_1 = r10_1
    while (r8_2 s< rdi)

void* rcx_16 = *(r12 + 0x38)
arg_8.b = 0

if ((rcx_16.b & 1) != 0)
    rcx_16 = (rcx_16 s>> 1) + r12 + 0x38

sub_1419bf020(rcx_16, *(r12 + 0x40), arg_8.b)
sub_1407e9120(r14)
int32_t rdx_14 = *(r12 + 0x28)
void* r14_2 = *(r12 + 0x68)
int32_t rcx_20 = rdx_14 u>> 0xd ^ neg.d(rdx_14)
int32_t rdi_3 = (0x9e3779b9 - rcx_20 - rdx_14) ^ rcx_20 << 8
int32_t rdx_17 = (rdx_14 - rdi_3 - rcx_20) ^ rdi_3 u>> 0xd
int32_t rcx_23 = (rcx_20 - rdi_3 - rdx_17) ^ rdx_17 u>> 0xc
int32_t rdi_6 = (rdi_3 - rcx_23 - rdx_17) ^ rcx_23 << 0x10
int32_t rdx_20 = (rdx_17 - rdi_6 - rcx_23) ^ rdi_6 u>> 5
int32_t rcx_26 = (rcx_23 - rdi_6 - rdx_20) ^ rdx_20 u>> 3
int32_t rdi_9 = (rdi_6 - rcx_26 - rdx_20) ^ rcx_26 << 0xa
int64_t result = sx.q(*(r12 + 0x70))
int32_t rdi_11 = rdi_9 u>> 0xf ^ (rdx_20 - (rdi_9 + rcx_26))
void* r13_7 = result * 0x30 + r14_2

if (r14_2 != r13_7)
    do
        int32_t rdx_22 = *(r14_2 + 0x10)
        uint32_t r11_1 = zx.d(*(r14_2 + 0x14))
        void* rsi_3 = *(r14_2 + 0x28)
        int32_t rcx_29 = rdx_22 u>> 0xd ^ neg.d(rdx_22)
        int32_t r8_10 = (0x9e3779b9 - rcx_29 - rdx_22) ^ rcx_29 << 8
        int32_t rdx_25 = (rdx_22 - r8_10 - rcx_29) ^ r8_10 u>> 0xd
        int32_t rcx_32 = (rcx_29 - r8_10 - rdx_25) ^ rdx_25 u>> 0xc
        int32_t r8_13 = (r8_10 - rcx_32 - rdx_25) ^ rcx_32 << 0x10
        int32_t rdx_28 = (rdx_25 - r8_13 - rcx_32) ^ r8_13 u>> 5
        int32_t rcx_35 = (rcx_32 - r8_13 - rdx_28) ^ rdx_28 u>> 3
        int32_t r8_16 = (r8_13 - rcx_35 - rdx_28) ^ rcx_35 << 0xa
        int32_t r8_19 = (r8_16 u>> 0xf ^ (rdx_28 - (r8_16 + rcx_35))) - r11_1
        int32_t rbx_6 = (0x9e3779b9 - r8_19 - r11_1) ^ r8_19 << 8
        int32_t rcx_39 = (r11_1 - rbx_6 - r8_19) ^ rbx_6 u>> 0xd
        int32_t r8_22 = (r8_19 - rbx_6 - rcx_39) ^ rcx_39 u>> 0xc
        int32_t rbx_9 = (rbx_6 - r8_22 - rcx_39) ^ r8_22 << 0x10
        int32_t rcx_42 = (rcx_39 - rbx_9 - r8_22) ^ rbx_9 u>> 5
        int32_t r8_25 = (r8_22 - rbx_9 - rcx_42) ^ rcx_42 u>> 3
        int16_t* r10_2 = *r14_2
        int32_t r9_3 = 0
        int32_t rbx_12 = (rbx_9 - r8_25 - rcx_42) ^ r8_25 << 0xa
        uint16_t i_4 = *r10_2
        
        while (i_4 != 0)
            r10_2 = &r10_2[1]
            int32_t rax_65
            rax_65.w = sbb.w(i_4 - 0x61, i_4 - 0x61, zx.d(i_4) - 0x61 u< 0x1a)
            rax_65.w &= 0x20
            i_4 -= rax_65.w
            char rcx_45 = i_4.b ^ r9_3.b
            char rcx_46 = (i_4 u>> 8).b
            i_4 = *r10_2
            int32_t rdx_31 = *(&data_1439a2500 + (zx.q(rcx_45) << 2)) ^ r9_3 u>> 8
            r9_3 = *(&data_1439a2500 + ((zx.q(rcx_46) ^ zx.q(rdx_31.b)) << 2)) ^ rdx_31 u>> 8
        
        int32_t rcx_48 = *(r14_2 + 0x24)
        int32_t rbx_16 = ((rbx_12 u>> 0xf ^ (rcx_42 - (rbx_12 + r8_25))) - r9_3) ^ r9_3 u>> 0xd
        int32_t rdx_35 = (0x9e3779b9 - rbx_16 - r9_3) ^ rbx_16 << 8
        int32_t r9_8 = (r9_3 - rdx_35 - rbx_16) ^ rdx_35 u>> 0xd
        int32_t rbx_19 = (rbx_16 - rdx_35 - r9_8) ^ r9_8 u>> 0xc
        int32_t rdx_38 = (rdx_35 - rbx_19 - r9_8) ^ rbx_19 << 0x10
        int32_t r9_11 = (r9_8 - rdx_38 - rbx_19) ^ rdx_38 u>> 5
        int32_t rbx_22 = (rbx_19 - rdx_38 - r9_11) ^ r9_11 u>> 3
        int32_t rdx_41 = (rdx_38 - rbx_22 - r9_11) ^ rbx_22 << 0xa
        int32_t rdx_45 = ((rdx_41 u>> 0xf ^ (r9_11 - (rdx_41 + rbx_22))) - rcx_48) ^ rcx_48 u>> 0xd
        int32_t rbx_25 = (0x9e3779b9 - rdx_45 - rcx_48) ^ rdx_45 << 8
        int32_t rcx_51 = (rcx_48 - rbx_25 - rdx_45) ^ rbx_25 u>> 0xd
        int32_t rdx_48 = (rdx_45 - rbx_25 - rcx_51) ^ rcx_51 u>> 0xc
        int32_t rbx_28 = (rbx_25 - rdx_48 - rcx_51) ^ rdx_48 << 0x10
        int32_t rcx_54 = (rcx_51 - rbx_28 - rdx_48) ^ rbx_28 u>> 5
        int32_t rdx_51 = (rdx_48 - rbx_28 - rcx_54) ^ rcx_54 u>> 3
        int32_t rbx_31 = (rbx_28 - rdx_51 - rcx_54) ^ rdx_51 << 0xa
        int32_t rbx_33 = rbx_31 u>> 0xf ^ (rcx_54 - (rbx_31 + rdx_51))
        int32_t rdx_58
        int32_t rbx_43
        
        if (r11_1.b - 2 u<= 2)
            uint32_t rcx_66 = zx.d(*(r14_2 + 0x1c))
            uint32_t rdx_59 = zx.d(*(r14_2 + 0x20))
            int32_t rbx_44 = rbx_33 - rcx_66
            int32_t r8_28 = (0x9e3779b9 - rbx_44 - rcx_66) ^ rbx_44 << 8
            int32_t rcx_69 = (rcx_66 - r8_28 - rbx_44) ^ r8_28 u>> 0xd
            int32_t rbx_47 = (rbx_44 - r8_28 - rcx_69) ^ rcx_69 u>> 0xc
            int32_t r8_31 = (r8_28 - rbx_47 - rcx_69) ^ rbx_47 << 0x10
            int32_t rcx_72 = (rcx_69 - r8_31 - rbx_47) ^ r8_31 u>> 5
            int32_t rbx_50 = (rbx_47 - r8_31 - rcx_72) ^ rcx_72 u>> 3
            int32_t r8_34 = (r8_31 - rbx_50 - rcx_72) ^ rbx_50 << 0xa
            int32_t r8_37 = (r8_34 u>> 0xf ^ (rcx_72 - (r8_34 + rbx_50))) - rdx_59
            int32_t rbx_53 = (0x9e3779b9 - r8_37 - rdx_59) ^ r8_37 << 8
            int32_t rdx_62 = (rdx_59 - rbx_53 - r8_37) ^ rbx_53 u>> 0xd
            int32_t r8_40 = (r8_37 - rbx_53 - rdx_62) ^ rdx_62 u>> 0xc
            int32_t rbx_56 = (rbx_53 - r8_40 - rdx_62) ^ r8_40 << 0x10
            rdx_58 = (rdx_62 - rbx_56 - r8_40) ^ rbx_56 u>> 5
            int32_t r8_43 = (r8_40 - rbx_56 - rdx_58) ^ rdx_58 u>> 3
            rbx_43 = (rbx_56 - r8_43 - rdx_58) ^ r8_43 << 0xa
            rbx_33 = rbx_43 u>> 0xf ^ (rdx_58 - (rbx_43 + r8_43))
        else
            r11_1.b -= 0x11
            
            if (r11_1.b u<= 1)
                if ((*(rsi_3 + 0x90) & 1) == 0)
                    sub_1419d1650(rsi_3)
                
                int32_t rdx_52 = *(rsi_3 + 0x94)
                int32_t rcx_59 = rdx_52 u>> 0xd ^ (rbx_33 - rdx_52)
                int32_t rbx_37 = (0x9e3779b9 - rcx_59 - rdx_52) ^ rcx_59 << 8
                int32_t rdx_55 = (rdx_52 - rbx_37 - rcx_59) ^ rbx_37 u>> 0xd
                int32_t rcx_62 = (rcx_59 - rbx_37 - rdx_55) ^ rdx_55 u>> 0xc
                int32_t rbx_40 = (rbx_37 - rcx_62 - rdx_55) ^ rcx_62 << 0x10
                rdx_58 = (rdx_55 - rbx_40 - rcx_62) ^ rbx_40 u>> 5
                int32_t rcx_65 = (rcx_62 - rbx_40 - rdx_58) ^ rdx_58 u>> 3
                rbx_43 = (rbx_40 - rcx_65 - rdx_58) ^ rcx_65 << 0xa
                rbx_33 = rbx_43 u>> 0xf ^ (rdx_58 - (rbx_43 + rcx_65))
        r14_2 += 0x30
        int32_t rcx_76 = rbx_33 u>> 0xd ^ (rdi_11 - rbx_33)
        int32_t rdi_15 = (0x9e3779b9 - rcx_76 - rbx_33) ^ rcx_76 << 8
        int32_t rbx_62 = (rbx_33 - rdi_15 - rcx_76) ^ rdi_15 u>> 0xd
        int32_t rcx_79 = (rcx_76 - rdi_15 - rbx_62) ^ rbx_62 u>> 0xc
        int32_t rdi_18 = (rdi_15 - rcx_79 - rbx_62) ^ rcx_79 << 0x10
        int32_t rbx_65 = (rbx_62 - rdi_18 - rcx_79) ^ rdi_18 u>> 5
        int32_t rcx_82 = (rcx_79 - rdi_18 - rbx_65) ^ rbx_65 u>> 3
        int32_t rdi_21 = (rdi_18 - rcx_82 - rbx_65) ^ rcx_82 << 0xa
        result = zx.q(rdi_21 + rcx_82)
        rdi_11 = rdi_21 u>> 0xf ^ (rbx_65 - result.d)
    while (r14_2 != r13_7)
    
    r15 = var_98

bool cond:0 = *(r12 + 0x2c) != 1
*(r12 + 0x94) = rdi_11

if (not(cond:0))
    int32_t rdx_66 = data_1439c96b4
    void* rsi_4 = &data_1439c9690
    int32_t r14_3 = *(r12 + 0x60)
    int64_t rdi_23
    
    if (rdx_66 == 0)
        rdi_23 = zx.q(data_1439c9688)
        int32_t rax_164 = (rdi_23 + 1).d
        bool cond:2_1 = rax_164 s<= data_1439c968c
        data_1439c9688 = rax_164
        
        if (not(cond:2_1))
            sub_1405a4df0(&data_1439c9680)
        
        int32_t rbx_67 = data_1439c96a8
        sub_1405a4980(&data_1439c9690, rbx_67 + 1)
        void* rax_165 = data_1439c96a0
        void* r8_45 = &data_1439c9690
        data_1439c96a8 += 1
        
        if (rax_165 != 0)
            r8_45 = rax_165
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rbx_67)
        int64_t rdx_72 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r8_45 + (rdx_72 << 2)) &= not.d(1 << (rbx_67.b & 0x1f))
    else
        rdi_23 = sx.q(data_1439c96b0)
        int64_t r8_44 = data_1439c9680
        int64_t rax_163 = sx.q(*(r8_44 + rdi_23 * 0x18 + 4))
        data_1439c96b0 = rax_163.d
        data_1439c96b4 = rdx_66 - 1
        
        if (rdx_66 != 1)
            *(r8_44 + rax_163 * 0x18) = 0xffffffff
    
    void* rax_172 = data_1439c96a0
    
    if (rax_172 != 0)
        rsi_4 = rax_172
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rdi_23.d)
    void* rdx_75 = rsi_4 + (sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5) << 2)
    *rdx_75 |= 1 << (rdi_23.b & 0x1f)
    int64_t rdx_76 = sx.q(rdi_23.d) * 3
    int64_t rax_178 = data_1439c9680
    *(rax_178 + (rdx_76 << 3)) = r14_3
    *(rax_178 + (rdx_76 << 3) + 8) = r12
    *(rax_178 + (rdx_76 << 3) + 0x10) = 0xffffffff
    result =
        sub_14104a220(&data_1439c9680, &arg_8, r14_3, rax_178 + (rdx_76 << 3), rdi_23.d, nullptr)

*(r12 + 0x90) |= 1

if (r15 == 0)
    return result

return sub_140a74f90(r15)
