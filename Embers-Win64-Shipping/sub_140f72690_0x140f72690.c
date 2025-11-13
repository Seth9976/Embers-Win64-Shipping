// 函数: sub_140f72690
// 地址: 0x140f72690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_648
int64_t rax_1 = __security_cookie ^ &var_648
*(arg1 + 0x4e6) = 1
char* (* var_538)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = arg1
int64_t* rbx = arg5[1]
char* (* r13)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = arg1
int64_t (* var_608)(int64_t* arg1) = *arg5

if (rbx != 0)
    rbx[1].d += 1

if (&var_608 != arg1 + 0x498)
    var_608.o = *(arg1 + 0x498)
    *(arg1 + 0x498) = var_608.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (arg8 != r13 + 0x3c0)
    int64_t* rcx_2
    
    if (arg8[1].d != 0)
        rcx_2 = *arg8
    
    if (arg8[1].d != 0 && rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2, r13 + 0x3c0)
    else if (*(r13 + 0x3c8) != 0)
        int64_t* rcx_3 = *(r13 + 0x3c0)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = *(r13 + 0x3c0)
            
            if (rcx_4 != 0)
                *(r13 + 0x3c0) = sub_140a84c80(rcx_4, 0, 0)
            
            *(r13 + 0x3c8) = 0

int32_t rax_8 = arg7
char rbx_2 = *(r13 + 0x2c)

if (*arg5 != 0)
    rax_8 = 1

*(r13 + 0x4d8) = rax_8
var_608 = sub_14094eaf8
int64_t* var_600
var_600.d = 0
void var_510
int64_t* rax_9 = sub_140f64250(&var_510)
*(rax_9 + 0x95) = rbx_2
rax_9[0x34].d = *arg2
*(rax_9 + 0x1a4) = arg2[1].b
sub_140692f90(&rax_9[0x35], &arg2[2])
rax_9[0x37].d = *arg3
*(rax_9 + 0x1bc) = arg3[1].b
sub_140692f90(&rax_9[0x38], &arg3[2])
int128_t var_5e8 = var_608.o
int64_t* rax_10 = sub_140f63e00(&var_608, r13, &var_5e8)
int64_t* rsi_1 = nullptr
char var_584 = 1
int32_t var_588 = 0
int64_t* var_580 = nullptr
int32_t var_578 = 0
sub_1407473e0(&var_580, rax_10)
rax_9[0x3a].d = var_588
*(rax_9 + 0x1d4) = var_584
sub_1407473e0(&rax_9[0x3b], &var_580)
sub_140745b20(&var_580)
int64_t (* rax_14)(int64_t* arg1)

if (var_600.d == 0)
    rax_14 = var_608
label_140f728d6:
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)
else
    int64_t (* rcx_16)(int64_t* arg1) = var_608
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x38))(rcx_16, 0)
        rax_14 = var_608
        
        if (rax_14 != 0)
            rax_14 = sub_140a84c80(rax_14, 0, 0)
            var_608 = rax_14
        
        var_600.d = 0
        goto label_140f728d6
rax_9[0x3d].b = *arg4
*(rax_9 + 0x1e9) = arg4[1]
sub_1407473e0(&rax_9[0x3e], &arg4[8])
rax_9[0x40].d = *(r13 + 0x4d8)
void*** rax_18 = sub_140f63f20()
void*** var_5d0 = rax_18
void* var_5d8 = &rax_18[2]
sub_140918950(&var_5d8, &rax_18[2])
int64_t var_628 = 0x348
void var_618
void* var_5c8 = &var_618
int128_t zmm1_1
int128_t zmm6
zmm1_1, zmm6 = sub_140e23ed0(&rax_18[2], "SListPanel")
int128_t var_548
void** rax_19 = sub_140f68c40(&var_5d8, &var_548, rax_9, zmm1_1)
int64_t* rbx_4 = rax_19[1]

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (r13 + 0x3a0 == &var_588)
label_140f729c4:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
else
    *(r13 + 0x3a0) = *rax_19
    int64_t* rdi_2 = *(r13 + 0x3a8)
    
    if (rbx_4 == rdi_2)
        goto label_140f729c4
    
    *(r13 + 0x3a8) = rbx_4
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp8_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* var_540

if (var_540 != 0)
    var_540[1].d -= 1
    
    if (var_540[1].d == 1)
        (**var_540)(var_540)
        int32_t temp7_1 = *(var_540 + 0xc)
        *(var_540 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_540 + 8))(var_540, 1)

void*** rbx_6 = var_5d0

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp9_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rbx_6)[1](rbx_6, 1)

void var_320
sub_140745b20(&var_320)
void var_338
sub_140745b20(&var_338)
void var_350
sub_140745b20(&var_350)
void var_368
sub_140745b20(&var_368)
sub_140ddea30(&var_510)
int64_t* r14_1 = arg6
int64_t (* rax_27)(int64_t* arg1) = *r14_1
void var_5f8
int32_t var_5b8
void*** var_5b0
int32_t var_5a0
void*** var_598
int32_t var_590
int64_t var_370
int64_t (* rdi_3)(int64_t* arg1)
int64_t (* r12_1)(int64_t* arg1)

if (rax_27 == 0)
    var_608 = sub_140f89b00
    var_600.d = 0
    int64_t* rax_34 = sub_140f1fc10(&var_510)
    var_548 = var_608.o
    sub_1407473e0(&rax_34[0x35], sub_140f1bc90(&var_608, r13, &var_548))
    int64_t (* rax_37)(int64_t* arg1)
    
    if (var_600.d == 0)
        rax_37 = var_608
    label_140f72c2b:
        
        if (rax_37 != 0)
            sub_140a74f90(rax_37)
    else
        int64_t (* rcx_46)(int64_t* arg1) = var_608
        
        if (rcx_46 != 0)
            (*(*rcx_46 + 0x38))(rcx_46, 0)
            rax_37 = var_608
            
            if (rax_37 != 0)
                rax_37 = sub_140a84c80(rax_37, 0, 0)
                var_608 = rax_37
            
            var_600.d = 0
            goto label_140f72c2b
    *(rax_34 + 0x1bc) = *(r13 + 0x4d8)
    void*** rax_39 = j_sub_140a82f30(0x570)
    void*** rdi_4 = rax_39
    
    if (rax_39 == 0)
        rdi_4 = nullptr
    else
        rax_39[1].d = 1
        *(rax_39 + 0xc) = 1
        *rdi_4 = &data_142ee7488
        
        if (rdi_4 != -0x10)
            sub_140f20dd0(&rdi_4[2])
    
    var_5d0 = rdi_4
    var_5d8 = &rdi_4[2]
    sub_140918950(&var_5d8, &rdi_4[2])
    int64_t var_628_1 = 0x560
    void* var_5c8_1 = &var_618
    int64_t** rax_40 =
        sub_140f27db0(&var_5d8, &var_5e8, rax_34, sub_140e23ed0(&rdi_4[2], "SScrollBar"))
    int64_t* rbx_10 = rax_40[1]
    int64_t* rcx_53 = *rax_40
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
    
    var_608 = r13 + 0x3b0
    
    if (r13 + 0x3b0 == &var_588)
    label_140f72d2d:
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                (**rbx_10)(rbx_10)
                int32_t temp14_1 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_10 + 8))(rbx_10, 1)
    else
        *(r13 + 0x3b0) = rcx_53
        int64_t* rdi_5 = *(r13 + 0x3b8)
        
        if (rbx_10 == rdi_5)
            goto label_140f72d2d
        
        *(r13 + 0x3b8) = rbx_10
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp18_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
    
    int64_t* rbx_11 = var_5e8:8.q
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp17_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rbx_11 + 8))(rbx_11, 1)
    
    void*** rbx_12 = var_5d0
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp20_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*rbx_12)[1](rbx_12, 1)
    
    void var_310
    sub_140745b20(&var_310)
    sub_140745b20(&var_338)
    sub_140745b20(&var_368)
    sub_140ddea30(&var_510)
    int64_t rax_49 = *(r13 + 0x3b0)
    int64_t* r14_3 = *(r13 + 0x3b8)
    var_5d8:4.b = 1
    var_5d0 = nullptr
    var_5c8_1.d = 0
    void**** rcx_108
    int32_t var_5a8
    int64_t var_560
    int32_t var_528
    void*** var_520
    void var_300
    
    if (*(r13 + 0x4d8) != 1)
        var_5d8.d = 0x41800000
        var_528 = 0x3f800000
        char var_524_1 = 1
        var_520 = nullptr
        int32_t var_518_1 = 0
        
        if (r14_3 != 0)
            r14_3[1].d += 1
        
        var_5e8.q = rax_49
        var_5e8:8.q = r14_3
        
        if (r14_3 != 0)
            r14_3[1].d += 1
        
        int64_t* rax_80 = sub_14068c940(&var_300)
        rax_80[0x3f].d = 0x41800000
        *(rax_80 + 0x1fc) = 1
        sub_1407473e0(&rax_80[0x40], &var_5d0)
        void*** rax_81 = j_sub_140a82f30(0x3d8)
        void*** rdi_9 = rax_81
        
        if (rax_81 == 0)
            rdi_9 = nullptr
        else
            rax_81[1].d = 1
            *(rax_81 + 0xc) = 1
            *rdi_9 = &data_142d8c570
            
            if (rdi_9 != -0x10)
                sub_140f20750(&rdi_9[2])
        
        var_5b0 = rdi_9
        var_5b8.q = &rdi_9[2]
        sub_14065fa30(&var_5b8, &rdi_9[2])
        int64_t var_628_4 = 0x3c8
        var_5a8.q = &var_5f8
        void* rax_82
        int128_t zmm1_8
        rax_82, zmm1_8 = sub_1406937a0(rax_80, &var_5e8, sub_140e23ed0(&rdi_9[2], "SBox"))
        void** rax_83 = sub_140695d20(&var_5b8, &var_548, rax_82, zmm1_8)
        int64_t* rbx_21 = rax_83[1]
        var_5e8.q = *rax_83
        var_5e8:8.q = rbx_21
        
        if (rbx_21 != 0)
            rbx_21[1].d += 1
        
        void*** rax_84 = j_sub_140a82f30(0x88)
        void*** rdi_10 = rax_84
        
        if (rax_84 == 0)
            rdi_10 = nullptr
        else
            sub_14068e490(rax_84)
            *rdi_10 = &data_142d8add0
        
        void* rax_85 = sub_140698b50(rdi_10)
        sub_140693600(rax_85, &var_5e8)
        
        if (rbx_21 != 0)
            rbx_21[1].d -= 1
            
            if (rbx_21[1].d == 1)
                int64_t rdx_34 = *rbx_21
                (*rdx_34)(rbx_21, rdx_34)
                int32_t temp36_1 = *(rbx_21 + 0xc)
                *(rbx_21 + 0xc) -= 1
                
                if (temp36_1 == 1)
                    (*(*rbx_21 + 8))(rbx_21, 1)
        
        int64_t* rdi_11 = *(r13 + 0x3a8)
        
        if (rdi_11 != 0)
            rdi_11[1].d += 1
        
        var_5e8.q = *(r13 + 0x3a0)
        var_5e8:8.q = rdi_11
        
        if (rdi_11 != 0)
            rdi_11[1].d += 1
        
        void*** rax_88 = j_sub_140a82f30(0x88)
        void*** r15_3 = rax_88
        
        if (rax_88 == 0)
            r15_3 = nullptr
        else
            sub_14068e490(rax_88)
            *r15_3 = &data_142d8add0
        
        int32_t var_570_2 = 1
        int32_t var_568_2 = 0x3f800000
        char var_564_2 = 1
        var_560 = 0
        int32_t var_558_2 = 0
        sub_140692f90(&var_560, &var_520)
        r15_3[5].d = var_570_2
        *(r15_3 + 0x34) = var_564_2
        r15_3[6].d = var_568_2
        sub_140692f90(&r15_3[7], &var_560)
        sub_140745b20(&var_560)
        sub_140693600(r15_3, &var_5e8)
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t temp40_1 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (temp40_1 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        void*** rax_93 = j_sub_140a82f30(0x2e8)
        void*** r12_3 = rax_93
        
        if (rax_93 == 0)
            r12_3 = nullptr
        else
            r12_3[1].d = 1
            *(r12_3 + 0xc) = 1
            *r12_3 = &data_142d8c590
            
            if (r12_3 != -0x10)
                sub_14068e550(&r12_3[2])
        
        var_598 = r12_3
        var_5a0.q = &r12_3[2]
        sub_14065fa30(&var_5a0, &r12_3[2])
        int64_t var_628_5 = 0x2d8
        var_590.q = &var_618
        sub_140e23ed0(&r12_3[2], "SVerticalBox")
        int64_t* rax_94
        int128_t zmm1_9
        rax_94, zmm1_9 = sub_14068d420(&var_510)
        int64_t (** rax_97)(int64_t* arg1) = sub_140696920(&var_5a0, &var_588, 
            sub_1406938c0(sub_1406938c0(rax_94, r15_3), rax_85), zmm1_9)
        int64_t* rcx_136 = rax_97[1]
        r12_1 = *rax_97
        var_5e8.q = r12_1
        bool cond:2_1 = rcx_136 != 0
        
        if (rcx_136 != 0)
            rcx_136[1].d += 1
            cond:2_1 = rcx_136 != 0
        
        int64_t* rbx_23 = var_580
        
        if (cond:2_1)
            rsi_1 = rcx_136
        
        if (rbx_23 != 0)
            rbx_23[1].d -= 1
            
            if (rbx_23[1].d == 1)
                (**rbx_23)(rbx_23)
                int32_t temp46_1 = *(rbx_23 + 0xc)
                *(rbx_23 + 0xc) -= 1
                
                if (temp46_1 == 1)
                    (*(*rbx_23 + 8))(rbx_23, 1)
        
        void*** rbx_24 = var_598
        
        if (rbx_24 != 0)
            rbx_24[1].d -= 1
            
            if (rbx_24[1].d == 1)
                (**rbx_24)(rbx_24)
                int32_t temp50_1 = *(rbx_24 + 0xc)
                *(rbx_24 + 0xc) -= 1
                
                if (temp50_1 == 1)
                    (*rbx_24)[1](rbx_24, 1)
        
        if (var_370 != 0)
            sub_140a74f90(var_370)
        
        sub_140660250(&var_510)
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t temp55_1 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (temp55_1 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        if (var_540 != 0)
            var_540[1].d -= 1
            
            if (var_540[1].d == 1)
                (**var_540)(var_540)
                int32_t temp59_1 = *(var_540 + 0xc)
                *(var_540 + 0xc) -= 1
                
                if (temp59_1 == 1)
                    (*(*var_540 + 8))(var_540, 1)
        
        void*** rbx_26 = var_5b0
        
        if (rbx_26 != 0)
            rbx_26[1].d -= 1
            
            if (rbx_26[1].d == 1)
                (**rbx_26)(rbx_26)
                int32_t temp63_1 = *(rbx_26 + 0xc)
                *(rbx_26 + 0xc) -= 1
                
                if (temp63_1 == 1)
                    (*rbx_26)[1](rbx_26, 1)
        
        sub_140690290(&var_300)
        
        if (r14_3 != 0)
            r14_3[1].d -= 1
            
            if (r14_3[1].d == 1)
                (**r14_3)(r14_3)
                int32_t temp66_1 = *(r14_3 + 0xc)
                *(r14_3 + 0xc) -= 1
                
                if (temp66_1 == 1)
                    (*(*r14_3 + 8))(r14_3, 1)
        
        rcx_108 = &var_520
    else
        var_5d8.d = 0x41800000
        var_5a0 = 0x3f800000
        char var_59c_1 = 1
        var_598 = nullptr
        var_590 = 0
        
        if (r14_3 != 0)
            r14_3[1].d += 1
        
        var_5e8.q = rax_49
        var_5e8:8.q = r14_3
        
        if (r14_3 != 0)
            r14_3[1].d += 1
        
        int64_t* rax_50 = sub_14068c940(&var_300)
        rax_50[0x3c].d = var_5d8.d
        *(rax_50 + 0x1e4) = 1
        sub_1407473e0(&rax_50[0x3d], &var_5d0)
        void*** rax_51 = j_sub_140a82f30(0x3d8)
        void*** rdi_6 = rax_51
        
        if (rax_51 == 0)
            rdi_6 = nullptr
        else
            rax_51[1].d = 1
            *(rax_51 + 0xc) = 1
            *rdi_6 = &data_142d8c570
            
            if (rdi_6 != -0x10)
                sub_140f20750(&rdi_6[2])
        
        var_5b0 = rdi_6
        var_5b8.q = &rdi_6[2]
        sub_14065fa30(&var_5b8, &rdi_6[2])
        int64_t var_628_2 = 0x3c8
        var_5a8.q = &var_618
        void* rax_52
        int128_t zmm1_5
        rax_52, zmm1_5 = sub_1406937a0(rax_50, &var_5e8, sub_140e23ed0(&rdi_6[2], "SBox"))
        void** rax_53 = sub_140695d20(&var_5b8, &var_588, rax_52, zmm1_5)
        int64_t* rbx_14 = rax_53[1]
        var_5e8.q = *rax_53
        var_5e8:8.q = rbx_14
        
        if (rbx_14 != 0)
            rbx_14[1].d += 1
        
        void*** rax_54 = j_sub_140a82f30(0x88)
        void*** rdi_7 = rax_54
        
        if (rax_54 == 0)
            rdi_7 = nullptr
        else
            sub_14068e490(rax_54)
            *rdi_7 = &data_142d8add0
        
        void* rax_55 = sub_140698b50(rdi_7)
        sub_140693600(rax_55, &var_5e8)
        
        if (rbx_14 != 0)
            rbx_14[1].d -= 1
            
            if (rbx_14[1].d == 1)
                int64_t rdx_21 = *rbx_14
                (*rdx_21)(rbx_14, rdx_21)
                int32_t temp37_1 = *(rbx_14 + 0xc)
                *(rbx_14 + 0xc) -= 1
                
                if (temp37_1 == 1)
                    (*(*rbx_14 + 8))(rbx_14, 1)
        
        int64_t* rdi_8 = *(r13 + 0x3a8)
        
        if (rdi_8 != 0)
            rdi_8[1].d += 1
        
        var_5e8.q = *(r13 + 0x3a0)
        var_5e8:8.q = rdi_8
        
        if (rdi_8 != 0)
            rdi_8[1].d += 1
        
        void*** rax_58 = j_sub_140a82f30(0x88)
        void*** r15_2 = rax_58
        
        if (rax_58 == 0)
            r15_2 = nullptr
        else
            sub_14068e490(rax_58)
            *r15_2 = &data_142d8add0
        
        int32_t var_570_1 = 1
        int32_t var_568_1 = 0x3f800000
        char var_564_1 = 1
        var_560 = 0
        int32_t var_558_1 = 0
        sub_140692f90(&var_560, &var_598)
        r15_2[5].d = var_570_1
        *(r15_2 + 0x34) = var_564_1
        r15_2[6].d = var_568_1
        sub_140692f90(&r15_2[7], &var_560)
        sub_140745b20(&var_560)
        sub_140693600(r15_2, &var_5e8)
        
        if (rdi_8 != 0)
            rdi_8[1].d -= 1
            
            if (rdi_8[1].d == 1)
                (**rdi_8)(rdi_8)
                int32_t temp41_1 = *(rdi_8 + 0xc)
                *(rdi_8 + 0xc) -= 1
                
                if (temp41_1 == 1)
                    (*(*rdi_8 + 8))(rdi_8, 1)
        
        void*** rax_63 = j_sub_140a82f30(0x2e8)
        void*** r12_2 = rax_63
        
        if (rax_63 == 0)
            r12_2 = nullptr
        else
            r12_2[1].d = 1
            *(r12_2 + 0xc) = 1
            *r12_2 = &data_142d8c590
            
            if (r12_2 != -0x10)
                sub_14068e500(&r12_2[2])
        
        var_520 = r12_2
        var_528.q = &r12_2[2]
        sub_14065fa30(&var_528, &r12_2[2])
        int64_t var_628_3 = 0x2d8
        int32_t var_518
        var_518.q = &var_5f8
        sub_140e23ed0(&r12_2[2], "SHorizontalBox")
        int64_t* rax_64
        int128_t zmm1_6
        rax_64, zmm1_6 = sub_14068d420(&var_510)
        int64_t (** rax_67)(int64_t* arg1) = sub_140696920(&var_528, &var_548, 
            sub_1406938c0(sub_1406938c0(rax_64, r15_2), rax_55), zmm1_6)
        int64_t* rcx_92 = rax_67[1]
        r12_1 = *rax_67
        var_5e8.q = r12_1
        bool cond:3_1 = rcx_92 != 0
        
        if (rcx_92 != 0)
            rcx_92[1].d += 1
            cond:3_1 = rcx_92 != 0
        
        if (cond:3_1)
            rsi_1 = rcx_92
        
        if (var_540 != 0)
            var_540[1].d -= 1
            
            if (var_540[1].d == 1)
                (**var_540)(var_540)
                int32_t temp47_1 = *(var_540 + 0xc)
                *(var_540 + 0xc) -= 1
                
                if (temp47_1 == 1)
                    (*(*var_540 + 8))(var_540, 1)
        
        void*** rbx_17 = var_520
        
        if (rbx_17 != 0)
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t temp51_1 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (temp51_1 == 1)
                    (*rbx_17)[1](rbx_17, 1)
        
        if (var_370 != 0)
            sub_140a74f90(var_370)
        
        sub_140660250(&var_510)
        
        if (rdi_8 != 0)
            rdi_8[1].d -= 1
            
            if (rdi_8[1].d == 1)
                (**rdi_8)(rdi_8)
                int32_t temp57_1 = *(rdi_8 + 0xc)
                *(rdi_8 + 0xc) -= 1
                
                if (temp57_1 == 1)
                    (*(*rdi_8 + 8))(rdi_8, 1)
        
        int64_t* rbx_18 = var_580
        
        if (rbx_18 != 0)
            rbx_18[1].d -= 1
            
            if (rbx_18[1].d == 1)
                (**rbx_18)(rbx_18)
                int32_t temp61_1 = *(rbx_18 + 0xc)
                *(rbx_18 + 0xc) -= 1
                
                if (temp61_1 == 1)
                    (*(*rbx_18 + 8))(rbx_18, 1)
        
        void*** rbx_19 = var_5b0
        
        if (rbx_19 != 0)
            rbx_19[1].d -= 1
            
            if (rbx_19[1].d == 1)
                (**rbx_19)(rbx_19)
                int32_t temp65_1 = *(rbx_19 + 0xc)
                *(rbx_19 + 0xc) -= 1
                
                if (temp65_1 == 1)
                    (*rbx_19)[1](rbx_19, 1)
        
        sub_140690290(&var_300)
        
        if (r14_3 != 0)
            r14_3[1].d -= 1
            
            if (r14_3[1].d == 1)
                (**r14_3)(r14_3)
                int32_t temp67_1 = *(r14_3 + 0xc)
                *(r14_3 + 0xc) -= 1
                
                if (temp67_1 == 1)
                    (*(*r14_3 + 8))(r14_3, 1)
        
        rcx_108 = &var_598
    sub_140745b20(rcx_108)
    sub_140745b20(&var_5d0)
    r14_1 = arg6
    rdi_3 = var_608
    r13 = var_538
    int512_t zmm6_1
    zmm6_1.o = zmm6
else
    int64_t* rbx_7 = r14_1[1]
    rdi_3 = r13 + 0x3b0
    var_608 = rax_27
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    if (&var_608 != rdi_3)
        var_608.o = *rdi_3
        *rdi_3 = var_608.o
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp11_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    void* rbx_8 = *rdi_3
    var_608 = sub_140f89b00
    var_600.d = 0
    var_548 = var_608.o
    sub_140f602d0(rbx_8, sub_140f1bc90(&var_608, r13, &var_548))
    int64_t (* rax_32)(int64_t* arg1)
    
    if (var_600.d == 0)
        rax_32 = var_608
    label_140f72b66:
        
        if (rax_32 != 0)
            sub_140a74f90(rax_32)
    else
        int64_t (* rcx_40)(int64_t* arg1) = var_608
        
        if (rcx_40 != 0)
            (*(*rcx_40 + 0x38))(rcx_40, 0)
            rax_32 = var_608
            
            if (rax_32 != 0)
                rax_32 = sub_140a84c80(rax_32, 0, 0)
                var_608 = rax_32
            
            var_600.d = 0
            goto label_140f72b66
    int64_t* rax_33 = *(r13 + 0x3a8)
    r12_1 = *(r13 + 0x3a0)
    var_5e8.q = r12_1
    
    if (rax_33 != 0)
        rax_33[1].d += 1
        
        if (rax_33 != 0)
            rsi_1 = rax_33

int64_t* rcx_164 = arg5
int64_t* r15_4 = *rcx_164
void* result

if (r15_4 == 0)
    var_608 = r12_1
    int64_t* var_600_3 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    result = sub_140de1b90(r13 + 0x2b8, &var_608)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            result = (**rsi_1)(rsi_1)
            int32_t temp21_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp21_1 == 1)
                result = (*(*rsi_1 + 8))(rsi_1, 1)
        
    label_140f73a37:
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                result = (**rsi_1)(rsi_1)
                int32_t temp24_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    result = (*(*rsi_1 + 8))(rsi_1, 1)
    
    __security_check_cookie(rax_1 ^ &var_648)
    return result

int32_t var_530

if (*r14_1 == 0)
    int64_t* rbx_27 = *(rdi_3 + 8)
    int64_t r14_4 = *rdi_3
    
    if (rbx_27 != 0)
        rbx_27[1].d += 1
        r15_4 = *rcx_164
    
    r15_4[0x9b].d = 0x41800000
    var_538 = sub_140f618b0
    var_530 = 0
    var_608 = nullptr
    var_600.d = 0
    
    if (rbx_27 != 0)
        rbx_27[1].d += 1
    
    void*** rax_110 = sub_1405978f0(0x38, &var_608)
    
    if (rax_110 != 0)
        *rax_110 = &data_142ed8c88
        rax_110[1] = r14_4
        rax_110[2] = rbx_27
        
        if (rbx_27 != 0)
            *(rbx_27 + 0xc) += 1
        
        *(rax_110 + 0x18) = var_538.o
        rax_110[6] = sub_140a387b0()
    
    if (rbx_27 != 0)
        rbx_27[1].d -= 1
        
        if (rbx_27[1].d == 1)
            (**rbx_27)(rbx_27)
            int32_t temp25_1 = *(rbx_27 + 0xc)
            *(rbx_27 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*rbx_27 + 8))(rbx_27, 1)
    
    int32_t r12_4 = var_600.d
    int64_t (* rdi_13)(int64_t* arg1) = var_608
    *(r15_4 + 0x4e1) = 1
    
    if (&var_608 != &r15_4[0x9d])
        if (r12_4 != 0 && rdi_13 != 0)
            (*(*rdi_13 + 0x40))(rdi_13, &r15_4[0x9d])
        else if (r15_4[0x9e].d != 0)
            int64_t* rcx_156 = r15_4[0x9d]
            
            if (rcx_156 != 0)
                (*(*rcx_156 + 0x38))(rcx_156, 0)
                int64_t rcx_157 = r15_4[0x9d]
                
                if (rcx_157 != 0)
                    r15_4[0x9d] = sub_140a84c80(rcx_157, 0, 0)
                
                r15_4[0x9e].d = 0
    
    if (r12_4 == 0)
        goto label_140f73814
    
    if (rdi_13 != 0)
        (*(*rdi_13 + 0x38))(rdi_13, 0)
        rdi_13 = sub_140a84c80(rdi_13, 0, 0)
    label_140f73814:
        
        if (rdi_13 != 0)
            sub_140a74f90(rdi_13)
    
    sub_140f87e70(r15_4)
    int32_t temp30_1
    
    if (rbx_27 != 0)
        temp30_1 = rbx_27[1].d
        rbx_27[1].d -= 1
    
    if (rbx_27 == 0 || temp30_1 != 1)
        rcx_164 = arg5
    else
        (**rbx_27)(rbx_27)
        int32_t temp32_1 = *(rbx_27 + 0xc)
        *(rbx_27 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*(*rbx_27 + 8))(rbx_27, 1)
        
        rcx_164 = arg5

var_5b8 = 0x3f800000
var_5b0 = nullptr
int32_t var_5a8_1 = 0
var_608 = var_5e8.q
char var_5b4_1 = 1
int64_t* var_600_1 = rsi_1

if (rsi_1 != 0)
    rsi_1[1].d += 1

int64_t* r14_6 = rcx_164[1]

if (r14_6 != 0)
    r14_6[1].d += 1

var_538 = *rcx_164
var_530.q = r14_6

if (r14_6 != 0)
    r14_6[1].d += 1

void*** rax_123 = sub_140e92390()
var_598 = rax_123
var_5a0.q = &rax_123[2]
sub_14065fa30(&var_5a0, &rax_123[2])
int64_t var_628_6 = 0x2d8
var_590.q = &var_5f8
sub_140e23ed0(&rax_123[2], "SVerticalBox")
void* rax_126 = sub_140693860(sub_140eb9be0(sub_1406a4fe0(), &var_5b8), &var_608)
void* rax_129 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_538)
int64_t* rax_130
int128_t zmm1_10
rax_130, zmm1_10 = sub_14068d420(&var_510)
void** rax_133 = sub_140696920(&var_5a0, &var_588, 
    sub_1406938c0(sub_1406938c0(rax_130, rax_129), rax_126), zmm1_10)
int64_t* rbx_30 = rax_133[1]
var_608 = *rax_133
int64_t* var_600_2 = rbx_30

if (rbx_30 != 0)
    rbx_30[1].d += 1

sub_140de1b90(r13 + 0x2b8, &var_608)

if (rbx_30 != 0)
    rbx_30[1].d -= 1
    
    if (rbx_30[1].d == 1)
        (**rbx_30)(rbx_30)
        int32_t temp28_1 = *(rbx_30 + 0xc)
        *(rbx_30 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*(*rbx_30 + 8))(rbx_30, 1)

int64_t* rbx_31 = var_580

if (rbx_31 != 0)
    rbx_31[1].d -= 1
    
    if (rbx_31[1].d == 1)
        (**rbx_31)(rbx_31)
        int32_t temp29_1 = *(rbx_31 + 0xc)
        *(rbx_31 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*rbx_31 + 8))(rbx_31, 1)

sub_140669d70(&var_5a0)

if (var_370 != 0)
    sub_140a74f90(var_370)

sub_140660250(&var_510)

if (r14_6 != 0)
    r14_6[1].d -= 1
    
    if (r14_6[1].d == 1)
        (**r14_6)(r14_6)
        int32_t temp35_1 = *(r14_6 + 0xc)
        *(r14_6 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*r14_6 + 8))(r14_6, 1)

result = sub_140745b20(&var_5b0)
goto label_140f73a37
