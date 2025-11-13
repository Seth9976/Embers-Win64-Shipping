// 函数: sub_142413a00
// 地址: 0x142413a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
void* rax_3 = sub_1423f7090(arg1 + 0x260, sub_140b5ead0(rax.d) + rax:4.d, arg2)
int64_t rcx_5
int64_t rbp

if (not(0f f!= *(rax_3 + 0xc)))
    if (arg3.d f== 0f)
        goto label_142413abd
    
    *(arg1 + 0x3a0) += 1
    rbp = sx.q(*(rax_3 + 0x78))
    int32_t rax_4 = (rbp + 1).d
    *(rax_3 + 0x78) = rax_4
    
    if (rax_4 s> *(rax_3 + 0x7c))
        sub_1405a4cf0(rax_3 + 0x70)
    
    rcx_5 = *(rax_3 + 0x70)
else if (arg3.d f!= 0f)
label_142413abd:
    *(arg1 + 0x3a0) += 1
    rbp = sx.q(*(rax_3 + 0x98))
    int32_t rax_6 = (rbp + 1).d
    *(rax_3 + 0x98) = rax_6
    
    if (rax_6 s> *(rax_3 + 0x9c))
        sub_1405a4cf0(rax_3 + 0x90)
    
    rcx_5 = *(rax_3 + 0x90)
else
    *(arg1 + 0x3a0) += 1
    rbp = sx.q(*(rax_3 + 0x88))
    int32_t rax_5 = (rbp + 1).d
    *(rax_3 + 0x88) = rax_5
    
    if (rax_5 s> *(rax_3 + 0x8c))
        sub_1405a4cf0(rax_3 + 0x80)
    
    rcx_5 = *(rax_3 + 0x80)

*(rcx_5 + (rbp << 2)) = *(arg1 + 0x3a0)
int128_t zmm6
zmm6.d = arg3.d f+ *(rax_3 + 0xc0)
*(rax_3 + 0x1d) += arg4
*(rax_3 + 0xc0) = zmm6.d
int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return 0
