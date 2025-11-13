// 函数: sub_142c8f8d0
// 地址: 0x142c8f8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
uint64_t rcx = 0

do
    uint64_t count = *(rcx + 0x1436bb628)
    
    if (arg2 u>= count && memcmp(arg1, *(rcx + &data_1436bb620), count) == 0)
        if (arg3 != 0)
            *arg3 = count
        
        void* rax_2 = *(rcx + 0x1436bb628)
        
        if (arg2 == rax_2)
            return zx.q(*(zx.q(rdi.d) * 0x18 + 0x1436bb630))
        
        uint32_t _C = zx.d(*(rax_2 + arg1))
        
        if (isupper(_C) == 0 && isdigit(_C) == 0 && _C.b != 0x2d && _C.b != 0x5f)
            return zx.q(*(zx.q(rdi.d) * 0x18 + 0x1436bb630))
    
    rdi = zx.q(rdi.d + 1)
    rcx = rdi * 0x18
while (*(rcx + &data_1436bb620) != 0)

return 0
