// 函数: sub_1418a22f0
// 地址: 0x1418a22f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    return 

EnterCriticalSection(arg1 + 0x20)
int64_t rdi_1 = *(arg1 + 0x48)
int64_t rsi_1 = sx.q(*(arg1 + 0x50))
int64_t r15_3 = (rsi_1 << 5) + rdi_1

if (rdi_1 != r15_3)
    do
        int64_t* rcx_1 = *(arg1 + 8)
        (*(*rcx_1 + 0x58))(rcx_1, rdi_1, rdi_1 + 0x10)
        rdi_1 += 0x20
    while (rdi_1 != r15_3)
    
    rsi_1 = zx.q(*(arg1 + 0x50))

int32_t rax = *(arg1 + 0x54)
int64_t* rdi_2 = *(arg1 + 0x48)

if (rax s< 0)
    if (rsi_1.d != 0)
        int32_t i
        
        do
            sub_14180c130(&rdi_2[2])
            int64_t rcx_5 = *rdi_2
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rdi_2 = &rdi_2[4]
            i = rsi_1.d
            rsi_1 = zx.q(rsi_1.d - 1)
        while (i != 1)
        rax = *(arg1 + 0x54)
    
    *(arg1 + 0x50) = 0
    
    if (rax != 0)
        sub_1405a51b0(arg1 + 0x48, 0)
else
    if (rsi_1.d != 0)
        int32_t i_1
        
        do
            sub_14180c130(&rdi_2[2])
            int64_t rcx_3 = *rdi_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rdi_2 = &rdi_2[4]
            i_1 = rsi_1.d
            rsi_1 = zx.q(rsi_1.d - 1)
        while (i_1 != 1)
    
    *(arg1 + 0x50) = 0

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)
