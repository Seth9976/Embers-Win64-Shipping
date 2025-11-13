// 函数: sub_14091b280
// 地址: 0x14091b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e21088
sub_140944100(arg1)
sub_140596eb0(&arg1[0x1c])
sub_140596eb0(&arg1[0x19])
sub_140596eb0(&arg1[0x16])
arg1[0x15].d = 0
int64_t rcx_3 = arg1[0x14]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0xd].d = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405a5130(&arg1[0xc], 0)

arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
void* result = sub_14059a8e0(&arg1[0xe], 0)
int64_t rcx_6 = arg1[0x10]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0xc]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[8]

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
