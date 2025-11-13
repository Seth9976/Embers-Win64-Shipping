// 函数: sub_140cbad20
// 地址: 0x140cbad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_140638c50(&arg1[2], 0)

if (arg2 == 0)
    return 

void* rax_1 = sub_140cbd150(arg2)
uint64_t rsi
rsi.b = 0
void* rdi_1 = arg2

while (true)
    void* rax_2
    int64_t rcx_2
    rax_2, rcx_2 = sub_140be01c0()
    void* rax_3
    
    if (rsi.b != 0 && rdi_1 != 0)
        rax_3 = *(rdi_1 + 0x10)
        rcx_2 = sx.q(*(rax_2 + 0x38))
    
    if (rsi.b == 0 || rdi_1 == 0 || rcx_2.d s> *(rax_3 + 0x38)
            || *(*(rax_3 + 0x30) + (rcx_2 << 3)) != rax_2 + 0x30)
        rcx_2.b = 0
    else
        rcx_2.b = 1
    
    void* const rax_5 = nullptr
    
    if (rcx_2.b != 0)
        rax_5 = rdi_1
    
    if (rax_5 == rax_1)
        break
    
    int64_t rbx_1
    int64_t arg_8
    
    if (rsi.b != 0)
        rbx_1 = *(rdi_1 + 0x18)
        arg_8 = rbx_1
    else if (rdi_1 == 0)
        rbx_1 = 0
    else
        rbx_1 = *(rdi_1 + 0x28)
        arg_8 = rbx_1
    int64_t rbp_1 = sx.q(arg1[3].d)
    int32_t rax_6 = (rbp_1 + 1).d
    arg1[3].d = rax_6
    
    if (rax_6 s> *(arg1 + 0x1c))
        sub_1405a4d70(&arg1[2])
    
    *(arg1[2] + (rbp_1 << 3)) = rbx_1
    int64_t rax_8
    int128_t zmm0_1
    
    if (rsi.b == 0)
        zmm0_1 = *(rdi_1 + 0x10)
        rax_8 = zmm0_1.q
    else
        rax_8 = *(rdi_1 + 0x20)
        int128_t var_48
        var_48.q = rax_8
        var_48:8.b = 1
        zmm0_1 = var_48
    
    int72_t var_38_1 = zmm0_1.9
    
    if (rax_8 == 0)
        break
    
    rsi = zx.q(var_38_1:8.b)
    rdi_1 = var_38_1.q

sub_140d3a3a0(&arg1[1], rax_1)
*arg1 = arg2
