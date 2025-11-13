// 函数: sub_14289e040
// 地址: 0x14289e040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = *(arg1 + 0x88)

if (rax != 0)
    rax()
    *(arg1 + 0x88) = 0

void* rcx = *(arg1 + 0x20)

if (rcx != 0)
    if (*(arg1 + 0xd8) == 0)
        sub_1428ab200(rcx)
    
    *(arg1 + 0x20) = 0

sub_1428e6540(*(arg1 + 0xa0))
int32_t* rcx_2 = *(arg1 + 0x98)
*(arg1 + 0xa0) = 0
sub_142898cb0(rcx_2, sub_1428a2c50)
*(arg1 + 0x98) = 0
sub_1428a5f50(5, arg1, arg1 + 0xe0)
*(arg1 + 0xe0) = 0
return 0
