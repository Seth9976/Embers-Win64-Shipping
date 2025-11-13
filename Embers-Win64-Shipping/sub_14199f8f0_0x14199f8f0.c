// 函数: sub_14199f8f0
// 地址: 0x14199f8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void var_148
memset(&var_148, 0, 0x120)
sub_1419a8370(arg1, arg2, &var_148)
void* rsi = *arg1

if ((arg2[6].b & 1) == 0)
    sub_1410e0370(rsi)
else
    int64_t rbx_3 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_2 = rbx_3 + 0xb6
    
    if (rax_2 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0xb8)
        rbx_3 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
        rax_2 = rbx_3 + 0xb6
    
    wchar16 const* const rcx_3 =
        !!!Unavailable RDG event name: need RDG_EVENTS>=0 and r.RDG.EmitWarnings=1 or -rdgdebug!!!"
    *(rsi + 0x30) = rax_2
    wchar16 const i
    
    do
        i = *rcx_3
        *(rcx_3 + rbx_3 - !!!Unavailable RDG event name: need RDG_EVENTS>=0 and r.RDG.EmitWarnings=1 or -rdgdebug!!!") =
            i
        rcx_3 = &rcx_3[1]
    while (i != 0)
    void*** rcx_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_6[0x27]
    
    if (rax_3 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x140)
        rcx_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_6[0x27]
    
    *(rsi + 0x30) = rax_3
    void**** rax_4 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_4 = rcx_6
    *(rsi + 8) = &rcx_6[1]
    sub_1405d11b0(rcx_6, &var_148, rbx_3)
    *(rsi + 0x1c4) = 1
    sub_1405d19b0(rsi, &var_148)
    char var_31
    *(rsi + 0x178) = var_31
    *(rsi + 0x179) = 0
    *(rsi + 0x1c4) = 1

sub_14199f040(arg2, *arg1)

if ((arg2[6].b & 1) != 0)
    sub_141096650(*arg1)

sub_1419aa570(arg1, arg2)
void var_40
int64_t result = sub_1405d1550(&var_40)
__security_check_cookie(rax_1 ^ &var_168)
return result
