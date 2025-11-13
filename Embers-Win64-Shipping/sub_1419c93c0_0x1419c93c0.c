// 函数: sub_1419c93c0
// 地址: 0x1419c93c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4
*arg4 = 0
arg4[1] = 0
int64_t rdi = sx.q(arg2[1].d)
int32_t temp0 = rdi.d

if (temp0 s> 0)
    arg4[1].d = rdi.d
    sub_1419d6f80(rbx, 0)
    void* rcx_1 = *rbx
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + rbx
    
    memset(rcx_1, 0, rdi * 0x18)
else if (temp0 s< 0)
    arg4.b = 1
    sub_1419d6b10(rbx, rdi.d, neg.d(rdi.d), arg4.b)

void* rdi_1 = *rbx

if ((rdi_1.b & 1) != 0)
    rdi_1 = (rdi_1 s>> 1) + rbx

sub_1419d9f30()
return sub_140a22770(arg2, arg1, &data_143f21150, arg2[1].d, rdi_1)
