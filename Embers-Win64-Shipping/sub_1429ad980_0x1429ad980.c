// 函数: sub_1429ad980
// 地址: 0x1429ad980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_2d8 = -2
void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t r14 = arg4
int32_t i = arg3
int32_t i_2 = i
int32_t i_3 = arg2
void* var_2f0 = arg1
int64_t rdi = sx.q(arg6)
int64_t rsi = sx.q(arg7)
int32_t r15 = 0
int32_t var_30c = 0
struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0x158)
struct _Mtx_internal_imp_t* mtx_1 = mtx
char var_2e0 = 0
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_2e0_1 = 1
void* r8 = *(arg1 + 8)
int64_t rax_3
int64_t rdx
rdx:rax_3 = muls.dp.q(0x4924924924924925, *(r8 + 0xf8) - *(r8 + 0xf0))
int64_t rdx_1 = rdx s>> 4

if (rdx_1 == neg.q(rdx_1 u>> 0x3f))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, "No frame buffer specified as pixel data destination.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

void* var_2c8
void var_2b8

if (rdi.d s< 0 || rsi.d s< 0 || (*(r8 + 0x70) == 1 && rdi.d != rsi.d) || rdi.d s>= *(r8 + 0xa4)
        || rsi.d s>= *(r8 + 0xa8))
    sub_1429779b0(&var_2c8, 3, 1)
    sub_14058b120(
        std::ostream::operator<<(sub_14058b120(
            std::ostream::operator<<(sub_14058b120(&var_2b8, "Level coordinate (")), ", ")), 
        ") is invalid.")
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_3
    sub_142977aa0(&exceptionObject_3, &var_2c8)
    _CxxThrowException(&exceptionObject_3, &data_143946538)
    noreturn

if (arg2 s<= i)
    i = i_3
else
    i_3 = i
    i_2 = arg2

int32_t rcx_4 = arg5

if (r14 s> rcx_4)
    int32_t rax_6 = r14
    r14 = rcx_4
    rcx_4 = rax_6

int32_t rdx_3 = r14
int32_t var_310 = rcx_4 + 1
int32_t temp1 = *(r8 + 0x90)

if (temp1 == 1)
    r14 = rcx_4
    var_310 = rdx_3 - 1

int32_t rcx_6 = -1

if (temp1 != 1)
    rcx_6 = 1

void var_300
sub_1429c2260(&var_300)
uint64_t i_4 = zx.q(i_2)

while (r14 != var_310)
    while (i s<= i_4.d)
        void* rdx_4 = *(arg1 + 8)
        
        if (rdi.d s>= *(rdx_4 + 0xa4) || rdi.d s< 0 || rsi.d s>= *(rdx_4 + 0xa8) || rsi.d s< 0
                || i s>= *(*(rdx_4 + 0xb0) + (rdi << 2)) || i s< 0
                || r14 s>= *(*(rdx_4 + 0xb8) + (rsi << 2)) || r14 s< 0)
            i_4.b = 0
        else
            i_4.b = 1
        
        if (i_4.b == 0)
            sub_1429779b0(&var_2c8, 3, 1)
            sub_14058b120(std::ostream::operator<<(sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    std::ostream::operator<<(sub_14058b120(
                        std::ostream::operator<<(sub_14058b120(&var_2b8, "Tile (")), ", ")), 
                    ", ")), 
                &(*},{]")[1])), ") is not a valid tile.")
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
            sub_142977aa0(&exceptionObject_1, &var_2c8)
            _CxxThrowException(&exceptionObject_1, &data_143946538)
            noreturn
        
        int32_t r9 = r15
        r15 += 1
        sub_1429c26b0(sub_1429ad2d0(&var_300, *(rdx_4 + 0x158), rdx_4, r9, i, r14, rdi.d, rsi.d))
        i += 1
        i_4 = zx.q(i_2)
    
    r14 += rcx_6
    i = i_3

sub_1429c23e0(&var_300)
void* rbx = nullptr
int64_t i_1 = 0
void* rcx_11 = *(arg1 + 8)

if ((*(rcx_11 + 0x138) - *(rcx_11 + 0x130)) s>> 3 != 0)
    do
        void* rcx_12 = *(*(rcx_11 + 0x130) + (i_1 << 3))
        
        if (*(rcx_12 + 0x34) != 0 && rbx == 0)
            rbx = rcx_12 + 0x38
        
        *(rcx_12 + 0x34) = 0
        i_1 += 1
        rcx_11 = *(arg1 + 8)
    while (i_1 u< (*(rcx_11 + 0x138) - *(rcx_11 + 0x130)) s>> 3)
    
    if (rbx != 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_2
        sub_142985a50(&exceptionObject_2, rbx)
        _CxxThrowException(&exceptionObject_2, &data_143946698)
        noreturn

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_358)
    return code_1

std::_Throw_C_error(code_1)
noreturn
