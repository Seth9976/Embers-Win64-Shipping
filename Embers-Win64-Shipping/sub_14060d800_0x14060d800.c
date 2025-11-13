// 函数: sub_14060d800
// 地址: 0x14060d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d63ea8
arg1[5] = &data_142d64290
arg1[0x16] = &data_142d642c0
sub_140615210(&arg1[0x19])
sub_140615620(arg1)
void* rdi = arg1[0x18]

if (rdi != 0)
    sub_14060d4c0(rdi)
    j_sub_140a74f90(rdi)

arg1[0x18] = 0

while (arg1[0x49] != 0)
    int64_t* rcx_4 = arg1[0x49]
    arg1[0x49] = *rcx_4
    j_sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x43]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x41]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x3f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x3d]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x3b]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x39]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x37]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x35]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x33]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x30]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_14060d610(&arg1[0x19])
int64_t rcx_16 = arg1[0x12]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0xe]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0xc]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
