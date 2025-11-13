// 函数: sub_141e38ee0
// 地址: 0x141e38ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e393f0(arg1, arg2, arg3)
int512_t zmm1 = sub_141e39770(arg1, &arg2[2], arg3)

if (arg1[8].d s>= 0x136)
    sub_141e39c00(arg1, &arg2[8], zmm1)
    
    if ((arg1[5].b & 1) != 0)
        int64_t rcx_2 = arg2[0x10]
        
        if (rcx_2 != 0)
            arg2[0x10] = sub_140a84c80(rcx_2, 0, 0)
        
        arg2[0x11].d = 0
        sub_141a85200(&arg2[8], arg2[9].d - *(arg2 + 0x74), 0)

char rcx_4 = arg1[5].b
char rax_2 = rcx_4

if ((rcx_4 & 1) != 0 && arg1[8].d s< 0x138 && arg2[1].d s> 0)
    void* rdx_4 = *arg2
    
    if (*(rdx_4 + 8) != 0xffffffff)
        *(rdx_4 + 8) = 0xffffffff
        rax_2 = arg1[5].b

if ((rax_2 & 1) != 0)
    if (&arg2[4] != arg2)
        int32_t i_1 = arg2[1].d
        int64_t* rbx_1 = *arg2
        int32_t r8_1 = *(arg2 + 0x2c)
        arg2[5].d = i_1
        
        if (i_1 != 0 || r8_1 != 0)
            sub_1407c3650(&arg2[4], i_1, r8_1)
            int64_t* rcx_6 = arg2[4]
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t rax_3 = *rbx_1
                    rbx_1 += 0xc
                    *rcx_6 = rax_3
                    rcx_6 += 0xc
                    *(rcx_6 - 4) = *(rbx_1 - 4)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        else
            *(arg2 + 0x2c) = i_1
    
    if (&arg2[6] != &arg2[2])
        int64_t rsi_1 = sx.q(arg2[3].d)
        int64_t r14_2 = arg2[2]
        int32_t r8_2 = *(arg2 + 0x3c)
        arg2[7].d = rsi_1.d
        
        if (rsi_1.d != 0 || r8_2 != 0)
            sub_1405a4b40(&arg2[6], rsi_1.d, r8_2)
            memcpy(arg2[6], r14_2, (rsi_1 * 0x30).d)
        else
            *(arg2 + 0x3c) = rsi_1.d
    
    sub_1405cd980(&arg2[0x12], &arg2[8])

return arg1
