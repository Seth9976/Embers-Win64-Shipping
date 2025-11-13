// 函数: sub_1423d8550
// 地址: 0x1423d8550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x228))
int32_t rdi = 0

if (result.d s> 0)
    int64_t result_1 = result
    int64_t r8_1 = 0
    result = *(arg1 + 0x220)
    
    do
        int64_t* rbx_1 = *result
        
        if (rbx_1 != 0 && rbx_1[0x32] == arg2)
            sub_14217ba70(rbx_1, nullptr)
            (*(*rbx_1 + 0x2b0))(rbx_1)
            (*(*rbx_1 + 0x2b8))(rbx_1)
            int32_t rdx = *(arg1 + 0x228)
            int32_t rcx_5 = rdx - rdi - 1
            
            if (rcx_5 s>= 1)
                rcx_5 = 1
            
            if (rcx_5 != 0)
                memcpy((sx.q(rdi) << 4) + *(arg1 + 0x220), 
                    (sx.q(rdx - rcx_5) << 4) + *(arg1 + 0x220), rcx_5 << 4)
                rdx = *(arg1 + 0x228)
            
            *(arg1 + 0x228) = rdx - 1
            sub_1405a5010(arg1 + 0x220)
            result = sub_142434f20(*(arg1 + 0x278), *(rbx_1 + 0x704) != 0xffffffff)
            
            if (result != 0)
                if (*(result + 0x10) == rbx_1)
                    *(result + 0x10) = 0
                
                if (*(result + 0x18) == rbx_1)
                    *(result + 0x18) = 0
            
            break
        
        rdi += 1
        r8_1 += 1
        result += 0x10
    while (r8_1 s< result_1)

return result
