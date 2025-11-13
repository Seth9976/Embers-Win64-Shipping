// 函数: sub_141f7bbb0
// 地址: 0x141f7bbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432875d0
arg1[0x52].d = 0
int64_t rcx = arg1[0x51]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140a720d0(&arg1[0x49], 0)
int64_t rcx_2 = arg1[0x4d]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x49]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x47]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x46].d = 0
int64_t rcx_5 = arg1[0x45]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_141a727d0(&arg1[0x3d], 0)
int64_t rcx_7 = arg1[0x41]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x3d]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_1405ae180(&arg1[0x33])
int64_t rcx_10 = arg1[0x30]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x2e]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x2c]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg1[0x2b].d = 0
int64_t rcx_13 = arg1[0x2a]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg1[0x23].d = 0

if (*(arg1 + 0x11c) != 0)
    sub_140638cc0(&arg1[0x22], 0)

arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
sub_14059a8e0(&arg1[0x24], 0)
int64_t rcx_16 = arg1[0x26]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x22]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x1f]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

arg1[0x1e].d = 0
int64_t rcx_19 = arg1[0x1d]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_1407ece30(&arg1[0x15], 0)
int64_t rcx_21 = arg1[0x19]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0x15]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t* rdi_1 = arg1[0x14]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return sub_140d163b0(arg1) __tailcall
