// 函数: sub_142aa10c0
// 地址: 0x142aa10c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::icu_64::x4fca7e4c::FCDUTF16NFDIterator::operator[]::FCDUTF16NFDIterator::VTable
    ** arg_8 = arg1
int64_t var_70 = -2
arg1[3].d = 0xffffffff
void* rsi = nullptr
__builtin_memset(arg1 + 0x1c, 0, 0x14)
*arg1 = &icu_64::x4fca7e4c::FCDUTF16NFDIterator::operator[]::FCDUTF16NFDIterator::`vftable'{for `icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator'}
arg1[6] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[7].w = 2
int32_t var_78 = 0
int16_t* rax = sub_142b1ee90(arg2, arg3, arg4, nullptr, &var_78)

if (var_78 s<= 0)
    if (rax == arg4 || (arg4 == 0 && *rax == arg4.w))
        arg1[4] = arg3
        arg1[5] = rax
    else
        sub_142a66950(&arg1[6], arg3, ((rax - arg3) s>> 1).d)
        void* var_68 = arg2
        int64_t var_58_1 = (zx.o(0)).q
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        char var_3c_1 = 0
        int16_t rax_1 = arg1[7].w
        int32_t rdx_3
        
        if (rax_1 s< 0)
            rdx_3 = *(arg1 + 0x3c)
        else
            rdx_3 = sx.d(rax_1) s>> 5
        
        if (sub_142b1e9d0(&var_68, rdx_3, &var_78) != 0)
            sub_142b1ee90(arg2, rax, arg4, &var_68, &var_78)
        
        if (var_58_1 != 0)
            sub_142a4a600(&arg1[6], ((var_48_1 - var_58_1) s>> 1).d)
        
        if (var_78 s<= 0)
            char rax_6 = (arg1[7].w).b
            
            if ((rax_6 & 0x11) == 0)
                rsi = arg1 + 0x3a
                
                if ((rax_6 & 2) == 0)
                    rsi = arg1[9]
            
            arg1[4] = rsi
            int16_t rax_7 = arg1[7].w
            int32_t rax_9
            
            if (rax_7 s< 0)
                rax_9 = *(arg1 + 0x3c)
            else
                rax_9 = sx.d(rax_7) s>> 5
            
            arg1[5] = rsi + (sx.q(rax_9) << 1)

return arg1
