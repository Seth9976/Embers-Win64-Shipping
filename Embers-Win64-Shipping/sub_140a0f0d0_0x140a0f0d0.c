// 函数: sub_140a0f0d0
// 地址: 0x140a0f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e4d130
arg1[1] = &data_142e4d1f8
arg1[2] = &data_142e4d210
arg1[3] = &data_142e4d228
arg1[4] = &data_142e4d288
arg1[5] = &data_142e4d2f0
sub_140a10220(arg1)
int64_t rcx = arg1[0x15]

if (rcx != 0)
    sub_140a74f90(rcx)

void* rdi = arg1[0x12]

if (rdi != 0)
    sub_142a35fa0(rdi)
    j_sub_140a74f90(rdi)

int64_t* rcx_3 = arg1[0x11]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3, 1)

int64_t rcx_4 = arg1[0xf]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xd]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140a0f540(&arg1[0xc], arg1[0xc])
sub_140a0f670(&arg1[0xb], arg1[0xb])
int64_t* rdi_1 = arg1[0xa]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

int64_t rcx_10 = arg1[6]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[5] = &data_142d57548
arg1[4] = &data_142d574e0
arg1[3] = &data_142d573b8
arg1[2] = &data_142d573a0
arg1[1] = &data_142d5c278
*arg1 = &data_142d57418
return &data_142d57418
