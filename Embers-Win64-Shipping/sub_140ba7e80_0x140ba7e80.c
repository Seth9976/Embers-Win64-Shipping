// 函数: sub_140ba7e80
// 地址: 0x140ba7e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r11 = sx.q(arg1[9].d)

if (r11.d != 0)
    void* rdx_2 = arg1[8]
    void* r8 = &arg1[7]
    uint32_t r10_2 = (arg2 u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    int32_t rcx_2 = neg.d(r9_2 + r10_2) ^ r9_2 u>> 0xd
    int32_t r10_5 = (r10_2 - r9_2 - rcx_2) ^ rcx_2 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_5 - rcx_2) ^ r10_5 << 0x10
    int32_t rcx_5 = (rcx_2 - r9_5 - r10_5) ^ r9_5 u>> 5
    int32_t r10_8 = (r10_5 - r9_5 - rcx_5) ^ rcx_5 u>> 3
    int32_t r9_8 = (r9_5 - r10_8 - rcx_5) ^ r10_8 << 0xa
    
    if (rdx_2 != 0)
        r8 = rdx_2
    
    int32_t i = *(r8 + (((sx.q(rcx_5 - r9_8 - r10_8) ^ zx.q(r9_8) u>> 0xf) & (r11 - 1)) << 2))
    int32_t i_1 = i
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_3 = sx.q(i_1) * 3
            i = *(r8_1 + (rdx_3 << 3) + 0x10)
            
            if (*(r8_1 + (rdx_3 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    if (i_1 != 0xffffffff)
        int64_t rdx_4 = *arg1
        
        do
            if (*(rdx_4 + sx.q(i_1) * 0x18 + 8) == arg3)
                return rdx_4 + ((sx.q(i_1) * 3 + 1) << 3)
            
            i_1 = i
            
            if (i == 0xffffffff)
                break
            
            do
                int64_t r8_3 = sx.q(i_1) * 3
                i = *(rdx_4 + (r8_3 << 3) + 0x10)
                
                if (*(rdx_4 + (r8_3 << 3)) == arg2)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return 0
