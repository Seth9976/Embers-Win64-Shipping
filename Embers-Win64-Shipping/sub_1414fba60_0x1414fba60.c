// 函数: sub_1414fba60
// 地址: 0x1414fba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1->__offset(0x80).q

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1->__offset(0x70).q

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if (arg1->__offset(0x58).d != 0)
    int64_t rcx_2 = arg1->__offset(0x60).q
    arg1->__offset(0x54).w = 0
    arg1->__offset(0x58).d = 0
    j_sub_140a74f90(rcx_2)
    int64_t rcx_3 = arg1->__offset(0x68).q
    arg1->__offset(0x60).q = &data_14399e5d8
    j_sub_140a74f90(rcx_3)
    arg1->__offset(0x68).q = 0

int64_t rcx_4 = arg1->__offset(0x38).q
arg1->__offset(0x28).q = 0
arg1->__offset(0x30).d = 0
j_sub_140a74f90(rcx_4)
j_sub_140a74f90(arg1->__offset(0x40).q)
j_sub_140a74f90(arg1->__offset(0x48).q)
__builtin_memset(arg1 + 0x38, 0, 0x18)
return DeleteCriticalSection(arg1) __tailcall
