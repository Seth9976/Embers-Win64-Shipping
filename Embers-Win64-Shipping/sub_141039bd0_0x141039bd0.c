// 函数: sub_141039bd0
// 地址: 0x141039bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t arg_58
int32_t rdi = arg_58
int64_t rsi = sx.q(arg5)
int128_t* var_1d8 = arg1
int32_t var_1e8 = rsi.d
int32_t r14_1 = rdi & 0x1000000
int32_t rbx

if (r14_1 == 0)
    rbx = (&data_1439c85fc)[rsi * 0xa]
else
    rbx = 0x57

int32_t var_1cc = rbx
int32_t rax_2 = sub_140fe7330(rbx, (rdi u>> 4).b & 1)
int32_t var_1e0 = rax_2
int32_t r10 = rax_2
int32_t var_1d0 = rax_2
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
int32_t var_1f0 = 3
int32_t var_1f4 = 4
int32_t var_1ec = 4
int32_t var_1f8 = rcx_2

if (rcx_2 u> 8 || r14_1 != 0)
    rcx_2 = 1
    var_1f8 = 1
else if (rcx_2 u> 1)
    var_1f0 = 5
    var_1f4 = 6
    var_1ec = 6

int32_t var_18c = rcx_2

if (test_bit(rdi, 0x12))
    rax_2 = 0

int64_t var_1a8 = 0
char rax_3 = rax_2.b

if (test_bit(rdi, 0xe))
    rax_3 = 0

int32_t var_198 = arg4
void* rbx_1 = nullptr
char var_206 = rax_3
char r9 = 0
rcx_2.b = 0
int16_t arg_28
int16_t var_194 = arg_28
int16_t arg_48
int16_t var_192 = arg_48
uint128_t var_78 = zx.o(arg3)
int64_t var_188 = 0
uint32_t rdx_2 = (0.q).d

if (r14_1 != 0)
    rdx_2 = 0x20

char var_208 = 0
uint32_t var_58 = rdx_2
char var_207 = 0
int128_t var_88 = 3.o
int128_t var_68 = rbx.o

if ((rdi.b & 1) != 0)
label_141039dd3:
    r9 = 1
    rdx_2 |= 1
    var_208 = 1
    var_58 = rdx_2
else if ((rdi.b & 4) != 0)
    rcx_2.b = 1
    rdx_2 |= 2
    var_207 = 1
    var_58 = rdx_2
else if ((rdi.b & 2) != 0)
    if (((rsi - 0xb).d & 0xfffffff6) != 0 || rsi.d == 0x13)
        goto label_141039dd3
    
    rcx_2.b = 1
    rdx_2 |= 2
    var_207 = 1
    var_58 = rdx_2

if (test_bit(rdi, 0x10))
    rdx_2 |= 4
    var_58 = rdx_2

if (rcx_2.b != 0 && (rdi.b & 8) == 0)
    rdx_2 |= 8
    var_206 = 0
    var_58 = rdx_2

int128_t* rax_7 = var_1d8
arg_58 = rdi & 0xffbfffff
int64_t r11 = *rax_7[2].q
int64_t var_170 = r11
int64_t var_178 = r11
var_1d8 = nullptr
int32_t var_200
int128_t var_a0

if (rcx_2.b != 0 && arg7[2].d == 2)
    var_200 = (*(arg7 + 0x14)).d
    int32_t var_1c4_1 = var_200
    char var_1c0_1 = arg7[3].b
    int32_t var_1b8
    int32_t var_90_1 = var_1b8
    var_1d8 = &var_a0
    var_a0 = r8.o
else if (r9 != 0 && arg7[2].d == 1)
    uint128_t zmm1 = *(arg7 + 0x14)
    int32_t var_1c4
    var_1c4.o = zmm1
    int32_t var_90_2 = _mm_bsrli_si128(zmm1, 0xc).d
    var_1d8 = &var_a0
    var_a0 = r10.o
int32_t rcx_10 = ((((rdx_2 & 1) * 2) | (rdx_2 & 4)) * 2) | (not.d(rdx_2 u>> 3) & 1) | (rdx_2 & 2)
    | (var_1e0 & 0xfffffff0)
int32_t rax_20
rax_20.b = rcx_10.b & 0xe
char temp0_2 = rax_20.b
rax_20.b = neg.b(rax_20.b)
char rax_23 = ((sbb.d(rax_20, rax_20, temp0_2 != 0)).b & 0x10) | (rcx_10.b & 0xef)
char rcx_12 = 0
char rdx_5 = 0

if ((rax_23 & 0x11) == 1)
    rcx_12 = 0x20

if (var_88.d == 1)
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

int32_t i_1 = *(arg7 + 0x24)
void*** result = nullptr
var_200 = rax_25
int32_t* var_158 = &arg_18
int32_t* var_150 = &arg_20
int16_t* var_148 = &arg_28
int16_t* var_140 = &arg_48
int32_t* var_138 = &var_1f8
int32_t* var_130 = &var_1e8
void arg_38
void* var_128 = &arg_38
int32_t* var_120 = &arg_58
int64_t* var_110 = &var_178
int128_t* var_108 = &var_88
int128_t** var_100 = &var_1d8
int32_t* var_f8 = &var_200
char* var_f0 = &var_208
void arg_30
void* var_e8 = &arg_30
int32_t* var_e0 = &var_1d0
int32_t* var_d8 = &var_1cc
int32_t* var_d0 = &var_1f4
char* var_c8 = &var_207
int32_t* var_c0 = &var_1f0
char* var_b8 = &var_206
int32_t* var_b0 = &var_1e0
int32_t* var_a8 = &var_1ec
void*** result_2 = nullptr
int64_t* var_118 = arg7

if (i_1 != 0)
    uint64_t rflags_1
    char temp0_3
    temp0_3, rflags_1 = _bit_scan_forward(i_1)
    int32_t r15_1 = temp0_3
    int32_t i
    
    do
        void*** result_1 = sub_141040e70(&var_158, *(r11 + (zx.q(r15_1) << 3) + 0x9d8))
        
        if (result_2 != 0)
            if (result_1 != 0)
                rbx_1 = &result_1[0xd]
            
            int64_t* r14_2 = result_2[0x24]
            result_2[0x24] = rbx_1
            
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
        
        r11 = var_170
    while (i != 0)

sub_14103af50(result, nullptr)
int64_t* rdi_3 = *arg7

if (rdi_3 != 0)
    int32_t rax_32 = (*(*rdi_3 + 0x10))(rdi_3)
    int64_t rdx_7 = *rdi_3
    int64_t rax_33 = (*(rdx_7 + 8))(rdi_3, rdx_7)
    int32_t var_218_1 = var_200
    int32_t var_220_1 = var_1e8
    int32_t var_228_1 = arg_48.d
    int32_t var_230_1 = arg_28.d
    int32_t var_238_1 = 1
    sub_14104ce20(&result[0xd], arg2, rax_33, rax_32, arg_18, arg_20)
    int64_t* rcx_23 = *arg7
    int64_t rdx_9 = *rcx_23
    (*(rdx_9 + 0x18))(rcx_23, rdx_9)

__security_check_cookie(rax_1 ^ &var_268)
return result
