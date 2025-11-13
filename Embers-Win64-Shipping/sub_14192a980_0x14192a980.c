// 函数: sub_14192a980
// 地址: 0x14192a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
sub_140596d10(arg1, arg2)
int64_t* rcx = &arg1[6]
__builtin_memset(&arg1[2], 0, 0x20)
int64_t rbx = -1
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_2 = rcx[2]

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x14]
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
__builtin_memset(&arg1[0xe], 0, 0x30)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x1e]
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x30]
arg1[0x22].d = 0xffffffff
*(arg1 + 0x114) = 0
arg1[0x24] = 0
arg1[0x25].d = 0
__builtin_memset(&arg1[0x26], 0, 0x20)
__builtin_memset(&arg1[0x2b], 0, 0x28)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_5 = *(rcx_3 + 0x10)

if (rax_5 != 0)
    rcx_3 = rax_5

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x34].d = 0xffffffff
*(arg1 + 0x1a4) = 0
arg1[0x36] = 0
arg1[0x37].d = 0
arg1[0x38].d = 0
arg1[0x39].b = 0
char* rax_6 = data_143effa60(0x1f02)
char* rax_7 = data_143effa60(0x1f01)
int16_t* var_150 = nullptr
int64_t r8 = -1
int32_t var_148 = 0

do
    r8 += 1
while (rax_6[r8] != 0)

sub_140a20b00(&var_150, rax_6, r8.d)

do
    rbx += 1
while (rax_7[rbx] != 0)

sub_140a20b00(&var_150, rax_7, rbx.d)
int64_t var_108
__builtin_memset(&var_108, 0, 0x14)
int16_t* rdx_2
int32_t rbx_2

if (var_148 == 0)
    rbx_2 = 0
    rdx_2 = &data_142d40450
else
    rdx_2 = var_150
    rbx_2 = var_148 - 1

void var_e8
sub_1408f2b40(&var_e8, rdx_2)
void* var_60
sub_140b3f690(var_60, sx.q(rbx_2), &var_108)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

void var_140
int64_t var_138
int64_t* rax_9 = sub_140b63b70(sub_141976940(&var_140, data_143f0f1a0), &var_138)
int32_t rdx_6 = rax_9[1].d
int64_t rax_10 = *rax_9
int32_t rdx_7 = neg.d(rdx_6)
*rax_9 = 0
int32_t r8_3 = rax_9[1].d
int64_t var_178 = rax_10
int32_t rax_11 = *(rax_9 + 0xc)
int32_t rdx_10 = sbb.d(rdx_7, rdx_7, rdx_6 != 0) + 2 + r8_3
rax_9[1] = 0

if (rdx_10 s> rax_11)
    sub_1405947f0(&var_178, rdx_10)

int32_t r13 = 1
sub_140a20ba0(&var_178, &data_142d99650, 1)
int64_t r14_1 = var_178
var_178 = 0
int32_t var_170
var_170.q = 0
int64_t var_128
int64_t* rax_13 = sub_14088a900(&var_108, &var_128)
int64_t rsi_1
int32_t r12_1
int32_t r13_1

if (r8_3 s> 1)
    int32_t rax_14 = rax_13[1].d
    int32_t rsi_2 = rax_14 - 1
    
    if (rax_14 == 0)
        rsi_2 = 0
    
    if (r8_3 != 0 || rsi_2 == 0)
        r13 = 0
    
    int32_t rdx_13 = r8_3 + rsi_2 + r13
    int64_t var_168 = r14_1
    
    if (rdx_13 s> rax_11)
        sub_1405947f0(&var_168, rdx_13)
    
    sub_140a20ba0(&var_168, *rax_13, rsi_2)
    rsi_1 = var_168
    r12_1 = r8_3
    r14_1 = 0
    r13_1 = rax_11
    var_168 = 0
    int32_t var_160_1
    var_160_1.q = 0
else
    rsi_1 = *rax_13
    *rax_13 = 0
    r12_1 = rax_13[1].d
    r13_1 = *(rax_13 + 0xc)
    rax_13[1] = 0

void var_118

if (&arg1[2] != &var_118)
    int64_t rcx_17 = arg1[2]
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    arg1[2] = rsi_1
    arg1[3].d = r12_1
    *(arg1 + 0x1c) = r13_1
else if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

int64_t rcx_20 = var_138

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = var_128

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int16_t* rcx_22 = var_150

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
