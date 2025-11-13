// 函数: sub_141bcf0c0
// 地址: 0x141bcf0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t r15 = 0
uint32_t rdx = zx.d(arg1[0x21].b)
int64_t* r13 = arg1
int64_t* rsi = nullptr
void* var_258 = nullptr
char var_288
void* var_278
void*** var_270
void** (* var_250)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
uint128_t var_238
int64_t* var_248
void var_218
int64_t var_78

if (rdx == 0)
    int64_t* rax_35 = j_sub_140a82f30(0x2e8)
    int64_t* rbx_10 = rax_35
    
    if (rax_35 == 0)
        rbx_10 = nullptr
    else
        rax_35[1].d = 1
        *(rax_35 + 0xc) = 1
        *rbx_10 = &data_142d8c590
        
        if (rbx_10 != -0x10)
            sub_14068e500(&rbx_10[2])
    
    var_270 = rbx_10
    var_278 = &rbx_10[2]
    sub_14065fa30(&var_278, &rbx_10[2])
    int64_t var_298_4 = 0x2d8
    char* var_268_4 = &var_288
    sub_140e23ed0(&rbx_10[2], "SHorizontalBox")
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
    
    if (&r13[0x27] == &var_238)
    label_141bcf72e:
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                (**rbx_10)(rbx_10)
                int32_t temp4_1 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_10 + 8))(rbx_10, 1)
    else
        r13[0x27] = &rbx_10[2]
        int64_t* rdi_11 = r13[0x28]
        
        if (rbx_10 == rdi_11)
            goto label_141bcf72e
        
        r13[0x28] = rbx_10
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t temp8_1 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
    
    int64_t* rax_40
    int128_t zmm1_5
    rax_40, zmm1_5 = sub_14068d420(&var_218)
    void** rax_41 = sub_140696920(&var_278, &var_250, rax_40, zmm1_5)
    var_258 = *rax_41
    int64_t* rcx_55 = rax_41[1]
    bool cond:0_1 = rcx_55 != 0
    
    if (rcx_55 != 0)
        rcx_55[1].d += 1
        cond:0_1 = rcx_55 != 0
    
    if (cond:0_1)
        rsi = rcx_55
    
    if (var_248 != 0)
        var_248[1].d -= 1
        
        if (var_248[1].d == 1)
            (**var_248)(var_248)
            int32_t temp21_1 = *(var_248 + 0xc)
            *(var_248 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*var_248 + 8))(var_248, 1)
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp29_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*var_270)[1](var_270, 1)
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    sub_140660250(&var_218)
else if (rdx == 1)
    int64_t* rax_24 = j_sub_140a82f30(0x2e8)
    int64_t* rbx_7 = rax_24
    
    if (rax_24 == 0)
        rbx_7 = nullptr
    else
        rax_24[1].d = 1
        *(rax_24 + 0xc) = 1
        *rbx_7 = &data_142d8c590
        
        if (rbx_7 != -0x10)
            sub_14068e550(&rbx_7[2])
    
    var_270 = rbx_7
    var_278 = &rbx_7[2]
    sub_14065fa30(&var_278, &rbx_7[2])
    int64_t var_298_3 = 0x2d8
    char* var_268_3 = &var_288
    sub_140e23ed0(&rbx_7[2], "SVerticalBox")
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    if (&r13[0x27] == &var_238)
    label_141bcf58a:
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp9_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
    else
        r13[0x27] = &rbx_7[2]
        int64_t* rdi_8 = r13[0x28]
        
        if (rbx_7 == rdi_8)
            goto label_141bcf58a
        
        r13[0x28] = rbx_7
        
        if (rdi_8 != 0)
            rdi_8[1].d -= 1
            
            if (rdi_8[1].d == 1)
                (**rdi_8)(rdi_8)
                int32_t temp14_1 = *(rdi_8 + 0xc)
                *(rdi_8 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rdi_8 + 8))(rdi_8, 1)
    
    int64_t* rax_29
    int128_t zmm1_4
    rax_29, zmm1_4 = sub_14068d420(&var_218)
    void** rax_30 = sub_140696920(&var_278, &var_250, rax_29, zmm1_4)
    int64_t* rcx_39 = rax_30[1]
    var_258 = *rax_30
    bool cond:1_1 = rcx_39 != 0
    
    if (rcx_39 != 0)
        rcx_39[1].d += 1
        cond:1_1 = rcx_39 != 0
    
    if (cond:1_1)
        rsi = rcx_39
    
    if (var_248 != 0)
        var_248[1].d -= 1
        
        if (var_248[1].d == 1)
            (**var_248)(var_248)
            int32_t temp31_1 = *(var_248 + 0xc)
            *(var_248 + 0xc) -= 1
            
            if (temp31_1 == 1)
                (*(*var_248 + 8))(var_248, 1)
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp35_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp35_1 == 1)
                (*var_270)[1](var_270, 1)
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    sub_140660250(&var_218)
else if (rdx == 2)
    int64_t* rax_13 = sub_141b7adc0(&var_218)
    rax_13[0x3a].b = 1
    rax_13[0x39].d = *(r13 + 0x10c)
    *(rax_13 + 0x1cc) = r13[0x22].d
    void*** rax_14 = j_sub_140a82f30(0x308)
    void*** rbx_4 = rax_14
    
    if (rax_14 == 0)
        rbx_4 = nullptr
    else
        rax_14[1].d = 1
        *(rax_14 + 0xc) = 1
        *rbx_4 = &data_143084960
        
        if (rbx_4 != -0x10)
            sub_140f23a00(&rbx_4[2])
    
    var_270 = rbx_4
    var_278 = &rbx_4[2]
    sub_140918950(&var_278, &rbx_4[2])
    int64_t var_298_2 = 0x2f8
    char* var_268_2 = &var_288
    int128_t zmm1_3 = sub_140e23ed0(&rbx_4[2], "SWrapBox")
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (&r13[0x27] == &var_238)
    label_141bcf3e3:
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp15_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*rbx_4)[1](rbx_4, 1)
    else
        r13[0x27] = &rbx_4[2]
        int64_t* rdi_5 = r13[0x28]
        
        if (rbx_4 == rdi_5)
            goto label_141bcf3e3
        
        r13[0x28] = rbx_4
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp23_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*rdi_5)[1](rdi_5, 1)
    
    void** rax_19 = sub_141b8b7c0(&var_278, &var_250, rax_13, zmm1_3)
    int64_t* rcx_23 = rax_19[1]
    var_258 = *rax_19
    bool cond:2_1 = rcx_23 != 0
    
    if (rcx_23 != 0)
        rcx_23[1].d += 1
        cond:2_1 = rcx_23 != 0
    
    if (cond:2_1)
        rsi = rcx_23
    
    if (var_248 != 0)
        var_248[1].d -= 1
        
        if (var_248[1].d == 1)
            (**var_248)(var_248)
            int32_t temp37_1 = *(var_248 + 0xc)
            *(var_248 + 0xc) -= 1
            
            if (temp37_1 == 1)
                (*(*var_248 + 8))(var_248, 1)
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp39_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp39_1 == 1)
                (*var_270)[1](var_270, 1)
    
    void var_60
    sub_140745b20(&var_60)
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    sub_140ddea30(&var_218)
else if (rdx == 3)
    int64_t* rax_2 = sub_140dd5d30(&var_218)
    *(rax_2 + 0x95) = 1
    void*** rax_3 = j_sub_140a82f30(0x2e0)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142ecd308
        
        if (rbx_1 != -0x10)
            sub_140dde040(&rbx_1[2])
    
    var_270 = rbx_1
    var_278 = &rbx_1[2]
    sub_140918950(&var_278, &rbx_1[2])
    int64_t var_298_1 = 0x2d0
    char* var_268_1 = &var_288
    int128_t zmm1_1 = sub_140e23ed0(&rbx_1[2], "SOverlay")
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&r13[0x27] == &var_238)
    label_141bcf213:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp27_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp27_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        r13[0x27] = &rbx_1[2]
        void*** rdi_2 = r13[0x28]
        
        if (rbx_1 == rdi_2)
            goto label_141bcf213
        
        r13[0x28] = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp34_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp34_1 == 1)
                    (*rdi_2)[1](rdi_2, 1)
    
    void** rax_8 = sub_140de49c0(&var_278, &var_250, rax_2, zmm1_1)
    int64_t* rcx_8 = rax_8[1]
    var_258 = *rax_8
    bool cond:3_1 = rcx_8 != 0
    
    if (rcx_8 != 0)
        rcx_8[1].d += 1
        cond:3_1 = rcx_8 != 0
    
    if (cond:3_1)
        rsi = rcx_8
    
    if (var_248 != 0)
        var_248[1].d -= 1
        
        if (var_248[1].d == 1)
            (**var_248)(var_248)
            int32_t temp41_1 = *(var_248 + 0xc)
            *(var_248 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*(*var_248 + 8))(var_248, 1)
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp42_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp42_1 == 1)
                (*var_270)[1](var_270, 1)
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    sub_140ddea30(&var_218)
int64_t** r12 = r13[0x29]
int64_t r14_3 = 0
uint64_t rcx_62 = sx.q(r13[0x2a].d)
uint64_t rdx_12 = rcx_62 << 3 u>> 3

if (r12 u> &r12[rcx_62])
    rdx_12 = 0

if (rdx_12 != 0)
    char* var_248_1 = &var_288
    var_250 = sub_141b970e0
    
    do
        int64_t* rcx_63 = *r12
        int64_t* var_240 = rcx_63
        var_288 = 0
        sub_141befea0(rcx_63, &var_238, &var_250)
        uint128_t zmm0_2 = var_238
        var_278.o = zmm0_2
        int64_t* rbx_13 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rbx_13 != 0)
            rbx_13[1].d += 1
        
        sub_141b708f0(&r13[0x2f], &var_240, &var_278)
        
        if (var_270 != 0)
            var_270[1].d -= 1
            
            if (var_270[1].d == 1)
                (**var_270)(var_270)
                int32_t temp26_1 = *(var_270 + 0xc)
                *(var_270 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*var_270)[1](var_270, 1)
        
        if (rbx_13 != 0)
            rbx_13[1].d -= 1
            
            if (rbx_13[1].d == 1)
                (**rbx_13)(rbx_13)
                int32_t temp33_1 = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (temp33_1 == 1)
                    (*(*rbx_13 + 8))(rbx_13, 1)
        
        r12 = &r12[1]
        r14_3 += 1
    while (r14_3 != rdx_12)
    
    r13 = arg1
    r15 = 0
    rcx_62 = zx.q(r13[0x2a].d)

int64_t* rbx_14 = r13[0x29]
uint64_t rdi_14 = sx.q(rcx_62.d) << 3 u>> 3

if (rbx_14 u> &rbx_14[sx.q(rcx_62.d)])
    rdi_14 = 0

if (rdi_14 != 0)
    do
        (*(*r13 + 0x2c0))(r13, *rbx_14)
        r15 += 1
        rbx_14 = &rbx_14[1]
    while (r15 != rdi_14)

*arg2 = var_258
arg2[1] = rsi

if (rsi != 0)
    int32_t r8_11 = rsi[1].d
    rsi[1].d = r8_11
    
    if (r8_11 == 0)
        (**rsi)(rsi)
        int32_t temp24_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp24_1 == 1)
            int64_t r8_13 = *rsi
            (*(r8_13 + 8))(rsi, 1, r8_13)

__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
