// 函数: sub_1418d8650
// 地址: 0x1418d8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[7].d == 0
*arg1 = &data_142feeea8

if (not(cond:0))
    int64_t r9_1 = sx.q(arg1[5].d)
    
    if (r9_1.d != 0xffffffff)
        void* r8_1 = arg1[6]
        int64_t* rdx = *(r8_1 + 0x58) + (zx.q(r9_1.d) u>> 6 << 3)
        *rdx &= not.q(1 << ((zx.q(r9_1.d) & 0x3f) u% 0x40))
        *(*(r8_1 + 0x48) + (r9_1 << 3)) = 0
        arg1[7].d = 0
        arg1[5].d = 0xffffffff

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
