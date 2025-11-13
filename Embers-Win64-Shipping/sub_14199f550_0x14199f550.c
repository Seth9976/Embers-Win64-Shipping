// 函数: sub_14199f550
// 地址: 0x14199f550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_14199f410(arg1)
int64_t* rcx = *(arg1 + 0x10)

if (rcx != 0)
    result = rcx[9].d
    rcx[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rcx) __tailcall

return result
