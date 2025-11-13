// 函数: sub_14201ec40
// 地址: 0x14201ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_128 = arg15
int64_t var_120
__builtin_memset(&var_120, 0, 0x20)
int32_t r8 = 0
int32_t var_140 = arg5[1].d
int64_t var_148 = *arg5
int32_t var_134 = arg6[1].d
char var_130 = arg7
int64_t var_13c = *arg6
char var_f0 = arg10
int32_t var_12c = arg8.d
int32_t var_100 = 0x41a00000
int32_t var_fc = 0
int32_t var_f4 = 0x3f800000
int16_t var_124 = 1
char var_f8 = 0
int64_t var_118
uint64_t var_110

if (&var_110 != arg11)
    int64_t rdi_1 = sx.q(arg11[1].d)
    int64_t r14_1 = *arg11
    int64_t var_108
    var_108.d = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a00(&var_110, rdi_1.d, 0)
        memcpy(var_110, r14_1, (rdi_1 << 3).d)
        r8 = var_118:4.d

char var_f8_1 = arg12
int32_t var_f4_1 = arg13.d
int32_t var_100_1 = arg14
int32_t var_fc_1 = arg16.d

if (&var_120 != arg9)
    uint32_t count = arg9[1].d
    int64_t r14_2 = *arg9
    var_118.d = count
    
    if (count != 0 || r8 != 0)
        sub_1405da9e0(&var_120, count, r8)
        memcpy(var_120, r14_2, count)
    else
        var_118:4.d = 0

var_124.b = 0
int96_t var_d8 = (zx.o(0)).12
int64_t* var_e8 = nullptr
int32_t var_e0 = 0
int64_t var_c8 = 0
int32_t var_c0 = 0
uint128_t var_bc
memset(&var_bc, 0, 0x88)
int32_t var_b4 = 0x3f800000
char rax_9 = sub_142037630(arg1, &var_148, &var_e8)
int64_t rdi_2 = sx.q(var_e0)
*arg2 = var_bc
int128_t var_ac
arg2[1] = var_ac
uint128_t var_9c
arg2[2] = var_9c
int128_t var_8c
arg2[3] = var_8c
uint128_t var_7c
arg2[4] = var_7c
int128_t var_6c
arg2[5] = var_6c
uint128_t var_5c
arg2[6] = var_5c
uint128_t var_4c
arg2[7] = var_4c
int64_t var_3c
arg2[8].q = var_3c
*arg4 = var_d8.q
arg4[1].d = var_d8:8.d
arg3[1].d = 0

if (*(arg3 + 0xc) != rdi_2.d)
    sub_140638cc0(arg3, rdi_2.d)

int64_t* r15_1 = var_e8
int64_t* rdi_3 = r15_1
void* r14_4 = rdi_2 * 0x1c + r15_1

if (r15_1 != r14_4)
    do
        int64_t rsi_1 = sx.q(arg3[1].d)
        int32_t rax_13 = (rsi_1 + 1).d
        arg3[1].d = rax_13
        
        if (rax_13 s> *(arg3 + 0xc))
            sub_140638a00(arg3)
        
        int64_t r8_5 = rsi_1 * 3
        int64_t rdx_7 = *arg3
        *(rdx_7 + (r8_5 << 2)) = *rdi_3
        int32_t rax_14 = rdi_3[1].d
        rdi_3 += 0x1c
        *(rdx_7 + (r8_5 << 2) + 8) = rax_14
    while (rdi_3 != r14_4)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

uint64_t rcx_9 = var_110

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = var_120

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return zx.q(rax_9)
