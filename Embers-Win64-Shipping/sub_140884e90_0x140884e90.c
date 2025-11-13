// 函数: sub_140884e90
// 地址: 0x140884e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4
*arg4 = 0
arg4[1] = 0
int64_t rdi = sx.q(arg2[1].d)
int32_t temp0 = rdi.d

if (temp0 s> 0)
    arg4[1].d = rdi.d
    sub_140888950(rbx, 0)
    void* rcx_1 = *rbx
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + rbx
    
    memset(rcx_1, 0, rdi << 4)
else if (temp0 s< 0)
    arg4.b = 1
    sub_1408885d0(rbx, rdi.d, neg.d(rdi.d), arg4.b)

void* rdi_1 = *rbx

if ((rdi_1.b & 1) != 0)
    rdi_1 = (rdi_1 s>> 1) + rbx

sub_140889700()
return sub_140a22770(arg2, arg1, &data_143ce7d80, arg2[1].d, rdi_1)
