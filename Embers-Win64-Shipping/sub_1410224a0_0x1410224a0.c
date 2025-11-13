// 函数: sub_1410224a0
// 地址: 0x1410224a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
EnterCriticalSection(arg1 + 0x58)
int64_t rax = *(arg1 + 0x28)
int64_t rdx = r12 * 5
int64_t* i = *(rax + (rdx << 3) + 0x10)
void* rbp = rax + (rdx << 3)
rdx.b = 0
int64_t result = zx.q(*(arg1 + 0x1c)) + arg2
int64_t result_1 = result
int64_t var_38
var_38.o = arg2.o

if (i == 0)
label_1410225d6:
    
    if (*(rbp + 0x20) == 0)
        int32_t* rax_7 = j_sub_140a82f30(0x18)
        
        if (rax_7 != 0)
            *rax_7 = r12.d
            *(rax_7 + 8) = 0
            *(rax_7 + 0x10) = 0
            void* rcx_3 = *(arg1 + 0x48)
            
            if (rcx_3 == 0)
                *(arg1 + 0x40) = rax_7
            else
                *(rcx_3 + 8) = rax_7
                *(rax_7 + 0x10) = *(arg1 + 0x48)
            
            *(arg1 + 0x48) = rax_7
            (*(*(arg1 + 0x38) + 8))(arg1 + 0x38, zx.q(*(arg1 + 0x50) + 1))
    
    result = j_sub_140a82f30(0x20)
    
    if (result != 0)
        *(result + 0x10) = 0
        *(result + 0x18) = 0
        *result = var_38.o
        void* rax_9 = *(rbp + 0x18)
        
        if (rax_9 == 0)
            *(rbp + 0x10) = result
        else
            *(rax_9 + 0x10) = result
            *(result + 0x18) = *(rbp + 0x18)
        
        *(rbp + 0x18) = result
        result = (*(*(rbp + 8) + 8))(rbp + 8, zx.q(*(rbp + 0x20) + 1))
else
    do
        if (rdx.b != 0)
            goto label_141022696
        
        uint64_t r8 = zx.q(*(arg1 + 0x1c))
        int64_t rcx_1 = *i
        result = r8 + arg2
        
        if (rcx_1 != result)
            result = i[1]
            
            if (result == arg2)
                result += r8
                i[1] = result
                rdx.b = 1
            else if (rcx_1 u> arg2)
                result = j_sub_140a82f30(0x20)
                
                if (result != 0)
                    *(result + 0x10) = 0
                    *(result + 0x18) = 0
                    *result = var_38.o
                    int64_t rax_2 = *(rbp + 0x10)
                    
                    if (i == rax_2)
                        if (rax_2 == 0)
                            *(rbp + 0x18) = result
                        else
                            *(result + 0x10) = rax_2
                            *(*(rbp + 0x10) + 0x18) = result
                        
                        *(rbp + 0x10) = result
                    else
                        *(result + 0x18) = i[3]
                        *(result + 0x10) = i
                        *(i[3] + 0x10) = result
                        i[3] = result
                    
                    result, rdx = (*(*(rbp + 8) + 8))(rbp + 8, zx.q(*(rbp + 0x20) + 1))
                
                rdx.b = 1
        else
            *i = arg2
            rdx.b = 1
        
        i = i[2]
    while (i != 0)
    
    if (rdx.b == 0)
        goto label_1410225d6

label_141022696:

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58) __tailcall
