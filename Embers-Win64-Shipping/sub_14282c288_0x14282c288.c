// 函数: sub_14282c288
// 地址: 0x14282c288
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_10 = rdi
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t var_128 = 0
int64_t var_120 = 0xf
char var_138 = 0
int64_t var_168 = 0
char var_160 = 0
int16_t var_157 = 0
char var_150 = 0
int64_t var_148 = 0
char var_140 = 0
int32_t var_15c = 1
char var_158 = 1
uint128_t zmm6 = zx.o(arg1[1])
int32_t r15 = arg1[2].d
int32_t rcx
rcx.b = sub_14282aff8(arg1) == 0x3e
int32_t var_154 = rcx
int32_t var_14c = 0
sub_14282b9d8()
int64_t var_178 = 0
int64_t* var_170 = arg1
int32_t rax_3 = sub_14282694c(&data_143f89aa0, &var_178)
int32_t rsi = 0
void* var_118
struct std::exception::VTable* exceptionObject

if (rax_3 s> 0)
    do
        rdi = zx.q(sx.d(sub_14282aff8(arg1)))
        
        if (rdi.b == 0x2b)
            int32_t var_14c_1 = 1
        else if (rdi.b != 0x2d)
            sub_14281feb8()
            
            if (sub_14282bd78(&data_143f895d8, rdi.b) != 0)
                if (rdi.b == 0x30)
                    sub_14058a5c0(&var_118, "cannot set zero indentation for a block scalar")
                    sub_1428244f0(&exceptionObject, sub_1427bde30(arg1, &var_178), &var_118)
                    _CxxThrowException(&exceptionObject, &data_143946450)
                    noreturn
                
                var_15c = (rdi - 0x30).d
                char var_158_1 = 0
        else
            int32_t var_14c_2 = 0xffffffff
        
        rsi += 1
    while (rsi s< rax_3)

while (true)
    sub_14281fb28()
    var_178 = 0
    int64_t* var_170_1 = arg1
    
    if (sub_14282694c(&data_143f89560, &var_178) s< 0)
        break
    
    sub_14282af24(arg1, 1)

int32_t* rax_8 = sub_14281fdb8(&var_118)
var_178 = 0
int64_t* var_170_2 = arg1
rdi.b = sub_14282694c(rax_8, &var_178) s>= 0
void* var_110
int64_t var_100

if (var_110 != 0)
    int64_t var_108
    sub_14281f774(var_110, var_108)
    sub_14058ba50(var_110, (var_100 - var_110) & 0xffffffffffffffe0)

if (rdi.b != 0)
    while (sub_14282a90c(arg1) != 0)
        sub_14281fc38()
        var_178 = 0
        int64_t* var_170_3 = arg1
        
        if (sub_14282694c(&data_143f89588, &var_178) s>= 0)
            break
        
        sub_14282af24(arg1, 1)

if (sub_14282a90c(arg1) != 0)
    sub_14281fc38()
    var_178 = 0
    int64_t* var_170_4 = arg1
    
    if (sub_14282694c(&data_143f89588, &var_178) s< 0)
        sub_14058a5c0(&var_118, "unexpected character in block scalar")
        sub_1428244f0(&exceptionObject, sub_1427bde30(arg1, &var_178), &var_118)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn

if (sub_1428278e4(arg1) s>= 0)
    int32_t var_15c_1 = var_15c + sub_1428278e4(arg1)

var_148:4.d = 2
int64_t* rax_16
int64_t r8_1
rax_16, r8_1 = sub_14282e794(&var_118, arg1, &var_168)

if (&var_138 != rax_16)
    if (var_120 u>= 0x10)
        sub_14058ba50(var_138.q, var_120 + 1)
    
    var_128 = 0
    var_120 = 0xf
    var_138 = 0
    memcpy(&var_138, rax_16, 0x20)
    rax_16[2] = 0
    rax_16[3] = 0xf
    *rax_16 = 0

if (var_100 u>= 0x10)
    sub_14058ba50(var_118, var_100 + 1)

*(arg1 + 0x82) = 1
int32_t var_f8 = 0
int32_t var_f4 = 0x14
uint64_t var_f0 = zmm6.q
int32_t var_e8 = r15
int64_t var_d0 = 0
int64_t var_c8 = 0xf
char var_e0[0x10]
var_e0[0] = 0
int64_t* var_c0
__builtin_memset(&var_c0, 0, 0x1c)
char* r9 = &var_138

if (var_120 u>= 0x10)
    r9 = var_138.q

char (* rcx_16)[0x10] = &var_e0

if (var_128 u> 0xf)
    r8_1.b = 0
    sub_14058b8a0(rcx_16, var_128, r8_1, r9)
else
    int64_t var_d0_1 = var_128
    memmove(rcx_16, r9, var_128.d)
    var_e0[var_128] = 0

int64_t result = sub_14282b618(&arg1[0xb], &var_f8)
int64_t* rcx_18 = var_c0

if (rcx_18 != 0)
    int128_t var_b8
    sub_140688f70(rcx_18, var_b8.q)
    int64_t* rcx_19 = var_c0
    result = sub_14058ba50(rcx_19, (var_b8:8.q - rcx_19) & 0xffffffffffffffe0)
    int64_t var_c0_1
    __builtin_memset(&var_c0_1, 0, 0x18)

if (var_c8 u>= 0x10)
    result = sub_14058ba50(var_e0[0].q, var_c8 + 1)

int64_t var_d0_2 = 0
int64_t var_c8_1 = 0xf
var_e0[0] = 0

if (var_120 u>= 0x10)
    result = sub_14058ba50(var_138.q, var_120 + 1)

__security_check_cookie(rax_1 ^ &var_198)
return result
