// 函数: sub_140d7d610
// 地址: 0x140d7d610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t arg_10 = arg2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t result_1 = 0x80040201
int32_t* var_78 = &result_1
int32_t* var_70 = &arg_10
int64_t* var_68 = &arg_18
void*** rax_3
int64_t r8
rax_3, r8 = sub_140a82f30(0x28, 8)
*rax_3 = &data_142ec17e8
*(rax_3 + 8) = (arg1 - 0x28).o
*(rax_3 + 0x18) = var_70.o
void (* var_58)(int64_t* arg1, int512_t arg2 @ zmm1)
void (* rax_4)(int64_t* arg1, int512_t arg2 @ zmm1) = var_58

if (rax_3 != -8)
    rax_4 = j_sub_140d738a0

var_58 = rax_4
void* rcx_1 = *(*(arg1 - 0x20) + 0xa0)
int64_t* rbx_1 = *(rcx_1 + 0x30)
int64_t* r10 = *(rcx_1 + 0x28)

if (rbx_1 != 0)
    rbx_1[1].d += 1

r8.b = 1
(*(*r10 + 0x20))(r10, &var_58, r8, 2)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (var_58 != 0)
    void var_38
    void*** rcx_5 = &var_38
    
    if (rax_3 != 0)
        rcx_5 = rax_3
    
    (*rcx_5)[2](rcx_5)

uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_a8)
return result
