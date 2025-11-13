// 函数: sub_142b13a70
// 地址: 0x142b13a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if ((rsi - 0x20).d u<= 0x5e)
    int32_t rax
    rax.b = 0
    return rax

int16_t arg_10 = 0x5c
sub_142a48d70(arg1, &arg_10, 0, 1)
int16_t* rdx_1 = &arg_10
void* rcx = arg1
int16_t rax_13

if ((rsi.d & 0xffff0000) == 0)
    rax_13 = 0x75
else
    arg_10 = 0x55
    sub_142a48d70(rcx, rdx_1, 0, 1)
    arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 0x1c).d) & 0xf]
    sub_142a48d70(arg1, &arg_10, 0, 1)
    arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 0x18).d) & 0xf]
    sub_142a48d70(arg1, &arg_10, 0, 1)
    arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 0x14).d) & 0xf]
    sub_142a48d70(arg1, &arg_10, 0, 1)
    rdx_1 = &arg_10
    rcx = arg1
    rax_13 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 0x10).d) & 0xf]

arg_10 = rax_13
sub_142a48d70(rcx, rdx_1, 0, 1)
arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 0xc).d) & 0xf]
sub_142a48d70(arg1, &arg_10, 0, 1)
arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 8).d) & 0xf]
sub_142a48d70(arg1, &arg_10, 0, 1)
arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q((rsi s>> 4).d) & 0xf]
sub_142a48d70(arg1, &arg_10, 0, 1)
arg_10 = (*u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXY")[zx.q(rsi.d) & 0xf]
sub_142a48d70(arg1, &arg_10, 0, 1)
void* rax_27
rax_27.b = 1
return rax_27
