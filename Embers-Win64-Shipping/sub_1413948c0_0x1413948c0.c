// 函数: sub_1413948c0
// 地址: 0x1413948c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rbx_1 = *(*(arg1 + 0x40) + 8)
void* var_168 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 8) += 1
    rbx_1 = var_168

void var_158
memset(&var_158, 0, 0x120)
void* var_98 = rbx_1
int32_t var_84 = 0x22

if (arg3 == 0)
    char var_88_1 = 0x55
else
    *(arg1 + 0x3db) = 1
    char var_88 = ((arg4 << 2) + 5) | 0x90

int64_t rdi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_2 = rdi_3 + 0x2c

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x2e)
    rdi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_2 = rdi_3 + 0x2c

wchar16 const* const rcx_2 = u"BeginRenderingPrePass"
*(arg2 + 0x30) = rax_2
wchar16 const i

do
    i = *rcx_2
    *(rdi_3 - u"BeginRenderingPrePass" + rcx_2) = i
    rcx_2 = &rcx_2[1]
while (i != 0)
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_5[0x27]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_5[0x27]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_5
*(arg2 + 8) = &rcx_5[1]
sub_1405d11b0(rcx_5, &var_158, rdi_3)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_158)
char var_41
*(arg2 + 0x178) = var_41
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1

if (arg3 == 0)
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_12[3]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_12[3]
    
    *(arg2 + 0x30) = rax_7
    int64_t* rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142f6bbc8
    rcx_12[2].w = 0x100
    *(rcx_12 + 0x12) = 1

void var_50
sub_1405d1550(&var_50)
int64_t result = sub_1405d1550(&var_168)
__security_check_cookie(rax_1 ^ &var_188)
return result
