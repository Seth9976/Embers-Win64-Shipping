// 函数: sub_14201df80
// 地址: 0x14201df80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x290))()
int32_t rcx = arg1[0x13].d
int32_t rbx

if (rcx == 0)
    rbx = 0
else if (rcx == 1)
    rbx = 1
else
    rbx = 2

int32_t rdx = *(arg1 + 0x84)
int32_t r8 = rbx
int32_t rcx_1 = arg1[0x10].d
int32_t arg_8 = rdx
int32_t arg_18 = rcx_1
int32_t arg_10 = rbx

if (arg2 != 0)
    sub_141ffdb30(&arg_18, &arg_8, &arg_10)
    r8 = arg_10
    rdx = arg_8
    rcx_1 = arg_18

sub_1423ee5e0(rcx_1, rdx, r8)

if (rbx u<= 1)
    int32_t rsi
    rsi.b = rbx != 0
    sub_14203cc80(arg1, rsi)

int64_t* rcx_4 = data_143db18d0

if (rcx_4 == 0)
    sub_140a53c40()
    rcx_4 = data_143db18d0

jump(*(*rcx_4 + 0x50))
