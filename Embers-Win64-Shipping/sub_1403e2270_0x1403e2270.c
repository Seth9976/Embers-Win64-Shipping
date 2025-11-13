// 函数: sub_1403e2270
// 地址: 0x1403e2270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)
void* const rbp = &data_1436fcc10
int32_t rsi = 0
void* const r14 = &data_1436fcbe8

if (arg3.d != *(arg1 + 0x121c))
    if (arg3.d u> 0x3c || not(test_bit(0x1000010000100400, arg3)))
        rsi = -0x67
    
    void* const rax_5
    
    if (arg3.d s> 0xa)
        uint64_t rcx_2 = zx.q(sx.d(rdi.w))
        *(arg1 + 0x11fc) = 4
        *(arg1 + 0x16a0) = arg3.d s/ 0x14
        *(arg1 + 0x1200) = (rcx_2 * 5).d << 2
        bool cond:0_1 = *(arg1 + 0x11f8) != 8
        *(arg1 + 0x11dc) = (rcx_2 * 3).d << 3
        rax_5 = &data_1436fcc10
        
        if (cond:0_1)
            rax_5 = &data_1436fcbe8
    else
        int32_t rax_1
        rax_1.b = arg3.d == 0xa
        int32_t rcx = sx.d(arg2.w)
        *(arg1 + 0x16a0) = 1
        *(arg1 + 0x11fc) = rax_1 + 1
        bool cond:2_1 = *(arg1 + 0x11f8) != 8
        *(arg1 + 0x1200) = sx.d(arg3.w) * rcx
        rax_5 = &data_1436fcc0c
        *(arg1 + 0x11dc) = rcx * 0xe
        
        if (cond:2_1)
            rax_5 = &data_1436fcc20
    
    *(arg1 + 0x1278) = rax_5
    *(arg1 + 0x121c) = arg3.d
    *(arg1 + 0x1218) = 0

if (*(arg1 + 0x11f8) != rdi.d)
    *(arg1 + 0x1c38) = 0
    *(arg1 + 0x1c40) = 0
    memset(arg1 + 0x1c48, 0, 0x85c)
    memset(arg1 + 0x90, 0, 0x111c)
    __builtin_memset(arg1 + 0x11ac, 0, 0x20)
    *(arg1 + 0x10) = 0
    int32_t rdx_3 = *(arg1 + 0x11fc)
    *(arg1 + 0x169c) = 0
    *(arg1 + 0x16a4) = 0
    *(arg1 + 0x1218) = 0
    *(arg1 + 0x11d8) = 0x64
    *(arg1 + 0x1258) = 1
    *(arg1 + 0x24a0) = 0x64
    *(arg1 + 0x1c38) = 0xa
    *(arg1 + 0x1194) = 0x64
    *(arg1 + 0x11a4) = 0x10000
    *(arg1 + 0x11d5) = 0
    *(arg1 + 0x11f8) = rdi.d
    void* const rax_12
    
    if (rdi.d != 8)
        if (rdx_3 != 4)
            r14 = &data_1436fcc20
        
        *(arg1 + 0x1278) = r14
        
        if (rdi.d == 0xc)
            *(arg1 + 0x1238) = 0xa
            rax_12 = &data_1436fd090
        else
            *(arg1 + 0x1238) = 0x10
            rax_12 = &data_1436fcc30
    else
        if (rdx_3 != 4)
            rbp = &data_1436fcc0c
        
        *(arg1 + 0x1278) = rbp
        *(arg1 + 0x1238) = 0xa
        rax_12 = &data_1436fd090
    
    *(arg1 + 0x1280) = rax_12
    uint32_t rax_13 = (rdi * 5).d
    *(arg1 + 0x1204) = rax_13
    *(arg1 + 0x1200) = sx.d(rax_13.w) * sx.d(*(arg1 + 0x11fc))
    uint64_t rcx_7 = zx.q(sx.d(rdi.w))
    *(arg1 + 0x1208) = (rcx_7 * 5).d << 2
    *(arg1 + 0x120c) = (rcx_7 * 2).d
    *(arg1 + 0x11e0) = (rcx_7 * 9).d * 2
    
    if (rdx_3 != 4)
        *(arg1 + 0x11dc) = rcx_7.d * 0xe
    else
        *(arg1 + 0x11dc) = (rcx_7 * 3).d << 3
    
    void* const rax_22
    
    if (rdi.d == 0x10)
        *(arg1 + 0x124c) = 0xa
        rax_22 = &data_1436fc868
    else if (rdi.d != 0xc)
        *(arg1 + 0x124c) = 0xf
        rax_22 = &data_1436fc848
    else
        *(arg1 + 0x124c) = 0xd
        rax_22 = &data_1436fc854
    
    *(arg1 + 0x1270) = rax_22

return zx.q(rsi)
