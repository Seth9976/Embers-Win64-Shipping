// 函数: sub_1413c97d0
// 地址: 0x1413c97d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg1[1]
int64_t* rsi_1 = *arg1 + 0x62e0
int32_t rcx = *(rsi_1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(rsi_1[1].d)
    int32_t rax_1 = (rbp + 1).d
    rsi_1[1].d = rax_1
    
    if (rax_1 s> *(rsi_1 + 0xc))
        sub_1405a4d70(rsi_1)
    
    int32_t rdi_1 = rsi_1[5].d
    void* rbx_1 = &rsi_1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_6 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(rsi_1[6].d)
    int64_t r8_1 = *rsi_1
    int64_t rdx_1 = sx.q(*(r8_1 + (rbp << 3) + 4))
    rsi_1[6].d = rdx_1.d
    *(rsi_1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8_1 + (rdx_1 << 3)) = 0xffffffff

void* rax_9 = rsi_1[4]
void* r8_2 = &rsi_1[2]

if (rax_9 != 0)
    r8_2 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_9 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rbp.b & 0x1f)
*(*rsi_1 + (sx.q(rbp.d) << 3)) = r12
*r12 = rbp.d
return sub_1414047a0(*arg1) __tailcall
