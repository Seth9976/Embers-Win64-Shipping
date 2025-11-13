// 函数: sub_141c84d80
// 地址: 0x141c84d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320f650
arg1[1] = &data_14320f680
sub_140a4fc50(arg1[0x2b])
arg1[0x2b] = 0
int64_t* rdi = arg1[0x2a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_140846740(&arg1[0x25])

for (void* i = arg1[0x23]; i != 0; i = arg1[0x23])
    arg1[0x23] = *arg1[0x23]
    
    if (i != 0)
        sub_140745b20(i + 8)
        j_sub_140a74f90(i)

sub_1408ffb10(&arg1[0x20])
arg1[0x1f].d = 0
int64_t rcx_7 = arg1[0x1e]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141c82870(&arg1[0x16])
arg1[0x15].d = 0
int64_t rcx_9 = arg1[0x14]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_141c82600(&arg1[0xc])
arg1[0xb].d = 0
int64_t rcx_11 = arg1[0xa]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_141c82870(&arg1[2])
arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
