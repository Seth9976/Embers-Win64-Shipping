// 函数: sub_142258fe0
// 地址: 0x142258fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t rbx = 0
int32_t r12 = 0
int64_t* r15 = nullptr
int64_t* var_38 = nullptr
int32_t var_2c = 0
*(arg2 + 0x108) = 0

if (*(arg2 + 0x10c) != 0)
    sub_1407c43b0(arg2, 0)

int64_t* rcx_1 = *arg1

if (rcx_1 != 0)
    int32_t rax_2 = (*(*rcx_1 + 0xc8))(rcx_1)
    r12 = rax_2
    rbx = rax_2
    
    if (rax_2 s> 0)
        sub_1405a4d70(&var_38)
        rbx = rax_2
        r15 = var_38
    
    int64_t* rcx_3 = *arg1
    (*(*rcx_3 + 0xd0))(rcx_3, r15, zx.q(r12), 0)

*(arg2 + 0x108) = 0

if (rbx s> *(arg2 + 0x10c))
    sub_1407c43b0(arg2, rbx)

int64_t* r14_1 = r15
void* rcx_5 = &r15[sx.q(rbx)]
uint64_t r13_3 = (rcx_5 - r15 + 7) u>> 3

if (r15 u> rcx_5)
    r13_3 = 0

if (r13_3 != 0)
    do
        int64_t rbp_1 = sx.q(*(arg2 + 0x108))
        int64_t rbx_1 = *r14_1
        int32_t rax_4 = (rbp_1 + 1).d
        *(arg2 + 0x108) = rax_4
        
        if (rax_4 s> *(arg2 + 0x10c))
            sub_1407c3890(arg2, rbp_1.d)
        
        void* rax_5 = *(arg2 + 0x100)
        void* rdx_4 = arg2
        
        if (rax_5 != 0)
            rdx_4 = rax_5
        
        r14_1 = &r14_1[1]
        rsi += 1
        *(rdx_4 + (rbp_1 << 3)) = rbx_1
    while (rsi != r13_3)

if (r15 != 0)
    sub_140a74f90(r15)

return zx.q(r12)
