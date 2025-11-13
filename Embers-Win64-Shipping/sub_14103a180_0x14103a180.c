// 函数: sub_14103a180
// 地址: 0x14103a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t arg_58
int32_t rdi = arg_58
int64_t rsi = sx.q(arg5)
int64_t* r15 = arg7
int128_t* var_1e8 = arg1
int32_t var_1f8 = rsi.d
int64_t* var_a0 = r15
int32_t r14_1 = rdi & 0x1000000
int32_t rbx

if (r14_1 == 0)
    rbx = (&data_1439c85fc)[rsi * 0xa]
else
    rbx = 0x57

int32_t var_1dc = rbx
int32_t rax_2 = sub_140fe7330(rbx, (rdi u>> 4).b & 1)
int32_t var_1f0 = rax_2
int32_t r10 = rax_2
int32_t var_1e0 = rax_2
int32_t r8

if (rbx == 0x13)
    r8 = 0x14
else if (rbx == 0x27)
    r8 = 0x28
else if (rbx == 0x2c)
    r8 = 0x2d
else
    r8 = 0x37
    
    if (rbx != 0x35)
        r8 = rbx

int32_t rcx_2 = arg6
rax_2.b = 1
int32_t var_200 = 3
int32_t var_204 = 4
int32_t var_1fc = 4
int32_t var_208 = rcx_2

if (rcx_2 u> 8 || r14_1 != 0)
    rcx_2 = 1
    var_208 = 1
else if (rcx_2 u> 1)
    var_200 = 5
    var_204 = 6
    var_1fc = 6

int32_t var_19c = rcx_2

if (test_bit(rdi, 0x12))
    rax_2 = 0

int64_t var_1b8 = 0
char rax_3 = rax_2.b

if (test_bit(rdi, 0xe))
    rax_3 = 0

int32_t var_1a8 = arg4
void* rbx_1 = nullptr
char var_216 = rax_3
char r9 = 0
rcx_2.b = 0
int16_t arg_28
int16_t var_1a4 = arg_28
int16_t arg_48
int16_t var_1a2 = arg_48
uint128_t var_80 = zx.o(arg3)
int64_t var_198 = 0
uint32_t rdx_2 = (0.q).d

if (r14_1 != 0)
    rdx_2 = 0x20

char var_218 = 0
uint32_t var_60 = rdx_2
char var_217 = 0
int128_t var_90 = 3.o
int128_t var_70 = rbx.o

if ((rdi.b & 1) != 0)
label_14103a386:
    r9 = 1
    rdx_2 |= 1
    var_218 = 1
    var_60 = rdx_2
else if ((rdi.b & 4) != 0)
    rcx_2.b = 1
    rdx_2 |= 2
    var_217 = 1
    var_60 = rdx_2
else if ((rdi.b & 2) != 0)
    if (((rsi - 0xb).d & 0xfffffff6) != 0 || rsi.d == 0x13)
        goto label_14103a386
    
    rcx_2.b = 1
    rdx_2 |= 2
    var_217 = 1
    var_60 = rdx_2

if (test_bit(rdi, 0x10))
    rdx_2 |= 4
    var_60 = rdx_2

if (rcx_2.b != 0 && (rdi.b & 8) == 0)
    rdx_2 |= 8
    var_216 = 0
    var_60 = rdx_2

int128_t* rax_7 = var_1e8
arg_58 = rdi & 0xffbfffff
int64_t r11 = *rax_7[2].q
int64_t var_180 = r11
int64_t var_188 = r11
var_1e8 = nullptr
int32_t var_210
int128_t var_b8

if (rcx_2.b != 0 && r15[2].d == 2)
    var_210 = (*(r15 + 0x14)).d
    int32_t var_1d4_1 = var_210
    char var_1d0_1 = r15[3].b
    int32_t var_1c8
    int32_t var_a8_1 = var_1c8
    var_1e8 = &var_b8
    var_b8 = r8.o
else if (r9 != 0 && r15[2].d == 1)
    uint128_t zmm1 = *(r15 + 0x14)
    int32_t var_1d4
    var_1d4.o = zmm1
    int32_t var_a8_2 = _mm_bsrli_si128(zmm1, 0xc).d
    var_1e8 = &var_b8
    var_b8 = r10.o
int32_t rcx_10 = ((((rdx_2 & 1) * 2) | (rdx_2 & 4)) * 2) | (not.d(rdx_2 u>> 3) & 1) | (rdx_2 & 2)
    | (var_1f0 & 0xfffffff0)
int32_t rax_20
rax_20.b = rcx_10.b & 0xe
char temp0_2 = rax_20.b
rax_20.b = neg.b(rax_20.b)
char rax_23 = ((sbb.d(rax_20, rax_20, temp0_2 != 0)).b & 0x10) | (rcx_10.b & 0xef)
char rcx_12 = 0
char rdx_5 = 0

if ((rax_23 & 0x11) == 1)
    rcx_12 = 0x20

if (var_90.d == 1)
    rdx_5 = 0x40

char rcx_14 = rcx_12 | rdx_5 | (rax_23 & 0x1f)
int32_t rax_25

if ((0x20 & rcx_14) == 0)
    if ((0x40 & rcx_14) != 0)
        rax_25 = 0xac3
    
    if ((0x40 & rcx_14) == 0 || (rcx_14 & 8) != 0)
        rax_25 = 0
else
    rax_25 = 0xc0

int32_t i_1 = *(r15 + 0x24)
void*** result = nullptr
var_210 = rax_25
int32_t* var_170 = &arg_18
int32_t* var_168 = &arg_20
int16_t* var_160 = &arg_28
int16_t* var_158 = &arg_48
int32_t* var_150 = &var_208
int32_t* var_148 = &var_1f8
void arg_38
void* var_140 = &arg_38
int32_t* var_138 = &arg_58
int64_t* var_128 = &var_188
int128_t* var_120 = &var_90
int128_t** var_118 = &var_1e8
int32_t* var_110 = &var_210
char* var_108 = &var_218
void arg_30
void* var_100 = &arg_30
int32_t* var_f8 = &var_1e0
int32_t* var_f0 = &var_1dc
int32_t* var_e8 = &var_204
char* var_e0 = &var_217
int32_t* var_d8 = &var_200
char* var_d0 = &var_216
int32_t* var_c8 = &var_1f0
int32_t* var_c0 = &var_1fc
void*** result_2 = nullptr
int64_t* var_130 = r15

if (i_1 != 0)
    uint64_t rflags_1
    char temp0_3
    temp0_3, rflags_1 = _bit_scan_forward(i_1)
    int32_t r15_1 = temp0_3
    int32_t i
    
    do
        void*** result_1 = sub_141042210(&var_170, *(r11 + (zx.q(r15_1) << 3) + 0x9d8))
        
        if (result_2 != 0)
            if (result_1 != 0)
                rbx_1 = &result_1[0xe]
            
            int64_t* r14_2 = result_2[0x25]
            result_2[0x25] = rbx_1
            
            if (rbx_1 != 0)
                (*(*rbx_1 + 8))(rbx_1)
            
            if (r14_2 != 0)
                (*(*r14_2 + 0x10))(r14_2)
            
            if (rbx_1 != 0)
                *(rbx_1 + 0xc0) = 0
            
            rbx_1 = nullptr
        else
            result = result_1
        
        result_2 = result_1
        int32_t rax_30 = not.d(1 << r15_1.b)
        r15_1 = 0x20
        i = rax_30 & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            char temp0_4
            temp0_4, rflags_2 = _bit_scan_forward(i)
            r15_1 = temp0_4
        
        r11 = var_180
    while (i != 0)
    r15 = var_a0

void* rbx_2 = result[0x19]

if (rbx_2 != 0 && *(rbx_2 + 0x28) == 0)
    if ((result[0x41].d & 0x400000) == 0)
        int64_t* rax_31 = sub_141022ce0(result[0xf])
        int32_t var_258
        var_258.q = rbx_2 + 0x88
        (*(*rax_31 + 0xc8))(rax_31, &var_a0, 0, 1, var_258)
        int64_t* rdx_8 = var_a0
        result[0x2a].d = rdx_8.d
        sub_14105c0e0(rbx_2 + 0x88, rdx_8)
    else
        result[0x2a].d = 0

int64_t* rdi_3 = *r15

if (rdi_3 != 0)
    int32_t rax_33 = (*(*rdi_3 + 0x10))(rdi_3)
    int64_t rdx_9 = *rdi_3
    int64_t rax_34 = (*(rdx_9 + 8))(rdi_3, rdx_9)
    int32_t var_228_1 = var_210
    int32_t var_230_1 = var_1f8
    int32_t var_238_1 = arg_48.d
    int32_t var_240_1 = arg_28.d
    int32_t var_248_1 = 1
    sub_14104ce20(&result[0xe], arg2, rax_34, rax_33, arg_18, arg_20)
    int64_t* rcx_25 = *r15
    int64_t rdx_11 = *rcx_25
    (*(rdx_11 + 0x18))(rcx_25, rdx_11)

__security_check_cookie(rax_1 ^ &var_278)
return result
