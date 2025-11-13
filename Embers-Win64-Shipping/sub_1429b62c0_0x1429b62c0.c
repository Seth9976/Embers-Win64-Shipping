// 函数: sub_1429b62c0
// 地址: 0x1429b62c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_2d8 = -2
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t i_4 = arg3
void* var_2f0 = arg1
void* rsi = nullptr
int32_t var_308 = 0
struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0x1d8)
struct _Mtx_internal_imp_t* mtx_1 = mtx
char var_2e0 = 0
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_2e0_1 = 1
void* r8 = *(arg1 + 8)

if (*(r8 + 0x128) - *(r8 + 0x120) u< 8)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, "No frame buffer specified as pixel data destination.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int32_t i_3 = i_4

if (i_4 s>= arg2)
    i_3 = arg2

if (i_4 s<= arg2)
    i_4 = arg2

int32_t r9 = *(r8 + 0xc4)

if (i_3 s< r9 || i_4 s> *(r8 + 0xc8))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_3
    sub_14297d3f0(&exceptionObject_3, 
        "Tried to read scan line outside the image file's data window.")
    _CxxThrowException(&exceptionObject_3, &data_143946538)
    noreturn

for (int32_t i = i_3; i s<= i_4; i += 1)
    if (*(sx.q(i - r9) + *(r8 + 0x198)) == 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
        sub_14297d3f0(&exceptionObject_1, 
            "Tried to read scan line without knowing the sample counts, pleaseread the sample counts "
        "first.")
        _CxxThrowException(&exceptionObject_1, &data_143946538)
        noreturn

int32_t rcx_3 = *(r8 + 0x150)
int32_t i_1
int32_t r12
int32_t r13

if (*(r8 + 0xb8) != 0)
    i_1 = divs.dp.d(sx.q(i_4 - r9), rcx_3)
    r12 = divs.dp.d(sx.q(i_3 - r9), rcx_3) - 1
    r13 = -1
else
    i_1 = divs.dp.d(sx.q(i_3 - r9), rcx_3)
    r12 = divs.dp.d(sx.q(i_4 - r9), rcx_3) + 1
    r13 = 1

void var_300
sub_1429c2260(&var_300)

for (; i_1 != r12; i_1 += r13)
    sub_1429c26b0(sub_1429b5a10(&var_300, *(arg1 + 8), i_1, i_3, i_4))

sub_1429c23e0(&var_300)
int64_t i_2 = 0
void* rax_25 = *(arg1 + 8)

if ((*(rax_25 + 0x140) - *(rax_25 + 0x138)) s>> 3 != 0)
    do
        void* rax_26 = *(*(rax_25 + 0x138) + (i_2 << 3))
        
        if (*(rax_26 + 0x38) != 0 && rsi == 0)
            rsi = rax_26 + 0x40
        
        *(rax_26 + 0x38) = 0
        i_2 += 1
        rax_25 = *(arg1 + 8)
    while (i_2 u< (*(rax_25 + 0x140) - *(rax_25 + 0x138)) s>> 3)
    
    if (rsi != 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_2
        sub_142985a50(&exceptionObject_2, rsi)
        _CxxThrowException(&exceptionObject_2, &data_143946698)
        noreturn

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_338)
    return code_1

std::_Throw_C_error(code_1)
noreturn
