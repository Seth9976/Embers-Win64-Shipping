// 函数: sub_142bf7370
// 地址: 0x142bf7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 2
int32_t result = 0
result.b = 2
char* rax = getenv("HB_OPTIONS")
char* rdi = rax

if (rax != 0 && *rax != 0)
    do
        char* rax_1 = strchr(rdi, 0x3a)
        void* rbx_1 = rax_1
        
        if (rax_1 == 0)
            void* rbx_2 = -ffffffffffffffff
            
            do
                rbx_2 += 1
            while (*(rdi + rbx_2) != 0)
            
            rbx_1 = rbx_2 + rdi
        
        uint64_t _MaxCount = rbx_1 - rdi
        
        if (strncmp(rdi, "uniscribe-bug-compatible", _MaxCount) == 0 && _MaxCount == 0x18)
            rsi.b |= 4
            result.b = rsi.b
        
        if (strncmp(rdi, "aat", _MaxCount) == 0 && _MaxCount == 3)
            rsi.b |= 8
            result.b = rsi.b
        
        rdi = rbx_1 + 1
        
        if (*rbx_1 == 0)
            rdi = rbx_1
    while (*rdi != 0)

data_144019be8 = result
return result
