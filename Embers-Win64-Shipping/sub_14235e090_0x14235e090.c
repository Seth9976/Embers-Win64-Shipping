// 函数: sub_14235e090
// 地址: 0x14235e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp_1 = data_143f596ac + 1
data_143f596ac = rbp_1
int64_t* rax = j_sub_140a82f30(0x38)
int64_t* r14 = rax

if (rax == 0)
    r14 = nullptr
else
    *rax = 0
    rax[1] = 0
    rax[2].d = rbp_1
    *(rax + 0x14) = arg2[1].d
    int128_t* rcx_1 = *arg2
    *(rax + 0x18) = *rcx_1
    *(rax + 0x28) = rcx_1[1]

int32_t rdx = *(arg1 + 0x17c)
int64_t r13

if (rdx == 0)
    r13 = zx.q(*(arg1 + 0x150))
    int32_t rax_2 = (r13 + 1).d
    *(arg1 + 0x150) = rax_2
    
    if (rax_2 s> *(arg1 + 0x154))
        sub_1405a4df0(arg1 + 0x148)
    
    int32_t rdi_1 = *(arg1 + 0x170)
    void* rbx_1 = arg1 + 0x158
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_3 = *(rbx_1 + 0x10)
    
    if (rax_3 != 0)
        rbx_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    r13 = sx.q(*(arg1 + 0x178))
    int64_t r9_1 = *(arg1 + 0x148)
    int64_t r8_1 = sx.q(*(r9_1 + r13 * 0x18 + 4))
    *(arg1 + 0x178) = r8_1.d
    *(arg1 + 0x17c) = rdx - 1
    
    if (rdx != 1)
        *(r9_1 + r8_1 * 0x18) = 0xffffffff

void* rax_10 = *(arg1 + 0x168)
void* r8_2 = arg1 + 0x158

if (rax_10 != 0)
    r8_2 = rax_10

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r13.d)
void* rdx_8 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (r13.b & 0x1f)
int64_t rcx_11 = sx.q(r13.d) * 3
int64_t rdx_9 = *(arg1 + 0x148)
*(rdx_9 + (rcx_11 << 3)) = rbp_1
*(rdx_9 + (rcx_11 << 3) + 8) = r14
*(rdx_9 + (rcx_11 << 3) + 0x10) = 0xffffffff
void arg_8
sub_14104a220(arg1 + 0x148, &arg_8, rbp_1, rdx_9 + (rcx_11 << 3), r13.d, nullptr)

if (*(arg1 + 0x150) != *(arg1 + 0x17c))
    void* rcx_13 = *(arg1 + 0x188)
    void* r8_4 = arg1 + 0x180
    
    if (rcx_13 != 0)
        r8_4 = rcx_13
    
    int32_t i = *(r8_4 + (((sx.q(*(arg1 + 0x190)) - 1) & sx.q(rbp_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_5 = *(arg1 + 0x148)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_14 = i_1 * 3
            
            if (*(r8_5 + (rcx_14 << 3)) == rbp_1)
                if (i != 0xffffffff)
                    void* rax_21 = r8_5 + i_1 * 0x18
                    
                    if (rax_21 != 0)
                        return *(rax_21 + 8)
                
                break
            
            i = *(r8_5 + (rcx_14 << 3) + 0x10)
        while (i != 0xffffffff)

return 0
