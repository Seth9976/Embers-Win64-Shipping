// 函数: sub_141fab990
// 地址: 0x141fab990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (*(arg1 + 0x98) s> 0)
    int64_t* rdx = *(arg1 + 0x90)
    rax = *rdx
    
    if (rax != 0 && *(rax + 0x134) != 1 && *(arg1 + 0xc71) != 0)
        *(arg1 + 0x760) += 1
        void* rax_1 = *(arg1 + 0x768)
        *(arg1 + 0xc71) = 0
        
        if (rax_1 != 0)
            *(rax_1 + 0x298) = 0
            sub_1420e0c80(*(arg1 + 0x140), *(arg1 + 0x768), 1, 1)
            bool cond:1_1 = *(arg1 + 0xcfc) == 0
            *(arg1 + 0xcf8) = 0
            
            if (not(cond:1_1))
                sub_1405c5570(arg1 + 0xcf0, 0)
            
            rdx = *(arg1 + 0x90)
            *(arg1 + 0x768) = 0
        
        sub_141fc9a20(arg1, *rdx, arg2)
        int128_t* rax_2
        rax_2.b = 1
        int128_t zmm0
        zmm0.q = fconvert.d((*data_143f3d438 ^ data_142d3f780).d)
        *(arg1 + 0x890) = zmm0.q
        return rax_2

rax.b = 0
return rax
