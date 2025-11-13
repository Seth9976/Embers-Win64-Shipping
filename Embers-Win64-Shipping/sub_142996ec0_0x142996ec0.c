// 函数: sub_142996ec0
// 地址: 0x142996ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (rbx == 0)
    return 

int64_t rsi_1 = arg1[1]

if (rbx != rsi_1)
    do
        int64_t rcx = *(rbx + 8)
        
        if (rcx != 0)
            _aligned_free(rcx)
        
        *(rbx + 8) = 0
        *rbx = 0
        rbx += 0x10
    while (rbx != rsi_1)
    
    rbx = *arg1

if (((arg1[2] - rbx) & 0xfffffffffffffff0) u>= 0x1000)
    void* rax_1 = *(rbx - 8)
    
    if (rbx - rax_1 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx = rax_1

j_sub_140a74f90(rbx)
__builtin_memset(arg1, 0, 0x18)
