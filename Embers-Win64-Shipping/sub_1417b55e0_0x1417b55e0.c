// 函数: sub_1417b55e0
// 地址: 0x1417b55e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = *(arg1 + 8)

if (rax s> rdi.d)
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rdi << 3), 0, sx.q(rax - rdi.d) << 3)
else if (rax s< rdi.d && rax != rdi.d)
    arg2[1].d = rax
    sub_1405c53d0(arg2)

int64_t rdi_1 = sx.q(arg2[5].d)
int32_t rax_2 = *(arg1 + 0x28)

if (rax_2 s> rdi_1.d)
    arg2[5].d = rax_2
    
    if (rax_2 s> *(arg2 + 0x2c))
        sub_1405a4d70(&arg2[4])
    
    memset(arg2[4] + (rdi_1 << 3), 0, sx.q(rax_2 - rdi_1.d) << 3)
else if (rax_2 s< rdi_1.d && rax_2 != rdi_1.d)
    arg2[5].d = rax_2
    sub_1405c53d0(&arg2[4])

int32_t result = *(arg1 + 0x48)
int64_t rbx_1 = sx.q(arg2[9].d)

if (result s<= rbx_1.d)
    if (result s>= rbx_1.d || result == rbx_1.d)
        return result
    
    arg2[9].d = result
    return sub_1405c53d0(&arg2[8]) __tailcall

arg2[9].d = result

if (result s> *(arg2 + 0x4c))
    sub_1405a4d70(&arg2[8])

return memset(arg2[8] + (rbx_1 << 3), 0, sx.q(result - rbx_1.d) << 3) __tailcall
