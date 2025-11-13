// 函数: sub_14060ce20
// 地址: 0x14060ce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
__builtin_memset(&arg1[2], 0, 0x18)
*arg1 = 0
arg1[1].w = 0
int32_t _Str = 0
std::istream::read(arg2, &_Str, 4)
int128_t zmm0 = data_143702ea0
int64_t rsi = -1
char var_70 = 0
int128_t var_60 = zmm0
int64_t r8 = -1

do
    r8 += 1
while ((*"MTrkMThd ")[r8] != 0)

sub_14058ad40(&var_70, "MTrkMThd ", r8)
int128_t var_38 = data_143702ea0
char var_48 = 0

do
    rsi += 1
while (*(&_Str + rsi) != 0)

sub_14058ad40(&var_48, &_Str, rsi)

if (sub_140610db0(&var_48, &var_70, 0, 4) != 0)
    std::istream::read(arg2, &_Str, 4)
    *arg1 = (((((zx.d(_Str.b) << 8) + zx.d(_Str:1.b)) << 8) + zx.d(_Str:2.b)) << 8) + zx.d(_Str:3.b)
    
    while ((*(sx.q(arg2->vtable->__vecDelDtor:4.d) + arg2 + 0x10) & 1) == 0)
        sub_14060d350(&var_70)
        int32_t rdx_5 = var_70.d
        r15 += rdx_5
        void*** rax_5 = sub_140613080(r15, rdx_5, arg2)
        void*** var_50 = rax_5
        int64_t var_68
        
        if (rax_5 != 0)
            if (rax_5[1].d == 0x2f)
                if (var_68 != 0)
                    j_sub_140a74f90(var_68)
                
                break
            
            void**** rdx_6 = *(arg1 + 0x10)
            
            if (rdx_6 == *(arg1 + 0x18))
                sub_14060b6e0(&arg1[2], rdx_6, &var_50)
            else
                *rdx_6 = rax_5
                *(arg1 + 0x10) += 8
        else
            sub_14058b120(std::cout, "Event skipped!")
        
        if (var_68 != 0)
            j_sub_140a74f90(var_68)
else
    sub_14058b120(std::cerr, "Track identifier did not match MTrk!")

return arg1
