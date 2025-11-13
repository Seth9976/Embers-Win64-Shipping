// 函数: sub_1413d1e20
// 地址: 0x1413d1e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t var_140 = 0
int32_t var_138 = 0
int64_t var_120 = 0
int32_t var_118 = 0
void* rsi = arg3
int64_t var_110 = 0
int32_t var_108 = 0
int64_t var_100
__builtin_memset(&var_100, 0, 0x20)
int32_t var_148 = 0x3c
char var_144 = 1
int32_t rax_2 = sub_1422e5a30(arg3)
int64_t rax_3

if (data_143f0f220 != 0 && *(data_143ec8340 + 4) != 0)
    rax_3 = sx.q(rax_2)

int64_t rdi

if (data_143f0f220 == 0 || *(data_143ec8340 + 4) == 0
        || ((*(&data_143f025fc + rax_3 * 0x14) u>> 0x14).b & 1) == 0)
    rdi.b = 0
else
    rdi.b = 1

void* var_1d8
sub_1419a2ec0(*(rsi + 0x5150), &var_1d8, &data_143f10340, 0)
void* rcx_4 = var_1d8
int64_t rax_6 = 0

if (rcx_4 != 0)
    int64_t rdx_1 = sx.q(*(rcx_4 + 0x10c))
    void* var_1d0
    int64_t* rbx_1 = *(var_1d0 + 0x10)
    int64_t* rcx_5 = rbx_1[3]
    
    if (rcx_5[rdx_1] == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rcx_5 = rbx_1[3]
    
    rax_6 = rcx_5[rdx_1]
    rsi = arg3

int64_t var_288 = rax_6

if (rdi.b != 0)
    void* var_1c8
    sub_1419a2ec0(*(rsi + 0x5150), &var_1c8, &data_143ec8410, 0)
    void* rcx_8 = var_1c8
    rax_6 = 0
    
    if (rcx_8 != 0)
        int64_t rdx_3 = sx.q(*(rcx_8 + 0x10c))
        void* var_1c0
        int64_t* rbx_2 = *(var_1c0 + 0x10)
        int64_t* rcx_9 = rbx_2[3]
        
        if (rcx_9[rdx_3] == 0)
            sub_1419ccf30(rbx_2, rdx_3.d)
            rcx_9 = rbx_2[3]
        
        rax_6 = rcx_9[rdx_3]

char rdi_2 = 0
int64_t var_280 = rax_6
int64_t r11 = 2
int32_t var_1b0 = 2
int64_t* r10 = &var_288
int64_t rbx_3 = 0x4f1a08f64cae0c3d
int64_t r9 = 0
int64_t var_278

if (&var_288 u> &var_278)
    r11 = 0

int64_t r8 = 0x4f1a08f64cae0c3d
int128_t var_130 = (&var_288).o
int128_t zmm0

do
    void* rax_9 = *r10
    r10 = &r10[1]
    r9 += 1
    zmm0 = *(rax_9 + 0x18)
    int32_t var_80_1 = *(rax_9 + 0x28)
    r8 ^= (r8 << 6) + zmm0.q + (r8 u>> 2) - -0x9e3779b9
    int128_t var_90_1 = zmm0
while (r9 != r11)

int64_t r10_1 = 0
int64_t* r9_1 = *arg4
void* rsi_2 = arg3
int64_t var_f8 = r8
int64_t r8_1 = 0x4f1a08f64cae0c3d
uint64_t r11_2 = sx.q(arg4[1].d) << 3 u>> 3
var_140.o = *arg4

if (r9_1 u> &r9_1[arg4[1]])
    r11_2 = 0

if (r11_2 != 0)
    do
        void* rax_16 = *r9_1
        r9_1 = &r9_1[1]
        r10_1 += 1
        zmm0 = *(rax_16 + 0x18)
        int32_t var_6c_1 = *(rax_16 + 0x28)
        r8_1 ^= (r8_1 << 6) + zmm0.q + (r8_1 u>> 2) - -0x9e3779b9
        int128_t var_7c_1 = zmm0
    while (r10_1 != r11_2)
    
    rsi_2 = arg3

int64_t var_100_1 = r8_1

if (data_1439b6b08 != 0 || data_1439b6b04 != 0)
    rdi_2 = 1

int64_t* r14

if ((data_1439b6b08 == 0 && data_1439b6b04 == 0) || data_1439b6af8 == 0)
    r14.b = 0
else
    r14 = 1

char var_2c8 = r14.b
TEB* gsbase

if (data_143ecc178 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ecc178)
    
    if (data_143ecc178 == 0xffffffff)
        int64_t* rcx_57 = data_143db18d0
        
        if (rcx_57 == 0)
            sub_140a53c40()
            rcx_57 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        data_143ecc170 = (*(*rcx_57 + 0xb0))(rcx_57, u"r.RayTracing.Shadows.EnableMaterials", r8_6)
        _Init_thread_footer(&data_143ecc178)

int32_t rax_24
int64_t* rcx_21

if (rdi_2 != 0)
    rcx_21 = data_143ecc170
    
    if (rcx_21 != 0)
        rax_24 = (*(*rcx_21 + 0x90))(rcx_21)

char var_2c7

if (rdi_2 == 0 || (rcx_21 != 0 && rax_24 == 0))
    var_2c7 = 0
else
    var_2c7 = 1

int64_t* var_2c0
int64_t* rcx_22 = &var_2c0
var_2c0 = nullptr
int64_t var_2b8 = 0

if (r14.b == 0)
    var_2b8.d = 1
    sub_1405a4d70(rcx_22)
    *var_2c0 = arg5
else
    sub_1419ceb80(rcx_22, arg5)

void* var_1a8
sub_1419a2ec0(*(rsi_2 + 0x5150), &var_1a8, &data_143ec8770, 0)
void* rax_26 = var_1a8
int64_t rdi_3 = 0

if (rax_26 != 0)
    int64_t rdx_7 = sx.q(*(rax_26 + 0x10c))
    void* var_1a0
    int64_t* rdi_4 = *(var_1a0 + 0x10)
    int64_t* rax_28 = rdi_4[3]
    
    if (rax_28[rdx_7] == 0)
        sub_1419ccf30(rdi_4, rdx_7.d)
        rax_28 = rdi_4[3]
    
    rdi_3 = rax_28[rdx_7]
    rsi_2 = arg3

int64_t r14_1 = sx.q(var_2b8.d)
int32_t var_2a0 = r14_1.d
int32_t rax_29 = (r14_1 + 1).d
var_2b8.d = rax_29

if (rax_29 s> var_2b8:4.d)
    sub_1405a4d70(&var_2c0)

var_2c0[r14_1] = rdi_3
void* var_198
sub_1419a2ec0(*(rsi_2 + 0x5150), &var_198, &data_143ec8660, 0)
void* rax_31 = var_198
int64_t rdi_5 = 0

if (rax_31 != 0)
    int64_t rdx_10 = sx.q(*(rax_31 + 0x10c))
    int64_t rsi_4 = rdx_10 << 3
    void* var_190
    int64_t* rdi_6 = *(var_190 + 0x10)
    int64_t rax_33 = rdi_6[3]
    
    if (*(rsi_4 + rax_33) == 0)
        sub_1419ccf30(rdi_6, rdx_10.d)
        rax_33 = rdi_6[3]
    
    rdi_5 = *(rsi_4 + rax_33)
    rsi_2 = arg3

int64_t r14_2 = sx.q(var_2b8.d)
int32_t var_29c = r14_2.d
int32_t rax_34 = (r14_2 + 1).d
var_2b8.d = rax_34

if (rax_34 s> var_2b8:4.d)
    sub_1405a4d70(&var_2c0)

int64_t r11_3 = 0
var_2c0[r14_2] = rdi_5
int64_t* r9_2 = var_2c0
int64_t rax_36 = sx.q(var_2b8.d)
int32_t var_270 = rax_36.d
void* rcx_29 = &r9_2[rax_36]
uint64_t r10_5 = (rcx_29 - r9_2 + 7) u>> 3
var_120.o = r9_2.o

if (r9_2 u> rcx_29)
    r10_5 = 0

if (r10_5 != 0)
    do
        void* rax_37 = *r9_2
        r9_2 = &r9_2[1]
        r11_3 += 1
        int128_t zmm0_1 = *(rax_37 + 0x18)
        int32_t var_58_1 = *(rax_37 + 0x28)
        rbx_3 ^= (rbx_3 << 6) + zmm0_1.q + (rbx_3 u>> 2) - -0x9e3779b9
        int128_t var_68_1 = zmm0_1
    while (r11_3 != r10_5)
    
    rsi_2 = arg3

int64_t var_f0 = rbx_3
void*** result = sub_141972650(arg2, &var_148)
void* rax_42 = *(arg1 + 0xa0)
int32_t r13_1 = *(rax_42 + 0x47f0)
void* var_a0 = nullptr
int32_t i_2 = 0
int32_t var_94 = 4
uint32_t rdi_8 = (r13_1 + 0xfff) u>> 0xc

if (rdi_8 u<= 1)
    rdi_8 = 1

uint32_t temp0 = divu.dp.d(0:(r13_1 - 1 + rdi_8), rdi_8)
void var_c0

if (rdi_8 u> 4)
    sub_14085a940(&var_c0, rdi_8)

int64_t rbx_4 = sx.q(*(rsi_2 + 0x5200))

if (rdi_8 s> rbx_4.d)
    *(rsi_2 + 0x5200) = rdi_8
    
    if (rdi_8 s> *(rsi_2 + 0x5204))
        sub_1405a4d70(rsi_2 + 0x51f8)
    
    memset(*(rsi_2 + 0x51f8) + (rbx_4 << 3), 0, sx.q(rdi_8 - rbx_4.d) << 3)
else if (rdi_8 s< rbx_4.d && rdi_8 != rbx_4.d)
    *(rsi_2 + 0x5200) = rdi_8
    sub_1405c53d0(rsi_2 + 0x51f8)

int32_t r14_3 = 0

if (rdi_8 != 0)
    do
        int32_t rax_48 = r14_3 * temp0
        uint32_t rbx_6 = r13_1 - rax_48
        int64_t rsi_9 = (zx.q(rax_48) << 4) + *(rax_42 + 0x47e8)
        
        if (temp0 u<= rbx_6)
            rbx_6 = temp0
        
        int64_t rax_50 = j_sub_140a82f30(0x38)
        int64_t rdx_20 = rax_50
        
        if (rax_50 == 0)
            rdx_20 = 0
        else
            __builtin_memset(rdx_20, 0, 0x38)
        
        int64_t rax_51 = *(rsi_2 + 0x51f8)
        int64_t var_268 = rdx_20
        int64_t var_260_1 = rsi_9
        *(rax_51 + (sx.q(r14_3) << 3)) = rdx_20
        char var_254_1 = var_2c8
        char var_253_1 = var_2c7
        int32_t var_250_1 = var_2a0
        int32_t var_24c_1 = var_29c
        int64_t var_208_1 = 0
        void*** rax_56 = sub_140a82f30(0x30, 8)
        uint128_t zmm0_2 = var_268.o
        *rax_56 = &data_142f19c58
        *(rax_56 + 8) = zmm0_2
        *(rax_56 + 0x18) = rbx_6.o
        rax_56[5] = r14_3.q
        int64_t (* var_218)(int64_t* arg1)
        int64_t (* rax_57)(int64_t* arg1) = var_218
        
        if (rax_56 != -8)
            rax_57 = j_sub_1413c9410
        
        int64_t* rax_58 = sub_140958c20(&var_268, nullptr, 0xff)
        void* rdx_21 = *rax_58
        *(rdx_21 + 0x10) = rax_57
        *(rdx_21 + 0x20) = rax_56
        int128_t* var_208_3 = nullptr
        int128_t var_1f8
        *(rdx_21 + 0x30) = var_1f8
        int128_t var_1e8
        *(rdx_21 + 0x40) = var_1e8
        int64_t (* rax_59)(int64_t* arg1) = rax_57
        
        if (*(rdx_21 + 0x10) != 0)
            rax_59 = nullptr
        
        var_218 = rax_59
        *(rdx_21 + 0x50) = 0xff
        void* rcx_41 = *rax_58
        int32_t r8_4 = rax_58[2].d
        int64_t* rdx_22 = rax_58[1]
        void* rbx_7 = *(rcx_41 + 0x68)
        
        if (rbx_7 != 0)
            *(rbx_7 + 0x48) += 1
        
        int64_t* r9_3
        r9_3.b = 1
        sub_1409787e0(rcx_41, rdx_22, r8_4, r9_3.b)
        
        if (var_218 != 0)
            int128_t* rcx_42 = &var_1f8
            
            if (var_208_3 != 0)
                rcx_42 = var_208_3
            
            (*(*rcx_42 + 0x10))(rcx_42)
        
        int64_t i_4 = sx.q(i_2)
        int32_t i_3 = (i_4 + 1).d
        i_2 = i_3
        
        if (i_3 s> var_94)
            sub_14083a490(&var_c0, i_4.d)
        
        void* rcx_44 = &var_c0
        
        if (var_a0 != 0)
            rcx_44 = var_a0
        
        r14_3 += 1
        *(rcx_44 + (i_4 << 3)) = rbx_7
    while (r14_3 u< rdi_8)

void*** var_178 = nullptr
void** const var_168 = &data_142d578b0
int64_t (* var_188)() = sub_140594850
void var_d8
int64_t* rax_63 = sub_140958c20(&var_d8, &var_c0, 0xff)
void* rdx_25 = *rax_63
*(rdx_25 + 0x10) = var_188
*(rdx_25 + 0x20) = var_178
*(rdx_25 + 0x30) = var_168.o
int128_t var_158
*(rdx_25 + 0x40) = var_158
int64_t (* rcx_48)() = var_188

if (*(rdx_25 + 0x10) != 0)
    rcx_48 = nullptr

*(rdx_25 + 0x50) = 0x6ff
void* rcx_49 = *rax_63
int32_t r8_5 = rax_63[2].d
int64_t* rdx_26 = rax_63[1]
int64_t* rbx_8 = *(rcx_49 + 0x68)
int64_t* var_298 = rbx_8

if (rbx_8 != 0)
    rbx_8[9].d += 1

sub_1409787e0(rcx_49, rdx_26, r8_5, 1)

if (rcx_48 != 0)
    void** const* rcx_50 = &var_168
    
    if (var_178 != 0)
        rcx_50 = var_178
    
    (*rcx_50)[2](rcx_50)

if (arg3 + 0x5208 != &var_298)
    int64_t* rcx_51 = *(arg3 + 0x5208)
    *(arg3 + 0x5208) = rbx_8
    
    if (rcx_51 != 0)
        rcx_51[9].d -= 1
        
        if (rcx_51[9].d == 1)
            sub_140a2f6e0(rcx_51)
else if (rbx_8 != 0)
    rbx_8[9].d -= 1
    
    if (rbx_8[9].d == 1)
        sub_140a2f6e0(var_298)

void* rcx_53 = var_a0
void* rbx_9 = &var_c0
int32_t i_1 = i_2

if (rcx_53 != 0)
    rbx_9 = rcx_53

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_52 = *rbx_9
        
        if (rcx_52 != 0)
            rcx_52[9].d -= 1
            
            if (rcx_52[9].d == 1)
                sub_140a2f6e0(rcx_52)
        
        rbx_9 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_53 = var_a0

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t* rcx_54 = var_2c0

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
