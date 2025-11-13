// 函数: sub_141f0da30
// 地址: 0x141f0da30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1
int32_t i_2 = *(arg1 + 0x440)
int64_t* rbx = *(arg1 + 0x438)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        rbx = &rbx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x444) == 0
*(arg1 + 0x440) = 0

if (not(cond:0))
    sub_140638c50(arg1 + 0x438, 0)

int32_t i_1 = 0

if (*(arg2 + 0x440) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        void* rsi = *(r12_1 + *(arg2 + 0x438))
        void*** rax_3 = j_sub_140a82f30(0x78)
        void*** rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            *rax_3 = &data_143268970
            rbx_1[1] = *(rsi + 8)
            rbx_1[2] = *(rsi + 0x10)
            rbx_1[3] = 0
            int32_t rbp_1 = *(rsi + 0x20)
            int64_t rax_6 = *(rsi + 0x18)
            rbx_1[4].d = rbp_1
            
            if (rbp_1 != 0)
                sub_1405a4c70(&rbx_1[3], rbp_1, 0)
                memcpy(rbx_1[3], rax_6, rbp_1 * 2)
            else
                *(rbx_1 + 0x24) = 0
            
            rbp = arg1
            rbx_1[5] = *(rsi + 0x28)
            *(rbx_1 + 0x30) = *(rsi + 0x30)
            rbx_1[8] = *(rsi + 0x40)
            rbx_1[9].d = *(rsi + 0x48)
            *(rbx_1 + 0x4c) = *(rsi + 0x4c)
            rbx_1[0xa].d = *(rsi + 0x50)
            *(rbx_1 + 0x54) = *(rsi + 0x54)
            *(rbx_1 + 0x58) = *(rsi + 0x58)
            rbx_1[0xd] = *(rsi + 0x68)
            rbx_1[0xe].d = *(rsi + 0x70)
        
        int64_t rsi_1 = sx.q(*(arg1 + 0x440))
        int32_t rax_14 = (rsi_1 + 1).d
        *(arg1 + 0x440) = rax_14
        
        if (rax_14 s> *(arg1 + 0x444))
            sub_140638870(arg1 + 0x438)
        
        i_1 += 1
        r12_1 = &r12_1[1]
        *(*(arg1 + 0x438) + (rsi_1 << 3)) = rbx_1
        rbx_1[1] = rbp
    while (i_1 s< *(arg2 + 0x440))

void* rcx_5 = *(rbp + 0x420)

if (rcx_5 == 0)
    return 

void* rax = *(arg2 + 0x420)

if (rax != 0)
    *(rcx_5 + 0xc0) = *(rax + 0xc0)
