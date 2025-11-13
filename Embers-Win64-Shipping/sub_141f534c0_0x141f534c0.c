// 函数: sub_141f534c0
// 地址: 0x141f534c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x7b]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t* rcx_1 = arg1[0x79]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

int64_t* rdi_2 = arg1[0x64]

if (rdi_2 != 0)
    rdi_2[0xd].d -= 1
    
    if (rdi_2[0xd].d == 1)
        sub_141997f50(rdi_2)
        sub_141997870(&rdi_2[9])

int64_t* rcx_4 = arg1[0x61]

if (rcx_4 != 0)
    sub_1422ce7f0(rcx_4)

int64_t* rdi_3 = arg1[0x4d]

if (rdi_3 != 0)
    rdi_3[0xd].d -= 1
    
    if (rdi_3[0xd].d == 1)
        sub_141997f50(rdi_3)
        sub_141997870(&rdi_3[9])

sub_1405aef50(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
