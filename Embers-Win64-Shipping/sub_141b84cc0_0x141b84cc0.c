// 函数: sub_141b84cc0
// 地址: 0x141b84cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14307aa08
arg1[0x72] = &data_14307ac50

if (data_143e29f28 != 0)
    sub_1405a46b0(data_143e20d08 + 0xd0, arg1)

sub_141997870(arg1[0x122])
void*** arg_8 = arg1
sub_141bdada0(&data_1439ec4f0, &arg_8)
sub_140691a20(&arg1[0x123])
sub_140d955c0(&arg1[0x105])
int64_t* rdi = arg1[0x104]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x102]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140691a20(&arg1[0xef])
sub_140745b20(&arg1[0xed])
sub_140de03c0(&arg1[0xe5])
arg1[0xe3] = &data_142d82a88
sub_140d95d20(&arg1[0x72])
return sub_1406922a0(arg1) __tailcall
