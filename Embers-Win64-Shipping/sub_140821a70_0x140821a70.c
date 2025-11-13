// 函数: sub_140821a70
// 地址: 0x140821a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
arg4[1] = 0
int64_t count = sx.q(arg2[1].d)
int32_t temp0 = count.d

if (temp0 s> 0)
    arg4[1].d = count.d
    sub_1407c3da0(arg4, 0)
    void* rcx_1 = *arg4
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + arg4
    
    memset(rcx_1, 0, count)
else if (temp0 s< 0 && count.d != 0)
    arg4[1].d = count.d
    sub_1407c4260(arg4)

void* rdi = *arg4

if ((rdi.b & 1) != 0)
    rdi = (rdi s>> 1) + arg4

sub_140819d00()
return sub_140a22770(arg2, arg1, &data_143ce3bf0, arg2[1].d, rdi)
