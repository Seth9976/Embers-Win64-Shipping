// 函数: sub_1426da760
// 地址: 0x1426da760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] == 0)
    return 

int64_t rax = sub_14273b6f0()

if (rax == 0)
    return 

void* rdx = arg1[2]
int64_t r8_1 = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != r8_1 || rdx == 0)
    return 

int64_t rbx_1 = sub_14273b0e0()
void* const rdx_1

if (arg1[2] == 0)
    rdx_1 = nullptr
else
    rax = sub_14273b6f0()
    
    if (rax == 0)
        rdx_1 = nullptr
    else
        rdx_1 = arg1[2]
        int64_t r8_2 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdx_1 + 0x38))
            rdx_1 = nullptr
        else if (*(*(rdx_1 + 0x30) + (rax << 3)) != r8_2)
            rdx_1 = nullptr

if (rbx_1 == 0)
    return 

rax = sx.q(*(rbx_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rbx_1 + 0x30 || arg1[1].d s<= 0)
    return 

int64_t* rbx_2

if (arg1[2] == 0)
    rbx_2 = nullptr
else
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = arg1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rbx_2[7].d || *(rbx_2[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_2 = nullptr

int64_t* r14_1 = rbx_2[0x23]

if (r14_1 == 0)
    (*(*rbx_2 + 0x390))(rbx_2)
    r14_1 = rbx_2[0x23]

int32_t rcx_5 = arg1[1].d
int32_t rdx_4 = arg2[1].d + rcx_5

if (rdx_4 s> *(arg2 + 0xc))
    sub_140638c50(arg2, rdx_4)
    rcx_5 = arg1[1].d

void* rbx_3 = *arg1
void* r12_1 = rbx_3 + (sx.q(rcx_5) << 3)

while (rbx_3 != r12_1)
    int64_t r8_4 = *r14_1
    rax = (*(r8_4 + 0x288))(r14_1, (sx.q(*(rbx_3 + 4) * 2) s>> 1) + arg1[3], r8_4)
    int64_t rbp_1 = sx.q(arg2[1].d)
    int32_t rcx_8 = (rbp_1 + 1).d
    arg2[1].d = rcx_8
    
    if (rcx_8 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    rbx_3 += 8
    *(*arg2 + (rbp_1 << 3)) = rax
