// 函数: sub_1418be9d0
// 地址: 0x1418be9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x30)

if (*(arg1 + 0x88) != 0)
    int32_t i = 0
    void* rdi_1 = nullptr
    
    if (*(arg1 + 0x18) s> 0)
        int64_t* r15_1 = nullptr
        
        do
            void* r14_1 = *(r15_1 + *(arg1 + 0x10))
            sub_1418c4d80(r14_1)
            
            if ((*(r14_1 + 0x2d) & 0x20) == 0 && *(r14_1 + 0x2c) == 0)
                rdi_1 = r14_1
            
            i += 1
            r15_1 = &r15_1[1]
        while (i s< *(arg1 + 0x18))
    
    if (*(arg1 + 0x18) s<= 0 || rdi_1 == 0)
        rdi_1 = sub_1418bc9e0(arg1 + 8, 0)
    
    sub_1418bc690(rdi_1)
    void* i_1 = *(arg1 + 0x80)
    int64_t r12_1 = *(rdi_1 + 0x40)
    
    for (void* r14_4 = (sx.q(*(arg1 + 0x88)) << 4) + i_1; i_1 != r14_4; i_1 += 0x10)
        data_143efba78(r12_1, *i_1, 0, zx.q(*(i_1 + 8)))
    
    sub_1418bdd70(rdi_1)
    result = sub_1418ef260(*(arg1 + 0x68), rdi_1, 0, 0)
    bool cond:0_1 = *(arg1 + 0x8c) == 0
    *(arg1 + 0x88) = 0
    
    if (not(cond:0_1))
        result = sub_1405a5410(arg1 + 0x80, 0)

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(arg1 + 0x30) __tailcall
