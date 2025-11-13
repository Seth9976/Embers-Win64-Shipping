// 函数: sub_1429ad4c0
// 地址: 0x1429ad4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c8 = -2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t rbx = arg6
int32_t var_1e4 = rbx
int64_t rsi = *sub_1429be1a0(arg2 + 0xc0, arg3, arg4, arg5, rbx)
void* var_1b8
void var_1a8
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (rsi == 0)
    sub_1429779b0(&var_1b8, 3, 1)
    sub_14058b120(
        std::ostream::operator<<(sub_14058b120(
            std::ostream::operator<<(sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    std::ostream::operator<<(sub_14058b120(&var_1a8, "Tile (")), ", ")), 
                ", ")), 
            ", ")), 
        ") is missing.")
    sub_14297d5a0(&exceptionObject, &var_1b8)
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

bool cond:0

if (((*(arg2 + 0x78) u>> 0xc).b & 1) != 0)
    int64_t* rcx_1 = *(arg1 + 0x50)
    cond:0 = (*(*rcx_1 + 0x20))(rcx_1) == rsi
else
    cond:0 = *(arg1 + 0x58) == rsi

if (not(cond:0))
    int64_t* rcx_2 = *(arg1 + 0x50)
    (*(*rcx_2 + 0x28))(rcx_2, rsi)

char var_1e8
char var_1e7
char var_1e6
char var_1e5

if (((*(arg2 + 0x78) u>> 0xc).b & 1) != 0)
    int64_t* rcx_3 = *(arg1 + 0x50)
    (*(*rcx_3 + 0x10))(rcx_3, &var_1e8, 4)
    
    if ((((sx.d(var_1e5) << 8 | zx.d(var_1e6)) << 8 | zx.d(var_1e7)) << 8 | zx.d(var_1e8))
            != *(arg2 + 0x118))
        sub_1429779b0(&var_1b8, 3, 1)
        sub_14058b120(
            std::ostream::operator<<(sub_14058b120(
                std::ostream::operator<<(sub_14058b120(&var_1a8, "Unexpected part number ")), 
                ", should be ")), 
            .")
        sub_142977aa0(&exceptionObject, &var_1b8)
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    rbx = var_1e4

int64_t* rcx_4 = *(arg1 + 0x50)
char var_1e0
(*(*rcx_4 + 0x10))(rcx_4, &var_1e0, 4)
int64_t* rcx_5 = *(arg1 + 0x50)
char var_1dc
(*(*rcx_5 + 0x10))(rcx_5, &var_1dc, 4)
int64_t* rcx_6 = *(arg1 + 0x50)
char var_1d8
(*(*rcx_6 + 0x10))(rcx_6, &var_1d8, 4)
int64_t* rcx_7 = *(arg1 + 0x50)
(*(*rcx_7 + 0x10))(rcx_7, &var_1e4, 4)
int64_t* rcx_8 = *(arg1 + 0x50)
(*(*rcx_8 + 0x10))(rcx_8, &var_1e8, 4)
int32_t rdx_14 = ((sx.d(var_1e5) << 8 | zx.d(var_1e6)) << 8 | zx.d(var_1e7)) << 8 | zx.d(var_1e8)
*arg8 = rdx_14
char var_1df
char var_1de
char var_1dd

if ((((sx.d(var_1dd) << 8 | zx.d(var_1de)) << 8 | zx.d(var_1df)) << 8 | zx.d(var_1e0)) != arg3)
    sub_14297ab20(&exceptionObject, "Unexpected tile x coordinate.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

char var_1db
char var_1da
char var_1d9

if ((((sx.d(var_1d9) << 8 | zx.d(var_1da)) << 8 | zx.d(var_1db)) << 8 | zx.d(var_1dc)) != arg4)
    sub_14297ab20(&exceptionObject, "Unexpected tile y coordinate.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

char var_1d7
char var_1d6
char var_1d5

if ((((sx.d(var_1d5) << 8 | zx.d(var_1d6)) << 8 | zx.d(var_1d7)) << 8 | zx.d(var_1d8)) != arg5)
    sub_14297ab20(&exceptionObject, "Unexpected tile x level number coordinate.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

if ((((sx.d(var_1e4:3.b) << 8 | zx.d(var_1e4:2.b)) << 8 | zx.d(var_1e4:1.b)) << 8 | zx.d(var_1e4.b))
        != rbx)
    sub_14297ab20(&exceptionObject, "Unexpected tile y level number coordinate.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

if (rdx_14 s> *(arg2 + 0x148))
    sub_14297ab20(&exceptionObject, "Unexpected tile block length.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

int64_t* rcx_37 = *(arg1 + 0x50)
char rax_36 = (*(*rcx_37 + 8))(rcx_37)
int64_t* rcx_38 = *(arg1 + 0x50)
int64_t rax_37 = *rcx_38
int64_t result

if (rax_36 == 0)
    result = (*(rax_37 + 0x10))(rcx_38, *arg7, zx.q(*arg8))
else
    result = (*(rax_37 + 0x18))(rcx_38, zx.q(*arg8))
    *arg7 = result

*(arg1 + 0x58) = sx.q(*arg8) + 0x14 + rsi
__security_check_cookie(rax_1 ^ &var_218)
return result
