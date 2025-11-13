// 函数: sub_140ea8190
// 地址: 0x140ea8190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_428
int64_t rax_1 = __security_cookie ^ &var_428
uint128_t var_3b8
__builtin_memset(&var_3b8, 0, 0x30)
int64_t var_388
sub_140a96170(&var_388)
char var_370 = 0
int64_t* var_368 = nullptr
int32_t var_360 = 0
int64_t var_358
sub_140a96170(&var_358)
int64_t* rbx = arg1[0x74]
void* rdi = nullptr
char var_340 = 0
int64_t* rax_2 = rbx
int64_t* var_338 = nullptr
int32_t var_330 = 0
int64_t var_320 = 0

if (rbx == 0)
    goto label_140ea823d

int32_t rax_3 = rbx[1].d

if (rax_3 == 0)
    rbx = nullptr
else
    rbx[1].d = rax_3 + 1
    rax_2 = rbx
label_140ea823d:
    
    if (rax_2 != 0)
        rdi = arg1[0x73]

void* rax_5 = *(rdi + 0x3a0)
int64_t* rdi_1 = *(rdi + 0x3a8)

if (rdi_1 != 0)
    rdi_1[1].d += 1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rdi_1 != 0)
                int32_t rax_8 = rdi_1[1].d
                rdi_1[1].d = rax_8
                
                if (rax_8 == 0)
                    (**rdi_1)(rdi_1)
                    int32_t temp8_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* r14 = arg1[0x76]
void* r13 = arg1[0x75]

if (r14 != 0)
    r14[1].d += 1
    
    if (r14 != 0)
        r14[1].d += 1
        
        if (r14 != 0)
            int32_t rax_13 = r14[1].d
            r14[1].d = rax_13
            
            if (rax_13 == 0)
                (**r14)(r14)
                int32_t temp7_1 = *(r14 + 0xc)
                *(r14 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*r14 + 8))(r14, 1)
            
            if (r14 != 0)
                r14[1].d -= 1
                
                if (r14[1].d == 1)
                    (**r14)(r14)
                    int32_t temp12_1 = *(r14 + 0xc)
                    *(r14 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*r14 + 8))(r14, 1)

int64_t* var_1d0 = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

uint128_t zmm1 = var_3b8
uint128_t zmm0 = rax_5.o
void* var_1d8
var_1d8.o = zmm1
int64_t* rbx_1 = _mm_bsrli_si128(zmm1, 8).q
uint128_t var_68 = zmm0
var_3b8 = zmm0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_1c0 = r14

if (r14 != 0)
    r14[1].d += 1

zmm0 = r13.o
uint128_t var_3a8
void* var_1c8
var_1c8.o = var_3a8
int64_t* rbx_2 = _mm_bsrli_si128(var_3a8, 8).q
uint128_t var_58 = zmm0
void* var_3a8_1 = zmm0.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp11_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(var_3a8_1 + 0x68)
void* rcx_16 = *(var_3a8_1 + 0x60)

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t* var_390

if (rbx_3 != var_390)
    int64_t* var_390_1 = rbx_3
    
    if (var_390 != 0)
        var_390[1].d -= 1
        
        if (var_390[1].d == 1)
            (**var_390)(var_390)
            int32_t temp16_1 = *(var_390 + 0xc)
            *(var_390 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_390 + 8))(var_390, 1)
else if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp15_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t var_328 = arg2
int64_t var_320_1 = *arg3
int64_t* var_380

if (*(r13 + 0xb0) == 0)
    void* rax_30
    
    if (rcx_16 == 0)
        rax_30 = sub_1405d9400()
    else
        rax_30 = rcx_16 + 0x10
    
    int64_t r8 = *rax_30
    int64_t* rdx_2 = *(rax_30 + 8)
    
    if (rdx_2 != 0)
        rdx_2[1].d += 1
    
    int32_t rcx_22 = *(rax_30 + 0x10)
    int64_t var_2c8_2 = var_388
    int64_t* rax_32 = var_380
    var_380 = rdx_2
    int32_t var_2b8_1 = rcx_22
    int32_t var_378_1 = rcx_22
    char var_2b0_1 = 1
    int64_t var_2a8 = 0
    int32_t var_2a0_1 = 0
    var_388 = r8
    char var_370_2 = 1
    sub_1407473e0(&var_368, &var_2a8)
    sub_140745b20(&var_2a8)
    
    if (rax_32 != 0)
        rax_32[1].d -= 1
        
        if (rax_32[1].d == 1)
            (**rax_32)(rax_32)
            int32_t rax_35 = *(rax_32 + 0xc)
            *(rax_32 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*rax_32 + 8))(rax_32, 1)
else
    sub_14065da90(&var_388, r13 + 0x98)
    char var_370_1 = *(r13 + 0xb0)
    sub_140692f90(&var_368, r13 + 0xb8)

int64_t* rax_37 = sub_140d3c6e0(rax_5 + 0x38)
char rax_38

if (rax_37 != 0)
    int64_t rdx_4 = *rax_37
    rax_38 = (*(rdx_4 + 0x260))(rax_37, rdx_4)

char var_408

if (rax_37 == 0 || rax_38 == 0)
    var_408 = 0
else
    var_408 = 1
    
    if (var_360 != 0)
        int64_t* rcx_30 = var_368
        
        if (rcx_30 != 0 && (*(*rcx_30 + 0x28))(rcx_30) != 0)
            int64_t* rax_41 = sub_140d44910(&var_388)
            int64_t r8_1 = *rax_41
            void* rdx_5 = rax_41[1]
            
            if (rdx_5 != 0)
                *(rdx_5 + 8) += 1
            
            int32_t rcx_32 = rax_41[2].d
            int64_t var_298_2 = var_388
            void* var_380_1 = rdx_5
            int32_t var_288_1 = rcx_32
            int32_t var_378_2 = rcx_32
            char var_280_1 = 1
            int64_t var_278 = 0
            int32_t var_270_1 = 0
            var_388 = r8_1
            char var_370_3 = 1
            sub_1407473e0(&var_368, &var_278)
            sub_140745b20(&var_278)
            
            if (var_380 != 0)
                var_380[1].d -= 1
                
                if (var_380[1].d == 1)
                    (**var_380)(var_380)
                    int32_t rax_46 = *(var_380 + 0xc)
                    *(var_380 + 0xc) -= 1
                    
                    if (rax_46 == 1)
                        (*(*var_380 + 8))(var_380, 1)

int64_t* r12_1 = *(r13 + 0x140)
int64_t rax_48 = *(r13 + 0x138)

if (r12_1 != 0)
    r12_1[1].d += 1

uint64_t (* var_3e8)(void* arg1)
void* var_3e0
int64_t* r15_3
int64_t* rbx_6

if (rax_48 == 0)
    r15_3 = arg1
    
    if (*(r15_3[0x75] + 0x94) != 0 && sub_140ab3dc0(sub_140d44910(&var_388)) == 0)
        int64_t* rax_79 = sub_140d44910(&var_388)
        int64_t var_150 = *rax_79
        void* rcx_69 = rax_79[1]
        void* var_148_1 = rcx_69
        
        if (rcx_69 != 0)
            *(rcx_69 + 8) += 1
        
        int32_t var_140_1 = rax_79[2].d
        void var_e0
        uint64_t (** rax_82)(void* arg1) = (*(*r15_3 + 8))(r15_3, &var_e0)
        var_3e8 = *rax_82
        void* rcx_72 = rax_82[1]
        var_3e0 = rcx_72
        
        if (rcx_72 != 0)
            *(rcx_72 + 8) += 1
        
        int64_t* rbx_7 = r15_3[0x74]
        void* const rcx_73 = nullptr
        
        if (rbx_7 != 0)
            int32_t rax_83 = rbx_7[1].d
            
            if (rax_83 != 0)
                rbx_7[1].d = rax_83 + 1
                rax_83.b = 1
            
            if (rax_83.b == 0)
                rbx_7 = nullptr
            
            if (rbx_7 != 0)
                rcx_73 = r15_3[0x73]
        
        sub_140ea2410(rcx_73, &var_3e8, &var_150)
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp21_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        int64_t* var_d8
        rbx_6 = var_d8
        goto label_140ea8b5e
else
    int64_t var_188 = rax_48
    int64_t* var_180_1 = r12_1
    
    if (r12_1 != 0)
        r12_1[1].d += 1
    
    void* var_3d0
    sub_140ebb050(arg1, &var_3d0, &var_188)
    void* r15_2 = var_3d0
    int64_t* var_3c8
    rbx_6 = var_3c8
    
    if (r15_2 == data_143e244b0)
        r15_3 = arg1
    label_140ea8b5e:
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp18_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    else
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        int64_t var_268
        sub_140a96170(&var_268)
        int64_t* (* var_2d8)(void* arg1, int64_t* arg2) = sub_140ebf9c0
        char var_250_1 = 0
        void* const rdx_8 = nullptr
        int64_t var_248 = 0
        int64_t* rsi_2 = arg1[0x74]
        int32_t var_240_1 = 0
        int64_t* rax_49 = rsi_2
        int32_t var_2d0_1 = 0
        
        if (rsi_2 == 0)
            goto label_140ea87af
        
        int32_t rax_50 = rsi_2[1].d
        
        if (rax_50 == 0)
            rsi_2 = nullptr
        else
            rsi_2[1].d = rax_50 + 1
            rax_49 = rsi_2
        label_140ea87af:
            
            if (rax_49 != 0)
                rdx_8 = arg1[0x73]
        
        var_2d8.o = var_2d8.o
        char var_250_2 = 1
        int64_t* var_318
        sub_1407473e0(&var_248, sub_140e46010(&var_318, rdx_8, &var_2d8))
        int32_t var_310
        int64_t* rax_54
        
        if (var_310 == 0)
            rax_54 = var_318
        label_140ea8828:
            
            if (rax_54 != 0)
                sub_140a74f90(rax_54)
        else
            int64_t* rcx_42 = var_318
            
            if (rcx_42 != 0)
                (*(*rcx_42 + 0x38))(rcx_42, 0)
                rax_54 = var_318
                
                if (rax_54 != 0)
                    rax_54 = sub_140a84c80(rax_54, 0, 0)
                    var_318 = rax_54
                
                int32_t var_310_1 = 0
                goto label_140ea8828
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp24_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
        
        int64_t var_120 = var_268
        int64_t* var_260
        int64_t* var_118_1 = var_260
        
        if (var_260 != 0)
            var_260[1].d += 1
            rbx_6 = var_3c8
            r15_2 = var_3d0
        
        int32_t var_258
        int32_t var_110_1 = var_258
        char var_108_1 = var_250_2
        int64_t var_100 = 0
        int32_t var_f8_1 = 0
        sub_140692f90(&var_100, &var_248)
        sub_140f8bc30(r15_2, &var_120)
        int64_t* rax_61 = sub_140d44910(r15_2 + 0x2a8)
        int64_t var_168 = *rax_61
        void* rcx_51 = rax_61[1]
        void* var_160_1 = rcx_51
        
        if (rcx_51 != 0)
            *(rcx_51 + 8) += 1
            rbx_6 = var_3c8
        
        r15_3 = arg1
        int32_t var_158_1 = rax_61[2].d
        void var_f0
        int64_t* rax_64 = (*(*r15_3 + 8))(r15_3, &var_f0)
        int64_t var_178 = *rax_64
        void* rcx_54 = rax_64[1]
        void* var_170_1 = rcx_54
        
        if (rcx_54 != 0)
            *(rcx_54 + 8) += 1
        
        void* rcx_55 = nullptr
        int64_t* rsi_3 = r15_3[0x74]
        
        if (rsi_3 != 0)
            int32_t rax_65 = rsi_3[1].d
            
            if (rax_65 != 0)
                rsi_3[1].d = rax_65 + 1
                rax_65.b = 1
            
            if (rax_65.b == 0)
                rsi_3 = nullptr
            
            if (rsi_3 != 0)
                rcx_55 = r15_3[0x73]
        
        sub_140ea2410(rcx_55, &var_178, &var_168)
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp43_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp43_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
        
        int64_t* var_e8
        
        if (var_e8 != 0)
            var_e8[1].d -= 1
            
            if (var_e8[1].d == 1)
                (**var_e8)(var_e8)
                int32_t temp46_1 = *(var_e8 + 0xc)
                *(var_e8 + 0xc) -= 1
                
                if (temp46_1 == 1)
                    (*(*var_e8 + 8))(var_e8, 1)
        
        sub_140745b20(&var_248)
        
        if (var_260 != 0)
            var_260[1].d -= 1
            
            if (var_260[1].d == 1)
                (**var_260)(var_260)
                int32_t rax_72 = *(var_260 + 0xc)
                *(var_260 + 0xc) -= 1
                
                if (rax_72 == 1)
                    (*(*var_260 + 8))(var_260, 1)
            
            rbx_6 = var_3c8
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp51_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp51_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
            
            goto label_140ea8b5e
void* rsi_7 = r13
int64_t* var_350

if (*(rsi_7 + 0xe0) == 0)
    int64_t* rax_90
    
    if (rcx_16 == 0)
        rax_90 = sub_1405d9400()
    else
        rax_90 = rcx_16 + 0x28
    
    int64_t r8_6 = *rax_90
    int64_t* rdx_18 = rax_90[1]
    
    if (rdx_18 != 0)
        rdx_18[1].d += 1
    
    int32_t rcx_80 = rax_90[2].d
    int64_t var_218 = 0
    int32_t var_210_1 = 0
    int64_t var_238_2 = var_358
    int64_t* rax_92 = var_350
    var_350 = rdx_18
    int32_t var_228_1 = rcx_80
    int32_t var_348_1 = rcx_80
    char var_220_1 = 1
    var_358 = r8_6
    char var_340_2 = 1
    sub_1407473e0(&var_338, &var_218)
    sub_140745b20(&var_218)
    
    if (rax_92 != 0)
        rax_92[1].d -= 1
        
        if (rax_92[1].d == 1)
            (**rax_92)(rax_92)
            int32_t rax_95 = *(rax_92 + 0xc)
            *(rax_92 + 0xc) -= 1
            
            if (rax_95 == 1)
                (*(*rax_92 + 8))(rax_92, 1)
else
    sub_14065da90(&var_358, rsi_7 + 0xc8)
    char var_340_1 = *(rsi_7 + 0xe0)
    sub_140692f90(&var_338, rsi_7 + 0xe8)

if (var_408 != 0 && var_330 != 0)
    int64_t* rcx_85 = var_338
    
    if (rcx_85 != 0 && (*(*rcx_85 + 0x28))(rcx_85) != 0)
        int64_t* rax_99 = sub_140d44910(&var_358)
        int64_t r8_7 = *rax_99
        void* rdx_20 = rax_99[1]
        
        if (rdx_20 != 0)
            *(rdx_20 + 8) += 1
        
        int32_t rcx_87 = rax_99[2].d
        int64_t var_1e8 = 0
        int32_t var_1e0_1 = 0
        int64_t var_208_2 = var_358
        void* var_350_1 = rdx_20
        int32_t var_1f8_1 = rcx_87
        int32_t var_348_2 = rcx_87
        char var_1f0_1 = 1
        var_358 = r8_7
        char var_340_3 = 1
        sub_1407473e0(&var_338, &var_1e8)
        sub_140745b20(&var_1e8)
        
        if (var_350 != 0)
            var_350[1].d -= 1
            
            if (var_350[1].d == 1)
                (**var_350)(var_350)
                int32_t r13_1 = *(var_350 + 0xc)
                *(var_350 + 0xc) -= 1
                
                if (r13_1 == 1)
                    (*(*var_350 + 8))(var_350, zx.q(r13_1))

char rax_106 = *(rax_5 + 0x70)

if (rax_106 == 4)
    int64_t* r8_8 = &var_3b8
    int64_t* rbx_12
    
    if (*(rsi_7 + 0x148) == 0)
        int64_t* var_78
        int64_t** rax_130 = sub_140ea5720(arg1, &var_78, r8_8)
        int64_t* rsi_11 = r15_3[0x5b]
        
        if (rsi_11 != 0)
            rsi_11[1].d += 1
        
        sub_140e0dfc0(&r15_3[0x58])
        int64_t* rbx_17 = rax_130[1]
        int64_t* var_2f8 = *rax_130
        
        if (rbx_17 != 0)
            rbx_17[1].d += 1
        
        if (&var_2f8 != &r15_3[0x5a])
            var_2f8.o = *(r15_3 + 0x2d0)
            *(r15_3 + 0x2d0) = var_2f8.o
        
        if (rbx_17 != 0)
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t temp29_1 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (temp29_1 == 1)
                    (*(*rbx_17 + 8))(rbx_17, 1)
        
        sub_140de7bf0(&r15_3[0x58])
        
        if (rsi_11 != 0)
            rsi_11[1].d -= 1
            
            if (rsi_11[1].d == 1)
                (**rsi_11)(rsi_11)
                int32_t temp34_1 = *(rsi_11 + 0xc)
                *(rsi_11 + 0xc) -= 1
                
                if (temp34_1 == 1)
                    (*(*rsi_11 + 8))(rsi_11, 1)
        
        int64_t* var_70
        rbx_12 = var_70
    else
        void* var_d0
        void** rax_107 = sub_140eab520(arg1, &var_d0, r8_8)
        int64_t* rsi_6 = r15_3[0x5b]
        
        if (rsi_6 != 0)
            rsi_6[1].d += 1
        
        sub_140e0dfc0(&r15_3[0x58])
        int64_t* rbx_11 = rax_107[1]
        void* var_308 = *rax_107
        
        if (rbx_11 != 0)
            rbx_11[1].d += 1
        
        if (&var_308 != &r15_3[0x5a])
            var_308.o = *(r15_3 + 0x2d0)
            *(r15_3 + 0x2d0) = var_308.o
        
        if (rbx_11 != 0)
            rbx_11[1].d -= 1
            
            if (rbx_11[1].d == 1)
                (**rbx_11)(rbx_11)
                int32_t temp31_1 = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (temp31_1 == 1)
                    (*(*rbx_11 + 8))(rbx_11, 1)
        
        sub_140de7bf0(&r15_3[0x58])
        
        if (rsi_6 != 0)
            rsi_6[1].d -= 1
            
            if (rsi_6[1].d == 1)
                (**rsi_6)(rsi_6)
                int32_t temp35_1 = *(rsi_6 + 0xc)
                *(rsi_6 + 0xc) -= 1
                
                if (temp35_1 == 1)
                    (*(*rsi_6 + 8))(rsi_6, 1)
        
        int64_t* var_c8
        rbx_12 = var_c8
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp41_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*(*rbx_12 + 8))(rbx_12, 1)
    
    rsi_7 = r13
    r15_3 = arg1
else if (rax_106 == 0 || rax_106 == 6)
    void* var_c0
    sub_140de1b90(&r15_3[0x58], sub_140ea4bd0(r15_3, &var_c0, &var_3b8))
    int64_t* var_b8
    
    if (var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            (**var_b8)(var_b8)
            int32_t temp22_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*var_b8 + 8))(var_b8, 1)

if (var_408 == 0)
    int64_t rbx_13 = *(rsi_7 + 0x8c)
    int32_t rcx_101
    rcx_101.b = sub_140b5b8a0(rbx_13.d, 0) == 0
    uint32_t rax_117
    rax_117.b = (rbx_13 u>> 0x20).d != 0
    rcx_101.b |= rax_117.b
    
    if (rcx_101.b != 0)
        void* r15_5 = r15_3[0x5a]
        int64_t* rsi_9 = arg1[0x5b]
        
        if (rsi_9 != 0)
            rsi_9[1].d += 1
        
        void*** rax_118 = j_sub_140a82f30(0x20)
        
        if (rax_118 != 0)
            rax_118[1].d = 1
            *rax_118 = &data_142ededc8
            *(rax_118 + 0xc) = 1
            rax_118[2] = &data_142eda088
            rax_118[3] = rbx_13
        
        if (rax_118 != 0)
            rax_118[1].d += 1
        
        int64_t r13_3 = sx.q(*(r15_5 + 0x230))
        int32_t rax_119 = (r13_3 + 1).d
        *(r15_5 + 0x230) = rax_119
        
        if (rax_119 s> *(r15_5 + 0x234))
            sub_1405a4f90(r15_5 + 0x228)
        
        void** rax_122 = (r13_3 << 4) + *(r15_5 + 0x228)
        *rax_122 = &rax_118[2]
        rax_122[1] = rax_118
        
        if (rax_118 != 0)
            int32_t rax_123 = rax_118[1].d
            rax_118[1].d = rax_123
            
            if (rax_123 == 0)
                (**rax_118)(rax_118)
                int32_t temp45_1 = *(rax_118 + 0xc)
                *(rax_118 + 0xc) -= 1
                
                if (temp45_1 == 1)
                    (*rax_118)[1](rax_118, 1)
        
        if (rax_118 != 0)
            rax_118[1].d -= 1
            
            if (rax_118[1].d == 1)
                (**rax_118)(rax_118)
                int32_t temp48_1 = *(rax_118 + 0xc)
                *(rax_118 + 0xc) -= 1
                
                if (temp48_1 == 1)
                    (*rax_118)[1](rax_118, 1)
        
        if (rsi_9 != 0)
            rsi_9[1].d -= 1
            
            if (rsi_9[1].d == 1)
                (**rsi_9)(rsi_9)
                int32_t temp50_1 = *(rsi_9 + 0xc)
                *(rsi_9 + 0xc) -= 1
                
                if (temp50_1 == 1)
                    (*(*rsi_9 + 8))(rsi_9, 1)

if (var_408 == 0)
    int16_t var_1a0 = 0x100
    var_3e8 = sub_140ec1e80
    var_3e0.d = 0
    int128_t var_98 = var_3e8.o
    void var_198
    sub_140e8f8a0(&var_198, arg1, &var_98)
    sub_140688d20(&arg1[1], &arg1[0x33], &var_1a0, 2)
    sub_140745b20(&var_198)
    var_3e0.d = 0
    var_3e8 = sub_140ec03d0
    int128_t var_88 = var_3e8.o
    int16_t var_138 = 0x119
    void var_130
    sub_140e8f4e0(&var_130, arg1, &var_88)
    sub_140e253b0(&arg1[1], &var_138)
else
    int16_t var_1b8 = 0x100
    var_3e8 = sub_140ec1fa0
    var_3e0.d = 0
    int128_t var_a8 = var_3e8.o
    void var_1b0
    sub_140e8f8a0(&var_1b0, arg1, &var_a8)
    sub_140688d20(&arg1[1], &arg1[0x33], &var_1b8, 2)
    sub_140745b20(&var_1b0)

if (r12_1 != 0)
    r12_1[1].d -= 1
    
    if (r12_1[1].d == 1)
        (**r12_1)(r12_1)
        int32_t temp33_1 = *(r12_1 + 0xc)
        *(r12_1 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*r12_1 + 8))(r12_1, 1)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp37_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*r14 + 8))(r14, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp40_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp40_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t result = sub_140e983a0(&var_3b8)
__security_check_cookie(rax_1 ^ &var_428)
return result
