// 函数: sub_14172ea90
// 地址: 0x14172ea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg2 + 0x10))
int64_t rsi = sx.q(arg1[1].d)

if (rbp.d s>= rsi.d)
    int32_t i_1 = rbp.d - rsi.d + 1
    int32_t rax_1 = rsi.d + i_1
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rax_4 = (rsi << 4) + *arg1
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rax_4 = -1
            rax_4[1].d = 0xffffffff
            *(rax_4 + 0xc) = 0
            rax_4 = &rax_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)

int64_t rcx_1 = rbp << 4
*(rcx_1 + *arg1 + 0xc) = 1
return *arg1 + rcx_1
