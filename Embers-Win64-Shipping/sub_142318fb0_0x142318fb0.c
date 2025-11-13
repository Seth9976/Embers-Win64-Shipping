// 函数: sub_142318fb0
// 地址: 0x142318fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x808) s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rdi = nullptr
char rax_1

do
    rax_1 = sub_14221afe0(*(rdi + *(arg1 + 0x800)))
    
    if (rax_1 != 0)
        return 1
    
    i += 1
    rdi = &rdi[1]
while (i s< *(arg1 + 0x808))

return rax_1
