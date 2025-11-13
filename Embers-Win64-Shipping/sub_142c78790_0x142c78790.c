// 函数: sub_142c78790
// 地址: 0x142c78790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t i = 0
int32_t* rsi = *(rax + 0x250)

if (rsi == 0)
    return 0

if (arg2 != 0)
    sub_142c65340(arg1, 1)
    i = arg2
else if (*(rax + 0x609) == 0 && *(rsi + 0x38) == 0 && (*(rsi + 0x18) != 0 || *(rax + 0x5e9) != 0))
    if (*(rax + 0x5e9) != 0)
        int32_t i_1
        i_1, arg2, arg3 = gzprintf(&arg1[0xd3], &data_1434ccff0, &data_1434cce10, arg3)
        i = i_1
        
        if (i_1 == 0)
            arg1[0xe1].d = 0xc
            goto label_142c7883a
    else
        arg1[0xe1].d = 0xa
    label_142c7883a:
        i = 0
        
        if (arg1[0xe1].d != 0)
            while (i == 0)
                arg2.b = 1
                int32_t i_2
                i_2, arg2, arg3 = sub_142c8f150(&arg1[0xd3], arg2.b, arg3)
                i = i_2
                
                if (arg1[0xe1].d == 0)
                    break

data_143ccb8a0(*(rsi + 8))
int64_t rcx_3 = *(rsi + 0x10)
*(rsi + 8) = 0
data_143ccb8a0(rcx_3)
int64_t rcx_4 = *(rsi + 0x18)
*(rsi + 0x10) = 0
data_143ccb8a0(rcx_4)
int64_t rcx_5 = *(rsi + 0x20)
*(rsi + 0x18) = 0
data_143ccb8a0(rcx_5)
int64_t rcx_6 = *(rsi + 0x28)
*(rsi + 0x20) = 0
data_143ccb8a0(rcx_6)
int64_t rcx_7 = *(rsi + 0x30)
*(rsi + 0x28) = 0
data_143ccb8a0(rcx_7)
int64_t rcx_8 = *(rsi + 0x38)
*(rsi + 0x30) = 0
data_143ccb8a0(rcx_8)
int64_t rcx_9 = *(rsi + 0x40)
*(rsi + 0x38) = 0
data_143ccb8a0(rcx_9)
*(rsi + 0x40) = 0
*rsi = 0
return zx.q(i)
