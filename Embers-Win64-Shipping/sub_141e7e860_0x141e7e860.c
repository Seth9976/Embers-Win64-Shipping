// 函数: sub_141e7e860
// 地址: 0x141e7e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142475900()
void* rdi = rax[0x23]

if (rdi == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rdi = rax[0x23]

void* rcx_2 = data_143f5b298
int32_t rbx_1 = 0
int32_t rcx_3

if (rcx_2 == 0)
    rcx_3 = 0
else
    rcx_3 = *(sub_1423dd380(rcx_2) + 0xa8)

if (rcx_3 s>= 0)
    rbx_1 = *(rdi + 0x118) - 1
    
    if (rcx_3 s< rbx_1)
        rbx_1 = rcx_3

return (sx.q(rbx_1) << 5) + *(rdi + 0x110)
