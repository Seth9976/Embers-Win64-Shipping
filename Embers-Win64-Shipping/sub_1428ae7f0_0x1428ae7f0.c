// 函数: sub_1428ae7f0
// 地址: 0x1428ae7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_1428a38f0(arg2)

if (sub_1428a32a0(sub_1428a3930(arg1), rax) != 0)
    return 0x1d

sub_1428aebf0(arg1)
sub_1428aebf0(arg2)
int64_t* rdx_1 = arg2[0x1d]

if (rdx_1 != 0)
    int32_t result = sub_1428ae660(arg1, rdx_1)
    
    if (result != 0)
        return result

if ((arg1[0x1a].b & 2) != 0)
    if ((arg2[0x1a].d & 0x400) == 0)
        if ((*(arg1 + 0xd4) & 4) == 0)
            return 0x20
    else if ((*(arg1 + 0xd4) & 0x80) == 0)
        return 0x27

return 0
