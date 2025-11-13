// 函数: sub_140ab9d70
// 地址: 0x140ab9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x1b0)
int64_t rsi_1 = zx.q(arg2) * rax
int64_t r14_1 = rsi_1 - arg4[2]
int64_t rbp_1 = zx.q(arg3) * rax
void* rax_1 = j_sub_140a82f30(0x58)
int64_t* rdi

if (rax_1 == 0)
    rdi = nullptr
else
    memset(rax_1, 0, 0x58)
    rdi = sub_140a95630(rax_1)

rdi[6] = rbp_1
rdi[7] = rsi_1
rdi[3] = arg4[1]
rdi[4] = divu.dp.q(0:rsi_1, *(arg1 + 0x1b0))
int64_t rsi_2 = **(*arg4 + 0x148)
int64_t* rax_6 = j_sub_140a82f30(0x20)
int64_t* rbx_1 = rax_6

if (rax_6 == 0)
    rbx_1 = nullptr
else
    *(rax_6 + 0xc) = 0
    rax_6[2] = 0
    *rbx_1 = rsi_2 + r14_1
    rbx_1[3].b = (rbp_1 u>> 0x20).b
    rbx_1[1].d = rbp_1.d
    *(rbx_1 + 0x19) = 0

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

void arg_8

if (&rdi[5] != &arg_8)
    int64_t* rcx_4 = rdi[5]
    rdi[5] = rbx_1
    
    if (rcx_4 != 0)
        sub_140abfb60(rcx_4)
else if (rbx_1 != 0)
    int32_t rax_11 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rax_11 == 1)
        if ((*(rbx_1 + 0x19) & rax_11.b) != 0)
            sub_140a74f90(*rbx_1)
        
        int64_t* rcx_6 = rbx_1[2]
        
        if (rcx_6 != 0)
            sub_140abfb60(rcx_6)
        
        j_sub_140a74f90(rbx_1)

void* rax_12 = *arg4
*(rax_12 + 0x150) += 1
int64_t rsi_3 = sx.q(rdi[9].d)
int32_t rax_13 = (rsi_3 + 1).d
rdi[9].d = rax_13

if (rax_13 s> *(rdi + 0x4c))
    sub_1405c4e40(&rdi[8])

int64_t* rcx_11 = (rsi_3 << 5) + rdi[8]
*rcx_11 = 0
*rcx_11 = *arg4
rcx_11[1] = -1
rcx_11[2] = -1
rcx_11[3] = rbp_1
return sub_140a4df30(arg1, rdi) __tailcall
