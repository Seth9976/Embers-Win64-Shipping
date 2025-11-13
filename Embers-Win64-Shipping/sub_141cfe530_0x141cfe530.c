// 函数: sub_141cfe530
// 地址: 0x141cfe530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141cf68e0()
void* r15 = nullptr
*arg3 = 0
arg3[1] = 0
int32_t rdx = arg2[1].d

if (rdx s> 0)
    arg3[1].d = rdx
    sub_1405e4030(arg3, 0)
else if (rdx s< 0 && rdx != 0)
    arg3[1].d = rdx
    sub_1405e40b0(arg3)

int32_t i = 0

if (arg2[1].d s> 0)
    int32_t rsi_1 = 1
    
    do
        void* rax_2 = *arg2
        
        if ((rax_2.b & 1) != 0)
            rax_2 = (rax_2 s>> 1) + arg2
        
        void* r10_1 = r15 + rax_2
        void* rax_3 = *arg3
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + arg3
        
        void* rcx_2 = arg2[2]
        int32_t* rdx_1 = r15 + rax_3
        
        if ((rcx_2.b & 1) != 0)
            rcx_2 = (rcx_2 s>> 1) + &arg2[2]
        
        int32_t i_1 = i
        
        if (i s< 0)
            i_1 = i + 0x1f
        
        if ((*(rcx_2 + (sx.q(i_1 s>> 5) << 2)) & rsi_1) == 0)
            *rdx_1 = *r10_1
            rdx_1[1] = *(r10_1 + 4)
        else
            data_143f36c98(arg1, r10_1, &data_143f36c70, rdx_1)
        
        i += 1
        rsi_1 = rol.d(rsi_1, 1)
        r15 += 0x20
    while (i s< arg2[1].d)

arg3[2] = 0
arg3[3] = 0

if (&arg3[2] != &arg2[2])
    sub_141d00fe0(&arg3[2], arg2[3].d)
    int32_t rax_9 = arg2[3].d
    arg3[3].d = rax_9
    
    if (rax_9 != 0)
        void* rdx_4 = arg2[2]
        
        if ((rdx_4.b & 1) != 0)
            rdx_4 = (rdx_4 s>> 1) + &arg2[2]
        
        void* rcx_6 = arg3[2]
        
        if ((rcx_6.b & 1) != 0)
            rcx_6 = (rcx_6 s>> 1) + &arg3[2]
        
        memcpy(rcx_6, rdx_4, (zx.q(rax_9 + 0x1f) u>> 5 << 2).d)

arg3[4].d = arg2[4].d
int32_t result = *(arg2 + 0x24)
*(arg3 + 0x24) = result
return result
