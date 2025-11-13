// 函数: sub_140bbb4a0
// 地址: 0x140bbb4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bac910()
int64_t* rcx = *(arg1 + 0x10)

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x20)
*(arg1 + 0x10) = 0
sub_140a4fc50(rcx_1)
int64_t* rcx_2 = *(arg1 + 0x28)
*(arg1 + 0x20) = 0
sub_140a4fc50(rcx_2)
int64_t* rcx_3 = *(arg1 + 0x30)
*(arg1 + 0x28) = 0
sub_140a4fc50(rcx_3)
int64_t* rcx_4 = *(arg1 + 0x38)
*(arg1 + 0x30) = 0
int64_t result = sub_140a4fc50(rcx_4)
*(arg1 + 0x38) = 0
return result
