// 函数: sub_140b51570
// 地址: 0x140b51570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x10)
int32_t* r9 = arg2
void* r8 = arg1

if (i == 0 && *(arg1 + 0x64) == i.b)
    *(arg1 + 0x5c) = i.d
    return 

int32_t rbx = 0
void* const rsi = nullptr
uint32_t r13 = 0
uint32_t r14 = 0
int32_t r15 = 0

if (*(arg1 + 0x64) != 0 && *(arg1 + 0x66) == 0)
    rbx = 8

if (i != 0)
    do
        uint32_t rax = zx.d(*(i + 0x29))
        void* rbp_1 = *(i + 8)
        
        if (rax.b != 0)
            uint32_t rdx_2 = zx.d(rax.b)
            
            if (rsi == rbp_1)
                r14 += rdx_2
            
            if (rsi != rbp_1 || r14 u> *(rbp_1 + 0x58) << 3)
                if (rsi != 0)
                    uint32_t rcx_8 = *r9
                    rax = *(rsi + 0x60)
                    
                    if (rax u<= rcx_8)
                        rcx_8 = rax
                    
                    rbx = ((rbx - 1 + rcx_8) & neg.d(rcx_8)) + *(rsi + 0x58)
                
                *(i + 0x20) = rbx
                rsi = rbp_1
                r14 = rdx_2
            else
                *(i + 0x20) = rbx
        else
            uint32_t r12_1 = zx.d(*(r8 + 0x65))
            
            if (rsi != 0)
                int32_t rcx = *r9
                
                if (*(rsi + 0x60) u<= rcx)
                    rcx = *(rsi + 0x60)
                
                rbx = ((rbx - 1 + rcx) & neg.d(rcx)) + *(rsi + 0x58)
                rsi = nullptr
                r14 = 0
            
            int32_t rax_1 = (*(rbp_1 + 0x38))(rbp_1, r9)
            r9 = arg2
            int32_t rdx_1 = *(rbp_1 + 0x5c)
            int32_t rcx_3 = *r9
            
            if (rax_1 u<= rcx_3)
                rcx_3 = rax_1
            
            rbx = (rbx - 1 + rcx_3) & neg.d(rcx_3)
            
            if (rdx_1 != 0)
                goto label_140b5166f
            
            if (r15 u>= r12_1)
                rdx_1 = 1
            label_140b5166f:
                
                if (r15 u>= r12_1 || ((r9[1] u>> 3).b & 1) != 0)
                    rbx += ((rax_1 - 1 + rdx_1) & neg.d(rax_1)) * *(i + 0x24)
                else
                    rbx += rdx_1
            else
                if (r13 != 0)
                    rdx_1 = 1
                
                if (r13 == 0)
                    r13 += 1
                
                if (rdx_1 != 0)
                    goto label_140b5166f
            
            r8 = arg1
        
        i = *(i + 0x10)
        r15 += 1
    while (i != 0)
    
    if (rsi != 0)
        int32_t rcx_6 = *r9
        
        if (*(rsi + 0x60) u<= rcx_6)
            rcx_6 = *(rsi + 0x60)
        
        rbx = ((rbx - 1 + rcx_6) & neg.d(rcx_6)) + *(rsi + 0x58)

*(r8 + 0x5c) = rbx
