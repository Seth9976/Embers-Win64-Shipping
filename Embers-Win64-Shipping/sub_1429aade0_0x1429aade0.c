// 函数: sub_1429aade0
// 地址: 0x1429aade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c0 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t temp0 = divs.dp.d(sx.q(arg3 - *(arg2 + 0x8c)), *(arg2 + 0x118))
*(arg2 + 0x118)
void* var_1b8
void var_1a8
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (temp0 s>= 0)
    int64_t rdx_2 = *(arg2 + 0x98)
    
    if (temp0 s< ((*(arg2 + 0xa0) - rdx_2) s>> 3).d)
        int64_t* r12 = rdx_2 + (sx.q(temp0) << 3)
        int64_t r14 = *r12
        
        if (r14 == 0)
            sub_1429779b0(&var_1b8, 3, 1)
            sub_14058b120(std::ostream::operator<<(sub_14058b120(&var_1a8, "Scan line ")), 
                " is missing.")
            sub_14297d5a0(&exceptionObject, &var_1b8)
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        bool cond:0
        
        if (((*(arg2 + 0x68) u>> 0xc).b & 1) != 0)
            int64_t* rcx_3 = *(arg1 + 0x50)
            cond:0 = (*(*rcx_3 + 0x20))(rcx_3) == *r12
        else
            cond:0 = *(arg2 + 0xb4) == arg3
        
        if (not(cond:0))
            int64_t* rcx_4 = *(arg1 + 0x50)
            (*(*rcx_4 + 0x28))(rcx_4, r14)
        
        char var_1c8
        char var_1c7
        char var_1c6
        char var_1c5
        
        if (((*(arg2 + 0x68) u>> 0xc).b & 1) != 0)
            int64_t* rcx_5 = *(arg1 + 0x50)
            (*(*rcx_5 + 0x10))(rcx_5, &var_1c8, 4)
            
            if ((((sx.d(var_1c5) << 8 | zx.d(var_1c6)) << 8 | zx.d(var_1c7)) << 8 | zx.d(var_1c8))
                    != *(arg2 + 0x128))
                sub_1429779b0(&var_1b8, 3, 1)
                sub_14058b120(
                    std::ostream::operator<<(sub_14058b120(
                        std::ostream::operator<<(sub_14058b120(&var_1a8, 
                            "Unexpected part number ")), 
                        ", should be ")), 
                    .")
                sub_142977aa0(&exceptionObject, &var_1b8)
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
        
        int64_t* rcx_6 = *(arg1 + 0x50)
        char r8
        char r9
        r8, r9 = (*(*rcx_6 + 0x10))(rcx_6, &var_1c8, 4)
        sub_14297d040(*(arg1 + 0x50), arg5, r8, r9, var_1c8)
        
        if ((((sx.d(var_1c5) << 8 | zx.d(var_1c6)) << 8 | zx.d(var_1c7)) << 8 | zx.d(var_1c8))
                != arg3)
            sub_14297ab20(&exceptionObject, "Unexpected data block y coordinate.")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        if (*arg5 s> *(arg2 + 0x120))
            sub_14297ab20(&exceptionObject, "Unexpected data block length.")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        int64_t* rcx_15 = *(arg1 + 0x50)
        char rax_24 = (*(*rcx_15 + 8))(rcx_15)
        int64_t* rcx_16 = *(arg1 + 0x50)
        int64_t rax_25 = *rcx_16
        int64_t result
        
        if (rax_24 == 0)
            result = (*(rax_25 + 0x10))(rcx_16, *arg4, zx.q(*arg5))
        else
            result = (*(rax_25 + 0x18))(rcx_16, zx.q(*arg5))
            *arg4 = result
        
        if (*(arg2 + 0x80) != 0)
            *(arg2 + 0xb4) = arg3 - *(arg2 + 0x118)
        else
            *(arg2 + 0xb4) = *(arg2 + 0x118) + arg3
        
        __security_check_cookie(rax_1 ^ &var_1e8)
        return result

sub_1429779b0(&var_1b8, 3, 1)
sub_14058b120(std::ostream::operator<<(sub_14058b120(&var_1a8, "Invalid scan line ")), 
    " requested or missing.")
sub_14297d5a0(&exceptionObject, &var_1b8)
_CxxThrowException(&exceptionObject, &data_1439465c8)
noreturn
