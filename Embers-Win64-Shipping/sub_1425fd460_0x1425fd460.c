// 函数: sub_1425fd460
// 地址: 0x1425fd460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14344cb88
sub_1425fe930(arg1)

if ((*(arg1 + 0x1ac) & 1) != 0)
    int64_t* rcx = arg1[3]
    
    if (rcx != 0)
        (**rcx)(rcx, 1)

void* rdi = &arg1[0x31]
arg1[0x12] = 0
int64_t i = 3
arg1[3] = 0
*(arg1 + 0x194) = 0

do
    int64_t rcx_1 = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
while (i != 0)

*arg1 = &data_143209500

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
