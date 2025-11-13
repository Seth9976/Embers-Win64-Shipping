// 函数: sub_141802eb0
// 地址: 0x141802eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t r8 = sx.q(*(arg1 + 0x18))
void* rdx = *(arg1 + 0x10)
int64_t rcx = 0
int64_t var_48 = 0
int16_t* rsi
int32_t rdi

if (rdx == 0)
    rsi = nullptr
    int64_t var_40_1 = 0
    rdi = 0
    int32_t var_38_1 = 0
else
    int32_t r9_1 = 0
    
    if (r8.d s> 0 && *(r8 + rdx - 1) == 0)
        r9_1 = 1
        r8 = zx.q(r8.d - 1)
    
    void var_148
    sub_141804ad0(&var_148, rdx, r8.d, r9_1)
    rcx = var_48
    int32_t var_38
    rdi = var_38
    int16_t* var_40
    rsi = var_40

*arg2 = 0
arg2[1] = 0

if (rsi != 0 && *rsi != 0 && rdi s> 0)
    int32_t rdx_1 = 0
    
    if (rdi + 1 s> 0)
        sub_1405947f0(arg2, rdi + 1)
        rdx_1 = arg2[1].d
    
    int32_t rax_4 = rdx_1 + 1 + rdi
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, rdi * 2)
    *(*arg2 + (sx.q(arg2[1].d) << 1) - 2) = 0
    rcx = var_48

if (rcx != 0)
    sub_140a74f90(rcx)

__security_check_cookie(rax_1 ^ &var_168)
return arg2
