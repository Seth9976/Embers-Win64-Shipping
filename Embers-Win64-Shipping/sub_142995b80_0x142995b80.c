// 函数: sub_142995b80
// 地址: 0x142995b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t i_1 = arg2
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0xfffffffffffffff)
        sub_1427c7670()
        noreturn
    
    int64_t rbx_2 = i_1 << 4
    void* const rax_3
    
    if (rbx_2 u>= 0x1000)
        int64_t rcx = rbx_2 + 0x27
        
        if (rcx u<= rbx_2)
            rcx = -1
        
        int64_t rax_1 = j_sub_140a82f30(rcx)
        
        if (rax_1 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax_3 = (rax_1 + 0x27) & 0xffffffffffffffe0
        *(rax_3 - 8) = rax_1
    else if (rbx_2 == 0)
        rax_3 = nullptr
    else
        rax_3 = j_sub_140a82f30(rbx_2)
    
    *arg1 = rax_3
    arg1[1] = rax_3
    int64_t* rax_4 = *arg1
    arg1[2] = &rax_4[i_1 * 2]
    int64_t* rbx_3 = rax_4
    
    if (i_1 != 0)
        int64_t i
        
        do
            *rbx_3 = 0
            rbx_3[1] = 0
            int64_t rax_5 = _aligned_malloc(0x80, 0x20)
            rbx_3[1] = rax_5
            
            if ((rax_5.b & 0x1f) != 0)
                _aligned_free(rax_5)
                rax_5 = _aligned_malloc(0xa0, 0x20)
                rbx_3[1] = rax_5
                
                while ((rax_5.b & 0x1f) != 0)
                    rax_5 += 1
            
            *rbx_3 = rax_5
            rbx_3 = &rbx_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[1] = rbx_3

return arg1
