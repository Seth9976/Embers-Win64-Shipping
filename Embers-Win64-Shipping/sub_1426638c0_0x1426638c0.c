// 函数: sub_1426638c0
// 地址: 0x1426638c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2[1]
int64_t r14 = *arg2

if (rbx != 0)
    *(rbx + 0xc) += 1

int64_t rbp = sx.q(*(arg1 + 0x308))
int32_t rax = (rbp + 1).d
*(arg1 + 0x308) = rax

if (rax s> *(arg1 + 0x30c))
    sub_1405a4f90(arg1 + 0x300)

int64_t* result = (rbp << 4) + *(arg1 + 0x300)
*result = r14
result[1] = rbx
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
