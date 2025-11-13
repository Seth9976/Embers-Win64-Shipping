// 函数: sub_14089d190
// 地址: 0x14089d190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6] = &data_142dfb0e0
int64_t* rcx = arg1[7]

if (rcx != 0 && (*(*rcx + 0x20))(rcx) != 0)
    arg1[7] = 0

arg1[1] = &std::exception::`vftable'
__std_exception_destroy(&arg1[2])
*arg1 = &data_142dfb0e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
