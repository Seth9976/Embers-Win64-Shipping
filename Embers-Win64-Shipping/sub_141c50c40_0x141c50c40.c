// 函数: sub_141c50c40
// 地址: 0x141c50c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209798
arg1[0xf6] = &data_143209948
int64_t* rcx = arg1[0xfe]

if (rcx != 0)
    (*(*rcx + 0x28))(rcx, 1)

sub_1406b62e0(&arg1[0x154])
CRITICAL_SECTION* rdi = arg1[0x152]

if (rdi != 0)
    sub_141c50e00(rdi)
    j_sub_140a74f90(rdi)

arg1[0x151].d = 0
int64_t rcx_4 = arg1[0x150]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140597460(&arg1[0x148])

while (arg1[0x147] != 0)
    int64_t* rcx_6 = arg1[0x147]
    arg1[0x147] = *rcx_6
    j_sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x143]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

DeleteCriticalSection(&arg1[0x13e])
sub_140596e10(&arg1[0x13c])
sub_140596e10(&arg1[0x13a])
arg1[0x139].d = 0
int64_t rcx_11 = arg1[0x138]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_141c50370(&arg1[0x130])
int64_t rcx_13 = arg1[0x12d]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x129]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x127]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x118]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x115]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_140596e10(&arg1[0xfc])
int64_t rcx_19 = arg1[0xfa]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0xf8]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return sub_141c50580(arg1) __tailcall
