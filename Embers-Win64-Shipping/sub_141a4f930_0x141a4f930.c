// 函数: sub_141a4f930
// 地址: 0x141a4f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a63ad0(*(arg1 + 0x10))

if (*(arg1 + 0x20) != *(arg1 + 0x4c))
    int32_t rax_1 = *(arg1 + 0x24)
    *(arg1 + 0x20) = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5130(arg1 + 0x18, 0)
    
    *(arg1 + 0x48) = 0xffffffff
    *(arg1 + 0x4c) = 0
    sub_140774790(arg1 + 0x28)
    int64_t rcx_3 = sx.q(*(arg1 + 0x60))
    void* rdi_1 = arg1 + 0x50
    void* rax_2 = *(rdi_1 + 8)
    
    if (rcx_3 s> 0)
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_3 << 2)

int64_t* rcx_4 = *(arg1 + 8)
void* rax_4 = (*(*rcx_4 + 0x280))(rcx_4)
int64_t* rdx = *(rax_4 + 0xe0)
int64_t var_38

if (rdx != 0)
    var_38 = 0
    int64_t var_30_1 = 0
    sub_141a5edb0(arg1, rdx, &var_38)

int64_t* i = *(rax_4 + 0xd0)

for (void* rbx = &i[sx.q(*(rax_4 + 0xd8))]; i != rbx; i = &i[1])
    int64_t* rdx_1 = *i
    var_38 = 0
    int64_t var_30_2 = 0
    sub_141a5edb0(arg1, rdx_1, &var_38)

int128_t* i_1 = *(rax_4 + 0x70)

for (void* r12_2 = &i_1[sx.q(*(rax_4 + 0x78)) * 3]; i_1 != r12_2; i_1 = &i_1[3])
    int64_t rbx_1 = 0
    int64_t** rdi_2 = i_1[2].q
    uint64_t r14_2 = sx.q(*(i_1 + 0x28)) << 3 u>> 3
    
    if (rdi_2 u> &rdi_2[sx.q(*(i_1 + 0x28))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_141a5edb0(arg1, *rdi_2, i_1)
            rbx_1 += 1
            rdi_2 = &rdi_2[1]
        while (rbx_1 != r14_2)

sub_141a62160(*(arg1 + 0x10), arg1 + 0x18)
*(*(arg1 + 0x10) + 0x170) = *(*(arg1 + 8) + 0x28)
void* result = *(arg1 + 0x10)
*(result + 0x180) += 1
return result
