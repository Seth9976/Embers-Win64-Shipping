// 函数: sub_140de08d0
// 地址: 0x140de08d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9420
sub_140691a20(&arg1[0x1fa])
sub_140691a20(&arg1[0x1e9])
sub_140691a20(&arg1[0x1d8])
int64_t* rdi = arg1[0x1d7]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140691a20(&arg1[0x1c2])
int64_t* rdi_1 = arg1[0x1c1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140691a20(&arg1[0x1ac])
sub_140691a20(&arg1[0x19b])
sub_140691a20(&arg1[0x18a])
sub_140de06c0(&arg1[0x13d])
arg1[0xee] = &data_142d8ad20
sub_140691a20(&arg1[0x122])
sub_140691a20(&arg1[0x111])
sub_140691a20(&arg1[0x100])
sub_140691a20(&arg1[0xef])
arg1[0xee] = &data_142d8ad00
arg1[0x9f] = &data_142d8ad20
sub_140691a20(&arg1[0xd3])
sub_140691a20(&arg1[0xc2])
sub_140691a20(&arg1[0xb1])
sub_140691a20(&arg1[0xa0])
arg1[0x9f] = &data_142d8ad00
arg1[0x50] = &data_142d8ad20
sub_140691a20(&arg1[0x84])
sub_140691a20(&arg1[0x73])
sub_140691a20(&arg1[0x62])
sub_140691a20(&arg1[0x51])
arg1[0x50] = &data_142d8ad00
arg1[1] = &data_142d8ad20
sub_140691a20(&arg1[0x35])
sub_140691a20(&arg1[0x24])
sub_140691a20(&arg1[0x13])
void** result = sub_140691a20(&arg1[2])
arg1[1] = &data_142d8ad00
*arg1 = &data_142d8ad00
return result
