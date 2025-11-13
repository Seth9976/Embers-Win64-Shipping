// 函数: sub_1429b1d20
// 地址: 0x1429b1d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t i_1 = arg2
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0xaaaaaaaaaaaaaaa)
        sub_140610c20()
        noreturn
    
    int64_t rbx_1 = arg2 * 0x18
    void* const rax_4
    
    if (rbx_1 u>= 0x1000)
        int64_t rcx = rbx_1 + 0x27
        
        if (rcx u<= rbx_1)
            rcx = -1
        
        int64_t rax_2 = j_sub_140a82f30(rcx)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax_4 = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(rax_4 - 8) = rax_2
    else if (rbx_1 == 0)
        rax_4 = nullptr
    else
        rax_4 = j_sub_140a82f30(rbx_1)
    
    *arg1 = rax_4
    arg1[1] = rax_4
    int64_t* rax_5 = *arg1
    arg1[2] = &rax_5[arg2 * 3]
    int64_t* rbx_2 = rax_5
    
    if (i_1 != 0)
        int64_t i
        
        do
            __builtin_memset(rbx_2, 0, 0x18)
            rbx_2 = &rbx_2[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1429b1160(rbx_2, rbx_2)
    arg1[1] = rbx_2

return arg1
