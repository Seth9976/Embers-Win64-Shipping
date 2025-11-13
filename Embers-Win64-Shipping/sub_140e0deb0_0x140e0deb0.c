// 函数: sub_140e0deb0
// 地址: 0x140e0deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x10)

if (rax == data_143e244b0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

sub_140de9860(rax, *(arg1 + 8))
int64_t* rbx = *(arg1 + 0x18)
int64_t rbp = *(arg1 + 0x10)

if (rbx != 0)
    rbx[1].d += 1

uint128_t zmm1 = data_143e244b0.o
int64_t* rdi = _mm_bsrli_si128(zmm1, 8).q

if (rdi != 0)
    rdi[1].d += 1

uint128_t var_28

if (&var_28 != arg1 + 0x10)
    uint128_t zmm0 = *(arg1 + 0x10)
    *(arg1 + 0x10) = zmm1
    var_28 = zmm0
    rdi = var_28:8.q

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

*arg2 = rbp
arg2[1] = rbx

if (rbx != 0)
    int32_t rax_3 = rbx[1].d
    rbx[1].d = rax_3
    
    if (rax_3 == 0)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, zmm1, r8_1)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return arg2
