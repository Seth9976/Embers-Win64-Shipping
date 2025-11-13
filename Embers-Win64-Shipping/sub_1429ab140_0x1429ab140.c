// 函数: sub_1429ab140
// 地址: 0x1429ab140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_278 = -2
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t r14 = arg3
void* var_290 = arg1
void* rsi = nullptr
int32_t var_2a8 = 0
struct _Mtx_internal_imp_t* mtx = *(arg1 + 0x10)
struct _Mtx_internal_imp_t* mtx_1 = mtx
char var_280 = 0
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_280_1 = 1
void* r8 = *(arg1 + 8)
int64_t rax_2
int64_t rdx
rdx:rax_2 = muls.dp.q(0x4924924924924925, *(r8 + 0xf0) - *(r8 + 0xe8))
int64_t rdx_1 = rdx s>> 4

if (rdx_1 == neg.q(rdx_1 u>> 0x3f))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, "No frame buffer specified as pixel data destination.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int32_t r15 = r14

if (r14 s>= arg2)
    r15 = arg2

if (r14 s<= arg2)
    r14 = arg2

int32_t r9 = *(r8 + 0x8c)

if (r15 s< r9 || r14 s> *(r8 + 0x90))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_2
    sub_14297d3f0(&exceptionObject_2, 
        "Tried to read scan line outside the image file's data window.")
    _CxxThrowException(&exceptionObject_2, &data_143946538)
    noreturn

int32_t rcx_4 = *(r8 + 0x118)
int32_t i
int32_t r12
int32_t r13

if (*(r8 + 0x80) != 0)
    i = divs.dp.d(sx.q(r14 - r9), rcx_4)
    r12 = divs.dp.d(sx.q(r15 - r9), rcx_4) - 1
    r13 = -1
else
    i = divs.dp.d(sx.q(r15 - r9), rcx_4)
    r12 = divs.dp.d(sx.q(r14 - r9), rcx_4) + 1
    r13 = 1

void var_2a0
sub_1429c2260(&var_2a0)

for (; i != r12; i += r13)
    void* r8_1 = *(arg1 + 8)
    sub_1429c26b0(sub_1429aac50(&var_2a0, *(arg1 + 0x10), r8_1, i, r15, r14, *(r8_1 + 0x130)))

sub_1429c23e0(&var_2a0)
int64_t i_1 = 0
void* rax_23 = *(arg1 + 8)

if ((*(rax_23 + 0x108) - *(rax_23 + 0x100)) s>> 3 != 0)
    do
        void* rax_24 = *(*(rax_23 + 0x100) + (i_1 << 3))
        
        if (*(rax_24 + 0x30) != 0 && rsi == 0)
            rsi = rax_24 + 0x38
        
        *(rax_24 + 0x30) = 0
        i_1 += 1
        rax_23 = *(arg1 + 8)
    while (i_1 u< (*(rax_23 + 0x108) - *(rax_23 + 0x100)) s>> 3)
    
    if (rsi != 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
        sub_142985a50(&exceptionObject_1, rsi)
        _CxxThrowException(&exceptionObject_1, &data_143946698)
        noreturn

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_2e8)
    return code_1

std::_Throw_C_error(code_1)
noreturn
