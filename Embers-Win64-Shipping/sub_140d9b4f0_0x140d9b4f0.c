// 函数: sub_140d9b4f0
// 地址: 0x140d9b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[0x12].d
sub_140dbbaa0(&arg1[0x11], rsi)
int64_t rdi = sx.q(arg1[0x12].d)

if (rsi s> rdi.d)
    arg1[0x12].d = rsi
    int32_t i_1 = rsi - rdi.d
    
    if (rsi s> *(arg1 + 0x94))
        sub_1405a4df0(&arg1[0x11])
    
    char* rdx_2 = arg1[0x11] + rdi * 0x18
    
    if (i_1 != 0)
        void* rax_2 = &rdx_2[0x14]
        int32_t i
        
        do
            *rdx_2 = 0
            rdx_2 = &rdx_2[0x18]
            *(rax_2 - 0xc) = 0
            *(rax_2 - 4) = 0
            rax_2 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rsi s< rdi.d)
    sub_1409d8830(&arg1[0x11], rsi, rdi.d - rsi, 1)

sub_1408d84f0(arg1)
return sub_140dbbd00(&arg1[0xa]) __tailcall
