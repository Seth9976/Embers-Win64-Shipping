// 函数: sub_141dd5990
// 地址: 0x141dd5990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a8) != *(arg1 + 0x1d4))
    int32_t rax_1 = *(arg1 + 0x1ac)
    *(arg1 + 0x1a8) = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5410(arg1 + 0x1a0, 0)
    
    *(arg1 + 0x1d0) = 0xffffffff
    *(arg1 + 0x1d4) = 0
    sub_140774790(arg1 + 0x1b0)
    int64_t rcx_2 = sx.q(*(arg1 + 0x1e8))
    void* rdi_1 = arg1 + 0x1d8
    void* rax_2 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

int32_t rax_3 = *(arg1 + 0x19c)
*(arg1 + 0x198) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405c5570(arg1 + 0x190, 0)

void* arg_8 = arg1
void** var_10 = &arg_8
int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_141dbb9e0
return sub_140d3bfe0(arg1, &var_18, 1, 0, 0x20000000)
