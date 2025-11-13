// 函数: sub_140efc6a0
// 地址: 0x140efc6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r9 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        r9 = *(arg1 + 8)

uint128_t zmm1 = *(arg1 + 0x18)
int64_t result = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + r9)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
