// 函数: sub_141b54430
// 地址: 0x141b54430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x68)
int32_t i = 0

if (*(arg1 + 0x210) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rcx_1 = *(r14_1 + *(arg1 + 0x208))
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x210))

int32_t i_1 = 0

if (*(arg1 + 0x220) s> 0)
    int64_t* r14_2 = nullptr
    
    do
        int64_t* rcx_2 = *(r14_2 + *(arg1 + 0x218))
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x18))(rcx_2, 1)
        
        i_1 += 1
        r14_2 = &r14_2[1]
    while (i_1 s< *(arg1 + 0x220))

bool cond:0 = *(arg1 + 0x214) == 0
*(arg1 + 0x210) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x208, 0)

bool cond:1 = *(arg1 + 0x224) == 0
*(arg1 + 0x220) = 0

if (not(cond:1))
    sub_1405c5570(arg1 + 0x218, 0)

int32_t i_3 = *(arg1 + 0x1f0)

if (i_3 != 0)
    int64_t* r14_4 = *(arg1 + 0x1e8) + 8
    int32_t i_2
    
    do
        int64_t* rdi = *r14_4
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp2_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        r14_4 = &r14_4[2]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

bool cond:2 = *(arg1 + 0x1f4) == 0
*(arg1 + 0x1f0) = 0

if (not(cond:2))
    sub_1405a5410(arg1 + 0x1e8, 0)

sub_141b4fbd0(arg1 + 8)
uint64_t result = sub_141b545b0(arg1)

if (arg1 == -0x68)
    return result

return LeaveCriticalSection(arg1 + 0x68)
