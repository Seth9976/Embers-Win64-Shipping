// 函数: sub_141e80110
// 地址: 0x141e80110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
int64_t rax_1

if (*(arg1 + 0x28) s< *(arg1 + 0x10))
    rax_1 = 0
    
    if (0 == *(arg1 + 0x30))
        *(arg1 + 0x30) = 0
    else
        rax_1 = *(arg1 + 0x30)

int128_t* result

if (*(arg1 + 0x28) s>= *(arg1 + 0x10) || rax_1 u>= *(arg1 + 0x38))
    char rax_3 = data_143f3a084
    result = *(arg1 + 0x20)
    char rcx_2 = rax_3
    
    if (rax_3 == 0)
        rcx_2 = 1
    
    int32_t rax_4 = 0
    data_143f3a084 = rcx_2
    
    if (0 == *(result + 0x48))
        *(result + 0x48) = 0
    else
        rax_4 = *(result + 0x48)
    
    bool z_1
    
    if (rax_4 s<= 0)
        if (0 == *(result + 0x44))
            *(result + 0x44) = 0
            z_1 = true
        else
            *(result + 0x44)
            z_1 = false
    
    if (rax_4 s> 0 || z_1)
        int64_t rcx_3 = *(*(arg1 + 0x18) + 0x38)
        
        if (result == 0)
        label_141e801d5:
            
            if (arg1 != -0x48)
                LeaveCriticalSection(arg1 + 0x48)
            
            return nullptr
        
        while (result != rcx_3)
            int32_t rax_8 = 0
            
            if (0 == *(result + 0x48))
                *(result + 0x48) = 0
            else
                rax_8 = *(result + 0x48)
            
            if (rax_8 s<= 0)
                bool z_2
                
                if (0 == *(result + 0x44))
                    *(result + 0x44) = 0
                    z_2 = true
                else
                    *(result + 0x44)
                    z_2 = false
                
                if (not(z_2))
                    void* rdx = result[3].q
                    
                    if (rdx != 0)
                        *(rdx + 0x38) = *(result + 0x38)
                        rdx = result[3].q
                    
                    *(*(result + 0x38) + 0x30) = rdx
                    break
            
            result = result[3].q
            
            if (result == 0)
                goto label_141e801d5
        
        if (result == 0 || result == rcx_3)
            goto label_141e801d5
    else
        *(arg1 + 0x20) = result[3].q
else
    int64_t rcx_1 = sx.q(*(arg1 + 0x28))
    result = rcx_1 * 0x58 + *(arg1 + 8)
    *(arg1 + 0x28) = (rcx_1 + 1).d

*(result + 0x44)
*(result + 0x44) = 0
*result = *arg2
result[1].q = arg2[1].q
sub_141e89970(arg1, result)

if (*(arg1 + 0x20) != 0 || *(arg1 + 0x28) s<= 1)
    goto label_141e80282

EnterCriticalSection(arg1 + 0x48)
void* i_1 = *(arg1 + 0x18)

for (void* i = *(i_1 + 0x38); i != 0; i = *(i + 0x38))
    i_1 = i

*(arg1 + 0x20) = i_1

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)
label_141e80282:
    
    if (arg1 != -0x48)
        LeaveCriticalSection(arg1 + 0x48)

return result
