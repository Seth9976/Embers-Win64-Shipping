// 函数: sub_140a6eea0
// 地址: 0x140a6eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
char* rax
int512_t zmm1
rax, zmm1 = sub_140a752e0()
int64_t* rbx = *(rax + 0x60)

if (rbx != 0)
    rbx[1].d += 1

void var_18
int64_t* rcx_2 = *sub_140a75f30(**(rax + 0x58), &var_18, 1, zmm1)
int64_t rax_3 = (*(*rcx_2 + 0x18))(rcx_2)
void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rax_3

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_2 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_2))

uint128_t zmm0 = rax_3.o
uint128_t var_28 = zmm0
void* rax_10 = _mm_bsrli_si128(zmm0, 8).q

if (rax_10 != 0)
    *(rax_10 + 8) += 1

void arg_8
sub_140a5c910(&arg1[1], &arg_8, &var_28, nullptr)
int64_t* rbx_1 = var_28:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

*arg2 = rax_3
arg2[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp6_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_4)[1](rax_4, 1)

if (arg1 != 0)
    LeaveCriticalSection(arg1)

return arg2
