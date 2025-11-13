// 函数: sub_1420969f0
// 地址: 0x1420969f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_142075410()
uint128_t zmm0 = (&rax[2]).o
uint128_t var_28 = zmm0
void*** rbx = _mm_bsrli_si128(zmm0, 8).q

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax

if (arg1 + 0x10 != &var_28)
    *(arg1 + 0x10) = var_28.q
    var_28.q = 0
    sub_1405aeff0(arg1 + 0x18, &var_28:8)
    rbx = rax

void* rcx_1 = var_28:8.q

if (rcx_1 != 0)
    int32_t rax_2 = *(rcx_1 + 8)
    *(rcx_1 + 8) -= 1
    
    if (rax_2 == 1)
        int64_t* rbx_1 = var_28:8.q
        (**rbx_1)(rbx_1)
        int32_t rax_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            int64_t* rcx_3 = var_28:8.q
            (*(*rcx_3 + 8))(rcx_3, 1)
    
    rbx = rax

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rbx)[1](rbx, zx.q(rdi_1))

uint64_t result = sub_140a4bff0(arg2, *(arg1 + 0x10), 0x50)
int64_t* rbx_2 = *(arg1 + 0x10)
char rdi_3 = *(arg1 + 0x20)
int64_t* rcx_7 = *rbx_2

if (rcx_7 != 0)
    int64_t* rax_10 = (*(*rcx_7 + 0x38))(rcx_7)
    int64_t r8_1 = *rax_10
    result = (*(r8_1 + 0x38))(rax_10, zx.q(rdi_3), r8_1)

int64_t* rcx_9 = rbx_2[4]

if (rcx_9 != 0)
    int64_t* rax_12 = (*(*rcx_9 + 0x38))(rcx_9)
    int64_t r8_2 = *rax_12
    result = (*(r8_2 + 0x38))(rax_12, zx.q(rdi_3), r8_2)

int64_t* rcx_11 = rbx_2[2]

if (rcx_11 != 0)
    int64_t* rax_14 = (*(*rcx_11 + 0x38))(rcx_11)
    int64_t r8_3 = *rax_14
    result = (*(r8_3 + 0x38))(rax_14, zx.q(rdi_3), r8_3)

int64_t* rcx_13 = rbx_2[6]

if (rcx_13 == 0)
    return result

int64_t* rax_16 = (*(*rcx_13 + 0x38))(rcx_13)
int64_t r8_4 = *rax_16
return (*(r8_4 + 0x38))(rax_16, zx.q(rdi_3), r8_4)
