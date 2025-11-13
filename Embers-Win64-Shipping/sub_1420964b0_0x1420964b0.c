// 函数: sub_1420964b0
// 地址: 0x1420964b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x38) s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rdi = nullptr
void* rax_3

do
    void* rax_1 = sub_1424d1b10()
    rax_3 = *(*(rdi + *(arg1 + 0x30)) + 0x10)
    int64_t rcx_1 = sx.q(*(rax_1 + 0x38))
    
    if (rcx_1.d s<= *(rax_3 + 0x38) && *(*(rax_3 + 0x30) + (rcx_1 << 3)) == rax_1 + 0x30)
        rax_3.b = 1
        return rax_3
    
    i += 1
    rdi = &rdi[1]
while (i s< *(arg1 + 0x38))

rax_3.b = 0
return rax_3
