// 函数: sub_141d340b0
// 地址: 0x141d340b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222518

if (arg1[0xb8] != 0)
    void* rax_1 = arg1[0xba]
    void* rcx = &arg1[0xbc]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_141d2eae0(&arg1[0xa2])
sub_141d2edd0(&arg1[0x97])
sub_1417623e0(&arg1[0x90])
sub_141762820(&arg1[0x5e])
int64_t rcx_5 = arg1[0x5c]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x44]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x42]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141d2f1e0(&arg1[6])
int64_t rcx_9 = arg1[4]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

void* rcx_10 = arg1[1]
*arg1 = &data_143222250

if (rcx_10 != 0)
    sub_1409740e0(rcx_10 + 8, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
