// 函数: sub_140bd0e90
// 地址: 0x140bd0e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d21fd0()
sub_1405a46b0(&data_1439aad30, arg1 - 8)
sub_140d21f60()
sub_1405a46b0(&data_1439aad48, arg1 - 8)
int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x30)
*(arg1 + 8) = 0
sub_140a4fc50(rcx_1)
int64_t* rcx_2 = *(arg1 + 0x38)
*(arg1 + 0x30) = 0
sub_140a4fc50(rcx_2)
int64_t* rcx_3 = *(arg1 + 0x40)
*(arg1 + 0x38) = 0
int64_t result = sub_140a4fc50(rcx_3)
*(arg1 + 0x40) = 0
return result
