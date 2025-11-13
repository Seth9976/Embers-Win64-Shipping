// 函数: sub_140aadd30
// 地址: 0x140aadd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
int64_t* r15 = *(arg2 + 8)
void* i = *r15

while (i != 0)
    void* i_1 = i
    i = *(i + 0x10)
    
    if (*(i_1 + 0x160) != 0)
        void* rax_1 = *(i_1 + 0x170)
        void* rcx = i_1 + 0x180
        
        if (rax_1 != 0)
            rcx = rax_1
        
        (*(*rcx + 0x10))(rcx)
    
    int64_t* rbx_1 = *(i_1 + 0x148)
    
    if (rbx_1 != 0)
        int32_t rax_3 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_3 == 1 && rbx_1 != 0)
            if ((*(rbx_1 + 0x19) & rax_3.b) != 0)
                sub_140a74f90(*rbx_1)
            
            int64_t* rcx_2 = rbx_1[2]
            
            if (rcx_2 != 0)
                sub_140abfb60(rcx_2)
            
            j_sub_140a74f90(rbx_1)
    
    EnterCriticalSection(rsi + 0x1e8)
    *(i_1 + 0x1a0) = *(rsi + 0x1d8)
    *(rsi + 0x1e0) -= 1
    *(rsi + 0x1d8) = i_1
    
    if (rsi != -0x1e8)
        LeaveCriticalSection(rsi + 0x1e8)

EnterCriticalSection(rsi + 0x228)
int64_t result = *(rsi + 0x218)
r15[1] = result
*(rsi + 0x220) -= 1
*(rsi + 0x218) = r15

if (rsi == -0x228)
    return result

return LeaveCriticalSection(rsi + 0x228) __tailcall
