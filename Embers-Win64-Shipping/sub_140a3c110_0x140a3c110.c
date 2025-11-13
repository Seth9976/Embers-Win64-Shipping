// 函数: sub_140a3c110
// 地址: 0x140a3c110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x13].d = 0
int64_t rcx = arg1[0x12]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1407547c0(&arg1[0xa], 0)
int64_t rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[9].d = 0
int64_t rcx_4 = arg1[8]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t result = sub_140a42d40(arg1, 0)
int64_t rcx_6 = arg1[4]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg1

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
