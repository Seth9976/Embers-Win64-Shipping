// 函数: sub_140fab450
// 地址: 0x140fab450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r8 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1

int64_t* rdi

if (rbx == 0 || *(arg1 + 8) == 0)
    rdi.b = 0
else
    rdi = *(arg1 + 0x10)
    
    if (rdi != 0)
        int32_t rax_3 = rdi[1].d
        
        if (rax_3 != 0)
            rdi[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rdi = nullptr
        
        if (rdi != 0)
            r8 = *(arg1 + 8)
    
    uint128_t zmm2 = *(arg1 + 0x18)
    int128_t zmm0 = *arg2
    arg3 = _mm_bsrli_si128(zmm2, 8)
    int128_t var_18 = zmm0
    zmm2.q(sx.q(arg3.d) + r8, &var_18, r8)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg3, r8_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rdi.b)
