// 函数: sub_142413bc0
// 地址: 0x142413bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
void* rax_3 = sub_1423f7090(arg1 + 0x260, sub_140b5ead0(rax.d) + rax:4.d, arg2)
void* rbx_3 = ((sx.q(arg3) + 7) << 4) + rax_3
*(rax_3 + 0xc0) = arg4.d
*rax_3 = arg4.d
*(rax_3 + 0xc) = arg4.d
*(arg1 + 0x3a0) += 1
int64_t rdi = sx.q(*(rbx_3 + 8))
int32_t rax_4 = (rdi + 1).d
*(rbx_3 + 8) = rax_4

if (rax_4 s> *(rbx_3 + 0xc))
    sub_1405a4cf0(rbx_3)

*(*rbx_3 + (rdi << 2)) = *(arg1 + 0x3a0)
int64_t* rbx_4 = arg2[2]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp1_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int32_t result
result.b = 1
return result
