// 函数: sub_140b0c1e0
// 地址: 0x140b0c1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
int32_t rbp = arg2[3]
int32_t r14 = arg2[2]
int32_t r11 = *arg2
int32_t rdx_2 = arg1[1] | arg1[2] | arg1[3]

if (((r11 ^ rbx) | (arg2[1] ^ arg1[1]) | (r14 ^ arg1[2]) | (rbp ^ arg1[3])) != 0
        || (rbx | rdx_2) == 0)
    void* rcx_6 = &arg1[4]
    
    if ((rbx | rdx_2) == 0)
        rcx_6 = nullptr
    
    if (rcx_6 != 0)
        (**rcx_6)(rcx_6, 0)
    
    void* r14_1 = &arg2[4]
    *arg1 = *arg2
    
    if ((*arg2 | arg2[3] | arg2[2] | arg2[1]) == 0)
        r14_1 = nullptr
    
    if (r14_1 != 0)
        (*(*r14_1 + 8))(r14_1, &arg1[4])
        int64_t var_10_1 = 0
        *arg2 = 0.o
        (**r14_1)(r14_1, 0)
else
    void* rcx_5 = &arg2[4]
    
    if ((r11 | arg2[1] | r14 | rbp) == 0)
        rcx_5 = nullptr
    
    (*(*rcx_5 + 0x10))(rcx_5, &arg1[4])

return arg1
