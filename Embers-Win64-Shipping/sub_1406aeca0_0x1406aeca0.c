// 函数: sub_1406aeca0
// 地址: 0x1406aeca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x7c)
int32_t rsi = 0
int32_t rdi = -1

if (result != 0x2a)
    if (result == 0x2b)
        rsi = 1
    else if (result != 0x3f)
        if (result != 0x7b)
            return result
        
        sub_1406aec20(arg1)
        
        if (sub_1406aba60(arg1) == 0)
            sub_1406ad7b0(arg1, error_badbrace)
            noreturn
        
        int32_t rax_10 = *(arg1 + 0x7c)
        rsi = *(arg1 + 0x74)
        
        if (rax_10 == 0x2c)
            sub_1406aec20(arg1)
            
            if (*(arg1 + 0x7c) != 0x7d)
                if (sub_1406aba60(arg1) == 0)
                    sub_1406ad7b0(arg1, error_badbrace)
                    noreturn
                
                rdi = *(arg1 + 0x74)
                rax_10 = *(arg1 + 0x7c)
                goto label_1406aedee
        else
            rdi = rsi
        label_1406aedee:
            
            if (rax_10 != 0x7d)
                sub_1406ad7b0(arg1, error_badbrace)
                noreturn
        
        if (rdi != 0xffffffff && rdi s< rsi)
            sub_1406ad7b0(arg1, error_badbrace)
            noreturn
    else
        rdi = result - 0x3e

void* rax = arg1[9]
*(rax + 0xc) |= 4
char* rcx = *arg1
int64_t rax_1 = arg1[2]

if (rcx != rax_1)
    if (*rcx == 0x5c)
        void* rdx_1 = &rcx[1]
        rcx = rdx_1
        
        if (rdx_1 == rax_1)
            rcx = *arg1
        else
            char r8_1 = (arg1[0x10].d).b
            
            if (((r8_1 & 8) != 0 || *rdx_1 - 0x28 u> 1)
                    && ((r8_1 & 0x10) != 0 || ((*rdx_1 - 0x7b) & 0xfd) != 0))
                rcx = *arg1
    
    *arg1 = &rcx[1]

sub_1406af960(arg1)
int32_t r8_2 = arg1[0x10].d
int64_t rbp

if (not(test_bit(r8_2, 0xa)) || *(arg1 + 0x7c) != 0x3f)
    rbp.b = 1
else
    char* rcx_2 = *arg1
    rbp.b = 0
    int64_t rax_5 = arg1[2]
    
    if (rcx_2 != rax_5)
        if (*rcx_2 == 0x5c)
            void* rdx_2 = &rcx_2[1]
            rcx_2 = rdx_2
            
            if (rdx_2 == rax_5)
                rcx_2 = *arg1
            else if (((r8_2.b & 8) != 0 || *rdx_2 - 0x28 u> 1)
                    && ((r8_2.b & 0x10) != 0 || ((*rdx_2 - 0x7b) & 0xfd) != 0))
                rcx_2 = *arg1
        
        *arg1 = &rcx_2[1]
    
    sub_1406af960(arg1)

return sub_1406a9d90(&arg1[8], rsi, rdi, rbp.b)
