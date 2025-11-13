// 函数: sub_140fab200
// 地址: 0x140fab200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rbx = *(arg1 + 0x10)
int64_t rdx = 0

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdx = *(arg1 + 8)

uint128_t zmm1 = *(arg1 + 0x18)
int64_t rcx = sx.q(_mm_bsrli_si128(zmm1, 8).d)
char var_f8 = *(arg1 + 0x28)
void var_e8
sub_140e51550(arg2, zmm1.q(rcx + rdx, &var_e8, arg3))
sub_140597700(&var_e8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_3 = *rbx
        (*rdx_3)(rbx, rdx_3)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
