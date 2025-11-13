// 函数: sub_140a553f0
// 地址: 0x140a553f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t rax
    rax.b = 1
    return rax

int32_t rdx = *(arg1 + 0x20)
int64_t rbx = -1

if (rdx s> 0)
    uint64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg2[rax_1] != 0)
    
    if (rax_1.d s< rdx)
        rax_1.b = 1
        return rax_1
    
    int16_t* rcx = &arg2[sx.q(rax_1.d - rdx)]
    void* r8_1 = *(arg1 + 0x18) - rcx
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*rcx)
        rax_1 = zx.q(*(rcx + r8_1))
        
        if (rdx_1 != rax_1.d)
            break
        
        rcx = &rcx[1]
    while (rax_1.d != 0)
    
    if (rdx_1 - rax_1.d != 0)
        rax_1.b = 1
        return rax_1

int64_t rsi = 0
int32_t rbp = 0
int64_t var_28 = 0
int32_t r14 = 0
int64_t var_20 = 0

if (arg2 != 0 && *arg2 != 0)
    do
        rbx += 1
    while (arg2[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx.d + 1)
        r14 = var_20:4.d
        rbp = var_20.d
        rsi = var_28
    
    rbp += rbx.d + 1
    var_20.d = rbp
    
    if (rbp s> r14)
        sub_140594770(&var_28)
        r14 = var_20:4.d
        rbp = var_20.d
        rsi = var_28
    
    memcpy(rsi, arg2, (rbx.d + 1) * 2)

int64_t* rbx_2 = *(arg1 + 0x10)
int64_t rdi_1 = sx.q(rbx_2[1].d)
int32_t rax_4 = (rdi_1 + 1).d
rbx_2[1].d = rax_4

if (rax_4 s> *(rbx_2 + 0xc))
    sub_1405a4f90(rbx_2)

int64_t* rax_7 = (rdi_1 << 4) + *rbx_2
*rax_7 = rsi
rax_7[1].d = rbp
*(rax_7 + 0xc) = r14
rax_7.b = 1
return rax_7
