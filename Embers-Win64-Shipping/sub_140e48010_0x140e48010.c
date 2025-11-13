// 函数: sub_140e48010
// 地址: 0x140e48010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_6 = *(rbx_1 + 0x10)
    
    if (rax_6 != 0)
        rbx_1 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rbp << 6) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r9_1) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* r8_1 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rbp.b & 0x1f)
int128_t* rdi_5 = (sx.q(rbp.d) << 6) + *arg1
int64_t* rbx_2 = data_143e202c8
int64_t rcx_7 = data_143e202b8
int64_t rdx_9 = data_143e202c0

if (rbx_2 != 0)
    rbx_2[1].d += 1

*rdi_5 = *arg3
rdi_5[1].d = arg3[1].d
*(rdi_5 + 0x18) = rcx_7
rdi_5[2].q = rdx_9
*(rdi_5 + 0x28) = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

rdi_5[3].d &= 0xfffffff0

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

*(rdi_5 + 0x38) = 0xffffffff
int32_t arg_8
sub_140e616d0(arg1, &arg_8, arg2, rdi_5, rbp.d, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 0x18
