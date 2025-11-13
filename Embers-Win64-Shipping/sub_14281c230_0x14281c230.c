// 函数: sub_14281c230
// 地址: 0x14281c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &YAML::Exception::`vftable'{for `std::runtime_error'}
int64_t rdx = arg1[8]

if (rdx u>= 0x10)
    sub_14058ba50(arg1[5], rdx + 1)

arg1[7] = 0
arg1[8] = 0xf
arg1[5].b = 0
*arg1 = &std::exception::`vftable'
return __std_exception_destroy(&arg1[1]) __tailcall
