// 函数: sub_142613c20
// 地址: 0x142613c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*arg1 s> 0)
    int64_t r14_1 = 0
    
    do
        void* rsi_2 = *(arg1 + 8) + r14_1
        int64_t* rdi_1 = *(rsi_2 + 0x278)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        sub_14261b100(rsi_2)
        i += 1
        r14_1 += 0x328
    while (i s< *arg1)

int64_t rcx_4 = *(arg1 + 8)

if (rcx_4 != 0)
    data_143b50298(rcx_4)

int64_t rcx_5 = *(arg1 + 0x10)
*(arg1 + 8) = 0
*arg1 = 0

if (rcx_5 != 0)
    data_143b50298(rcx_5)

int64_t rcx_6 = *(arg1 + 0x18)
*(arg1 + 0x10) = 0
arg1[1] = 0

if (rcx_6 != 0)
    data_143b50298(rcx_6)

int64_t rcx_7 = *(arg1 + 0x6c8)
*(arg1 + 0x18) = 0

if (rcx_7 != 0)
    data_143b50298(rcx_7)

void* rcx_8 = *(arg1 + 0x6c0)
*(arg1 + 0x6c8) = 0
sub_142627960(rcx_8)
void* rcx_9 = *(arg1 + 0x6b8)
*(arg1 + 0x6c0) = 0
int64_t result = sub_142627920(rcx_9)
void* rdi_2 = *(arg1 + 0x2b18)
*(arg1 + 0x6b8) = 0

if (rdi_2 != 0)
    int64_t* rsi_3 = *(rdi_2 + 0x60)
    
    if (rsi_3 != 0)
        int64_t rcx_10 = *rsi_3
        
        if (rcx_10 != 0)
            data_143b50298(rcx_10)
        
        int64_t rcx_11 = rsi_3[2]
        
        if (rcx_11 != 0)
            data_143b50298(rcx_11)
        
        int64_t rcx_12 = rsi_3[1]
        
        if (rcx_12 != 0)
            data_143b50298(rcx_12)
    
    int64_t* rsi_4 = *(rdi_2 + 0x68)
    
    if (rsi_4 != 0)
        int64_t rcx_13 = *rsi_4
        
        if (rcx_13 != 0)
            data_143b50298(rcx_13)
        
        int64_t rcx_14 = rsi_4[2]
        
        if (rcx_14 != 0)
            data_143b50298(rcx_14)
        
        int64_t rcx_15 = rsi_4[1]
        
        if (rcx_15 != 0)
            data_143b50298(rcx_15)
    
    int64_t* rax_3 = *(rdi_2 + 0x70)
    
    if (rax_3 != 0)
        int64_t rcx_16 = *rax_3
        
        if (rcx_16 != 0)
            data_143b50298(rcx_16)
    
    int64_t rcx_17 = *(rdi_2 + 0x60)
    
    if (rcx_17 != 0)
        data_143b50298(rcx_17)
    
    int64_t rcx_18 = *(rdi_2 + 0x68)
    
    if (rcx_18 != 0)
        data_143b50298(rcx_18)
    
    int64_t rcx_19 = *(rdi_2 + 0x70)
    
    if (rcx_19 != 0)
        data_143b50298(rcx_19)
    
    result = data_143b50298(rdi_2)

*(arg1 + 0x2b18) = 0
return result
