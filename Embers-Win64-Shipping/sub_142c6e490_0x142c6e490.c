// 函数: sub_142c6e490
// 地址: 0x142c6e490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t r8 = -1
void* r9 = *(rdi + 0x250)

if (r9 != 0)
    int32_t rcx = *(rdi + 0x438)
    
    if (rcx != 1 && rcx != 5)
        char rdx_4 = *(arg1 + 0x402)
        int64_t rsi = *(r9 + 0x30)
        
        if (rdx_4 != 0)
            r8 = 0
        else if (*(arg1 + 0x3ff) == 0)
            r8 = 0
        else if (rcx == 2)
            int64_t rax_3 = *(rdi + 0x4e68)
            
            if (rax_3 != -1)
                r8 = rax_3
        else if (rcx == 3)
            r8 = *(r9 + 8)
        else if (rcx == 4)
            int64_t rax_2 = *(rdi + 0x4e68)
            
            if (rax_2 != -1)
                r8 = rax_2
        
        *(arg1 + 0x403) = 0
        
        if (r8 != -1 && r8 s<= rsi)
            goto label_142c6e5ac
        
        int32_t rax_4 = *(rdi + 0x4bb4)
        int32_t rcx_3
        
        if (rax_4 != 8)
            rcx_3 = *(rdi + 0x4ba4)
        
        if (rax_4 != 8 && rcx_3 != 8 && rax_4 != 0x20 && rcx_3 != 0x20)
            goto label_142c6e59c
        
        int64_t r8_1 = r8 - rsi
        int512_t entry_zmm2
        
        if (r8_1 s< 0x7d0 || arg1[0xa4].d != 0 || arg1[0xa8].d != 0)
            if (rdx_4 == 0)
                *(arg1 + 0x403) = 1
                sub_142c64850(rdi, "Rewind stream after send\n", r8_1, entry_zmm2)
        else if (*(arg1 + 0x3f1) == 0)
            sub_142c64850(rdi, "NTLM send, close instead of sending %I64d bytes\n", r8_1, 
                entry_zmm2)
        label_142c6e59c:
            sub_142c65340(arg1, 2)
            *(rdi + 0xd8) = 0
        label_142c6e5ac:
            
            if (rsi != 0)
                return sub_142c687e0(arg1) __tailcall

return 0
