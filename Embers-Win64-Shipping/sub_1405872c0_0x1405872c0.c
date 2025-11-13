// 函数: sub_1405872c0
// 地址: 0x1405872c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
__builtin_memset(arg1, 0, 0x18)
arg1[3] = 0x78
arg1[4].d = 1
arg1[7] = 0
arg1[8] = 0xf
arg1[5].b = 0
arg1[9].b = 0
__builtin_memset(&arg1[0xa], 0, 0x18)
arg1[0xd].w = 1
int64_t rbx = arg1[1]
int64_t rcx = *arg1
int64_t rdx_2 = (rbx - rcx) s>> 3

if (rdx_2 u> 1)
    rbx = rcx + 8
    arg1[1] = rbx
else if (rdx_2 u< 1)
    if ((0 - rcx) s>> 3 u>= 1)
        int64_t rcx_2 = rbx
        rbx += 8 - (rdx_2 << 3)
        memset(rcx_2, 0, 8 - (rdx_2 << 3))
        arg1[1] = rbx
    else
        sub_14058bc70(arg1, 1)
        rbx = arg1[1]

int32_t i = 0

if (((rbx - *arg1) s>> 3).d s> 0)
    int64_t** rsi_1 = nullptr
    
    do
        int64_t* rax_4 = j_sub_140a82f30(0x18)
        int64_t* rbx_3 = rax_4
        int64_t* arg_10 = rax_4
        
        if (rax_4 == 0)
            rbx_3 = nullptr
        else
            __builtin_memset(rax_4, 0, 0x18)
            sub_14058d720(rax_4, 0x3e8)
        
        *(rsi_1 + *arg1) = rbx_3
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< ((arg1[1] - *arg1) s>> 3).d)

return arg1
