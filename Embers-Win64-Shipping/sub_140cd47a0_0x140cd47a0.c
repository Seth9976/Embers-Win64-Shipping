// 函数: sub_140cd47a0
// 地址: 0x140cd47a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ea4210
int64_t rcx = arg1[0x16]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x15].d = 0
int64_t rcx_1 = arg1[0x14]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140cda550(&arg1[0xc], 0)
int64_t rcx_3 = arg1[0x10]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0xb].d = 0
int64_t rcx_5 = arg1[0xa]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t result = sub_140cda550(&arg1[2], 0)
int64_t rcx_7 = arg1[6]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[2]

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
