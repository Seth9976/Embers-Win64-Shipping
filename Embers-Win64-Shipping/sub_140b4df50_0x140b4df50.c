// 函数: sub_140b4df50
// 地址: 0x140b4df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s> 0)
    void* r8 = *arg1
    
    if ((r8.b & 1) != 0)
        r8 = (r8 s>> 1) + arg1
    
    return sub_140b33460(*arg4, u""%s"\n", r8) __tailcall

int64_t* rbx = *arg4
int32_t* rcx_2 = rbx[1]

if (rcx_2 + 6 u>= rbx[2])
    sub_140b38e20(rbx, 3)
    rcx_2 = rbx[1]

rbx[1] = rcx_2 + 6
*rcx_2 = 0x220022
rcx_2[1].w = 0xa
return 0xa
