// 函数: sub_141cfcf20
// 地址: 0x141cfcf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int64_t* rdi = arg4
arg4[1] = 0
int32_t rdx = arg2[1].d

if (rdx s> 0)
    sub_141cfc2a0(arg4, rdx)
else if (rdx s< 0)
    arg4.b = 1
    sub_141d0dbb0(rdi, rdx, neg.d(rdx), arg4.b)

void* rbx = *rdi

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + rdi

sub_141d11d80()
return sub_140a22770(arg2, arg1, &data_143f36788, arg2[1].d, rbx)
