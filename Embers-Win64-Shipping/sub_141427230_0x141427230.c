// 函数: sub_141427230
// 地址: 0x141427230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x8c) += 1
int64_t rbp
rbp.b = 0
int32_t rax = *(arg1 + 0x80)
int32_t rcx = *(arg1 + 0x8c)
int64_t rsi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rdi_2 = rsi << 4
    int64_t temp1_1
    
    do
        uint64_t rax_2 = *(arg1 + 0x78)
        
        if (*(rdi_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rdi_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg2, arg3) == 0)
                rbp.b = 1
        
        rdi_2 -= 0x10
        temp1_1 = rsi
        rsi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x8c)

int32_t result = rcx - 1
*(arg1 + 0x8c) = result

if (rbp.b != 0 && result s<= 0)
    int32_t rbp_1 = *(arg1 + 0x80)
    int32_t rdi_3 = 0
    int32_t rdx_1 = rbp_1
    
    if (rbp_1 s> 0)
        int64_t rsi_1 = 0
        
        do
            uint64_t rax_5 = *(arg1 + 0x78)
            
            if (*(rsi_1 + rax_5 + 8) == 0)
                sub_1405a4880(arg1 + 0x78, rdi_3, 1, 1)
            else
                int64_t* rcx_2 = *(rsi_1 + rax_5)
                
                if (rcx_2 == 0)
                    sub_1405a4880(arg1 + 0x78, rdi_3, 1, 1)
                else if ((*(*rcx_2 + 0x20))(rcx_2) != 0)
                    sub_1405a4880(arg1 + 0x78, rdi_3, 1, 1)
                else
                    rdi_3 += 1
                    rsi_1 += 0x10
            
            rdx_1 = *(arg1 + 0x80)
        while (rdi_3 s< rdx_1)
    
    result = rdx_1 * 2
    
    if (result s<= 2)
        result = 2
    
    *(arg1 + 0x88) = result
    
    if (rbp_1 s> result && *(arg1 + 0x84) != rdx_1)
        return sub_1405a5410(arg1 + 0x78, rdx_1)

return result
