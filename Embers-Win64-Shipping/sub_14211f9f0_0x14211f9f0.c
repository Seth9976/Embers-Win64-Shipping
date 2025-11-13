// 函数: sub_14211f9f0
// 地址: 0x14211f9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4
*arg4 = 0
arg4[1] = 0
int64_t rdi = sx.q(arg2[1].d)
int32_t temp0 = rdi.d

if (temp0 s> 0)
    arg4[1].d = rdi.d
    sub_141a144e0(rbx, 0)
    void* rcx_1 = *rbx
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + rbx
    
    memset(rcx_1, 0, rdi * 0x30)
else if (temp0 s< 0)
    arg4.b = 1
    sub_142130130(rbx, rdi.d, neg.d(rdi.d), arg4.b)

void* rdi_1 = *rbx

if ((rdi_1.b & 1) != 0)
    rdi_1 = (rdi_1 s>> 1) + rbx

sub_142133c80()
return sub_140a22770(arg2, arg1, &data_143f4c3b0, arg2[1].d, rdi_1)
