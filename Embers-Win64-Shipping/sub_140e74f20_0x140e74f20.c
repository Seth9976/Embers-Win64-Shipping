// 函数: sub_140e74f20
// 地址: 0x140e74f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_8 = 0
void* const var_f8
int64_t* var_f0
int128_t var_78
int64_t* rax_1
void* const r13
int32_t r14

if (0 s>= *(arg1 + 0x1a8))
    rax_1 = &var_78
    var_78 = zx.o(0)
    r14 = 2
    r13 = nullptr
else
    int64_t* rax = *(arg1 + 0x1a0)
    int64_t* rcx = rax[1]
    r13 = *rax
    var_f8 = r13
    var_f0 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_1 = &var_f8
    r14 = 1

int64_t* rdi = rax_1[1]
rax_1[1] = 0
*rax_1 = 0

if ((r14.b & 2) != 0)
    int64_t* rbx_1 = var_78:8.q
    r14 &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((1 & r14.b) != 0 && var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        (**var_f0)(var_f0)
        int32_t temp5_1 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_f0 + 8))(var_f0, 1)

int64_t rbx_3 = *(r13 + 0x1d0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbx_3 != 0)
    char rdi_1 = 1
    int128_t zmm7 = zx.o(0)
    int128_t zmm8 = zx.o(0)
    int128_t zmm6 = zx.o(0)
    int32_t arg_18
    (*(*(arg1 - 0x118) + 0x58))(arg1 - 0x118, &arg_18)
    int32_t arg_20
    (*(*(arg1 - 0x118) + 0x60))(arg1 - 0x118, &arg_20)
    int64_t zmm0 = arg_20
    
    if (zmm0.d f!= arg_18)
    label_140e750ae:
        int64_t* rdi_2 = data_143e202c8
        int64_t* r12_1 = data_143e20d18
        int64_t r13_1 = data_143e202b8
        var_f8 = data_143e202c0
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        int32_t rax_12 = (***(arg1 + 0x4e8))(zmm0)
        int16_t var_e0_1 = *(*(*r12_1 + 0x58))(r12_1, &arg_8)
        int64_t var_d0_1 = arg_18.q
        zmm0 = arg_18
        int64_t var_c8_1 = arg_20.q
        void** const var_e8 = &data_142ecfd88
        void* var_b8_1 = arg1 + 8
        void* const var_a8_1 = var_f8
        char var_de_1 = 0
        int32_t var_dc_1 = rax_12
        int64_t var_d8_1 = 0
        int64_t var_b0_1 = r13_1
        zmm0.d = zmm0.d f- arg_20
        int64_t zmm1
        zmm1.d = arg2.d f- arg3
        int32_t var_c0_1 = zmm0.d
        int32_t var_bc_1 = zmm1.d
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        int32_t var_90_1 = 0x3f800000
        int32_t var_98_1 = 0xa
        int32_t var_94_1 = 0
        int16_t var_8c_1 = 0
        int64_t var_88_1 = 0
        int16_t var_80_1 = 0
        char var_7e_1 = 0
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp7_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        char rax_20
        rax_20, zmm8 = sub_140e7d5c0(arg1 - 0x118, &var_e8, 0)
        rdi_1 = rax_20
        zmm7 = var_c0_1
        zmm6 = var_bc_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp9_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    else
        zmm0 = arg3
        
        if (not(zmm0.d f== arg2))
            goto label_140e750ae
    
    zmm6.d = zmm6.d f* zmm6.d
    zmm7.d = zmm7.d f* zmm7.d
    zmm6.d = zmm6.d f+ zmm7.d
    
    if (zmm6.d f<= zmm8.d)
        rdi_1 = *(arg1 + 0x310)
    else
        *(arg1 + 0x310) = rdi_1
    
    if (rdi_1 != 0)
        rsi = 1

return zx.q(rsi)
