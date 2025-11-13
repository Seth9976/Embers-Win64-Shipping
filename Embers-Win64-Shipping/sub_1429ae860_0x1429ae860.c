// 函数: sub_1429ae860
// 地址: 0x1429ae860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_28 = -2
void* rcx = nullptr
__builtin_memset(arg1, 0, 0x18)
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg2[1] - *arg2)
int64_t rdx_1 = rdx s>> 2
uint64_t rax_2 = rdx_1 u>> 0x3f
int64_t rdx_2 = rdx_1 + rax_2

if (rdx_1 != neg.q(rax_2))
    if (rdx_2 u> 0xaaaaaaaaaaaaaaa)
        sub_1427c7670()
        noreturn
    
    int64_t rbx_1 = rdx_2 * 0x18
    
    if (rbx_1 u>= 0x1000)
        int64_t rcx_1 = rbx_1 + 0x27
        
        if (rcx_1 u<= rbx_1)
            rcx_1 = -1
        
        int64_t rax_4 = j_sub_140a82f30(rcx_1)
        
        if (rax_4 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = (rax_4 + 0x27) & 0xffffffffffffffe0
        *(rcx - 8) = rax_4
    else if (rbx_1 != 0)
        rcx = j_sub_140a82f30(rbx_1)
    
    *arg1 = rcx
    arg1[1] = rcx
    void** rax_6 = *arg1
    arg1[2] = &rax_6[rdx_2 * 3]
    void** rbx_2 = rax_6
    int64_t r14_1 = arg2[1]
    int64_t* i = *arg2
    void** var_20_1 = rax_6
    void** var_18_1 = rax_6
    int64_t* var_10_1 = arg1
    
    for (; i != r14_1; i = &i[3])
        sub_1429ae9a0(rbx_2, i)
        rbx_2 = &rbx_2[3]
        void** var_18_2 = rbx_2
    
    arg1[1] = rbx_2

return arg1
