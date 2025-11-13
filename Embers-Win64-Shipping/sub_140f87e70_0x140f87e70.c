// 函数: sub_140f87e70
// 地址: 0x140f87e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9b8
int64_t rax_1 = __security_cookie ^ &var_9b8
int32_t i_3 = arg1[0x9a].d

if (i_3 != 0)
    int64_t* rdi_1 = arg1[0x99] + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t* r13 = nullptr
arg1[0x9a].d = 0

if (*(arg1 + 0x4d4) != 0)
    sub_1405a5410(&arg1[0x99], 0)

int128_t zmm7 = arg1[0x9b].d
int128_t zmm6 = *(arg1 + 0x4dc)
int32_t var_8a8 = zmm7.d
int32_t var_8a4 = zmm6.d
int64_t* (* var_888)(void* arg1, int64_t* arg2, int32_t arg3, int32_t arg4) = sub_140f761d0
char var_8a0 = 1
int64_t var_898 = 0
int32_t var_890 = 0
int32_t var_880 = 0
int32_t var_868 = 0x3f800000
char var_864 = 1
int64_t* var_860 = nullptr
int32_t var_858 = 0
void var_558
int64_t* rax_4 = sub_140e50180(&var_558)
rax_4[0x34].d = zmm7.d
*(rax_4 + 0x1a4) = zmm6.d
rax_4[0x35].b = 1
sub_140692f90(&rax_4[0x36], &var_898)
rax_4[0xf].b = arg1[0x9c].b
*(rax_4 + 0x79) = *(arg1 + 0x4e1)
sub_1407473e0(&rax_4[0x10], &arg1[0x9d])
void*** rax_5 = sub_140e48fc0()
void* var_850 = &rax_5[2]
sub_140918950(&var_850, &rax_5[2])
int64_t var_998 = 0x2c8
void var_984
void* var_840 = &var_984
void* var_7f8
void** rax_6 = sub_140e57660(&var_850, &var_7f8, rax_4, sub_140e23ed0(&rax_5[2], "SSpacer"))
int64_t* rbx_3 = rax_6[1]
void* var_8f8 = *rax_6
int64_t* var_8f0 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

void*** rax_7 = j_sub_140a82f30(0x88)
void*** rdi_3 = rax_7

if (rax_7 == 0)
    rdi_3 = nullptr
else
    sub_14068e490(rax_7)
    *rdi_3 = &data_142d8add0

void* rax_8 = sub_140698b50(rdi_3)
char var_720 = 1
int64_t var_718 = 0
int32_t var_710 = 0
*(rax_8 + 0x58) = 1
int128_t var_730 = zx.o(0)
*(rax_8 + 0x48) = zx.o(0)
sub_1407473e0(rax_8 + 0x60, &var_718)
sub_140745b20(&var_718)
sub_140693600(rax_8, &var_8f8)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rbx_5 = arg1[0x9f] + 0x9a8
void var_398
int64_t* rax_11 = sub_140e95130(&var_398)
int128_t var_7d8 = var_888.o
rax_11[0x36] = rbx_5
*(rax_11 + 0x1bc) = arg1[0xa3].d
rax_11[0x38].d = 0
*(rax_11 + 0x1c4) = 0x40a00000
int64_t* var_8e0
sub_1407473e0(&rax_11[0x3c], sub_140e8f010(&var_8e0, arg1, &var_7d8))
int32_t var_8d8
int64_t* rax_14

if (var_8d8 == 0)
    rax_14 = var_8e0
label_140f88191:
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)
else
    int64_t* rcx_23 = var_8e0
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x38))(rcx_23, 0)
        rax_14 = var_8e0
        
        if (rax_14 != 0)
            rax_14 = sub_140a84c80(rax_14, 0, 0)
            var_8e0 = rax_14
        
        int32_t var_8d8_1 = 0
        goto label_140f88191
void*** rax_15 = j_sub_140a82f30(0x328)
void*** r12 = rax_15

if (rax_15 == 0)
    r12 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *r12 = &data_142edf0e0
    
    if (r12 != -0x10)
        sub_140f21070(&r12[2])

void* rbx_6 = &r12[2]
void*** var_830 = r12
void* var_838 = rbx_6
sub_140918950(&var_838, rbx_6)
int64_t var_998_1 = 0x318
void var_983
void* var_828 = &var_983
int128_t zmm1_1 = sub_140e23ed0(rbx_6, "SSplitter")
bool cond:0 = r12 == 0

if (r12 != 0)
    r12[1].d += 1
    cond:0 = r12 == 0

if (cond:0)
    r12 = nullptr

void* var_7e8
void** rax_16 = sub_140e9e2f0(&var_838, &var_7e8, rax_11, zmm1_1)
int64_t* rbx_7 = rax_16[1]
var_8f8 = *rax_16

if (rbx_7 != 0)
    rbx_7[1].d += 1

void*** rax_17 = j_sub_140a82f30(0x88)
void*** rdi_5 = rax_17

if (rax_17 == 0)
    rdi_5 = nullptr
else
    sub_14068e490(rax_17)
    *rdi_5 = &data_142d8add0

var_730.d = 1
var_730:8.d = 0x3f800000
var_730:0xc.b = 1
var_720.q = 0
var_718.d = 0
sub_140692f90(&var_720, &var_860)
int32_t zmm0_1 = var_730:8.d
rdi_5[5].d = var_730.d
*(rdi_5 + 0x34) = var_730:0xc.b
rdi_5[6].d = zmm0_1
sub_140692f90(&rdi_5[7], &var_720)
sub_140745b20(&var_720)
sub_140693600(rdi_5, &var_8f8)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp7_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

void var_708
int64_t* rax_22 = sub_14068d420(&var_708)
int64_t r14_1 = sx.q(rax_22[0x35].d)
int32_t rcx_39 = (r14_1 + 1).d
rax_22[0x35].d = rcx_39

if (rcx_39 s> *(rax_22 + 0x1ac))
    sub_140638870(&rax_22[0x34])

*(rax_22[0x34] + (r14_1 << 3)) = rdi_5
int64_t rdi_6 = sx.q(rax_22[0x35].d)
int32_t rax_24 = (rdi_6 + 1).d
rax_22[0x35].d = rax_24

if (rax_24 s> *(rax_22 + 0x1ac))
    sub_140638870(&rax_22[0x34])

*(rax_22[0x34] + (rdi_6 << 3)) = rax_8
void*** rax_26 = j_sub_140a82f30(0x2e8)
void*** rdi_7 = rax_26

if (rax_26 == 0)
    rdi_7 = nullptr
else
    rax_26[1].d = 1
    *(rax_26 + 0xc) = 1
    *rdi_7 = &data_142d8c590
    
    if (rdi_7 != -0x10)
        sub_14068e500(&rdi_7[2])

void*** var_978 = rdi_7
void* var_980 = &rdi_7[2]
sub_14065fa30(&var_980, &rdi_7[2])
int64_t var_998_2 = 0x2d8
char var_982
char* var_970 = &var_982
uint128_t var_7a8
sub_140696920(&var_980, &var_7a8, rax_22, sub_140e23ed0(&rdi_7[2], "SHorizontalBox"))
void*** rbx_10 = var_978

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp9_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rbx_10)[1](rbx_10, 1)

int64_t var_568

if (var_568 != 0)
    sub_140a74f90(var_568)

sub_140660250(&var_708)
int64_t* var_7e0

if (var_7e0 != 0)
    var_7e0[1].d -= 1
    
    if (var_7e0[1].d == 1)
        (**var_7e0)(var_7e0)
        int32_t temp12_1 = *(var_7e0 + 0xc)
        *(var_7e0 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_7e0 + 8))(var_7e0, 1)

if (var_830 != 0)
    var_830[1].d -= 1
    
    if (var_830[1].d == 1)
        (**var_830)(var_830)
        int32_t temp13_1 = *(var_830 + 0xc)
        *(var_830 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*var_830)[1](var_830, 1)

void var_1b8
sub_140745b20(&var_1b8)
void var_1c8
sub_140745b20(&var_1c8)
int64_t var_1f8

if (var_1f8 != 0)
    sub_140a74f90(var_1f8)

sub_140ddea30(&var_398)
int64_t* var_7f0

if (var_7f0 != 0)
    var_7f0[1].d -= 1
    
    if (var_7f0[1].d == 1)
        (**var_7f0)(var_7f0)
        int32_t temp16_1 = *(var_7f0 + 0xc)
        *(var_7f0 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_7f0 + 8))(var_7f0, 1)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp17_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*rax_5)[1](rax_5, 1)

void var_3a8
sub_140745b20(&var_3a8)
sub_140ddea30(&var_558)
sub_140745b20(&var_860)
sub_140745b20(&var_898)
int64_t* rcx_66 = arg1
int32_t i_1 = 0
int32_t i_2 = 0
uint128_t zmm0_2

if (rcx_66[0x98].d s> 0)
    int64_t r8_7 = 0
    var_982 = 1
    int64_t var_958_1 = 0
    
    do
        void* r15_2 = *(rcx_66[0x97] + (r8_7 << 3))
        
        if (*(r15_2 + 0x129) != 0 && *(r15_2 + 0x138) != 0)
            int64_t* rcx_67 = *(r15_2 + 0x130)
            
            if (rcx_67 != 0)
                if ((*(*rcx_67 + 0x28))(rcx_67) != 0)
                    int64_t* rcx_68
                    
                    if (*(r15_2 + 0x138) == 0)
                        rcx_68 = nullptr
                    else
                        rcx_68 = *(r15_2 + 0x130)
                    
                    *(r15_2 + 0x128) = (*(*rcx_68 + 0x48))(rcx_68)
                
                r8_7 = var_958_1
                i_1 = i_2
            
            rcx_66 = arg1
        
        if (*(r15_2 + 0x129) == 0 || *(r15_2 + 0x128) != 0)
            int64_t* var_930_1 = r13
            int64_t* r12_1 = r13
            
            if (r13 != 0)
                r13[1].d += 1
            
            int64_t* rbx_15 = r13
            
            if (r13 != 0)
                r13 = nullptr
                rbx_15[1].d -= 1
                
                if (rbx_15[1].d == 1)
                    (**rbx_15)(rbx_15)
                    int32_t temp23_1 = *(rbx_15 + 0xc)
                    *(rbx_15 + 0xc) -= 1
                    
                    if (temp23_1 == 1)
                        (*(*rbx_15 + 8))(rbx_15, 1)
            
            uint128_t var_750 = data_142ee9cd0
            int32_t rbx_16 = arg1[0x98].d
            int64_t rdi_9 = arg1[0x9f]
            int64_t* rax_44 = sub_140f64670(&var_708)
            int64_t rdx_17 = 0x4d8
            
            if (i_2 + 1 != rbx_16)
                rdx_17 = 8
            
            rax_44[0x34] = rdx_17 + rdi_9
            int128_t* var_780_1 = &var_750
            void* var_788 = r15_2
            void*** rax_45 = sub_140f640a0()
            var_978 = rax_45
            int64_t* rbx_17 = rax_45
            var_980 = &rax_45[2]
            sub_140918950(&var_980, &rax_45[2])
            int64_t var_998_3 = 0x418
            int32_t var_970_1 = &var_788
            int128_t zmm1_3 = sub_140e23ed0(&rax_45[2], "STableColumnHeader")
            
            if (rbx_17 != 0)
                rbx_17[1].d += 1
            
            int64_t* rdi_10 = r13
            
            if (rbx_17 != r13)
                r13 = rbx_17
                
                if (rdi_10 != 0)
                    rdi_10[1].d -= 1
                    
                    if (rdi_10[1].d == 1)
                        (**rdi_10)(rdi_10)
                        int32_t temp30_1 = *(rdi_10 + 0xc)
                        *(rdi_10 + 0xc) -= 1
                        
                        if (temp30_1 == 1)
                            (*(*rdi_10 + 8))(rdi_10, 1)
            else if (rbx_17 != 0)
                rbx_17[1].d -= 1
                
                if (rbx_17[1].d == 1)
                    (**rbx_17)(rbx_17)
                    int32_t temp29_1 = *(rbx_17 + 0xc)
                    *(rbx_17 + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*(*rbx_17 + 8))(rbx_17, 1)
            
            int128_t var_808
            sub_140f69260(&var_980, &var_808, rax_44, zmm1_3)
            void*** rbx_18 = var_978
            
            if (rbx_18 != 0)
                rbx_18[1].d -= 1
                
                if (rbx_18[1].d == 1)
                    (**rbx_18)(rbx_18)
                    int32_t temp31_1 = *(rbx_18 + 0xc)
                    *(rbx_18 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        (*rbx_18)[1](rbx_18, 1)
            
            zmm0_2 = sub_140ddea30(&var_708)
            int64_t rbx_19 = sx.q(arg1[0x9a].d)
            int32_t rax_51 = (rbx_19 + 1).d
            arg1[0x9a].d = rax_51
            
            if (rax_51 s> *(arg1 + 0x4d4))
                zmm0_2 = sub_1405a4f90(&arg1[0x99])
            
            int64_t* rax_54 = (rbx_19 << 4) + arg1[0x99]
            *rax_54 = &rax_45[2]
            rax_54[1] = r13
            
            if (r13 != 0)
                r13[1].d += 1
            
            int32_t rcx_84 = *(r15_2 + 0x98)
            int64_t* var_800
            int32_t var_950
            int64_t var_948
            int32_t var_940
            void* var_918
            int128_t var_8c8
            
            if (rcx_84 == 0)
                var_980.d = 0
                var_978 = nullptr
                var_970_1 = 0
                var_980:4.b = 1
                int64_t* rax_138 = sub_140a84c80(0, 0x30, 0)
                
                if (rax_138 != 0)
                    rax_138[1] = r15_2
                    *rax_138 = &data_142d42fd0
                    rax_138[2] = sub_140f77140
                    rax_138[4] = sub_140a387b0()
                    int64_t r8_19 = *rax_138
                    (*(r8_19 + 0x40))(rax_138, &var_978, r8_19)
                    (*(*rax_138 + 0x38))(rax_138, 0)
                    int64_t rax_141 = sub_140a84c80(rax_138, 0, 0)
                    
                    if (rax_141 != 0)
                        sub_140a74f90(rax_141)
                else if (var_970_1 != 0)
                    void*** rcx_201 = var_978
                    
                    if (rcx_201 != 0)
                        (*rcx_201)[7](rcx_201, 0)
                        void*** rcx_202 = var_978
                        
                        if (rcx_202 != 0)
                            var_978 = sub_140a84c80(rcx_202, 0, 0)
                        
                        var_970_1 = 0
                
                var_8c8 = var_808
                
                if (var_800 != 0)
                    var_800[1].d += 1
                
                var_950 = 1
                char var_94c_3 = 1
                var_948 = 0
                var_940 = 0
                int64_t* rax_144 = sub_140a84c80(0, 0x30, 0)
                
                if (rax_144 != 0)
                    rax_144[1] = r15_2
                    *rax_144 = &data_142d3fe58
                    rax_144[2] = sub_140f8df20
                    rax_144[4] = sub_140a387b0()
                    *rax_144 = &data_142d3feb0
                
                void*** rax_146 = sub_140f2a990(rbx_6, 0xffffffff)
                rax_146[7].d = var_980.d
                *(rax_146 + 0x3c) = var_980:4.b
                sub_140692f90(&rax_146[8], &var_978)
                rax_146[4].d = 1
                *(rax_146 + 0x24) = 1
                
                if (&var_948 != &rax_146[5] && rax_146[6].d != 0)
                    int64_t* rcx_206 = rax_146[5]
                    
                    if (rcx_206 != 0)
                        (*(*rcx_206 + 0x38))(rcx_206, 0)
                        int64_t rcx_207 = rax_146[5]
                        
                        if (rcx_207 != 0)
                            rax_146[5] = sub_140a84c80(rcx_207, 0, 0)
                        
                        rax_146[6].d = 0
                
                if (&var_918 != &rax_146[0xa])
                    if (rax_144 != 0)
                        (*(*rax_144 + 0x40))(rax_144, &rax_146[0xa])
                    else if (rax_146[0xb].d != 0)
                        int64_t* rcx_209 = rax_146[0xa]
                        
                        if (rcx_209 != 0)
                            (*(*rcx_209 + 0x38))(rcx_209, 0)
                            int64_t rcx_210 = rax_146[0xa]
                            
                            if (rcx_210 != 0)
                                rax_146[0xa] = sub_140a84c80(rcx_210, 0, 0)
                            
                            rax_146[0xb].d = 0
                
                sub_140e99b50(rax_146, &var_8c8)
                
                if (rax_144 != 0)
                    (*(*rax_144 + 0x38))(rax_144, 0)
                    int64_t rax_153 = sub_140a84c80(rax_144, 0, 0)
                    
                    if (rax_153 != 0)
                        sub_140a74f90(rax_153)
                
                sub_140745b20(&var_948)
                
                if (var_800 != 0)
                    var_800[1].d -= 1
                    
                    if (var_800[1].d == 1)
                        (**var_800)(var_800)
                        int32_t temp46_1 = *(var_800 + 0xc)
                        *(var_800 + 0xc) -= 1
                        
                        if (temp46_1 == 1)
                            (*(*var_800 + 8))(var_800, 1)
                
                sub_140745b20(&var_978)
            else if (rcx_84 == 1)
                var_980.d = sub_140f77140(r15_2, zmm0_2.d).d
                var_8c8 = var_808
                var_980:4.b = 1
                var_978 = nullptr
                var_970_1 = 0
                
                if (var_800 != 0)
                    var_800[1].d += 1
                
                int64_t* rax_125 = sub_14068c940(&var_398)
                rax_125[0x3c].d = var_980.d
                *(rax_125 + 0x1e4) = 1
                sub_1407473e0(&rax_125[0x3d], &var_978)
                int64_t* rax_126 = j_sub_140a82f30(0x3d8)
                int64_t* rdi_17 = rax_126
                
                if (rax_126 == 0)
                    rdi_17 = nullptr
                else
                    rax_126[1].d = 1
                    *(rax_126 + 0xc) = 1
                    *rdi_17 = &data_142d8c570
                    
                    if (rdi_17 != -0x10)
                        sub_140f20750(&rdi_17[2])
                
                var_918 = &rdi_17[2]
                sub_14065fa30(&var_918, &rdi_17[2])
                int64_t var_998_8 = 0x3c8
                void var_95e
                void* var_908_2 = &var_95e
                void* rax_127
                int128_t zmm1_11
                rax_127, zmm1_11 =
                    sub_1406937a0(rax_125, &var_8c8, sub_140e23ed0(&rdi_17[2], "SBox"))
                void** rax_128 = sub_140695d20(&var_918, &var_838, rax_127, zmm1_11)
                int64_t* rbx_41 = rax_128[1]
                var_7d8.q = *rax_128
                var_7d8:8.q = rbx_41
                
                if (rbx_41 != 0)
                    rbx_41[1].d += 1
                
                var_950 = 0
                char var_94c_2 = 1
                var_948 = 0
                var_940 = 0
                void*** rax_129 = sub_140f2a990(rbx_6, 0xffffffff)
                rax_129[4].d = 0
                *(rax_129 + 0x24) = 1
                
                if (&var_948 != &rax_129[5] && rax_129[6].d != 0)
                    int64_t* rcx_185 = rax_129[5]
                    
                    if (rcx_185 != 0)
                        (*(*rcx_185 + 0x38))(rcx_185, 0)
                        int64_t rcx_186 = rax_129[5]
                        
                        if (rcx_186 != 0)
                            rax_129[5] = sub_140a84c80(rcx_186, 0, 0)
                        
                        rax_129[6].d = 0
                
                sub_140e99b50(rax_129, &var_7d8)
                sub_140745b20(&var_948)
                
                if (rbx_41 != 0)
                    rbx_41[1].d -= 1
                    
                    if (rbx_41[1].d == 1)
                        (**rbx_41)(rbx_41)
                        int32_t temp39_1 = *(rbx_41 + 0xc)
                        *(rbx_41 + 0xc) -= 1
                        
                        if (temp39_1 == 1)
                            (*(*rbx_41 + 8))(rbx_41, 1)
                
                if (var_830 != 0)
                    var_830[1].d -= 1
                    
                    if (var_830[1].d == 1)
                        (**var_830)(var_830)
                        int32_t temp43_1 = *(var_830 + 0xc)
                        *(var_830 + 0xc) -= 1
                        
                        if (temp43_1 == 1)
                            (*var_830)[1](var_830, 1)
                
                if (rdi_17 != 0)
                    rdi_17[1].d -= 1
                    
                    if (rdi_17[1].d == 1)
                        (**rdi_17)(rdi_17)
                        int32_t temp47_1 = *(rdi_17 + 0xc)
                        *(rdi_17 + 0xc) -= 1
                        
                        if (temp47_1 == 1)
                            (*(*rdi_17 + 8))(rdi_17, 1)
                
                sub_140690290(&var_398)
                sub_140745b20(&var_978)
            else if (rcx_84 == 2)
                char var_8a0_1 = (rcx_84 - 1).b
                var_898 = 0
                int32_t var_890_1 = 0
                var_8a8 = 0x40a00000
                int32_t var_8a4_1 = 0x40a00000
                int64_t* rax_55 = sub_140e50180(&var_558)
                rax_55[0x34].d = 0x40a00000
                *(rax_55 + 0x1a4) = 0x40a00000
                rax_55[0x35].b = 1
                sub_140692f90(&rax_55[0x36], &var_898)
                void*** rax_56 = sub_140e48fc0()
                void*** var_910_1 = rax_56
                var_918 = &rax_56[2]
                sub_140918950(&var_918, &rax_56[2])
                int64_t var_998_4 = 0x2c8
                void* var_908_1 = &var_983
                void* var_740
                void** rax_57 =
                    sub_140e57660(&var_918, &var_740, rax_55, sub_140e23ed0(&rax_56[2], "SSpacer"))
                int64_t* rsi_2 = rax_57[1]
                void* r12_2 = *rax_57
                
                if (rsi_2 != 0)
                    rsi_2[1].d += 1
                
                int64_t* rbx_21 = data_143e243c8
                var_730.d = 3
                var_730:4.b = 1
                var_730:8.b = 1
                var_720.q = 0
                var_718.d = 0
                int64_t rax_59 =
                    (*(*rbx_21 + 0x48))(rbx_21, *sub_140b58170(&var_8e0, "NoBorder", 1), 0)
                var_948.b = 1
                var_950.q = rax_59
                char var_768_1 = 1
                var_940.q = 0
                int32_t var_938_1 = 0
                int64_t var_760 = 0
                int32_t var_758_1 = 0
                int128_t var_778_1 = zx.o(0)
                int64_t* rax_60
                int128_t zmm6_1
                rax_60, zmm6_1 = sub_14068c640(&var_398)
                rax_60[0x39].b = 1
                *(rax_60 + 0x1b8) = zmm6_1
                sub_140692f90(&rax_60[0x3a], &var_760)
                rax_60[0x44] = rax_59
                rax_60[0x45].b = 1
                sub_140692f90(&rax_60[0x46], &var_940)
                
                if (&var_730 != &rax_60[8])
                    rax_60[8].d = 3
                    *(rax_60 + 0x44) = 1
                
                rax_60[9].b = 1
                
                if (&var_720 != &rax_60[0xa] && rax_60[0xb].d != 0)
                    int64_t* rcx_96 = rax_60[0xa]
                    
                    if (rcx_96 != 0)
                        (*(*rcx_96 + 0x38))(rcx_96, 0)
                        int64_t rcx_97 = rax_60[0xa]
                        
                        if (rcx_97 != 0)
                            rax_60[0xa] = sub_140a84c80(rcx_97, 0, 0)
                        
                        rax_60[0xb].d = 0
                
                void* var_878 = r12_2
                
                if (rsi_2 != 0)
                    rsi_2[1].d += 1
                
                if (&var_878 != &rax_60[0x34])
                    var_878.o = *(rax_60 + 0x1a0)
                    *(rax_60 + 0x1a0) = var_878.o
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp45_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp45_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                void*** rax_66 = sub_140e916e0()
                var_8c8:8.q = rax_66
                var_8c8.q = &rax_66[2]
                sub_14065fa30(&var_8c8, &rax_66[2])
                int64_t var_998_5 = 0x4b8
                void* var_8b8_1 = &var_984
                sub_140695920(&var_8c8, &var_8f8, rax_60, sub_140e23ed0(&rax_66[2], "SBorder"))
                sub_140669d70(&var_8c8)
                sub_14068fed0(&var_398)
                sub_140745b20(&var_760)
                sub_140745b20(&var_940)
                sub_140745b20(&var_720)
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp49_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp49_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                int64_t* var_738
                
                if (var_738 != 0)
                    var_738[1].d -= 1
                    
                    if (var_738[1].d == 1)
                        (**var_738)(var_738)
                        int32_t temp50_1 = *(var_738 + 0xc)
                        *(var_738 + 0xc) -= 1
                        
                        if (temp50_1 == 1)
                            (*(*var_738 + 8))(var_738, 1)
                
                sub_140597060(&var_918)
                sub_140745b20(&var_3a8)
                sub_140ddea30(&var_558)
                sub_140745b20(&var_898)
                
                if (rbx_7 != 0)
                    *(rbx_7 + 0xc) += 4
                
                int64_t var_7c0 = 0
                int32_t var_7b8_1 = 0
                void*** rax_71 = sub_1405978f0(0x30, &var_7c0)
                void* rdi_15 = var_8f8
                
                if (rax_71 != 0)
                    *rax_71 = &data_142ee9af0
                    rax_71[1] = r15_2
                    rax_71[2] = rdi_15
                    rax_71[3] = rbx_7
                    
                    if (rbx_7 != 0)
                        *(rbx_7 + 0xc) += 1
                    
                    rax_71[5] = sub_140a387b0()
                
                sub_140e24ba0(rdi_15, &var_7c0)
                int64_t var_798 = 0
                int32_t var_790_1 = 0
                void*** rax_73 = sub_1405978f0(0x30, &var_798)
                
                if (rax_73 != 0)
                    *rax_73 = &data_142ee9b40
                    rax_73[1] = r15_2
                    rax_73[2] = rdi_15
                    rax_73[3] = rbx_7
                    
                    if (rbx_7 != 0)
                        *(rbx_7 + 0xc) += 1
                    
                    rax_73[5] = sub_140a387b0()
                
                sub_140e24bd0(rdi_15, &var_798)
                var_888 = nullptr
                int32_t var_880_1 = 0
                void*** rax_75 = sub_1405978f0(0x30, &var_888)
                
                if (rax_75 != 0)
                    *rax_75 = &data_142ee9b90
                    rax_75[1] = r15_2
                    rax_75[2] = rdi_15
                    rax_75[3] = rbx_7
                    
                    if (rbx_7 != 0)
                        *(rbx_7 + 0xc) += 1
                    
                    rax_75[5] = sub_140a387b0()
                
                sub_140e24c30(rdi_15, &var_888)
                var_980.d = 0xbf800000
                var_980:4.b = 0
                var_978 = nullptr
                var_970_1 = 0
                int64_t var_820 = 0
                int32_t var_818_1 = 0
                void*** rax_77 = sub_1405978f0(0x20, &var_820)
                
                if (rax_77 != 0)
                    rax_77[1] = r15_2
                    *rax_77 = &data_142ee9be0
                    rax_77[3] = sub_140a387b0()
                
                var_980:4.b = 1
                sub_1407473e0(&var_978, &var_820)
                sub_140745b20(&var_820)
                var_918.o = var_8f8.o
                
                if (rbx_7 != 0)
                    rbx_7[1].d += 1
                
                var_8c8 = var_808
                
                if (var_800 != 0)
                    var_800[1].d += 1
                
                void*** rax_79 = sub_140e258e0()
                *(rax_79 + 0x24) = 3
                void* rax_80 = sub_140de1aa0(rax_79, &var_918)
                void* rax_82 = sub_140de1aa0(sub_140e258e0(), &var_8c8)
                void* rax_85 = sub_140de1c90(sub_140de1c90(sub_140dd5d30(&var_708), rax_82), rax_80)
                void var_960
                void* var_998_6 = &var_960
                void** rax_86
                int128_t zmm1_7
                rax_86, zmm1_7 = sub_140dd3710(&var_730, "SOverlay")
                void** rax_87 = sub_140de49c0(rax_86, &var_850, rax_85, zmm1_7)
                var_7f8 = *rax_87
                void* rcx_129 = rax_87[1]
                void* var_7f0_1 = rcx_129
                
                if (rcx_129 != 0)
                    *(rcx_129 + 8) += 1
                
                int64_t* rax_88
                int128_t zmm1_8
                rax_88, zmm1_8 = sub_14068c940(&var_398)
                rax_88[0x3c].d = var_980.d
                *(rax_88 + 0x1e4) = var_980:4.b
                sub_1407473e0(&rax_88[0x3d], &var_978)
                void* rax_89 = sub_1406937a0(rax_88, &var_7f8, zmm1_8)
                void var_95f
                int64_t* rax_90
                int128_t zmm1_9
                rax_90, zmm1_9 = sub_1406883e0(&var_8a8, "SBox", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Widgets/Views/SHeaderRow.cpp", 
                    0x2d8, &var_95f)
                void** rax_91 = sub_140695d20(rax_90, &var_868, rax_89, zmm1_9)
                int64_t* rbx_36 = rax_91[1]
                var_7e8 = *rax_91
                int64_t* var_7e0_1 = rbx_36
                
                if (rbx_36 != 0)
                    rbx_36[1].d += 1
                
                var_950 = 0
                char var_94c_1 = 1
                var_948 = 0
                var_940 = 0
                sub_140e99b50(sub_140edb400(sub_140f2a990(rbx_6, 0xffffffff), &var_950), &var_7e8)
                sub_140745b20(&var_948)
                
                if (rbx_36 != 0)
                    rbx_36[1].d -= 1
                    
                    if (rbx_36[1].d == 1)
                        (**rbx_36)(rbx_36)
                        int32_t temp53_1 = *(rbx_36 + 0xc)
                        *(rbx_36 + 0xc) -= 1
                        
                        if (temp53_1 == 1)
                            (*(*rbx_36 + 8))(rbx_36, 1)
                
                int64_t* rbx_37 = var_860
                
                if (rbx_37 != 0)
                    rbx_37[1].d -= 1
                    
                    if (rbx_37[1].d == 1)
                        (**rbx_37)(rbx_37)
                        int32_t temp55_1 = *(rbx_37 + 0xc)
                        *(rbx_37 + 0xc) -= 1
                        
                        if (temp55_1 == 1)
                            (*(*rbx_37 + 8))(rbx_37, 1)
                
                sub_140669d70(&var_8a8)
                sub_140690290(&var_398)
                
                if (rax_5 != 0)
                    rax_5[1].d -= 1
                    
                    if (rax_5[1].d == 1)
                        (**rax_5)(rax_5)
                        int32_t temp56_1 = *(rax_5 + 0xc)
                        *(rax_5 + 0xc) -= 1
                        
                        if (temp56_1 == 1)
                            (*rax_5)[1](rax_5, 1)
                
                sub_140597060(&var_730)
                
                if (var_568 != 0)
                    sub_140a74f90(var_568)
                
                sub_140ddea30(&var_708)
                
                if (var_800 != 0)
                    var_800[1].d -= 1
                    
                    if (var_800[1].d == 1)
                        (**var_800)(var_800)
                        int32_t temp59_1 = *(var_800 + 0xc)
                        *(var_800 + 0xc) -= 1
                        
                        if (temp59_1 == 1)
                            (*(*var_800 + 8))(var_800, 1)
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t temp61_1 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (temp61_1 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
                
                sub_140745b20(&var_978)
                
                if (rbx_7 != 0)
                    int32_t temp60_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    int32_t rax_104 = *(rbx_7 + 0xc)
                    
                    if (temp60_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
                        rax_104 = *(rbx_7 + 0xc)
                    
                    int32_t rax_107 = rax_104 - 1
                    *(rbx_7 + 0xc) = rax_107
                    
                    if (rax_104 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
                        rax_107 = *(rbx_7 + 0xc)
                    
                    int32_t rax_109 = rax_107 - 1
                    *(rbx_7 + 0xc) = rax_109
                    
                    if (rax_107 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
                        rax_109 = *(rbx_7 + 0xc)
                    
                    *(rbx_7 + 0xc) = rax_109 - 1
                    
                    if (rax_109 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t temp66_1 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (temp66_1 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
                
                r12_1 = var_930_1
            
            if (var_800 != 0)
                var_800[1].d -= 1
                
                if (var_800[1].d == 1)
                    (**var_800)(var_800)
                    int32_t temp35_1 = *(var_800 + 0xc)
                    *(var_800 + 0xc) -= 1
                    
                    if (temp35_1 == 1)
                        (*(*var_800 + 8))(var_800, 1)
            
            if (r12_1 != 0)
                r12_1[1].d -= 1
                
                if (r12_1[1].d == 1)
                    (**r12_1)(r12_1)
                    int32_t temp36_1 = *(r12_1 + 0xc)
                    *(r12_1 + 0xc) -= 1
                    
                    if (temp36_1 == 1)
                        (*(*r12_1 + 8))(r12_1, 1)
            
            r8_7 = var_958_1
            i_1 = i_2
            rcx_66 = arg1
        
        i_1 += 1
        r8_7 += 1
        i_2 = i_1
        var_958_1 = r8_7
    while (i_1 s< rcx_66[0x98].d)
    
    if (r13 != 0)
        r13[1].d -= 1
        
        if (r13[1].d == 1)
            (**r13)(r13)
            int32_t temp25_1 = *(r13 + 0xc)
            *(r13 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*r13 + 8))(r13, 1)
            
            rcx_66 = arg1

zmm0_2 = var_7a8
var_7a8 = zmm0_2
zmm0_2 = _mm_bsrli_si128(zmm0_2, 8)
int64_t* rbx_39 = zmm0_2.q

if (rbx_39 != 0)
    rbx_39[1].d += 1

int64_t result = (*(*rcx_66 + 0x240))(zmm0_2, &var_7a8)

if (rbx_39 != 0)
    rbx_39[1].d -= 1
    
    if (rbx_39[1].d == 1)
        result = (**rbx_39)(rbx_39)
        int32_t temp20_1 = *(rbx_39 + 0xc)
        *(rbx_39 + 0xc) -= 1
        
        if (temp20_1 == 1)
            result = (*(*rbx_39 + 8))(rbx_39, 1)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        result = (**r12)(r12)
        int32_t temp21_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp21_1 == 1)
            result = (*r12)[1](r12, 1)

__security_check_cookie(rax_1 ^ &var_9b8)
return result
