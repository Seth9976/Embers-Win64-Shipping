// 函数: ??0system_error@std@@QEAA@AEBV01@@Z
// 地址: 0x14058ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &std::exception::`vftable'
*(arg1 + 8) = zx.o(0)
__std_exception_copy(arg2 + 8, &arg1[1])
*arg1 = &std::_System_error::`vftable'{for `std::runtime_error'}
int128_t zmm0 = *(arg2 + 0x18)
*arg1 = &std::system_error::`vftable'{for `std::_System_error'}
*(arg1 + 0x18) = zmm0
return arg1
