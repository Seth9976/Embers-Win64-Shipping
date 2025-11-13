// 函数: sub_141f13100
// 地址: 0x141f13100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0
void* rdx = *(arg1 + 0x210)

if (rdx == 0)
    sub_141b105d0(arg2)
    void* rax_2 = sub_142494d30()
    
    if (rax_2 != 0)
        sub_140d3a3a0(&arg2[1], rax_2)
        int32_t rcx_3 = *(rax_2 + 0x5c)
        int32_t r8_1 = 1
        int32_t rdx_5 = (*(rax_2 + 0x58) - 1 + rcx_3) & not.d(rcx_3 - 1)
        
        if (rdx_5 != 0)
            r8_1 = rdx_5
        
        void*** rax_5 = sub_140a82f30(sx.q(r8_1), 0, r8_1)
        arg2[2] = rax_5
        sub_141f02860(rax_5, arg1)
        arg2[4].b = 1
else
    sub_141f02130(arg2, rdx)
    int64_t* rcx_1 = *(arg1 + 0x210)
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    *(arg1 + 0x210) = 0

return arg2
