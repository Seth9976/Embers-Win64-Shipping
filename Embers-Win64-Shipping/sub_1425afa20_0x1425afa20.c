// 函数: sub_1425afa20
// 地址: 0x1425afa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2
sub_141c213f0(arg1, arg2)
sub_141c212a0(arg1 + 0x58, rbp + 0x58)
*(arg1 + 0xb0) = *(rbp + 0xb0)
*(arg1 + 0xc0) = *(rbp + 0xc0)
*(arg1 + 0xd0) = *(rbp + 0xd0)
*(arg1 + 0xe0) = *(rbp + 0xe0)
*(arg1 + 0xe8) = *(rbp + 0xe8)
*(arg1 + 0xf0) = *(rbp + 0xf0)

if (arg1 + 0xf8 != rbp + 0xf8)
    int32_t i_2 = *(arg1 + 0x100)
    void* rbx_1 = *(arg1 + 0xf8)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *(rbx_1 + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(rbp + 0x100)
    void* rdi_1 = *(rbp + 0xf8)
    int32_t r8_1 = *(arg1 + 0x104)
    *(arg1 + 0x100) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_1407751d0(arg1 + 0xf8, i_3, r8_1)
        int64_t* rsi_1 = *(arg1 + 0xf8)
        
        if (i_3 != 0)
            int32_t* rdi_2 = rdi_1 + 8
            void* rbx_2 = rsi_1 + 0x1c
            int32_t i_1
            
            do
                *rsi_1 = 0
                int64_t rbp_1 = sx.q(*rdi_2)
                int64_t r14_1 = *(rdi_2 - 8)
                *(rbx_2 - 0x14) = rbp_1.d
                
                if (rbp_1.d != 0)
                    sub_14083a1f0(rsi_1, rbp_1.d, 0)
                    memcpy(*rsi_1, r14_1, (rbp_1 << 5).d)
                else
                    *(rbx_2 - 0x10) = 0
                
                *(rbx_2 - 0xc) = 0
                int64_t rbp_2 = sx.q(rdi_2[4])
                int64_t r12_1 = *(rdi_2 + 8)
                *(rbx_2 - 4) = rbp_2.d
                
                if (rbp_2.d != 0)
                    sub_1405c4a90(rbx_2 - 0xc, rbp_2.d, 0)
                    memcpy(*(rbx_2 - 0xc), r12_1, (rbp_2 << 2).d)
                else
                    *rbx_2 = 0
                
                rsi_1 = &rsi_1[5]
                *(rbx_2 + 4) = rdi_2[6]
                rdi_2 = &rdi_2[0xa]
                rbx_2 += 0x28
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rbp = arg2
    else
        *(arg1 + 0x104) = 0

if (arg1 + 0x108 != rbp + 0x108)
    int64_t rdi_3 = sx.q(*(rbp + 0x110))
    int64_t rsi_2 = *(rbp + 0x108)
    int32_t r8_6 = *(arg1 + 0x114)
    *(arg1 + 0x110) = rdi_3.d
    
    if (rdi_3.d != 0 || r8_6 != 0)
        sub_1405a4be0(arg1 + 0x108, rdi_3.d, r8_6)
        memcpy(*(arg1 + 0x108), rsi_2, (rdi_3 << 4).d)
    else
        *(arg1 + 0x114) = 0

if (arg1 + 0x118 != rbp + 0x118)
    int64_t rdi_4 = sx.q(*(rbp + 0x120))
    int64_t rsi_3 = *(rbp + 0x118)
    int32_t r8_9 = *(arg1 + 0x124)
    *(arg1 + 0x120) = rdi_4.d
    
    if (rdi_4.d == 0 && r8_9 == 0)
        *(arg1 + 0x124) = 0
        return arg1
    
    sub_1407c3650(arg1 + 0x118, rdi_4.d, r8_9)
    memcpy(*(arg1 + 0x118), rsi_3, (rdi_4 * 0xc).d)

return arg1
