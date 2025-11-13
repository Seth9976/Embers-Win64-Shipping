// 函数: sub_140fd95b0
// 地址: 0x140fd95b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x204) = 0x10
void* r14 = &arg1[0x20c]
int32_t i = 0
*(arg1 + 0x200) = 0
__builtin_memset(r14, 0, 0x20)
int16_t r15 = 0

if (*(arg2 + 0x80) s> 0)
    void* rsi_1 = arg2 + 2
    
    do
        uint32_t rax_1 = zx.d(*(rsi_1 - 2))
        uint64_t r9_1 = zx.q(*rsi_1)
        uint32_t var_34_1 = zx.d(*(rsi_1 - 1))
        int32_t rax_3 = (r9_1 - 1).d
        int32_t var_3c_1 = 0
        
        if (rax_3 u> 0x13)
            sub_140af98a0("Unknown", 0x37, u"Unknown RHI vertex element type %u", r9_1)
            sub_140afbb40()
        else
            switch (rax_3)
                case 0
                    int32_t var_3c_2 = 0x29
                case 1
                    int32_t var_3c_3 = 0x10
                case 2
                    int32_t var_3c_4 = 6
                case 3
                    int32_t var_3c_5 = 2
                case 4
                    int32_t var_3c_6 = 0x1f
                case 5
                    int32_t var_3c_7 = 0x1e
                case 6
                    int32_t var_3c_8 = 0x1c
                case 7
                    int32_t var_3c_9 = 0x57
                case 8
                    int32_t var_3c_10 = 0x26
                case 9
                    int32_t var_3c_11 = 0xe
                case 0xa
                    int32_t var_3c_12 = 0x25
                case 0xb
                    int32_t var_3c_13 = 0x22
                case 0xc
                    int32_t var_3c_14 = 0xa
                case 0xd
                    int32_t var_3c_15 = 0xd
                case 0xe
                    int32_t var_3c_16 = 0x24
                case 0xf
                    int32_t var_3c_17 = 0xc
                case 0x10
                    int32_t var_3c_18 = 0x23
                case 0x11
                    int32_t var_3c_19 = 0xb
                case 0x12
                    int32_t var_3c_20 = 0x18
                case 0x13
                    int32_t var_3c_21 = 0x2a
        
        uint32_t var_40_1 = zx.d(*(rsi_1 + 1))
        uint32_t rcx_2 = zx.d(r15)
        int32_t rax_6
        rax_6.b = *(rsi_1 + 4) != 0
        int32_t var_30_1 = rax_6
        int32_t var_2c_1 = rax_6
        uint32_t rax_7 = zx.d(*(rsi_1 - 2))
        
        if (not(test_bit(rcx_2, rax_7)))
            r15 = rcx_2.w | (1 << (rax_7 u% 0x20)).w
            *(arg1 + (zx.q(rax_7) << 1) + 0x20c) = *(rsi_1 + 2)
        
        int64_t rdi_1 = sx.q(*(arg1 + 0x200))
        int32_t rax_9 = (rdi_1 + 1).d
        *(arg1 + 0x200) = rax_9
        
        if (rax_9 s> *(arg1 + 0x204))
            sub_140ffcae0(arg1)
        
        i += 1
        int64_t rax_11 = rdi_1 << 5
        rsi_1 += 8
        *(rax_11 + arg1) = "ATTRIBUTE".o
        *(rax_11 + arg1 + 0x10) = rax_1.o
    while (i s< *(arg2 + 0x80))
    
    r14 = &arg1[0x20c]

sub_140fd5450(arg1, *(arg1 + 0x200), arg3)
int32_t rax_12 = sub_140b212b0(arg1, *(arg1 + 0x200) << 5, 0)
*(arg1 + 0x208) = rax_12
*(arg1 + 0x208) = sub_140b212b0(r14, 0x20, rax_12)
return arg1
