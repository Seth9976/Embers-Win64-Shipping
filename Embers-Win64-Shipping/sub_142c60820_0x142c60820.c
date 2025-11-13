// 函数: sub_142c60820
// 地址: 0x142c60820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
char* rsi = nullptr
char* rdi = nullptr
int32_t r14 = 0
int32_t rax_1

if (*(arg1 + 0x3f9) != 0)
    rax_1 = sub_142c61bf0(rbp, arg1)
    r14 = rax_1

if (*(arg1 + 0x3f9) == 0 || rax_1 == 0)
    int64_t rcx_1 = *(rbp + 0x6c8)
    char* rax_2
    int64_t r8_1
    
    if (rcx_1 != 0)
        rax_2, r8_1 = data_143ccb8b0(rcx_1)
        rsi = rax_2
    
    char* rax_3
    int64_t rcx_3
    
    if (rcx_1 == 0 || rax_2 != 0)
        rcx_3 = *(rbp + 0x6d0)
        
        if (rcx_3 != 0)
            rax_3, r8_1 = data_143ccb8b0(rcx_3)
            rdi = rax_3
    
    int512_t entry_zmm2
    
    if ((rcx_1 != 0 && rax_2 == 0) || (rcx_3 != 0 && rax_3 == 0))
        sub_142c64760(rbp, "memory shortage", r8_1, entry_zmm2)
        r14 = 0x1b
    else
        char* rax_4 = j_sub_142c87750("no_proxy")
        char* r15_1 = rax_4
        
        if (rax_4 == 0)
            r15_1 = j_sub_142c87750("NO_PROXY")
        
        char rax_6 = sub_142c5f8c0(arg1[0x1a], *(rbp + 0x790))
        char rax_7
        
        if (rax_6 == 0 && *(rbp + 0x790) == 0)
            rax_7 = sub_142c5f8c0(arg1[0x1a], r15_1)
        
        if (rax_6 != 0 || (*(rbp + 0x790) == 0 && rax_7 != 0))
            data_143ccb8a0(rsi)
            rsi = nullptr
            data_143ccb8a0(rdi)
            rdi = nullptr
        else if (rsi == 0 && rdi == 0)
            rsi = sub_142c60b30(arg1)
        
        data_143ccb8a0(r15_1)
        
        if (rsi != 0 && (*rsi == 0 || (arg1[0x87][0x10].b & 0x10) != 0))
            data_143ccb8a0(rsi)
            rsi = nullptr
        
        if (rdi != 0 && (*rdi == 0 || (arg1[0x87][0x10].b & 0x10) != 0))
            data_143ccb8a0(rdi)
            rdi = nullptr
        
        char const (** const rax_9)[0x5]
        
        if (rsi != 0)
            int32_t rax_10
            rax_10, entry_zmm2 = sub_142c61720(rbp, arg1, rsi, *(arg1 + 0x164), entry_zmm2)
            r14 = rax_10
            data_143ccb8a0(rsi)
            rsi = nullptr
            
            if (r14 == 0)
                if (rdi != 0)
                    goto label_142c609ec
                
            label_142c60a00:
                int64_t rcx_16 = arg1[0x28]
                
                if (rcx_16 == 0)
                    *(arg1 + 0x3f6) = 0
                    *(arg1 + 0x401) = 0
                else
                    rax_9 = arg1[0x87]
                    
                    if ((*(rax_9 + 0x7c) & 3) != 0)
                        *(arg1 + 0x3f6) = 1
                    else if ((rax_9[0x10].d & 0x800) == 0 || *(arg1 + 0x401) != 0)
                        *(arg1 + 0x401) = 1
                        *(arg1 + 0x3f6) = 1
                    else
                        *(arg1 + 0x3f6) = 1
                        arg1[0x87] = &data_1436b4490
                
                if (arg1[0x21] == 0)
                    *(arg1 + 0x3f7) = 0
                else
                    if (rcx_16 == 0 && arg1[0x26] == rcx_16)
                        int64_t rax_12 = arg1[0x2d]
                        arg1[0x2d] = rcx_16
                        int64_t rcx_17 = arg1[0x27]
                        arg1[0x26] = rax_12
                        data_143ccb8a0(rcx_17)
                        arg1[0x27] = arg1[0x2e]
                        arg1[0x2e] = 0
                    
                    *(arg1 + 0x3f7) = 1
                
                goto label_142c60ad6
        else if (rdi != 0)
        label_142c609ec:
            r14 = sub_142c61720(rbp, arg1, rdi, *(arg1 + 0x12c), entry_zmm2)
            data_143ccb8a0(rdi)
            rdi = nullptr
            
            if (r14 == 0)
                goto label_142c60a00
        else
            *(arg1 + 0x3f6) = rdi.w
        label_142c60ad6:
            
            if (*(arg1 + 0x3f6) != 0 || *(arg1 + 0x3f7) != 0)
                rax_9.b = 1
            else
                rax_9 = nullptr
            
            *(arg1 + 0x3f5) = rax_9.b
            
            if (rax_9.b == 0)
                *(arg1 + 0x3f5) = 0
                *(arg1 + 0x3f7) = rax_9.b
                *(arg1 + 0x3f9) = rax_9.b
                *(arg1 + 0x401) = rax_9.b

data_143ccb8a0(rdi)
data_143ccb8a0(rsi)
return zx.q(r14)
