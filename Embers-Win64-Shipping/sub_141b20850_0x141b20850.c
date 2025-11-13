// 函数: sub_141b20850
// 地址: 0x141b20850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe0) != 0)
    void* rax_1 = sub_142484770()
    
    if (rax_1 != 0)
        void* rdx = *(arg1 + 0xe0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx != 0)
            int64_t rax_4 = *(arg1 + 0x90)
            int32_t var_40 = 0
            int128_t zmm0 = *(arg1 + 0xe0)
            int128_t zmm1 = *(arg1 + 0xf0)
            uint32_t rax_5
            
            if (rax_4.b == 2)
                rax_5 = 0
            else if (rax_4.b != 1)
                rax_5 = (rax_4 u>> 0x20).d + 1
            else
                rax_5 = (rax_4 u>> 0x20).d
            
            arg2[0x10].b = (arg2[0x10].b & 0xfe) | 3
            *(arg2 + 0x14) = 0xffffffff.q
            *(arg2 + 0x20) = zmm0
            arg2[8].d = rax_5
            *arg2 = &data_143053298
            arg2[1].b = 0
            arg2[2].b = 0
            *(arg2 + 0x30) = zmm1
            return arg2

arg2[0x10].b = (arg2[0x10].b & 0xfe) | 2
return arg2
