// 函数: sub_1428a8a90
// 地址: 0x1428a8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
arg1[0xd].d = 0
int32_t rcx = arg1[3].d

if (arg1[5].d u> divu.dp.d(0:(arg1[6].d << 8), rcx))
label_1428a8b98:
    int32_t arg_8
    void* rax_12 = sub_1428a8dc0(arg1, arg2, &arg_8)
    int64_t* rcx_4 = *rax_12
    
    if (rcx_4 != 0)
        int64_t result = *rcx_4
        *rcx_4 = arg2
        arg1[0xa].d += 1
        return result
    
    int64_t* rax_13 = sub_1428a6730(zx.q((rcx_4 + 0x6d).d - 0x55))
    
    if (rax_13 != 0)
        *rax_13 = arg2
        rax_13[1] = 0
        rax_13[2].d = arg_8
        *rax_12 = rax_13
        *(arg1 + 0x4c) += 1
        arg1[6].d += 1
        return 0
else
    uint64_t rbp_1 = zx.q(arg1[4].d)
    int32_t r12_1 = *(arg1 + 0x24)
    uint64_t rsi_1 = zx.q(*(arg1 + 0x1c))
    int32_t rax_3 = (rbp_1 + 1).d
    
    if (rax_3 u< r12_1)
        goto label_1428a8b35
    
    uint32_t r15_1 = (rsi_1 * 2).d
    int64_t rax_4 = sub_1428a67c0(*arg1, zx.q(r15_1) << 3, "crypto\lhash\lhash.c", 0xe1)
    
    if (rax_4 != 0)
        *arg1 = rax_4
        memset(rax_4 + (rsi_1 << 3), 0, rsi_1 << 3)
        arg1[7].d += 1
        rax_3 = 0
        rcx = arg1[3].d
        *(arg1 + 0x24) = rsi_1.d
        *(arg1 + 0x1c) = r15_1
    label_1428a8b35:
        arg1[4].d = rax_3
        int64_t rdx_3 = *arg1
        *(arg1 + 0x34) += 1
        int64_t* r8_3 = rdx_3 + (rbp_1 << 3)
        arg1[3].d = rcx + 1
        uint64_t rax_7 = zx.q(r12_1 + rbp_1.d)
        *(rdx_3 + (rax_7 << 3)) = 0
        void* i = *r8_3
        void** r10_1 = rdx_3 + (rax_7 << 3)
        
        if (i != 0)
            void* i_1 = i
            
            do
                if (modu.dp.d(0:(*(i + 0x10)), rsi_1.d) == rbp_1.d)
                    r8_3 = i_1 + 8
                else
                    *r8_3 = *(i_1 + 8)
                    *(i + 8) = *r10_1
                    *r10_1 = i
                
                i = *r8_3
                i_1 = i
            while (i != 0)
        
        goto label_1428a8b98

arg1[0xd].d += 1
return 0
