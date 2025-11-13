// 函数: sub_140ffe550
// 地址: 0x140ffe550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = *(arg3 + 0x38)
void var_60
(*(*rcx + 0x50))(rcx, &var_60)
int64_t var_80 = *(arg3 + 0x38)
int64_t* rbp = nullptr
int32_t var_78 = 0
EnterCriticalSection(arg1 + 0x2658)
int32_t var_84
sub_140fe7200(arg1 + 0x2608, &var_84, &var_80)
int64_t rdx_2 = sx.q(var_84)
int64_t* rdi = nullptr
int64_t rsi
int32_t r14

if (rdx_2.d != 0xffffffff)
    int64_t** r8_2 = *(arg1 + 0x2608) + rdx_2 * 0x38 + 0x10
    
    if (&var_80 != r8_2)
        rbp = *r8_2
        rdi = rbp
        *r8_2 = nullptr
    
    r14 = r8_2[1].d
    rsi = r8_2[2]
    sub_140ffc2f0(arg1 + 0x2608, rdx_2.d)
else
    int64_t var_70
    rsi = var_70
    r14 = var_78

if (arg1 != -0x2658)
    LeaveCriticalSection(arg1 + 0x2658)

int64_t* rcx_7 = *(arg1 + 0x150)
int64_t rax_4 = *rcx_7
int32_t var_5c
int64_t result
int64_t* rdx_3

if (var_5c != 2)
    if (rdi != 0)
        rdx_3 = rbp
        goto label_140ffe66d
    
    (*(rax_4 + 0x180))(rcx_7, *(arg3 + 0x38), 0, 0, rsi, r14, 0)
    result = sub_140a74f90(rsi)
else
    rdx_3 = *(arg3 + 0x38)
label_140ffe66d:
    result = (*(rax_4 + 0x78))(rcx_7, rdx_3, 0)
    
    if (rdi != 0)
        result = (*(*rdi + 0x10))(rdi)
__security_check_cookie(rax_1 ^ &var_c8)
return result
