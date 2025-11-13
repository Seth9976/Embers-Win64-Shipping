// 函数: sub_140fab170
// 地址: 0x140fab170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r8 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        r8 = *(arg1 + 8)

uint128_t zmm2 = *(arg1 + 0x18)
int128_t zmm0 = *arg2
int32_t rax_2 = _mm_bsrli_si128(zmm2, 8).d
int128_t var_18 = zmm0
int64_t result = zmm2.q(sx.q(rax_2) + r8, &var_18, r8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
