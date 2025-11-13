// 函数: sub_1429b5c20
// 地址: 0x1429b5c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c0 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
uint64_t rax_7 =
    *(arg2 + 0xd0) + (sx.q(divs.dp.d(sx.q(arg3 - *(arg2 + 0xc4)), *(arg2 + 0x150))) << 3)
uint64_t var_1c8 = rax_7
int64_t rsi = *rax_7
void* var_1b8
void var_1a8
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (rsi == 0)
    sub_1429779b0(&var_1b8, 3, 1)
    sub_14058b120(std::ostream::operator<<(sub_14058b120(&var_1a8, "Scan line ")), " is missing.")
    sub_14297d5a0(&exceptionObject, &var_1b8)
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

bool cond:0

if (((*(arg2 + 0x68) u>> 0xc).b & 1) != 0)
    int64_t* rcx_1 = *(arg1 + 0x50)
    cond:0 = (*(*rcx_1 + 0x20))(rcx_1) == *var_1c8
else
    cond:0 = *(arg2 + 0xec) == arg3

if (not(cond:0))
    int64_t* rcx_3 = *(arg1 + 0x50)
    (*(*rcx_3 + 0x28))(rcx_3, rsi)

if (((*(arg2 + 0x68) u>> 0xc).b & 1) != 0)
    int64_t* rcx_4 = *(arg1 + 0x50)
    (*(*rcx_4 + 0x10))(rcx_4, &var_1c8, 4)
    
    if ((((sx.d(var_1c8:3.b) << 8 | zx.d(var_1c8:2.b)) << 8 | zx.d(var_1c8:1.b)) << 8
            | zx.d(var_1c8.b)) != *(arg2 + 0x154))
        sub_1429779b0(&var_1b8, 3, 1)
        sub_14058b120(
            std::ostream::operator<<(sub_14058b120(
                std::ostream::operator<<(sub_14058b120(&var_1a8, "Unexpected part number ")), 
                ", should be ")), 
            .")
        sub_142977aa0(&exceptionObject, &var_1b8)
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn

int64_t* rcx_5 = *(arg1 + 0x50)
(*(*rcx_5 + 0x10))(rcx_5, &var_1c8, 4)

if ((((sx.d(var_1c8:3.b) << 8 | zx.d(var_1c8:2.b)) << 8 | zx.d(var_1c8:1.b)) << 8 | zx.d(var_1c8.b))
        != arg3)
    sub_14297ab20(&exceptionObject, "Unexpected data block y coordinate.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

sub_14297d090(*(arg1 + 0x50), &var_1c8)
sub_14297d090(*(arg1 + 0x50), arg5)
sub_14297d090(*(arg1 + 0x50), arg6)

if (*arg5 u> 0x7fffffff || *arg6 u> 0x7fffffff)
    sub_1429779b0(&var_1b8, 3, 1)
    sub_14058b120(
        std::ostream::operator<<(sub_14058b120(
            std::ostream::operator<<(sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    sub_14058b120(&var_1a8, "This version of the library does not support "), 
                    "the allocation of data with size  > ")), 
                " file unpacked size :")), 
            " file packed size   :")), 
        ".\n")
    sub_142977aa0(&exceptionObject, &var_1b8)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

sub_14298d250(*(arg1 + 0x50), var_1c8.d)
int64_t* rcx_17 = *(arg1 + 0x50)
int64_t result

if ((*(*rcx_17 + 8))(rcx_17) == 0)
    int64_t rcx_19 = *arg4
    
    if (rcx_19 != 0)
        j_sub_140a74f90(rcx_19)
    
    int64_t rax_26 = j_sub_140a82f30(*arg5)
    *arg4 = rax_26
    int64_t* rcx_21 = *(arg1 + 0x50)
    int64_t r9 = *rcx_21
    result = (*(r9 + 0x10))(rcx_21, rax_26, zx.q(*arg5), r9)
else
    int64_t* rcx_18 = *(arg1 + 0x50)
    result = (*(*rcx_18 + 0x18))(rcx_18, zx.q(*arg5))
    *arg4 = result

if (*(arg2 + 0xb8) != 0)
    *(arg2 + 0xec) = arg3 - *(arg2 + 0x150)
else
    *(arg2 + 0xec) = *(arg2 + 0x150) + arg3

__security_check_cookie(rax_1 ^ &var_1e8)
return result
