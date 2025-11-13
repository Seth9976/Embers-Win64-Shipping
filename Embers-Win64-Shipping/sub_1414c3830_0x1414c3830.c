// 函数: sub_1414c3830
// 地址: 0x1414c3830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rsi = *(*arg2 + 8)
void* var_160 = rsi

if (rsi != 0)
    *(rsi + 8) += 1

void* rbx = *sub_1410f83c0(sub_14139bef0(arg1))
void* var_168 = rbx

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = var_168

int32_t var_80 = 0
int128_t var_68 = data_142d3f5a0
int64_t var_58
__builtin_memset(&var_58, 0, 0x19)
int64_t var_150 = 0
int64_t var_90 = 0
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
void* var_158 = rsi
int32_t var_148 = 0xffffffff
int16_t var_144 = 0x500
bool var_3f = *(rsi + 0x38) u> 1
void var_140
memset(&var_140, 0, 0xa8)
char var_88 = 0x55
int32_t rax_5
rax_5.b = arg3 != 0
void* var_98 = rbx
int32_t var_84 = rax_5 + 0x21
char rax_7 = var_144:1.b

if (arg4 != 0)
    rax_7 = 9

int64_t rsi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
var_144:1.b = rax_7
int64_t rax_8 = rsi_3 + 0x24

if (rax_8 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x26)
    rsi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_8 = rsi_3 + 0x24

wchar16 const* const rcx_3 = u"VelocityRendering"
*(arg1 + 0x30) = rax_8
wchar16 const i

do
    i = *rcx_3
    *(rsi_3 - u"VelocityRendering" + rcx_3) = i
    rcx_3 = &rcx_3[1]
while (i != 0)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_6[0x27]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_6[0x27]

*(arg1 + 0x30) = rax_9
void**** rax_10 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_10 = rcx_6
*(arg1 + 8) = &rcx_6[1]
sub_1405d11b0(rcx_6, &var_158, rsi_3)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_158)
int64_t var_48
*(arg1 + 0x178) = var_48:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1

if (arg4 == 0)
    void*** rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = &rcx_13[3]
    
    if (rax_13 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_13[3]
    
    *(arg1 + 0x30) = rax_13
    int64_t* rax_14 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_14 = rcx_13
    *(arg1 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142f6bbc8
    rcx_13[2].w = 1
    *(rcx_13 + 0x12) = 0

int64_t var_50
sub_1405d1550(&var_50)
sub_1405d1550(&var_168)
int64_t result = sub_1405d1550(&var_160)
__security_check_cookie(rax_1 ^ &var_188)
return result
