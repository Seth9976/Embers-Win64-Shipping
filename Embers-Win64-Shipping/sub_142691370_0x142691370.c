// 函数: sub_142691370
// 地址: 0x142691370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x338)
void*** rax = j_sub_140a82f30(0x228)
int32_t i = 0
void*** rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_142671160(rax, 1)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

void*** var_28 = rdi
void*** var_20 = rbx

if (r14 + 0x10 != &var_28)
    *(r14 + 0x10) = rdi
    var_28 = nullptr
    sub_1405aeff0(r14 + 0x18, &var_20)
    rbx = var_20

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rbx)[1](rbx, zx.q(rdi_1))

*(*(arg1 + 0x338) + 0x20) = (int.q(fconvert.t(*(arg1 + 0x460)))).d
uint8_t rdi_3 = (*(arg1 + 0x474) u>> 8).b & 1
int64_t* r12 = *(*(arg1 + 0x338) + 0x10)
void*** rbx_1 = &r12[1]

if (r12 == 0)
    rbx_1 = nullptr

*rbx_1 = &data_14344d6a0
int128_t zmm0 = sub_142602460(&rbx_1[1])
rbx_1[0x43].b = rdi_3
(*(*r12 + 0x20))(r12, 0)
r12[0x42].d = *(arg1 + 0x47c)
int16_t result = not.w(data_143f717a0)
r12[0x43].w &= result

if (*(arg1 + 0x3a0) s> 0)
    int64_t rbp_1 = 0
    
    do
        int64_t r14_2 = *(arg1 + 0x398)
        int64_t* rbx_2 = *(r14_2 + rbp_1 + 0x18)
        
        if (rbx_2 != 0)
            int64_t* rdi_4 = rbx_2[0x23]
            
            if (rdi_4 != 0)
            label_14269153c:
                int512_t zmm2
                zmm2.o = rdi_4[6].d
                (*(*r12 + 0x10))(r12, zx.q(*(r14_2 + rbp_1 + 0x10)), zmm2)
                int64_t rbx_3 = *r12
                (*(*rdi_4 + 0x280))(rdi_4)
                zmm2.o = zmm0
                result = (*(rbx_3 + 0x18))(r12, zx.q(*(r14_2 + rbp_1 + 0x10)), zmm2)
            else
                result = (*(*rbx_2 + 0x390))(rbx_2)
                rdi_4 = rbx_2[0x23]
                
                if (rdi_4 != 0)
                    goto label_14269153c
        
        i += 1
        rbp_1 += 0x20
    while (i s< *(arg1 + 0x3a0))

return result
