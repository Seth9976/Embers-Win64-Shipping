// 函数: sub_1426d8250
// 地址: 0x1426d8250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int64_t* i = *arg3

for (void* r12_2 = &i[sx.q(arg3[1].d) * 2]; i != r12_2; i = &i[2])
    int64_t rbx_1 = sx.q(arg2[1].d)
    int32_t rax = (rbx_1 + 1).d
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1407c3b60(arg2)
    
    int64_t rcx_1 = *arg2
    int64_t* rbx_2 = rbx_1 * 0x38
    *(rbx_2 + rcx_1) = 0
    *(rbx_2 + rcx_1 + 8) = 0
    __builtin_memset(rbx_2 + rcx_1 + 0xc, 0, 0x14)
    *(rbx_2 + rcx_1 + 0x34) |= 1
    *(rbx_2 + rcx_1 + 0x20) = 0
    *(rbx_2 + rcx_1 + 0x28) = 0
    *(rbx_2 + rcx_1 + 0x30) = 0xff
    void* rbp_1 = *arg2
    *(rbx_2 + rbp_1) = *i
    void* r14_2 = rbp_1 + 0x10 + rbx_2
    *(rbx_2 + rbp_1 + 8) = i[1].b
    *(rbx_2 + rbp_1 + 0xc) = *(i + 0xc)
    *(rbx_2 + rbp_1 + 0x34) |= 1
    result = *(rbx_2 + rbp_1 + 8)
    
    if (result u<= 1)
        sub_1426a9170(r14_2, arg1, *(rbx_2 + rbp_1))
        result = sub_1426a92c0(r14_2, arg1, *(rbx_2 + rbp_1))
    else if (result == 2)
        result = sub_1426a8f00(r14_2, arg1, *(rbx_2 + rbp_1))

return result
