// 函数: sub_141929790
// 地址: 0x141929790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t rbp = data_143eff638
arg1[2].d = 4
arg1[1].d = 4
sub_1407755b0(arg1)
int32_t* r8_1 = *arg1
int32_t i_1 = 4
int64_t* rax_1 = &r8_1[0xa]
int32_t i

do
    *r8_1 = 0
    int64_t* rdx_2 = &rax_1[-2]
    rax_1[-4] = 0
    r8_1 = &r8_1[0x16]
    rax_1[-3] = 0
    *rax_1 = 0
    rax_1[1].d = 0
    *(rax_1 + 0xc) = 0x80
    int64_t* rcx = *rax_1
    rax_1 = &rax_1[0xb]
    
    if (rcx != 0)
        rdx_2 = rcx
    
    *rdx_2 = 0
    rdx_2[1] = 0
    rax_1[-9].d = 0xffffffff
    *(rax_1 - 0x44) = 0
    rax_1[-7] = 0
    rax_1[-6].d = 0
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rbp)
int32_t rax_5 = (temp2 - temp1) s>> 1
*(arg1 + 0x14) = rax_5
arg1[3].d = rax_5
*(arg1 + 0x1c) = 0
arg1[4].d = 1
return arg1
