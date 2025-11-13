// 函数: sub_142b98c50
// 地址: 0x142b98c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(*(arg1 + 8) + 0x90)
int64_t rbp = rbx[2]
int64_t rdx = *(rbx[3] + 0x70)

if (rdx != 0)
    rdx()

int64_t* result = *(arg1 + 0xf0)

if (result == 0 || (result[1].b & 1) == 0)
    *(arg1 + 0x78) = 0
else
    int64_t rdx_1 = *(arg1 + 0x78)
    int64_t r8_1 = *(*(arg1 + 8) + 0x98)
    
    if (rdx_1 != 0)
        (*(r8_1 + 0x10))(r8_1, rdx_1, r8_1)
    
    result = *(arg1 + 0xf0)
    *(arg1 + 0x78) = 0
    result[1].d &= 0xfffffffe

int64_t* r14 = *(arg1 + 0xf0)

if (r14 != 0)
    result = *rbx
    
    if ((*result & 0x200) == 0)
        int64_t* r14_1 = *r14
        
        if (r14_1 != 0)
            int64_t rbx_1 = *r14_1
            sub_142b92c50(r14_1)
            (*(rbx_1 + 0x10))(rbx_1, r14_1)
        
        result = *(arg1 + 0xf0)
        *result = 0
    
    int64_t rdx_3 = *(arg1 + 0xf0)
    
    if (rdx_3 != 0)
        result = (*(rbp + 0x10))(rbp, rdx_3)
    
    *(arg1 + 0xf0) = 0

return result
