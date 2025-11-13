// 函数: sub_140759010
// 地址: 0x140759010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rbx_1 = *arg3
    int32_t rax_1 = sub_140b5ead0(rbx_1.d)
    int16_t r8 = arg3[2].w
    int32_t rbp_1 = (rbx_1 u>> 0x20).d + rax_1
    int64_t rdx
    
    if (r8 != 3)
        rdx = 0
    else
        rdx = arg3[1]
    
    uint32_t rdx_1 = (rdx u>> 4).d
    int32_t rcx_2 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
    int32_t rbx_5 = neg.d(rcx_2 + rdx_1) ^ rcx_2 u>> 0xd
    int32_t rdx_4 = (rdx_1 - rcx_2 - rbx_5) ^ rbx_5 u>> 0xc
    int32_t rcx_5 = (rcx_2 - rdx_4 - rbx_5) ^ rdx_4 << 0x10
    int32_t rbx_8 = (rbx_5 - rcx_5 - rdx_4) ^ rcx_5 u>> 5
    int32_t rdx_7 = (rdx_4 - rcx_5 - rbx_8) ^ rbx_8 u>> 3
    int32_t rcx_8 = (rcx_5 - rdx_7 - rbx_8) ^ rdx_7 << 0xa
    int32_t rbx_11 = (rbx_8 - rcx_8 - rdx_7) ^ rcx_8 u>> 0xf
    void* const rsi_1
    
    if (r8 != 3)
        rsi_1 = arg3[1]
        void* rax_16
        int64_t rax_17
        void* rdx_8
        
        if (rsi_1 != 0)
            rax_16 = sub_140be01c0()
            rdx_8 = *(rsi_1 + 0x10)
            rax_17 = sx.q(*(rax_16 + 0x38))
        
        if (rsi_1 == 0 || rax_17.d s> *(rdx_8 + 0x38)
                || *(*(rdx_8 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
            rsi_1 = nullptr
    else
        rsi_1 = data_143ce3880
    
    uint32_t rsi_2 = (rsi_1 u>> 4).d
    int32_t rcx_12 = (0x9e3779b9 - rsi_2) ^ rsi_2 << 8
    int32_t rdx_11 = neg.d(rsi_2 + rcx_12) ^ rcx_12 u>> 0xd
    int32_t rsi_5 = (rsi_2 - rcx_12 - rdx_11) ^ rdx_11 u>> 0xc
    int32_t rcx_15 = (rcx_12 - rsi_5 - rdx_11) ^ rsi_5 << 0x10
    int32_t rdx_14 = (rdx_11 - rcx_15 - rsi_5) ^ rcx_15 u>> 5
    int32_t rsi_8 = (rsi_5 - rcx_15 - rdx_14) ^ rdx_14 u>> 3
    int32_t rcx_18 = (rcx_15 - rsi_8 - rdx_14) ^ rsi_8 << 0xa
    int32_t rdx_19 = (((rdx_14 - rcx_18 - rsi_8) ^ rcx_18 u>> 0xf) - rbx_11) ^ rbx_11 u>> 0xd
    int32_t rcx_22 = (0x9e3779b9 - rbx_11 - rdx_19) ^ rdx_19 << 8
    int32_t rbx_14 = (rbx_11 - rcx_22 - rdx_19) ^ rcx_22 u>> 0xd
    int32_t rdx_22 = (rdx_19 - rcx_22 - rbx_14) ^ rbx_14 u>> 0xc
    int32_t rcx_25 = (rcx_22 - rdx_22 - rbx_14) ^ rdx_22 << 0x10
    int32_t rbx_17 = (rbx_14 - rcx_25 - rdx_22) ^ rcx_25 u>> 5
    int32_t rdx_25 = (rdx_22 - rcx_25 - rbx_17) ^ rbx_17 u>> 3
    int32_t rcx_28 = (rcx_25 - rdx_25 - rbx_17) ^ rdx_25 << 0xa
    void* r8_2 = &arg1[7]
    void* rdx_26 = *(r8_2 + 8)
    int32_t rbx_22 = (((rbx_17 - rcx_28 - rdx_25) ^ rcx_28 u>> 0xf) - rbp_1) ^ rbp_1 u>> 0xd
    int32_t r12_3 = (0x9e3779b9 - rbx_22 - rbp_1) ^ rbx_22 << 8
    int32_t rbp_4 = (rbp_1 - r12_3 - rbx_22) ^ r12_3 u>> 0xd
    int32_t rbx_25 = (rbx_22 - r12_3 - rbp_4) ^ rbp_4 u>> 0xc
    int32_t r12_6 = (r12_3 - rbx_25 - rbp_4) ^ rbx_25 << 0x10
    int32_t rbp_7 = (rbp_4 - r12_6 - rbx_25) ^ r12_6 u>> 5
    int32_t rbx_28 = (rbx_25 - r12_6 - rbp_7) ^ rbp_7 u>> 3
    int32_t r12_9 = (r12_6 - rbx_28 - rbp_7) ^ rbx_28 << 0xa
    
    if (rdx_26 != 0)
        r8_2 = rdx_26
    
    int32_t i = *(r8_2
        + (((sx.q(rbp_7 - r12_9 - rbx_28) ^ zx.q(r12_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *arg1
        
        do
            int64_t* rdx_27 = sx.q(i) * 0x58
            uint64_t rcx_33
            
            if (*(rdx_27 + r8_3) == *arg3)
                if (*(rdx_27 + r8_3 + 8) != arg3[1] || *(rdx_27 + r8_3 + 0x10) != arg3[2].w)
                    rcx_33.b = 0
                else
                    rcx_33.b = 1
            
            if (*(rdx_27 + r8_3) != *arg3 || rcx_33.b == 0)
                rcx_33.b = 0
            else
                rcx_33.b = 1
            
            if (rcx_33.b != 0)
                *arg2 = i
                return arg2
            
            i = *(rdx_27 + r8_3 + 0x50)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
