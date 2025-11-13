// 函数: sub_140b44400
// 地址: 0x140b44400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t rax = *(arg1 + 0x1c)
int64_t* rbx = arg1[2]
int32_t i_6 = arg1[3].d
int32_t arg_10 = 0
int32_t r13 = 0

if (rax s< 0)
    if (i_6 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx = &rbx[2]
            i = i_6
            i_6 -= 1
        while (i != 1)
        rax = *(arg1 + 0x1c)
    
    arg1[3].d = 0
    
    if (rax != 0)
        sub_14061cd70(&arg1[2], 0)
else
    if (i_6 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *rbx
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx = &rbx[2]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    arg1[3].d = 0

sub_140a4f7c0(&arg1[4])
void* var_a8 = nullptr
int32_t i_9 = 0
sub_140a464c0()
int16_t* var_118 = nullptr
int64_t var_110 = 0
sub_1405947f0(&var_118, 0xf)
int32_t rbx_1 = var_110.d + 0xf
var_110.d = rbx_1

if (rbx_1 s> 0)
    sub_140594770(&var_118)
    rbx_1 = var_110.d

int16_t* rsi = var_118
UnDecorator::getReferenceType(rsi, u"*.uprojectdirs", 0x1e)
int32_t rdi

if (rbx_1 == 0)
    rdi = 0
else
    rdi = rbx_1 - 1

int32_t rbx_2 = arg1[1].d
int32_t rax_2

if (rbx_2 == 0)
    rax_2 = rbx_2 + 2

if (rbx_2 != 0 || rdi == 0xffffffff)
    rax_2 = 1

int64_t r14_1 = *arg1
int32_t rcx_7 = rax_2 + rdi
int16_t* var_108 = nullptr
int32_t var_fc

if (rbx_2 != 0 || rcx_7 != 0)
    sub_1405a4c70(&var_108, rbx_2 + rcx_7, 0)
    memcpy(var_108, r14_1, rbx_2 * 2)
else
    var_fc = 0

sub_140a2cf70(&var_108, rsi, rdi)
int16_t* const r8_4 = &data_142d40450

if (rbx_2 != 0)
    r8_4 = var_108

int64_t r9
r9.b = 1
char var_128 = 0
(*(data_14399ea08 + 0x78))(&data_14399ea08, &var_a8, r8_4, r9, 0)
int16_t* rcx_11 = var_108

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t* r14_2 = arg_8
int16_t* var_78
sub_140b11c80(&var_78, r14_2)
int32_t rcx_15 = sub_140b214e0(&var_78)
int16_t* rbx_3 = var_78
int64_t var_88 = 0
int32_t var_70
int32_t var_80 = var_70
sub_1405a4c70(&var_88, sbb.d(rcx_15, rcx_15, var_70 != 0) + 2 + var_70, 0)
memcpy(var_88, rbx_3, var_70 * 2)
sub_140a2cf70(&var_88, &data_142d40450, 0)
void* r12 = var_a8
int64_t* j = (sx.q(i_9) << 4) + r12
arg_10.q = r12
int64_t* j_2 = j
int32_t i_8
int16_t* var_f8
int16_t* var_e8
int16_t* var_d8

if (r12 != j)
    do
        int32_t rdi_2 = *(r12 + 8)
        var_108 = nullptr
        i_8.q = 0
        int32_t rdi_3
        
        if (rdi_2 == 0)
            rdi_3 = 0
        else
            rdi_3 = rdi_2 - 1
        
        int32_t rbx_4 = r14_2[1].d
        int32_t rax_9
        
        if (rbx_4 == 0)
            rax_9 = rbx_4 + 2
        
        if (rbx_4 != 0 || rdi_3 == 0xffffffff)
            rax_9 = 1
        
        int64_t rsi_1 = *r14_2
        int32_t rcx_20 = rax_9 + rdi_3
        var_e8 = nullptr
        
        if (rbx_4 != 0 || rcx_20 != 0)
            sub_1405a4c70(&var_e8, rbx_4 + rcx_20, 0)
            memcpy(var_e8, rsi_1, rbx_4 * 2)
        else
            int32_t var_dc_1 = 0
        
        sub_140a2cf70(&var_e8, *r12, rdi_3)
        int16_t* const rbx_5 = &data_142d40450
        
        if (rbx_4 != 0)
            rbx_5 = var_e8
        
        sub_140a464c0()
        j = unzOpenInternal(rbx_5, &data_14399ea08, &var_108)
        int16_t* rcx_25 = var_e8
        uint64_t rbx_6 = zx.q(j.b)
        
        if (rcx_25 != 0)
            j = sub_140a74f90(rcx_25)
        
        int16_t* rsi_2 = var_108
        
        if (rbx_6.b != 0)
            void* r12_3 = &rsi_2[sx.q(i_8) * 8]
            
            if (rsi_2 != r12_3)
                do
                    j = sub_140a35fa0(rsi_2, &var_d8)
                    int32_t var_d0
                    
                    if (var_d0 s<= 1)
                        rbx_6.b = 0
                    else
                        var_118 = nullptr
                        var_110 = 0
                        sub_1405947f0(&var_118, 2)
                        int32_t rax_10 = var_110.d + 2
                        var_110.d = rax_10
                        
                        if (rax_10 s> 0)
                            sub_140594770(&var_118)
                        
                        var_128.w = 0x3f
                        sub_1405a7220(var_118, 2, U";", 2, 0x3f)
                        r13 |= 1
                        j = sub_140a32a50(&var_d8, &var_118, 1)
                        
                        if (j.b != 0)
                            rbx_6.b = 0
                        else
                            rbx_6.b = 1
                    
                    if ((r13.b & 1) != 0)
                        int16_t* rcx_31 = var_118
                        r13 &= 0xfffffffe
                        
                        if (rcx_31 != 0)
                            j = sub_140a74f90(rcx_31)
                    
                    if (rbx_6.b != 0)
                        sub_140b11b90(&var_f8, r14_2, &var_d8)
                        sub_140b214e0(&var_f8)
                        char rax_11 = sub_140a32a50(&var_f8, &var_88, 1)
                        int32_t var_f0
                        
                        if (rax_11 == 0)
                            int16_t* const rdx_17 = &data_142d40450
                            int16_t* const rcx_35 = &data_142d40450
                            
                            if (var_70 != 0)
                                rdx_17 = var_78
                            
                            if (var_f0 != 0)
                                rcx_35 = var_f8
                            
                            j = sub_140a54510(rcx_35, rdx_17)
                        
                        if (rax_11 != 0 || j.d == 0)
                            int64_t* r14_3 = arg1[2]
                            int64_t* rbx_7 = r14_3
                            void* rdi_6 = &r14_3[sx.q(arg1[3].d) * 2]
                            
                            if (r14_3 != rdi_6)
                                while (true)
                                    int16_t* rdx_18 = &data_142d40450
                                    
                                    if (var_f0 != 0)
                                        rdx_18 = var_f8
                                    
                                    int16_t* const rcx_36
                                    
                                    if (rbx_7[1].d == 0)
                                        rcx_36 = &data_142d40450
                                    else
                                        rcx_36 = *rbx_7
                                    
                                    j = sub_140a54510(rcx_36, rdx_18)
                                    
                                    if (j.d == 0)
                                        break
                                    
                                    rbx_7 = &rbx_7[2]
                                    
                                    if (rbx_7 == rdi_6)
                                        goto label_140b44894
                            
                            if (r14_3 == rdi_6 || ((rbx_7 - r14_3) s>> 4).d == 0xffffffff)
                            label_140b44894:
                                int64_t rbx_9 = sx.q(arg1[3].d)
                                int32_t rax_12 = (rbx_9 + 1).d
                                arg1[3].d = rax_12
                                
                                if (rax_12 s> *(arg1 + 0x1c))
                                    sub_1405a4f90(&arg1[2])
                                
                                j = nullptr
                                rbx_6 = (rbx_9 << 4) + arg1[2]
                                *rbx_6 = 0
                                int16_t* r14_4 = var_f8
                                *(rbx_6 + 8) = var_f0
                                
                                if (var_f0 != 0)
                                    sub_1405a4c70(rbx_6, var_f0, 0)
                                    j = memcpy(*rbx_6, r14_4, var_f0 * 2)
                                else
                                    *(rbx_6 + 0xc) = 0
                            
                            r14_2 = arg_8
                        
                        int16_t* rcx_40 = var_f8
                        
                        if (rcx_40 != 0)
                            j = sub_140a74f90(rcx_40)
                    
                    int16_t* rcx_41 = var_d8
                    
                    if (rcx_41 != 0)
                        j = sub_140a74f90(rcx_41)
                    
                    rsi_2 = &rsi_2[8]
                while (rsi_2 != r12_3)
                
                rsi_2 = var_108
            
            r12 = arg_10.q
        
        int32_t i_5 = i_8
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                int64_t rcx_42 = *rsi_2
                
                if (rcx_42 != 0)
                    j = sub_140a74f90(rcx_42)
                
                rsi_2 = &rsi_2[8]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            rsi_2 = var_108
        
        if (rsi_2 != 0)
            j = sub_140a74f90(rsi_2)
        
        r12 += 0x10
        arg_10.q = r12
    while (r12 != j_2)

int64_t* i_3 = arg1[2]
int64_t* j_3 = &i_3[sx.q(arg1[3].d) * 2]
j_2 = j_3

for (; i_3 != j_3; i_3 = &i_3[2])
    void* var_b8 = nullptr
    int32_t var_b0_1 = 0
    sub_140a464c0()
    var_108 = nullptr
    i_8.q = 0
    sub_1405947f0(&var_108, 2)
    int32_t rbx_11 = i_8 + 2
    
    if (rbx_11 s> var_fc)
        sub_140594770(&var_108)
    
    int16_t* rsi_3 = var_108
    UnDecorator::getReferenceType(rsi_3, &data_142d6bbe8, 4)
    int32_t rdi_8 = rbx_11 - 1
    
    if (rbx_11 == 0)
        rdi_8 = 0
    
    int32_t rbx_12 = i_3[1].d
    int32_t rax_14
    
    if (rbx_12 == 0)
        rax_14 = rbx_12 + 2
    
    if (rbx_12 != 0 || rdi_8 == 0xffffffff)
        rax_14 = 1
    
    var_e8 = nullptr
    int32_t rcx_47 = rax_14 + rdi_8
    int64_t r14_5 = *i_3
    
    if (rbx_12 != 0 || rcx_47 != 0)
        sub_1405a4c70(&var_e8, rbx_12 + rcx_47, 0)
        memcpy(var_e8, r14_5, rbx_12 * 2)
    else
        int32_t var_dc_2 = 0
    
    sub_140a2cf70(&var_e8, rsi_3, rdi_8)
    int16_t* r8_17 = &data_142d40450
    
    if (rbx_12 != 0)
        r8_17 = var_e8
    
    int64_t var_120
    (*(data_14399ea08 + 0x78))(&data_14399ea08, &var_b8, r8_17, 0, 1, var_120)
    int16_t* rcx_51 = var_e8
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    void* rbx_13 = var_b8
    int64_t rdi_9 = sx.q(var_b0_1)
    j = (rdi_9 << 4) + rbx_13
    arg_10.q = j
    
    if (rbx_13 != j)
        void* r12_6 = rbx_13 + 8
        
        do
            int16_t** var_c8 = nullptr
            int32_t var_c0_1 = 0
            sub_140a464c0()
            int32_t rdi_10 = *r12_6
            int32_t rdi_11
            
            if (rdi_10 == 0)
                rdi_11 = 0
            else
                rdi_11 = rdi_10 - 1
            
            int32_t rbx_14 = i_3[1].d
            int32_t rax_19
            
            if (rbx_14 == 0)
                rax_19 = rbx_14 + 2
            
            if (rbx_14 != 0 || rdi_11 == 0xffffffff)
                rax_19 = 1
            
            int64_t rsi_4 = *i_3
            int32_t rcx_53 = rax_19 + rdi_11
            var_f8 = nullptr
            int32_t var_ec
            
            if (rbx_14 != 0 || rcx_53 != 0)
                sub_1405a4c70(&var_f8, rbx_14 + rcx_53, 0)
                memcpy(var_f8, rsi_4, rbx_14 * 2)
            else
                var_ec = 0
            
            int32_t rcx_57 = sub_140a2cf70(&var_f8, *(r12_6 - 8), rdi_11)
            int16_t* var_98 = var_f8
            int32_t rdx_31 = rbx_14 + sbb.d(rcx_57, rcx_57, rbx_14 != 0) + 0xc
            var_f8 = nullptr
            int32_t var_8c_1 = var_ec
            int32_t var_f0_1
            var_f0_1.q = 0
            
            if (rdx_31 s> var_ec)
                sub_1405947f0(&var_98, rdx_31)
            
            sub_140a2cf70(&var_98, u"*.uproject", 0xa)
            int16_t* r8_21 = &data_142d40450
            
            if (rbx_14 != 0)
                r8_21 = var_98
            
            int64_t r9_1
            r9_1.b = 1
            char var_128_1 = 0
            (*(data_14399ea08 + 0x78))(&data_14399ea08, &var_c8, r8_21, r9_1, 0, var_120)
            int16_t* rcx_62 = var_98
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
            
            int16_t* rcx_63 = var_f8
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
            
            int16_t** rbx_15 = var_c8
            int64_t rdi_12 = sx.q(var_c0_1)
            void* r15_3 = &rbx_15[rdi_12 * 2]
            
            if (rbx_15 != r15_3)
                do
                    int64_t var_58
                    sub_140b18720(&var_58, rbx_15, 1)
                    int32_t rsi_5 = *r12_6
                    int32_t rsi_6
                    
                    if (rsi_5 == 0)
                        rsi_6 = 0
                    else
                        rsi_6 = rsi_5 - 1
                    
                    int32_t rdi_13 = i_3[1].d
                    int32_t rax_25
                    
                    if (rdi_13 == 0)
                        rax_25 = rdi_13 + 2
                    
                    if (rdi_13 != 0 || rsi_6 == 0xffffffff)
                        rax_25 = 1
                    
                    var_118 = nullptr
                    int32_t rcx_65 = rsi_6 + rax_25
                    int64_t r14_6 = *i_3
                    var_110.d = rdi_13
                    
                    if (rdi_13 != 0 || rcx_65 != 0)
                        sub_1405a4c70(&var_118, rdi_13 + rcx_65, 0)
                        memcpy(var_118, r14_6, rdi_13 * 2)
                    else
                        var_110:4.d = 0
                    
                    sub_140a2cf70(&var_118, *(r12_6 - 8), rsi_6)
                    int32_t rdi_14 = rbx_15[1].d
                    int32_t rdi_15
                    
                    if (rdi_14 == 0)
                        rdi_15 = 0
                    else
                        rdi_15 = rdi_14 - 1
                    
                    int32_t rcx_69 = var_110.d
                    int32_t rdx_37
                    
                    if (rcx_69 == 0)
                        rdx_37 = rcx_69 + 2
                    
                    if (rcx_69 != 0 || rdi_15 == 0xffffffff)
                        rdx_37 = 1
                    
                    var_d8 = var_118
                    int32_t rdx_39 = rdx_37 + rdi_15 + rcx_69
                    int32_t rax_28 = var_110:4.d
                    var_118 = nullptr
                    int32_t var_d0_1 = rcx_69
                    int32_t var_cc_1 = rax_28
                    var_110 = 0
                    
                    if (rdx_39 s> rax_28)
                        sub_1405947f0(&var_d8, rdx_39)
                    
                    sub_140a2cf70(&var_d8, *rbx_15, rdi_15)
                    int16_t* rcx_72 = var_118
                    
                    if (rcx_72 != 0)
                        sub_140a74f90(rcx_72)
                    
                    int32_t var_68
                    sub_1405d1820(&arg1[4], &var_68)
                    int64_t* var_60
                    sub_140596d10(var_60, &var_58)
                    sub_140596d10(&var_60[2], &var_d8)
                    var_60[4].d = 0xffffffff
                    int32_t rax_29 = var_60[1].d
                    int16_t* rdx_44
                    
                    if (rax_29 == 0)
                        rdx_44 = &data_142d40450
                    else
                        rdx_44 = *var_60
                    
                    int32_t rcx_76 = rax_29 - 1
                    
                    if (rax_29 == 0)
                        rcx_76 = 0
                    
                    int32_t rax_30 = sub_1405969c0(rcx_76, rdx_44)
                    var_120 = 0
                    var_128_1.d = var_68
                    sub_1405d2a60(&arg1[4], &arg_8, rax_30, var_60, var_128_1, nullptr)
                    int16_t* rcx_79 = var_d8
                    
                    if (rcx_79 != 0)
                        sub_140a74f90(rcx_79)
                    
                    int64_t rcx_80 = var_58
                    
                    if (rcx_80 != 0)
                        sub_140a74f90(rcx_80)
                    
                    rbx_15 = &rbx_15[2]
                while (rbx_15 != r15_3)
                
                rdi_12 = zx.q(var_c0_1)
                rbx_15 = var_c8
            
            if (rdi_12.d != 0)
                int32_t k
                
                do
                    int16_t* rcx_81 = *rbx_15
                    
                    if (rcx_81 != 0)
                        sub_140a74f90(rcx_81)
                    
                    rbx_15 = &rbx_15[2]
                    k = rdi_12.d
                    rdi_12 = zx.q(rdi_12.d - 1)
                while (k != 1)
                rbx_15 = var_c8
            
            if (rbx_15 != 0)
                sub_140a74f90(rbx_15)
            
            r12_6 += 0x10
            j = r12_6 - 8
        while (j != arg_10.q)
        
        rdi_9 = zx.q(var_b0_1)
        rbx_13 = var_b8
        j_3 = j_2
    
    if (rdi_9.d != 0)
        int32_t j_1
        
        do
            int64_t rcx_83 = *rbx_13
            
            if (rcx_83 != 0)
                j = sub_140a74f90(rcx_83)
            
            rbx_13 += 0x10
            j_1 = rdi_9.d
            rdi_9 = zx.q(rdi_9.d - 1)
        while (j_1 != 1)
        rbx_13 = var_b8
    
    if (rbx_13 != 0)
        j = sub_140a74f90(rbx_13)

int64_t rcx_85 = var_88

if (rcx_85 != 0)
    j = sub_140a74f90(rcx_85)

int16_t* rcx_86 = var_78

if (rcx_86 != 0)
    j = sub_140a74f90(rcx_86)

int32_t i_7 = i_9
void* rbx_16 = var_a8

if (i_7 != 0)
    int32_t i_4
    
    do
        int64_t rcx_87 = *rbx_16
        
        if (rcx_87 != 0)
            j = sub_140a74f90(rcx_87)
        
        rbx_16 += 0x10
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

void* rcx_88 = var_a8

if (rcx_88 == 0)
    return j

return sub_140a74f90(rcx_88)
