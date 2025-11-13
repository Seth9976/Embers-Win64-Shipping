// 函数: sub_140a24720
// 地址: 0x140a24720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 1)
    int64_t rax
    rax.b = 0
    return rax

int16_t* rbx = *arg1
uint32_t rax_1 = zx.d(*rbx)

if (rax_1.w == 0x2d || rax_1.w == 0x2b)
    rax_1 = zx.d(rbx[1])
    rbx = &rbx[1]

int64_t rdi
rdi.b = 0

while (rax_1.w != 0)
    if (rax_1.w != 0x2e)
        if (iswdigit(rax_1.w) == 0)
            rax_1.b = 0
            return rax_1
    else
        if (rdi.b != 0)
            rax_1.b = 0
            return rax_1
        
        rdi.b = 1
    
    rax_1 = zx.d(rbx[1])
    rbx = &rbx[1]

rax_1.b = 1
return rax_1
