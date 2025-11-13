// 函数: sub_141fd8840
// 地址: 0x141fd8840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
char rbp = arg1[1].b

if (*(rbx + 0x4c) != 0)
    int64_t* rdi_1 = nullptr
    void* r8_1 = *(rbx + 0x38) + sx.q(*(rbx + 0x48)) * 0x48
    uint32_t rcx_1 = zx.d(rbp)
    
    if (rcx_1 == 1)
        rdi_1 = r8_1 + 0x10
    else if (rcx_1 == 2)
        rdi_1 = r8_1 + 0x20
    else if (rcx_1 == 3)
        rdi_1 = r8_1 + 0x30
    
    int64_t* rcx_4 = *(rbx + 0x30)
    int64_t var_18
    sub_1413c6650(rdi_1, (*(*rcx_4 + 8))(rcx_4, &var_18))
    int64_t* var_10
    
    if (var_10 != 0 && var_18 != 0)
        (*(*var_10 + 0x10))(var_10, &var_18)
        int64_t var_10_1 = 0
    
    sub_14081c9d0(&var_18)
    int64_t r14_1 = *rdi_1
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_10[3]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_10[3]
    
    *(arg2 + 0x30) = rax_6
    int64_t* rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    rcx_10[2] = r14_1
    *rcx_10 = &data_142f284f8

if (rbp == 3)
    *(rbx + 0x48) = 0xffffffff
    *(rbx + 0x4c) = 0
