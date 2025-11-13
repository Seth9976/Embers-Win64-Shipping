// 函数: sub_1405979f0
// 地址: 0x1405979f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[8] != &arg2[8])
    *(arg1 + 8) = *(arg2 + 8)
    *(arg2 + 8) = 0
    int64_t rax_2 = *(arg2 + 0x10)
    int64_t* rsi_1 = *(arg1 + 0x10)
    
    if (rax_2 != rsi_1)
        *(arg2 + 0x10) = 0
        *(arg1 + 0x10) = rax_2
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp2_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)

if (&arg2[0x18] != &arg1[0x18])
    if (arg1[0x20] != 0)
        arg1[0x20] = 0
    
    if (arg2[0x20] != 0)
        *(arg1 + 0x18) = *(arg2 + 0x18)
        arg1[0x20] = 1

if (&arg1[0x28] != &arg2[0x28])
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg2 + 0x28) = 0
    int64_t* rcx_4 = *(arg1 + 0x30)
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg2 + 0x30) = 0
    
    if (rcx_4 != 0)
        int32_t temp1_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_4 + 8))(rcx_4, 1)

if (&arg1[0x38] != &arg2[0x38])
    *(arg1 + 0x38) = *(arg2 + 0x38)
    *(arg2 + 0x38) = 0
    int64_t* rcx_5 = *(arg1 + 0x40)
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    
    if (rcx_5 != 0)
        int32_t temp3_1 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)

if (&arg1[0x48] != &arg2[0x48])
    *(arg1 + 0x48) = *(arg2 + 0x48)
    *(arg2 + 0x48) = 0
    int64_t* rcx_6 = *(arg1 + 0x50)
    *(arg1 + 0x50) = *(arg2 + 0x50)
    *(arg2 + 0x50) = 0
    
    if (rcx_6 != 0)
        int32_t temp4_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)

if (&arg1[0x58] != &arg2[0x58])
    *(arg1 + 0x58) = *(arg2 + 0x58)
    *(arg2 + 0x58) = 0
    int64_t* rcx_7 = *(arg1 + 0x60)
    *(arg1 + 0x60) = *(arg2 + 0x60)
    *(arg2 + 0x60) = 0
    
    if (rcx_7 != 0)
        int32_t temp5_1 = *(rcx_7 + 0xc)
        *(rcx_7 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rcx_7 + 8))(rcx_7, 1)

if (&arg1[0x68] != &arg2[0x68])
    *(arg1 + 0x68) = *(arg2 + 0x68)
    *(arg2 + 0x68) = 0
    int64_t* rcx_8 = *(arg1 + 0x70)
    *(arg1 + 0x70) = *(arg2 + 0x70)
    *(arg2 + 0x70) = 0
    
    if (rcx_8 != 0)
        int32_t temp6_1 = *(rcx_8 + 0xc)
        *(rcx_8 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rcx_8 + 8))(rcx_8, 1)

if (&arg1[0x78] != &arg2[0x78])
    *(arg1 + 0x78) = *(arg2 + 0x78)
    *(arg2 + 0x78) = 0
    int64_t* rcx_9 = *(arg1 + 0x80)
    *(arg1 + 0x80) = *(arg2 + 0x80)
    *(arg2 + 0x80) = 0
    
    if (rcx_9 != 0)
        int32_t temp7_1 = *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rcx_9 + 8))(rcx_9, 1)

*(arg1 + 0x88) = *(arg2 + 0x88)

if (&arg1[0x90] != &arg2[0x90])
    *(arg1 + 0x90) = *(arg2 + 0x90)
    *(arg2 + 0x90) = 0
    int64_t rax_27 = *(arg2 + 0x98)
    int64_t* rsi_2 = *(arg1 + 0x98)
    
    if (rax_27 != rsi_2)
        *(arg2 + 0x98) = 0
        *(arg1 + 0x98) = rax_27
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp10_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)

if (&arg1[0xa0] != &arg2[0xa0])
    *(arg1 + 0xa0) = *(arg2 + 0xa0)
    *(arg2 + 0xa0) = 0
    int64_t rax_31 = *(arg2 + 0xa8)
    int64_t* rsi_3 = *(arg1 + 0xa8)
    
    if (rax_31 != rsi_3)
        *(arg2 + 0xa8) = 0
        *(arg1 + 0xa8) = rax_31
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp11_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)

arg1[0xb0] = arg2[0xb0]
arg1[0xb1] = arg2[0xb1]
arg1[0xb2] = arg2[0xb2]
arg1[0xb3] = arg2[0xb3]
*(arg1 + 0xb4) ^= (*(arg1 + 0xb4) ^ *(arg2 + 0xb4)) & 1
int32_t rax_41 = *(arg1 + 0xb4)
int32_t rcx_19 = ((rax_41 ^ *(arg2 + 0xb4)) & 2) ^ rax_41
*(arg1 + 0xb4) = rcx_19
int32_t rax_45 = ((rcx_19 ^ *(arg2 + 0xb4)) & 4) ^ rcx_19
*(arg1 + 0xb4) = rax_45
int32_t rcx_23 = ((rax_45 ^ *(arg2 + 0xb4)) & 8) ^ rax_45
*(arg1 + 0xb4) = rcx_23
int32_t rax_49 = ((rcx_23 ^ *(arg2 + 0xb4)) & 0x10) ^ rcx_23
*(arg1 + 0xb4) = rax_49
int32_t rcx_27 = ((rax_49 ^ *(arg2 + 0xb4)) & 0x20) ^ rax_49
*(arg1 + 0xb4) = rcx_27
int32_t rdx_12 = ((rcx_27 ^ *(arg2 + 0xb4)) & 0x40) ^ rcx_27
*(arg1 + 0xb4) = rdx_12
*(arg1 + 0xb4) = ((rdx_12 ^ *(arg2 + 0xb4)) & 0x80) ^ rdx_12
return arg1
