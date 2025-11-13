// 函数: sub_142079c00
// 地址: 0x142079c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432acf50
arg1[5] = &data_1432ad8d0
arg1[0x3e] = &data_1432ad900
sub_14209e8d0(arg1)
int64_t rcx = arg1[0xa6]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xa3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rdi = arg1[0xa2]

if (rdi != 0)
    sub_1419fd970(rdi)
    j_sub_140a74f90(rdi)

sub_142079600(&arg1[0x9f])
int64_t* rdi_1 = arg1[0x9e]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

int64_t rcx_7 = arg1[0x9a]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x96]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x93]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return sub_141f51a80(arg1) __tailcall
