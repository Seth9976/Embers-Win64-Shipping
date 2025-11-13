// 函数: sub_141acf160
// 地址: 0x141acf160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t i = 0
uint64_t* rsi = arg4
void* const rdx = arg1
int64_t* var_138 = nullptr
int64_t* r15 = nullptr
int32_t var_12c = 0
int64_t* r14 = *arg2
int32_t i_2 = 0
int32_t r13 = 0
void* rax_5 = &r14[sx.q(arg2[1].d) * 0x14]

if (r14 != rax_5)
    do
        int64_t i_4 = sx.q(i_2)
        i_2 = (i_4 + 1).d
        
        if (i_2 s> r13)
            sub_1405a4f90(&var_138)
            r13 = var_12c
            r15 = var_138
        
        sub_1413be590(&r15[i_4 * 2], r14)
        r14 = &r14[0x14]
    while (r14 != rax_5)
    
    rsi = arg4
    rdx = arg1

uint32_t rcx_4 = zx.d(*(rdx + 0xe))
float zmm2 = *(rdx + 8) * 0.0174532924f
var_138 = r15
int32_t i_3 = i_2
void* const var_148
int32_t var_140

if (rcx_4 == 1)
    var_148:4.d = 0x3f800000
    var_148.d = 0
    var_140 = 0
else if (rcx_4 == 2)
    var_140 = 0x3f800000
    var_148 = nullptr
else
    var_148.d = 0x3f800000
    var_148 = 0

uint64_t var_10c = var_148
int32_t var_104 = var_140
void** const var_d8 = &data_142e345d8
uint128_t zmm0
zmm0.d = zmm2
int64_t var_e8 = 0
uint128_t var_d0 = zmm0
int64_t (* var_f8)(int128_t* arg1, int64_t* arg2, int64_t* arg3) = sub_141a99010
uint64_t var_c0 = rdx
int64_t var_b8
int64_t result = sub_141a89910(&var_b8, rsi, arg3, 1, sub_141a8c950(&var_b8, &var_138, &var_f8), 0)

if (arg2[1].d s> 0)
    int64_t rdx_5 = 0
    int64_t r8_2 = 0
    
    do
        result = *arg2
        r8_2 += 0xa0
        uint64_t rcx_8 = *rsi
        rdx_5 += 4
        i += 1
        *(rdx_5 + rcx_8 - 4) = *(r8_2 + result - 0x90) f* *(rdx_5 + rcx_8 - 4)
    while (i s< arg2[1].d)

int64_t var_88

if (var_88 != 0)
    void var_68
    void* rcx_9 = &var_68
    void* var_78
    
    if (var_78 != 0)
        rcx_9 = var_78
    
    result = (*(*rcx_9 + 0x10))(rcx_9)

int64_t rcx_10 = var_b8

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t* rdi = r15

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_11 = *rdi
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rdi = &rdi[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r15 != 0)
    result = sub_140a74f90(r15)

__security_check_cookie(rax_1 ^ &var_178)
return result
