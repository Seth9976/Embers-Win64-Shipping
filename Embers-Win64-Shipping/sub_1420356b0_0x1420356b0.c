// 函数: sub_1420356b0
// 地址: 0x1420356b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_758
int64_t rax_2 = __security_cookie ^ &var_758
int64_t* rax = sub_141fe6490(arg2, arg3)
int64_t* rdi_1 = rax

if (rax != 0)
    int64_t* rcx_1 = data_143f5b298
    
    if (rcx_1 != 0)
        int64_t r8 = *rcx_1
        
        if ((*(r8 + 0x388))(rcx_1, arg4, r8).b != 0)
            rax = sub_1423de540(data_143f5b298, arg1, 1)
            
            if (rax != 0 && (*(rax + 0x11e) & 2) != 0)
                void var_738
                int32_t zmm6_1 = sub_142435ed0(rax, &var_738)
                
                if (sub_141e80b60(&var_738) != 0)
                    void** var_718
                    sub_141db66c0(&var_718)
                    sub_141dd9140(&var_718, rdi_1)
                    sub_141dd9500(&var_718, rax)
                    sub_141dd8f70(&var_718, arg5)
                    sub_141dd9420(&var_718, zmm6_1)
                    int64_t rax_5 = *rdi_1
                    int32_t temp0_1 = _mm_max_ss(arg6, 0)
                    int32_t zmm0_1 = *(rdi_1 + 0x104)
                    char var_597
                    char var_597_1 = var_597 | 0x80
                    char var_598
                    char var_598_1 = var_598 & 0xfd
                    int32_t var_518_1 = zmm0_1
                    int32_t var_57c_1 = temp0_1
                    (*(rax_5 + 0x2a8))(rdi_1, temp0_1)
                    int32_t var_51c_1 = zmm0_1
                    sub_141dd8f40(&var_718, nullptr)
                    void* var_730
                    sub_141e73390(var_730, &var_718)
                    sub_141db7fa0(&var_718)
                
                sub_141e71cd0(&var_738)

__security_check_cookie(rax_2 ^ &var_758)
