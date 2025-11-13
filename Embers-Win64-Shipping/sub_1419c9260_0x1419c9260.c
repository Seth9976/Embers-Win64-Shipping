// 函数: sub_1419c9260
// 地址: 0x1419c9260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
arg4[1] = 0
int64_t rdi = sx.q(arg2[1].d)
int32_t temp0 = rdi.d

if (temp0 s> 0)
    arg4[1].d = rdi.d
    sub_1407c3d10(arg4, 0)
    void* rcx_1 = *arg4
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + arg4
    
    memset(rcx_1, 0, rdi << 3)
else if (temp0 s< 0 && rdi.d != 0)
    arg4[1].d = rdi.d
    sub_1407c41d0(arg4)

void* rdi_1 = *arg4

if ((rdi_1.b & 1) != 0)
    rdi_1 = (rdi_1 s>> 1) + arg4

sub_1419c1c10()
return sub_140a22770(arg2, arg1, &data_143f22218, arg2[1].d, rdi_1)
