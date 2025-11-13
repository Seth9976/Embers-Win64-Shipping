// 函数: sub_14089bd10
// 地址: 0x14089bd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
*arg1 = &data_142dfb0e8
arg1[1] = &std::exception::`vftable'
*(arg1 + 0x10) = zx.o(0)
__std_exception_copy(arg2 + 0x10, &arg1[2])
arg1[1] = &std::_System_error::`vftable'{for `std::runtime_error'}
*(arg1 + 0x20) = *(arg2 + 0x20)
arg1[1] = &data_142dfb090
void* arg_10 = &arg1[6]
arg1[6] = &data_142dfb0e0
int64_t* rcx_1 = *(arg2 + 0x38)
arg1[7] = rcx_1

if (rcx_1 != 0)
    (*(*rcx_1 + 0x18))()

arg1[8] = *(arg2 + 0x40)
arg1[9] = *(arg2 + 0x48)
arg1[0xa].d = *(arg2 + 0x50)
*arg1 = &data_142dfbf00
arg1[1] = &data_142dfbf18
arg1[6] = &data_142dfbf28
return arg1
