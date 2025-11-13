// 函数: sub_141fc9de0
// 地址: 0x141fc9de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg1 + 0x48)

if (r15 == 0)
    return 

int64_t rcx = *(arg1 + 0x40)

if (rcx == 0)
    return 

int64_t rax_1 = r15[2]

if (rax_1 != 0 && rcx != rax_1)
    *(arg1 + 0x40) = rax_1

void* rax_2 = *(arg1 + 0x50)
*(arg1 + 0x58) = arg2
int64_t* r14_1 = *(rax_2 + 0x58)
void arg_8
int32_t rcx_2 = *sub_1421693f0(r14_1[0x2a], &arg_8, r15, nullptr)
*arg1 = rcx_2

if (rcx_2 == 1 || rcx_2 == 0)
    return 

int64_t* rax = (*(*r14_1 + 0x368))(r14_1)

if (rax.b == 0 && r14_1[0xda].b == rax.b)
    return 

if (((*(*(arg1 + 0x50) + 0xa4) u>> 1).b & 1) == 0)
    void* rax_5 = *(arg1 + 0x30)
    
    if (rax_5 != 0)
        void* rbp_1 = *(rax_5 + 8)
        
        if (rbp_1 != 0)
            int64_t rsi_1 = sx.q(*(rbp_1 + 0x438))
            int32_t rdx_1 = *(*(arg1 + 0x40) + 0xf8)
            
            if (rdx_1 s> rsi_1.d)
                *(rbp_1 + 0x438) = rdx_1
                int32_t i_1 = rdx_1 - rsi_1.d
                
                if (rdx_1 s> *(rbp_1 + 0x43c))
                    sub_1405c4e40(rbp_1 + 0x430)
                
                int64_t* rcx_9 = (rsi_1 << 5) + *(rbp_1 + 0x430)
                
                if (i_1 != 0)
                    void* rax_7 = rcx_9 + 0x1c
                    int32_t i
                    
                    do
                        *rcx_9 = 0
                        rcx_9 = &rcx_9[4]
                        *(rax_7 - 0x14) = 0
                        *(rax_7 - 0xc) = 0
                        *(rax_7 - 4) = -1
                        rax_7 += 0x20
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            else if (rdx_1 s< rsi_1.d)
                sub_141fc3d10(rbp_1 + 0x430, rdx_1, rsi_1.d - rdx_1, 1)

void* rbx_2 = r14_1[0x28]
int64_t* rbx_3

if (rbx_2 == 0)
    rbx_3 = nullptr
else
    rbx_3 = *(rbx_2 + 0x38)

char rax_9
int64_t* rcx_12

if (rbx_3 != 0)
    rax_9 = (*(*rbx_3 + 0x368))(rbx_3)
    rcx_12 = rbx_3

if (rbx_3 == 0 || rax_9 == 0)
    rcx_12 = r14_1

void var_38
rax = sub_1421698a0(rcx_12, &var_38, r15)

if (&arg1[4] != rax)
    *(arg1 + 0x10) = *rax
    *rax = 0
    int64_t* rbx_4 = *(arg1 + 0x18)
    int64_t rcx_14 = rax[1]
    
    if (rcx_14 != rbx_4)
        rax[1] = 0
        *(arg1 + 0x18) = rcx_14
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp4_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_30

if (var_30 == 0)
    return 

var_30[1].d -= 1

if (var_30[1].d != 1)
    return 

(**var_30)(var_30)
int32_t temp2_1 = *(var_30 + 0xc)
*(var_30 + 0xc) -= 1

if (temp2_1 == 1)
    (*(*var_30 + 8))(var_30, 1)
