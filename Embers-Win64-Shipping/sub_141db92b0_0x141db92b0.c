// 函数: sub_141db92b0
// 地址: 0x141db92b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x42]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t rcx_1 = arg1[0x40]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x3e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x3d].d = 0
int64_t rcx_3 = arg1[0x3c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x35].d = 0

if (*(arg1 + 0x1ac) != 0)
    sub_1405a5410(&arg1[0x34], 0)

arg1[0x3a].d = 0xffffffff
*(arg1 + 0x1d4) = 0
sub_14059a8e0(&arg1[0x36], 0)
int64_t rcx_6 = arg1[0x38]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x34]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x32]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x2e]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x2a]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x27]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x24]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_1423baf20(&arg1[5])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
