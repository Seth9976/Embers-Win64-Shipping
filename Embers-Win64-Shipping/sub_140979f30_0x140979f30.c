// 函数: sub_140979f30
// 地址: 0x140979f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q((*(*arg1 + 0x2b8))())
int64_t rdx_1 = sx.q((*(*arg1 + 0x2b8))(arg1, arg3))

if (rdi.d != 0xffffffff && rdx_1.d != 0xffffffff)
    int32_t* rdi_3 = rdi * 0x50 + arg1[0xb]
    int32_t* rbx_3 = rdx_1 * 0x50 + arg1[0xb]
    int32_t rdx_2 = *rdi_3
    
    if (rdx_2 != *rbx_3)
        int32_t rax_5 = (*(*arg1 + 0x310))(arg1, rdx_2)
        int32_t rax_7 = (*(*arg1 + 0x310))(arg1, zx.q(*rbx_3))
        int32_t r8 = rdi_3[0xe]
        int32_t rdx_4 = rbx_3[0xe]
        int32_t r9 = *(arg1 + 0x3c)
        int32_t rax_10
        
        if (r8 - rdx_4 + rax_7 s> r9 || rdx_4 - r8 + rax_5 s> r9)
            rax_10.b = 0
        else
            int32_t rcx_4 = *rdi_3
            *rdi_3 = *rbx_3
            rax_10.b = 1
            *rbx_3 = rcx_4
        
        return rax_10

int32_t rax_3
rax_3.b = 0
return rax_3
