// 函数: sub_140b3f730
// 地址: 0x140b3f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* r14 = arg3
sub_140a464c0()
char const (* r9)[0x4] = data_14399ea08
int64_t* rax_2 = (*(r9 + 0x18))(&data_14399ea08, arg2, 0, r9)
*arg1 = 0

if (rax_2 != 0)
    int64_t rdi_1 = 0
    int64_t rbp_1 = 0
    int64_t var_b8 = 0
    int64_t var_b0_1 = 0
    
    if (r14 == 0)
        var_b0_1.d = 0x10000
        sub_1405daba0(&var_b8)
        rbp_1 = var_b8
        r14 = &var_b8
    
    int64_t rax_3 = *rax_2
    int64_t var_98_1 = 0
    int32_t var_a8 = 0x67452301
    int32_t var_a4_1 = 0xefcdab89
    int32_t var_a0_1 = 0x98badcfe
    int32_t var_9c_1 = 0x10325476
    int64_t rax_4 = (*(rax_3 + 0x28))(rax_2)
    
    if (rax_4 s> 0)
        do
            int64_t rbx_1 = sx.q(r14[1].d)
            int64_t rcx_3 = rax_4 - rdi_1
            
            if (rcx_3 s<= rbx_1)
                rbx_1 = rcx_3
            
            (*(*rax_2 + 0x150))(rax_2, *r14, rbx_1)
            sub_140b4aca0(&var_a8, *r14, rbx_1)
            rdi_1 += rbx_1
        while (rdi_1 s< rax_4)
    
    sub_140b38ef0(&var_a8, &arg1[1])
    *arg1 = 1
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)
    
    int64_t r8_2 = *rax_2
    (*r8_2)(rax_2, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
