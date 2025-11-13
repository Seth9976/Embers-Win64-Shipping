// 函数: sub_141394ae0
// 地址: 0x141394ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rdi = sx.q(arg3)
sub_141391390(arg1, arg2)
char var_178 = 1
uint64_t r12
uint64_t r15

if (rdi.d u> 8)
    sub_140af98a0("Unknown", 0x202, 
        Using a ESimpleRenderTargetMode that wasn't decoded in DecodeRenderTargetMode [", zx.q(rdi.d))
    sub_140afbb40()
    r12 = zx.q(var_178)
    r15 = zx.q(var_178)
else
    switch (rdi)
        case 0, 8
            r15.b = 1
            r12 = 1
        case 1
            r15.b = 0
            r12.b = 0
        case 2
            r15.b = 0
            r12.b = 1
        case 3
            r15.b = 0
            r12.b = 2
        case 4
            r15.b = 2
            r12.b = 1
        case 5
            r15.b = 2
            r12 = 2
        case 6
            r15.b = 1
            var_178 = 0
            r12 = 1
        case 7
            r15.b = 1
            r12.b = 2

r15.b <<= 2
r15.b |= 1
int64_t* rax_2 = sub_14139d690(arg1)
bool rdi_1 = false
int128_t zmm1 = data_142d3f5a0
int64_t rcx_3 = *rax_2
int64_t var_168 = rcx_3
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x19)
int64_t var_160 = 0
int32_t var_158 = 0xffffffff
char var_154 = 0
char var_153 = r15.b
int64_t var_a0 = 0
bool var_4f = *(rcx_3 + 0x38) u> 1
void var_150
memset(&var_150, 0, 0xa8)
int32_t rsi_1 = arg4 & 0xf
char rcx_5 = 0
char rdx = 0

if (rsi_1 != 0)
    rdx = r12.b

if (rsi_1 == 2)
    rcx_5 = var_178

int32_t r14_1 = arg4 & 0xf0

if (r14_1 != 0)
    rdi_1 = r12.b

char var_98 = ((rdx << 2 | rcx_5) << 2 | rdi_1) << 2 | r14_1 == 0x20
int64_t var_a8 = *(*(arg1 + 0x40) + 8)
int32_t var_94 = arg4

if (arg5 != 0)
    sub_1410e0180(arg2, &var_168)

int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_8 = rbx_3 + 0x32

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x34)
    rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_8 = rbx_3 + 0x32

*(arg2 + 0x30) = rax_8
wchar16 const* const rax_9 = u"BeginRenderingSceneColor"
wchar16 const i

do
    i = *rax_9
    *(rbx_3 - u"BeginRenderingSceneColor" + rax_9) = i
    rax_9 = &rax_9[1]
while (i != 0)
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_11[0x27]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_11[0x27]

*(arg2 + 0x30) = rax_10
void**** rax_11 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_11 = rcx_11
*(arg2 + 8) = &rcx_11[1]
sub_1405d11b0(rcx_11, &var_168, rbx_3)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58
*(arg2 + 0x178) = var_58:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int64_t var_60
int64_t result = sub_1405d1550(&var_60)
__security_check_cookie(rax_1 ^ &var_198)
return result
