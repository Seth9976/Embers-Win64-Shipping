// 函数: sub_1417cec20
// 地址: 0x1417cec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140780bc0(arg1, arg2)

if (&arg1[2] != &arg2[2])
    int64_t rdi_1 = sx.q(arg2[3].d)
    int64_t rsi_1 = arg2[2]
    int32_t r8_1 = *(arg1 + 0x1c)
    arg1[3].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1407c3650(&arg1[2], rdi_1.d, r8_1)
        memcpy(arg1[2], rsi_1, (rdi_1 * 0xc).d)
    else
        *(arg1 + 0x1c) = 0

if (&arg1[4] != &arg2[4])
    int32_t rdi_2 = arg2[5].d
    int64_t rsi_2 = arg2[4]
    int32_t r8_4 = *(arg1 + 0x2c)
    arg1[5].d = rdi_2
    
    if (rdi_2 != 0 || r8_4 != 0)
        sub_1405a4c70(&arg1[4], rdi_2, r8_4)
        memcpy(arg1[4], rsi_2, rdi_2 * 2)
    else
        *(arg1 + 0x2c) = 0

if (&arg1[6] != &arg2[6])
    int32_t i_3 = arg1[7].d
    int64_t* rbx_2 = arg1[6]
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rbx_2
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_2 = &rbx_2[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[7].d
    void* rdi_3 = arg2[6]
    int32_t r8_7 = *(arg1 + 0x3c)
    arg1[7].d = i_2
    
    if (i_2 != 0 || r8_7 != 0)
        sub_1405a4be0(&arg1[6], i_2, r8_7)
        int64_t* rbx_3 = arg1[6]
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                *rbx_3 = 0
                int64_t rsi_4 = sx.q(*(rdi_3 + 8))
                int64_t r14_1 = *rdi_3
                rbx_3[1].d = rsi_4.d
                
                if (rsi_4.d != 0)
                    sub_1406387e0(rbx_3, rsi_4.d, 0)
                    memcpy(*rbx_3, r14_1, (rsi_4 << 3).d)
                else
                    *(rbx_3 + 0xc) = 0
                
                rbx_3 = &rbx_3[2]
                rdi_3 += 0x10
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x3c) = 0

arg1[8].d ^= (arg1[8].d ^ arg2[8].d) & 1
int32_t rcx_11 = ((arg1[8].d ^ arg2[8].d) & 2) ^ arg1[8].d
arg1[8].d = rcx_11
int32_t rdx_10 = ((rcx_11 ^ arg2[8].d) & 4) ^ rcx_11
arg1[8].d = rdx_10
arg1[8].d = ((rdx_10 ^ arg2[8].d) & 8) ^ rdx_10
return arg1
