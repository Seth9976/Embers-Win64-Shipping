// 函数: sub_142465ad0
// 地址: 0x142465ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x14]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x10]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_2 = arg1[0xf].d
int64_t* rdi = arg1[0xe]

if (i_2 != 0)
    int32_t i
    
    do
        sub_140745b20(rdi)
        rdi = &rdi[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdi = arg1[0xe]

if (rdi != 0)
    sub_140a74f90(rdi)

int32_t i_3 = arg1[0xd].d
int64_t* rdi_1 = arg1[0xc]

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_140745b20(rdi_1)
        rdi_1 = &rdi_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi_1 = arg1[0xc]

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t rcx_6 = arg1[0xa]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[8]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_142464b80(&arg1[6])
*arg1 = &data_14303f308

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
