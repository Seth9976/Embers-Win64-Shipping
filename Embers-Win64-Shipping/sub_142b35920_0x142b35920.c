// 函数: sub_142b35920
// 地址: 0x142b35920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int64_t i = 0
int64_t* r14 = &arg1[0xa]

do
    if (i - 1 u> 2)
        void* rbp_1 = *r14
        
        if (rbp_1 != 0)
            sub_142b324e0(rbp_1)
            sub_142a47920(rbp_1)
    
    i += 1
    r14 = &r14[1]
while (i s< 6)

if (arg1[0x11] != 0)
    int32_t i_1 = 0
    
    if (arg1[0x12].d u> 0)
        do
            void* rbp_2 = *(arg1[0x11] + (zx.q(i_1) << 3))
            
            if (rbp_2 != 0)
                sub_142b324e0(rbp_2)
                sub_142a47920(rbp_2)
            
            i_1 += 1
        while (i_1 u< arg1[0x12].d)
    
    sub_142a7dcd0(arg1[0x11])

if (arg1[8] != 0)
    if (arg1[9].d u> 0)
        do
            void* rdi = *(arg1[8] + (zx.q(i_2) << 3))
            
            if (rdi != 0)
                sub_142b324e0(rdi)
                sub_142a47920(rdi)
            
            i_2 += 1
        while (i_2 u< arg1[9].d)
    
    sub_142a7dcd0(arg1[8])

return sub_142a47ff0(arg1) __tailcall
