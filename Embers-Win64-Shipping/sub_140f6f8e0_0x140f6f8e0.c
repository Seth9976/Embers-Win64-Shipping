// 函数: sub_140f6f8e0
// 地址: 0x140f6f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2990)
void var_29c8
int64_t rax_1 = __security_cookie ^ &var_29c8
sub_140de9d00(arg1, arg2, arg2 + 0x30, arg2 + 0x40, arg5, arg2 + 0x60, arg2 + 0x78, *(arg2 + 0x90), 
    arg2 + 0x98, arg2 + 0xc8, arg2 + 0xe8, *(arg2 + 0x94), *(arg2 + 0x95), *(arg2 + 0x96), 
    arg2 + 0xf0, arg2 + 0x190)
void* r15_1 = arg1
*(r15_1 + 0x410) = *(arg2 + 0x1a0)
*(r15_1 + 0x408) = *arg3
*(r15_1 + 0x390) = arg3[0x1d].d
*(r15_1 + 0x394) = *(arg3 + 0xec)
sub_1407473e0(r15_1 + 0x398, &arg3[0x1e])
*(r15_1 + 0x3a8) = arg3[0x20].d
*(r15_1 + 0x3ac) = *(arg3 + 0x104)
sub_1407473e0(r15_1 + 0x3b0, &arg3[0x21])
void* rsi_1 = r15_1 + 0x3c0
sub_1407473e0(rsi_1, &arg3[0x23])
int64_t* rbx_1 = arg3[0x17]
int64_t var_28a0 = arg3[0x16]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_28a0 != r15_1 + 0x3d0)
    int128_t zmm1 = var_28a0.o
    int128_t var_2100_1 = zmm1
    var_28a0.o = *(r15_1 + 0x3d0)
    *(r15_1 + 0x3d0) = zmm1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int128_t zmm0_1 = *arg4
*(r15_1 + 0x3f0) = *(arg3 + 0xdc)
int64_t var_28d8 = arg3[1]
int64_t* rax_17 = arg3[2]
int128_t var_2720 = zmm0_1

if (rax_17 != 0)
    rax_17[1].d += 1

int32_t var_28c8 = arg3[3].d
char var_28c0 = arg3[4].b
int64_t var_28b8 = 0
int32_t var_28b0 = 0
sub_140692f90(&var_28b8, &arg3[5])
int64_t var_27a8 = arg3[7]
void* rax_21 = arg3[8]
void* var_27a0 = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

int32_t var_2798 = arg3[9].d
char var_2790 = arg3[0xa].b
int64_t var_2788 = 0
int32_t var_2780 = 0
sub_140692f90(&var_2788, &arg3[0xb])
void* var_2928

if (arg3[0x14] == data_143e244b0)
    if (arg3[4].b == 0)
        int64_t var_2328
        int64_t* rax_25 = sub_140b63b70(arg3, &var_2328)
        void* rcx_9 = *rax_25
        int32_t rdx_6 = rax_25[1].d
        int32_t rdx_7 = neg.d(rdx_6)
        *rax_25 = 0
        int32_t r8_1 = rax_25[1].d
        var_2928 = rcx_9
        int32_t rcx_10 = *(rax_25 + 0xc)
        int32_t rdx_10 = sbb.d(rdx_7, rdx_7, rdx_6 != 0) + 0xf + r8_1
        rax_25[1] = 0
        
        if (rdx_10 s> rcx_10)
            sub_1405947f0(&var_2928, rdx_10)
        
        sub_140a20ba0(&var_2928, u"[LabelMissing]", 0xe)
        void* var_27b8 = var_2928
        int32_t var_27b0_1 = r8_1
        int32_t var_27ac_1 = rcx_10
        int32_t var_2920_1
        var_2920_1.q = 0
        var_2928 = nullptr
        void var_2118
        int64_t* rax_29 = sub_140aae2f0(&var_2118, &var_27b8)
        int64_t r8_2 = *rax_29
        void* rdx_12 = rax_29[1]
        
        if (rdx_12 != 0)
            *(rdx_12 + 8) += 1
        
        int32_t rcx_14 = rax_29[2].d
        int64_t var_2758_2 = var_28d8
        void* var_28d0_1 = rdx_12
        int32_t var_2748_1 = rcx_14
        int32_t var_28c8_1 = rcx_14
        char var_2740_1 = 1
        int64_t var_2738 = 0
        int32_t var_2730_1 = 0
        var_28d8 = r8_2
        var_28c0 = 1
        sub_1407473e0(&var_28b8, &var_2738)
        sub_140745b20(&var_2738)
        
        if (rax_17 != 0)
            rax_17[1].d -= 1
            
            if (rax_17[1].d == 1)
                (**rax_17)(rax_17)
                int32_t rax_34 = *(rax_17 + 0xc)
                *(rax_17 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*rax_17 + 8))(rax_17, 1)
        
        int64_t* var_2110
        
        if (var_2110 != 0)
            var_2110[1].d -= 1
            
            if (var_2110[1].d == 1)
                (**var_2110)(var_2110)
                int32_t rdi_1 = *(var_2110 + 0xc)
                *(var_2110 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_2110 + 8))(var_2110, zx.q(rdi_1))
        
        void* rcx_21 = var_27b8
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int64_t rcx_22 = var_2328
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
    
    if (arg3[0xa].b == 0)
        sub_14065da90(&var_27a8, &var_28d8)
        var_2790 = var_28c0
        sub_140692f90(&var_2788, &var_28b8)

void*** rax_40 = j_sub_140a82f30(0x2e0)
void*** rdi_2 = rax_40

if (rax_40 == 0)
    rdi_2 = nullptr
else
    rax_40[1].d = 1
    *(rax_40 + 0xc) = 1
    *rdi_2 = &data_142ecd308
    
    if (rdi_2 != -0x10)
        sub_140dde040(&rdi_2[2])

void* var_2680 = &rdi_2[2]
sub_140918950(&var_2680, &rdi_2[2])
int64_t var_29a8_1 = 0x2d0
void var_2948
void* var_2670 = &var_2948
sub_140e23ed0(&rdi_2[2], "SOverlay")
void var_20f0
int64_t* rax_41
int128_t zmm1_1
rax_41, zmm1_1 = sub_140dd5d30(&var_20f0)
int64_t* var_2708
sub_140de49c0(&var_2680, &var_2708, rax_41, zmm1_1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rdi_2)[1](rdi_2, 1)

int64_t var_1f50

if (var_1f50 != 0)
    sub_140a74f90(var_1f50)

sub_140ddea30(&var_20f0)
void*** rax_44 = j_sub_140a82f30(0x2e8)
void*** r14_1 = rax_44

if (rax_44 == 0)
    r14_1 = nullptr
else
    rax_44[1].d = 1
    *(rax_44 + 0xc) = 1
    *r14_1 = &data_142d8c590
    
    if (r14_1 != -0x10)
        sub_14068e500(&r14_1[2])

void* r13_1 = &r14_1[2]
void*** var_2660 = r14_1
var_2928 = r13_1
void* var_2668 = r13_1
sub_14065fa30(&var_2668, r13_1)
int64_t var_29a8_2 = 0x2d8
void var_2947
void* var_2658 = &var_2947
sub_140e23ed0(r13_1, "SHorizontalBox")
bool cond:0 = r14_1 == 0

if (r14_1 != 0)
    r14_1[1].d += 1
    cond:0 = r14_1 == 0

if (cond:0)
    r14_1 = nullptr

void var_1f40
int64_t* rax_45
int128_t zmm1_2
rax_45, zmm1_2 = sub_14068d420(&var_1f40)
void* var_2318
void** rax_46 = sub_140696920(&var_2668, &var_2318, rax_45, zmm1_2)
int64_t* rbx_6 = rax_46[1]
void* var_2570 = *rax_46
int64_t* var_2568 = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1

sub_140de1aa0(sub_140de7320(var_2708, 0), &var_2570)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp9_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* var_2310

if (var_2310 != 0)
    var_2310[1].d -= 1
    
    if (var_2310[1].d == 1)
        (**var_2310)(var_2310)
        int32_t temp11_1 = *(var_2310 + 0xc)
        *(var_2310 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_2310 + 8))(var_2310, 1)

if (var_2660 != 0)
    var_2660[1].d -= 1
    
    if (var_2660[1].d == 1)
        (**var_2660)(var_2660)
        int32_t temp12_1 = *(var_2660 + 0xc)
        *(var_2660 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*var_2660)[1](var_2660, 1)

int64_t var_1da0

if (var_1da0 != 0)
    sub_140a74f90(var_1da0)

sub_140660250(&var_1f40)
int64_t* rax_54 = arg3[0x15]
int64_t* rcx_50 = arg3[0x14]
int64_t* var_2938 = rcx_50
int64_t* var_2930 = rax_54

if (rax_54 != 0)
    rax_54[1].d += 1
    rcx_50 = var_2938

char* (* var_2908)(void* arg1, char* arg2)
int128_t zmm0_2

if (rcx_50 == data_143e244b0)
    int128_t* r15_2
    int128_t var_22f8
    
    if (*(rsi_1 + 8) == 0)
        r15_2 = &var_22f8
        var_22f8 = data_142ee9cf0
    else
        int64_t* rcx_51 = *rsi_1
        
        if (rcx_51 == 0)
            r15_2 = &var_22f8
            var_22f8 = data_142ee9cf0
        else if ((*(*rcx_51 + 0x28))(rcx_51) == 0)
            r15_2 = &var_22f8
            var_22f8 = data_142ee9cf0
        else
            int128_t var_2308
            r15_2 = &var_2308
            var_2308 = data_142e1c7a0
    zmm0_2 = *r15_2
    char var_2470_1 = 1
    int64_t var_2468 = 0
    int128_t var_2480_1 = zmm0_2
    int32_t var_2460_1 = 0
    void var_498
    int64_t* rax_57 = sub_14068d9d0(&var_498)
    sub_14065da90(&rax_57[0x34], &var_28d8)
    rax_57[0x37].b = var_28c0
    sub_140692f90(&rax_57[0x38], &var_28b8)
    sub_14065da90(rax_57, &var_27a8)
    rax_57[3].b = var_2790
    sub_140692f90(&rax_57[4], &var_2788)
    void*** rax_58 = j_sub_140a82f30(0x7a8)
    void*** rdi_3 = rax_58
    
    if (rax_58 == 0)
        rdi_3 = nullptr
    else
        rax_58[1].d = 1
        *(rax_58 + 0xc) = 1
        *rdi_3 = &data_142d8b060
        
        if (rdi_3 != -0x10)
            sub_140f66da0(&rdi_3[2])
    
    void* var_26c8 = &rdi_3[2]
    sub_14065fa30(&var_26c8, &rdi_3[2])
    int64_t var_29a8_3 = 0x798
    void var_2946
    void* var_26b8_1 = &var_2946
    void* var_22d8
    void** rax_59 =
        sub_140697520(&var_26c8, &var_22d8, rax_57, sub_140e23ed0(&rdi_3[2], "STextBlock"))
    var_2908 = *rax_59
    void* rcx_64 = rax_59[1]
    int32_t var_2900
    var_2900.q = rcx_64
    
    if (rcx_64 != 0)
        *(rcx_64 + 8) += 1
    
    void var_1430
    int64_t* rax_60 = sub_14068c940(&var_1430)
    rax_60[0x37].b = 1
    *(rax_60 + 0x1a8) = *r15_2
    sub_140692f90(&rax_60[0x38], &var_2468)
    *(rax_60 + 0x1a4) = 2
    void*** rax_61 = j_sub_140a82f30(0x3d8)
    void*** rdi_4 = rax_61
    
    if (rax_61 == 0)
        rdi_4 = nullptr
    else
        rax_61[1].d = 1
        *(rax_61 + 0xc) = 1
        *rdi_4 = &data_142d8c570
        
        if (rdi_4 != -0x10)
            sub_140f20750(&rdi_4[2])
    
    void* var_2698 = &rdi_4[2]
    sub_14065fa30(&var_2698, &rdi_4[2])
    var_29a8_2 = 0x3c8
    void var_2945
    void* var_2688_1 = &var_2945
    void* rax_62
    int128_t zmm1_5
    rax_62, zmm1_5 = sub_1406937a0(rax_60, &var_2908, sub_140e23ed0(&rdi_4[2], "SBox"))
    void* var_21c0
    void** rax_63 = sub_140695d20(&var_2698, &var_21c0, rax_62, zmm1_5)
    int64_t* rcx_72 = rax_63[1]
    
    if (rcx_72 != 0)
        rcx_72[1].d += 1
    
    int64_t* rbx_11 = var_2930
    int64_t* rax_64 = var_2938
    var_2938 = *rax_63
    int64_t* var_2890_2 = rax_64
    var_2930 = rcx_72
    int64_t* var_2888_2 = rbx_11
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp23_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*rbx_11 + 8))(rbx_11, 1)
    
    int64_t* var_21b8
    
    if (var_21b8 != 0)
        var_21b8[1].d -= 1
        
        if (var_21b8[1].d == 1)
            (**var_21b8)(var_21b8)
            int32_t temp28_1 = *(var_21b8 + 0xc)
            *(var_21b8 + 0xc) -= 1
            
            if (temp28_1 == 1)
                (*(*var_21b8 + 8))(var_21b8, 1)
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp32_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*rdi_4)[1](rdi_4, 1)
    
    sub_140690290(&var_1430)
    int64_t* var_22d0
    
    if (var_22d0 != 0)
        var_22d0[1].d -= 1
        
        if (var_22d0[1].d == 1)
            (**var_22d0)(var_22d0)
            int32_t temp37_1 = *(var_22d0 + 0xc)
            *(var_22d0 + 0xc) -= 1
            
            if (temp37_1 == 1)
                (*(*var_22d0 + 8))(var_22d0, 1)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp41_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*rdi_3)[1](rdi_3, 1)
    
    sub_1406913d0(&var_498)
    sub_140745b20(&var_2468)
    r15_1 = arg1

void* var_28f0

if (*(rsi_1 + 8) != 0)
    int64_t* rcx_86 = *rsi_1
    
    if (rcx_86 != 0 && (*(*rcx_86 + 0x28))(rcx_86) != 0)
        zmm0_2 = zx.o(0)
        var_2908 = sub_140f86250
        int32_t var_2900_1 = 0
        int128_t var_2458
        __builtin_memcpy(&var_2458, 
            "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 0x11)
        int64_t var_2440 = 0
        int128_t var_2188
        __builtin_memcpy(&var_2188, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
        int32_t var_2438_1 = 0
        int128_t var_2170 = zmm0_2
        int128_t var_24c0
        __builtin_memcpy(&var_24c0, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
        int128_t var_24a8_1 = zmm0_2
        char var_2498_1 = 1
        int64_t var_2490 = 0
        int32_t var_2488_1 = 0
        sub_140b58170(&var_28f0, "NoBorder", 1)
        uint128_t zmm0_4 = var_2938.o
        uint128_t var_22b8 = zmm0_4
        int64_t* rax_77 = _mm_bsrli_si128(zmm0_4, 8).q
        
        if (rax_77 != 0)
            rax_77[1].d += 1
        
        int64_t* rbx_16 = data_143e243c8
        void var_828
        int64_t* rax_78
        int128_t zmm6_1
        rax_78, zmm6_1 = sub_14068cc20(&var_828)
        void* r8_11 = var_28f0
        int64_t r9_5 = *rbx_16
        void* var_2828_1 = r8_11
        int64_t rax_79 = (*(r9_5 + 0x88))(rbx_16, data_143e243e8, r8_11, r9_5, var_29a8_2)
        
        if (rax_79 == 0)
            rax_79, zmm6_1 = sub_140e13010()
        
        rax_78[0x36] = rax_79
        sub_140693390(&rax_78[0x60], &var_24c0)
        rax_78[0x65].b = var_2498_1
        sub_140692f90(&rax_78[0x66], &var_2490)
        rax_78[0x3b].b = 1
        *(rax_78 + 0x1c8) = zmm6_1
        sub_140692f90(&rax_78[0x3c], &var_2440)
        int128_t var_22c8 = var_2908.o
        int64_t* var_28e8
        sub_140692f90(&rax_78[0x44], sub_140e45ef0(&var_28e8, r15_1, &var_22c8))
        int32_t var_28e0
        int64_t* rax_83
        
        if (var_28e0 == 0)
            rax_83 = var_28e8
        label_140f705d0:
            
            if (rax_83 != 0)
                sub_140a74f90(rax_83)
        else
            int64_t* rcx_95 = var_28e8
            
            if (rcx_95 != 0)
                (*(*rcx_95 + 0x38))(rcx_95, 0)
                rax_83 = var_28e8
                
                if (rax_83 != 0)
                    rax_83 = sub_140a84c80(rax_83, 0, 0)
                    var_28e8 = rax_83
                
                int32_t var_28e0_1 = 0
                goto label_140f705d0
        void*** rax_84 = sub_140688970()
        void*** var_26a8_1 = rax_84
        int64_t* var_26b0 = &rax_84[2]
        sub_14065fa30(&var_26b0, &rax_84[2])
        int64_t var_29a8_4 = 0x5b8
        void var_2944
        void* var_26a0_1 = &var_2944
        void* rax_85
        int128_t zmm1_7
        rax_85, zmm1_7 = sub_1406936e0(rax_78, &var_22b8, sub_140e23ed0(&rax_84[2], "SButton"))
        int64_t* var_22a8
        int64_t** rax_86 = sub_140696120(&var_26b0, &var_22a8, rax_85, zmm1_7)
        int64_t* rcx_102 = rax_86[1]
        
        if (rcx_102 != 0)
            rcx_102[1].d += 1
        
        int64_t* rax_87 = var_2938
        var_2938 = *rax_86
        int64_t* var_2880_2 = rax_87
        var_2930 = rcx_102
        int64_t* var_2878_2 = rax_77
        
        if (rax_77 != 0)
            rax_77[1].d -= 1
            
            if (rax_77[1].d == 1)
                (**rax_77)(rax_77)
                int32_t temp21_1 = *(rax_77 + 0xc)
                *(rax_77 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*rax_77 + 8))(rax_77, 1)
        
        int64_t* var_22a0
        
        if (var_22a0 != 0)
            var_22a0[1].d -= 1
            
            if (var_22a0[1].d == 1)
                (**var_22a0)(var_22a0)
                int32_t temp26_1 = *(var_22a0 + 0xc)
                *(var_22a0 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*var_22a0 + 8))(var_22a0, 1)
        
        sub_140669d70(&var_26b0)
        sub_1406905f0(&var_828)
        sub_140745b20(&var_2490)
        sub_140ddfb70(&var_24c0)
        sub_140597060(&var_2170)
        sub_140745b20(&var_2440)

int32_t var_2650 = 0x3f800000
int128_t var_2298 = var_2938.o
char var_264c = 1
int64_t var_2648 = 0
int32_t var_2640 = 0

if (var_2930 != 0)
    var_2930[1].d += 1

sub_140693860(sub_140eb9be0(sub_140ea2880(r13_1), &var_2650), &var_2298)
sub_140745b20(&var_2648)
int64_t (* var_2818)(void* arg1)
char* (* var_27c8)(void* arg1, char* arg2)

if (arg3[0x16] != data_143e244b0)
    char rbx_20 = data_1439ae51f
    int64_t rdi_7 = *(r15_1 + 0x410) + 0x338
    char var_2608_1 = rbx_20
    int64_t var_2520_1 = rdi_7
    char var_2607_1 = 1
    int64_t var_2600 = 0
    int32_t var_25f8_1 = 0
    var_2908 = sub_140f75180
    int32_t var_2900_2 = 0
    char var_2518_1 = 1
    int64_t var_2510 = 0
    int32_t var_2508_1 = 0
    void var_1860
    int64_t* rax_96 = sub_140e4fb70(&var_1860)
    rax_96[0x34] = rdi_7
    rax_96[0x35].b = 1
    sub_140692f90(&rax_96[0x36], &var_2510)
    int128_t var_2288 = var_2908.o
    void var_2278
    int64_t* rax_97 = sub_140e45dd0(&var_2278, r15_1, &var_2288)
    char var_24d8_1 = 1
    int64_t var_24d0 = 0
    int128_t var_2500
    __builtin_memcpy(&var_2500, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    int32_t var_24c8_1 = 0
    int128_t var_24e8_1 = zx.o(0)
    sub_140692f90(&var_24d0, rax_97)
    sub_140693390(&rax_96[0x38], &var_2500)
    rax_96[0x3d].b = var_24d8_1
    sub_1407473e0(&rax_96[0x3e], &var_24d0)
    sub_140745b20(&var_24d0)
    sub_140ddfb70(&var_2500)
    sub_140745b20(&var_2278)
    rax_96[0xf].b = rbx_20
    *(rax_96 + 0x79) = 1
    sub_1407473e0(&rax_96[0x10], &var_2600)
    void*** rax_99 = sub_140e48c50()
    void*** var_2618_1 = rax_99
    void* var_2620 = &rax_99[2]
    sub_140918950(&var_2620, &rax_99[2])
    int64_t var_29a8_5 = 0x3a8
    void var_2943
    void* var_2610_1 = &var_2943
    void* var_2198
    void** rax_100 =
        sub_140e56930(&var_2620, &var_2198, rax_96, sub_140e23ed0(&rax_99[2], "SImage"))
    void* var_2550 = *rax_100
    int64_t* rcx_131 = rax_100[1]
    int64_t* var_2548_1 = rcx_131
    
    if (rcx_131 != 0)
        rcx_131[1].d += 1
    
    int32_t var_2590_1 = 0x41600000
    int32_t var_258c_1 = 0
    char var_2588_1 = 1
    int64_t var_2580 = 0
    int32_t var_2578_1 = 0
    void var_1a20
    int64_t* rax_101 = sub_140e50180(&var_1a20)
    rax_101[0x34] = 0x41600000
    rax_101[0x35].b = 1
    sub_140692f90(&rax_101[0x36], &var_2580)
    void*** rax_102 = sub_140e48fc0()
    void*** var_2630_1 = rax_102
    void* var_2638 = &rax_102[2]
    sub_140918950(&var_2638, &rax_102[2])
    int64_t var_29a8_6 = 0x2c8
    void var_2942
    void* var_2628_1 = &var_2942
    void* var_2348
    void** rax_103 =
        sub_140e57660(&var_2638, &var_2348, rax_101, sub_140e23ed0(&rax_102[2], "SSpacer"))
    int64_t* rsi_5 = rax_103[1]
    void* r13_2 = *rax_103
    
    if (rsi_5 != 0)
        rsi_5[1].d += 1
    
    char var_2420_1 = 1
    int64_t var_2418 = 0
    int32_t var_2410_1 = 0
    int128_t var_2430_1 = zx.o(0)
    int64_t var_2728
    sub_140b58170(&var_2728, "NoBorder", 1)
    int64_t* rdi_9 = data_143e243c8
    int32_t var_25d0_1 = var_2720:8.d.d
    var_2908 = sub_140f75090
    int32_t var_2900_3 = 0
    int128_t var_2268 = var_2908.o
    int64_t var_25d8_1 = 0
    int32_t var_25cc_1 = 0
    char var_25c8_1 = 1
    int64_t var_25c0 = 0
    int32_t var_25b8_1 = 0
    void var_1190
    int64_t* rax_104 = sub_140e936b0(&var_1190)
    *(rax_104 + 0x201) = 0
    int64_t rbx_23 = *rdi_9
    void** var_28a8
    int64_t* rax_105
    int128_t zmm6_2
    rax_105, zmm6_2 = sub_140e1ad30(&var_28a8, var_2728, nullptr)
    int64_t rax_106 = (*(rbx_23 + 0x88))(rdi_9, data_143e243e8, *rax_105)
    
    if (rax_106 == 0)
        rax_106, zmm6_2 = sub_140e13010()
    
    rax_104[0x35] = rax_106
    rax_104[0x53].b = 1
    *(rax_104 + 0x288) = zmm6_2
    sub_140692f90(&rax_104[0x54], &var_2418)
    void* var_2870 = r13_2
    
    if (rsi_5 != 0)
        rsi_5[1].d += 1
    
    if (&var_2870 != &rax_104[0x36])
        var_2870.o = *(rax_104 + 0x1b0)
        *(rax_104 + 0x1b0) = var_2870.o
    
    if (rsi_5 != 0)
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d == 1)
            (**rsi_5)(rsi_5)
            int32_t temp25_1 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*rsi_5 + 8))(rsi_5, 1)
    
    int64_t* var_2560 = rax_104
    void* var_2558_1 = &rax_104[0x38]
    void*** rax_111 = sub_140e91840()
    void*** var_26d8_1 = rax_111
    void*** rbx_25 = rax_111
    int64_t* var_26e0 = &rax_111[2]
    sub_140918950(&var_26e0, &rax_111[2])
    int64_t var_29a8_7 = 0x3f8
    void var_2941
    void* var_26d0_1 = &var_2941
    sub_140e23ed0(&rax_111[2], "SComboButton")
    void* var_2860 = &rax_111[2]
    void*** var_2858 = rbx_25
    
    if (rbx_25 != 0)
        rbx_25[1].d += 1
    
    if (arg1 + 0x3e0 != &var_2860)
        *(arg1 + 0x3e0) = &rax_111[2]
        var_2860 = nullptr
        sub_14066a200(arg1 + 0x3e8, &var_2858)
        rbx_25 = var_2858
    
    if (rbx_25 != 0)
        rbx_25[1].d -= 1
        
        if (rbx_25[1].d == 1)
            (**rbx_25)(rbx_25)
            int32_t temp40_1 = *(rbx_25 + 0xc)
            *(rbx_25 + 0xc) -= 1
            
            if (temp40_1 == 1)
                (*rbx_25)[1](rbx_25, 1)
    
    void* rax_114
    int128_t zmm1_11
    rax_114, zmm1_11 = sub_140f685c0(&var_2560, arg1 + 0x3d0)
    int64_t* var_2368
    int64_t** rax_115 = sub_140e9b4e0(&var_26e0, &var_2368, rax_114, zmm1_11)
    int64_t* var_2808 = *rax_115
    void* rcx_153 = rax_115[1]
    void* var_2800_1 = rcx_153
    
    if (rcx_153 != 0)
        *(rcx_153 + 8) += 1
    
    void var_eb8
    int64_t* rax_116 = sub_14068c640(&var_eb8)
    rax_116[0x39].b = 1
    *(rax_116 + 0x1b8) = var_25d8_1.o
    sub_140692f90(&rax_116[0x3a], &var_25c0)
    void* rax_117
    int128_t zmm1_12
    rax_117, zmm1_12 = sub_140edf580(rax_116, arg1, &var_2268)
    void* rax_118 = sub_1406936e0(rax_117, &var_2808, zmm1_12)
    void var_2940
    void var_2148
    int64_t* rax_119
    int128_t zmm1_13
    rax_119, zmm1_13 = sub_140688320(&var_2148, "SBorder", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Widgets/Views/SHeaderRow.cpp", 
        0x8c, &var_2940)
    void* var_2358
    void** rax_120 = sub_140695920(rax_119, &var_2358, rax_118, zmm1_13)
    int64_t* r13_3 = rax_120[1]
    void* var_2540 = *rax_120
    int64_t* var_2538_1 = r13_3
    
    if (r13_3 != 0)
        r13_3[1].d += 1
    
    int32_t var_25b0_1 = 0x41400000
    int64_t var_25a0 = 0
    int32_t var_2598_1 = 0
    int32_t var_25ac_1 = 0
    char var_25a8_1 = 1
    void var_1be0
    int64_t* rax_121 = sub_140e50180(&var_1be0)
    rax_121[0x34] = 0x41400000
    rax_121[0x35].b = 1
    sub_140692f90(&rax_121[0x36], &var_25a0)
    void*** rax_122 = sub_140e48fc0()
    void*** var_26f0_1 = rax_122
    void* var_26f8 = &rax_122[2]
    sub_140918950(&var_26f8, &rax_122[2])
    int64_t var_29a8_9 = 0x2c8
    void var_293f
    void* var_26e8_1 = &var_293f
    void* var_22e8
    void** rax_123 =
        sub_140e57660(&var_26f8, &var_22e8, rax_121, sub_140e23ed0(&rax_122[2], "SSpacer"))
    int64_t* r15_5 = rax_123[1]
    var_27c8 = *rax_123
    int32_t var_27c0
    var_27c0.q = r15_5
    
    if (r15_5 != 0)
        r15_5[1].d += 1
    
    var_2808 = sub_140f76130
    var_2800_1.d = 0
    int128_t var_2258
    __builtin_memcpy(&var_2258, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x01", 0x11)
    int64_t var_2240_1 = 0
    int32_t var_2238_1 = 0
    void* rax_125 = sub_140f12c10(sub_140e258e0(), &var_2258)
    var_28f0 = rax_125
    int128_t var_2230
    __builtin_memcpy(&var_2230, 
        "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x01", 0x11)
    *(rax_125 + 0x24) = 0x302
    int64_t var_2218_1 = 0
    int32_t var_2210_1 = 0
    void var_1d90
    int64_t* rax_126 = sub_140dd5d30(&var_1d90)
    int128_t var_21a8 = var_2808.o
    void var_21d0
    int64_t* rax_127 = sub_140e45cb0(&var_21d0, arg1, &var_21a8)
    int16_t var_27e0_1 = 0x119
    int64_t var_27d8 = 0
    int32_t var_27d0_1 = 0
    sub_1407473e0(&var_27d8, rax_127)
    rax_126[0xf].b = var_27e0_1.b
    *(rax_126 + 0x79) = var_27e0_1:1.b
    sub_1407473e0(&rax_126[0x10], &var_27d8)
    sub_140745b20(&var_27d8)
    sub_140745b20(&var_21d0)
    void var_293e
    void* var_29a8_10 = &var_293e
    void* var_2160
    void** rax_130 = sub_140dd3710(&var_2160, "SOverlay")
    var_28a8 = rax_130
    int64_t* rbx_30 = rax_130[1]
    void* rcx_175 = *rax_130
    void* var_2850 = rcx_175
    int64_t* var_2848 = rbx_30
    
    if (rbx_30 != 0)
        rbx_30[1].d += 1
    
    if (arg1 + 0x3f8 != &var_2850)
        *(arg1 + 0x3f8) = rcx_175
        var_2850 = nullptr
        sub_14066a200(arg1 + 0x400, &var_2848)
        rbx_30 = var_2848
    
    if (rbx_30 != 0)
        rbx_30[1].d -= 1
        
        if (rbx_30[1].d == 1)
            (**rbx_30)(rbx_30)
            int32_t temp46_1 = *(rbx_30 + 0xc)
            *(rbx_30 + 0xc) -= 1
            
            if (temp46_1 == 1)
                (*(*rbx_30 + 8))(rbx_30, 1)
    
    void* rax_133 = sub_140de1aa0(var_28f0, &var_2550)
    void* rax_136 = sub_140de1aa0(sub_140f12c10(sub_140e258e0(), &var_2230), &var_2540)
    void* rax_138
    int128_t zmm1_15
    rax_138, zmm1_15 = sub_140de1aa0(sub_140e258e0(), &var_27c8)
    void* rax_141 = sub_140de1c90(sub_140de1c90(sub_140de1c90(rax_126, rax_138), rax_136), rax_133)
    void* var_21e0
    void** rax_142 = sub_140de49c0(var_28a8, &var_21e0, rax_141, zmm1_15)
    var_2818 = *rax_142
    void* rdx_84 = rax_142[1]
    int32_t var_2810
    var_2810.q = rdx_84
    
    if (rdx_84 != 0)
        *(rdx_84 + 8) += 1
    
    sub_140693860(sub_140698b50(sub_140ea2880(var_2928)), &var_2818)
    int64_t* var_21d8
    
    if (var_21d8 != 0)
        var_21d8[1].d -= 1
        
        if (var_21d8[1].d == 1)
            (**var_21d8)(var_21d8)
            int32_t temp48_1 = *(var_21d8 + 0xc)
            *(var_21d8 + 0xc) -= 1
            
            if (temp48_1 == 1)
                (*(*var_21d8 + 8))(var_21d8, 1)
    
    sub_140597060(&var_2160)
    int64_t var_1bf0
    
    if (var_1bf0 != 0)
        sub_140a74f90(var_1bf0)
    
    sub_140ddea30(&var_1d90)
    
    if (r15_5 != 0)
        r15_5[1].d -= 1
        
        if (r15_5[1].d == 1)
            (**r15_5)(r15_5)
            int32_t temp51_1 = *(r15_5 + 0xc)
            *(r15_5 + 0xc) -= 1
            
            if (temp51_1 == 1)
                (*(*r15_5 + 8))(r15_5, 1)
    
    int64_t* var_22e0
    
    if (var_22e0 != 0)
        var_22e0[1].d -= 1
        
        if (var_22e0[1].d == 1)
            (**var_22e0)(var_22e0)
            int32_t temp53_1 = *(var_22e0 + 0xc)
            *(var_22e0 + 0xc) -= 1
            
            if (temp53_1 == 1)
                (*(*var_22e0 + 8))(var_22e0, 1)
    
    sub_140597060(&var_26f8)
    void var_1a30
    sub_140745b20(&var_1a30)
    sub_140ddea30(&var_1be0)
    sub_140745b20(&var_25a0)
    
    if (r13_3 != 0)
        r13_3[1].d -= 1
        
        if (r13_3[1].d == 1)
            (**r13_3)(r13_3)
            int32_t temp55_1 = *(r13_3 + 0xc)
            *(r13_3 + 0xc) -= 1
            
            if (temp55_1 == 1)
                (*(*r13_3 + 8))(r13_3, 1)
    
    int64_t* var_2350
    
    if (var_2350 != 0)
        var_2350[1].d -= 1
        
        if (var_2350[1].d == 1)
            (**var_2350)(var_2350)
            int32_t temp57_1 = *(var_2350 + 0xc)
            *(var_2350 + 0xc) -= 1
            
            if (temp57_1 == 1)
                (*(*var_2350 + 8))(var_2350, 1)
    
    sub_140669d70(&var_2148)
    sub_14068fed0(&var_eb8)
    int64_t* var_2360
    
    if (var_2360 != 0)
        var_2360[1].d -= 1
        
        if (var_2360[1].d == 1)
            (**var_2360)(var_2360)
            int32_t temp59_1 = *(var_2360 + 0xc)
            *(var_2360 + 0xc) -= 1
            
            if (temp59_1 == 1)
                (*(*var_2360 + 8))(var_2360, 1)
    
    sub_140597060(&var_26e0)
    sub_140e979e0(&var_1190)
    sub_140745b20(&var_25c0)
    sub_140745b20(&var_2418)
    
    if (rsi_5 != 0)
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d == 1)
            (**rsi_5)(rsi_5)
            int32_t temp61_1 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (temp61_1 == 1)
                (*(*rsi_5 + 8))(rsi_5, 1)
    
    int64_t* var_2340
    
    if (var_2340 != 0)
        var_2340[1].d -= 1
        
        if (var_2340[1].d == 1)
            (**var_2340)(var_2340)
            int32_t temp63_1 = *(var_2340 + 0xc)
            *(var_2340 + 0xc) -= 1
            
            if (temp63_1 == 1)
                (*(*var_2340 + 8))(var_2340, 1)
    
    sub_140597060(&var_2638)
    void var_1870
    sub_140745b20(&var_1870)
    sub_140ddea30(&var_1a20)
    sub_140745b20(&var_2580)
    
    if (rcx_131 != 0)
        rcx_131[1].d -= 1
        
        if (rcx_131[1].d == 1)
            (**rcx_131)(rcx_131)
            int32_t temp65_1 = *(rcx_131 + 0xc)
            *(rcx_131 + 0xc) -= 1
            
            if (temp65_1 == 1)
                (*(*rcx_131 + 8))(rcx_131, 1)
    
    int64_t* var_2190
    
    if (var_2190 != 0)
        var_2190[1].d -= 1
        
        if (var_2190[1].d == 1)
            (**var_2190)(var_2190)
            int32_t temp66_1 = *(var_2190 + 0xc)
            *(var_2190 + 0xc) -= 1
            
            if (temp66_1 == 1)
                (*(*var_2190 + 8))(var_2190, 1)
    
    sub_140597060(&var_2620)
    sub_140e536f0(&var_1860)
    sub_140745b20(&var_2510)
    sub_140745b20(&var_2600)
    var_2720:8.d = 0

int32_t var_27c0_1 = 0
var_27c8 = sub_140f767e0
int32_t var_2810_1 = 0
var_2818 = sub_140f76860
void var_1648
int64_t* rax_165 = sub_140e4fb70(&var_1648)
int128_t var_23d8 = var_2818.o
void var_23c8
int64_t* rax_166 = sub_140e45b90(&var_23c8, arg1, &var_23d8)
int64_t var_2778 = 0
char var_2770 = 1
int64_t var_2768 = 0
int32_t var_2760 = 0
sub_140692f90(&var_2768, rax_166)
rax_165[0x34] = var_2778
rax_165[0x35].b = var_2770
sub_1407473e0(&rax_165[0x36], &var_2768)
sub_140745b20(&var_2768)
sub_140745b20(&var_23c8)
int128_t var_23b8 = var_27c8.o
void var_23a8
int64_t* rax_169 = sub_140e45cb0(&var_23a8, arg1, &var_23b8)
int16_t var_27f8 = 0x119
int64_t var_27f0 = 0
int32_t var_27e8 = 0
sub_1407473e0(&var_27f0, rax_169)
rax_165[0xf].b = var_27f8.b
*(rax_165 + 0x79) = var_27f8:1.b
sub_1407473e0(&rax_165[0x10], &var_27f0)
sub_140745b20(&var_27f0)
sub_140745b20(&var_23a8)
void*** rax_172 = sub_140e48c50()
void*** var_25e8 = rax_172
void* var_25f0 = &rax_172[2]
sub_140918950(&var_25f0, &rax_172[2])
int64_t var_29a8_11 = 0x3a8
void var_293d
void* var_25e0 = &var_293d
void* var_2398
void** rax_173 = sub_140e56930(&var_25f0, &var_2398, rax_165, sub_140e23ed0(&rax_172[2], "SImage"))
int64_t* rbx_40 = rax_173[1]
int64_t (* var_2838)(int64_t* arg1) = *rax_173
int64_t* var_2830 = rbx_40

if (rbx_40 != 0)
    rbx_40[1].d += 1

int64_t* rcx_246 = var_2708
int128_t var_2208
__builtin_memcpy(&var_2208, "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_21f0 = 0
int32_t var_21e8 = 0
void*** rax_174 = sub_140de7320(rcx_246, 1)
*(rax_174 + 0x24) = 0x102
sub_140de1aa0(sub_140f12c10(rax_174, &var_2208), &var_2838)

if (rbx_40 != 0)
    rbx_40[1].d -= 1
    
    if (rbx_40[1].d == 1)
        (**rbx_40)(rbx_40)
        int32_t temp15_1 = *(rbx_40 + 0xc)
        *(rbx_40 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rbx_40 + 8))(rbx_40, 1)

int64_t* var_2390

if (var_2390 != 0)
    var_2390[1].d -= 1
    
    if (var_2390[1].d == 1)
        (**var_2390)(var_2390)
        int32_t temp16_1 = *(var_2390 + 0xc)
        *(var_2390 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_2390 + 8))(var_2390, 1)

sub_140597060(&var_25f0)
sub_140e536f0(&var_1648)
uint128_t zmm1_17 = var_2708.o
void* rcx_255 = &var_2720
var_2830.d = 0

if (arg3[0x1b].b != 0)
    rcx_255 = &arg3[0x19]

uint128_t var_2378 = zmm1_17
zmm1_17 = _mm_bsrli_si128(zmm1_17, 8)
int64_t var_23f0 = 0
int32_t var_23e8 = 0
int64_t* rsi_6 = zmm1_17.q
var_2838 = sub_140f75c00
char var_23f8 = 1
int128_t var_2388 = var_2838.o
int128_t var_2408 = *rcx_255

if (rsi_6 != 0)
    rsi_6[1].d += 1

int32_t rbx_42 = arg3[0x18].d
void var_b70
int64_t* rax_181
int128_t zmm6_4
rax_181, zmm6_4 = sub_14068c640(&var_b70)
void* rax_182
int128_t zmm1_18
rax_182, zmm1_18 = sub_140edf580(rax_181, arg1, &var_2388)
*(rax_182 + 0x1b0) = rbx_42
*(rax_182 + 0x1b4) = *(arg3 + 0xc4)
*(rax_182 + 0x1b8) = zmm6_4
*(rax_182 + 0x1c8) = 1
sub_140692f90(rax_182 + 0x1d0, &var_23f0)
void* rax_183 = sub_1406936e0(rax_182, &var_2378, zmm1_18)
void var_293c
void var_2130
int64_t* rax_184
int128_t zmm1_19
rax_184, zmm1_19 = sub_140688320(&var_2130, "SBorder", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Widgets/Views/SHeaderRow.cpp", 0xbb, 
    &var_293c)
void* var_2338
void** rax_185 = sub_140695920(rax_184, &var_2338, rax_183, zmm1_19)
int64_t* rbx_44 = rax_185[1]
void* var_2530 = *rax_185
int64_t* var_2528 = rbx_44

if (rbx_44 != 0)
    rbx_44[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_2530)

if (rbx_44 != 0)
    rbx_44[1].d -= 1
    
    if (rbx_44[1].d == 1)
        (**rbx_44)(rbx_44)
        int32_t temp30_1 = *(rbx_44 + 0xc)
        *(rbx_44 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*rbx_44 + 8))(rbx_44, 1)

int64_t* var_2330

if (var_2330 != 0)
    var_2330[1].d -= 1
    
    if (var_2330[1].d == 1)
        (**var_2330)(var_2330)
        int32_t temp34_1 = *(var_2330 + 0xc)
        *(var_2330 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*(*var_2330 + 8))(var_2330, 1)

sub_140669d70(&var_2130)
sub_14068fed0(&var_b70)
sub_140745b20(&var_23f0)

if (var_2930 != 0)
    var_2930[1].d -= 1
    
    if (var_2930[1].d == 1)
        (**var_2930)(var_2930)
        int32_t temp39_1 = *(var_2930 + 0xc)
        *(var_2930 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*var_2930 + 8))(var_2930, 1)

if (rsi_6 != 0)
    rsi_6[1].d -= 1
    
    if (rsi_6[1].d == 1)
        (**rsi_6)(rsi_6)
        int32_t temp43_1 = *(rsi_6 + 0xc)
        *(rsi_6 + 0xc) -= 1
        
        if (temp43_1 == 1)
            (*(*rsi_6 + 8))(rsi_6, 1)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t temp44_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp44_1 == 1)
            (*r14_1)[1](r14_1, 1)

sub_1406601b0(&var_27a8)
int64_t result = sub_1406601b0(&var_28d8)
__security_check_cookie(rax_1 ^ &var_29c8)
return result
