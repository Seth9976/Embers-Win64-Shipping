// 函数: sub_140cbf060
// 地址: 0x140cbf060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *arg2
char r8 = *(arg1 + 0x28)
int64_t* rbx = *(arg1 + 0x20)

if (rax u< data_143e1d660 || rax u>= data_143e1d668)
    arg1.b = 0
else
    arg1.b = 1

if (rax != 0 && arg1.b == 0)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(rax + 0xc))
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    int64_t rdx_2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
    int64_t rcx_3 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
    int32_t rcx_4 = *(rcx_3 + (rdx_2 << 3) + 8)
    uint8_t rax_9 = (rcx_4 u>> 0x1d).b
    
    if ((rax_9 & 1) != 0 && r8 != 0)
        *arg2 = 0
        return rax_9
    
    rax = zx.q(rcx_4 u>> 0x1c)
    
    if ((rax.b & 1) != 0)
        *(rcx_3 + (rdx_2 << 3) + 8) = rcx_4 & 0xefffffff
        int64_t rdi_1 = sx.q(rbx[1].d)
        int32_t rax_11 = (rdi_1 + 1).d
        rbx[1].d = rax_11
        
        if (rax_11 s> *(rbx + 0xc))
            sub_1405a4d70(rbx)
        
        rax = *arg2
        *(*rbx + (rdi_1 << 3)) = rax

return rax
