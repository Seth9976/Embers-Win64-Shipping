// 函数: sub_1429a26a0
// 地址: 0x1429a26a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x18))

if (rbp s<= 0)
    return 

char* rdi_1 = nullptr

do
    void* rax_1 = arg1 + 8
    
    if (*(arg1 + 0x20) u>= 0x10)
        rax_1 = *(arg1 + 8)
    
    char arg_8 = *(rdi_1 + rax_1)
    (*(*arg2 + 8))(arg2, &arg_8, 1)
    rdi_1 = &rdi_1[1]
while (rdi_1 s< rbp)
