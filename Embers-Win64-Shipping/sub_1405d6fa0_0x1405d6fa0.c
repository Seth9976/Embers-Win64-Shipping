// 函数: sub_1405d6fa0
// 地址: 0x1405d6fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405db200(arg1, 0)
void* rcx = data_143f5b298
uint128_t zmm1 = zx.o(0)
uint128_t var_28 = zx.o(0)
int64_t var_18 = *(rcx + 0xe00)
void* rax_1 = *(rcx + 0xe08)
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    zmm1 = var_28

uint128_t zmm0 = var_18.o
int64_t* rbx = _mm_bsrli_si128(zmm1, 8).q
var_28 = zmm0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rdi

if (var_28.q == 0)
    rdi.b = 0
else
    var_18.o = *arg2
    rdi = zx.q(sub_1405d7100(arg1, &var_28, &var_18))

int64_t* rbx_1 = var_28:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rdi.b)
