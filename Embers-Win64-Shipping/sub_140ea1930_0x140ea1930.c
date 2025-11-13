// 函数: sub_140ea1930
// 地址: 0x140ea1930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x18))()
(*(*arg1 + 0x10))(arg1, arg6, 0)
void*** rax_2 = j_sub_140a82f30(0x168)
void*** rsi = rax_2
char var_68

if (rax_2 == 0)
    rsi = nullptr
else
    char r12_1 = arg1[0xa].b
    var_68 = 0
    int128_t var_48 = zx.o(0)
    TPI1::TPI1(rsi, arg5, arg6, 4, 0, &var_48)
    *rsi = &data_142edc668
    rsi[0x13] = *arg2
    void* rax_4 = arg2[1]
    rsi[0x14] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    rsi[0x15].d = arg2[2].d
    rsi[0x16].b = arg2[3].b
    rsi[0x17] = 0
    rsi[0x18].d = 0
    sub_140692f90(&rsi[0x17], &arg2[4])
    rsi[0x19] = *arg3
    void* rax_8 = arg3[1]
    rsi[0x1a] = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    rsi[0x1b].d = arg3[2].d
    rsi[0x1c].b = arg3[3].b
    rsi[0x1d] = 0
    rsi[0x1e].d = 0
    sub_140692f90(&rsi[0x1d], &arg3[4])
    *(rsi + 0xf8) = *arg4
    rsi[0x21] = arg4[1].q
    rsi[0x22].d = *(arg4 + 0x18)
    rsi[0x23] = 0
    rsi[0x24].d = 0
    rsi[0x25] = 0
    rsi[0x26].d = 0
    rsi[0x27] = 0
    rsi[0x28] = 0
    *(rsi + 0x14b) = r12_1
    rsi[0x29].w = 0
    *(rsi + 0x14a) = arg7
    rsi[0x2a] = 0
    rsi[0x2b] = 0
    rsi[0x2c].b = 1

void*** rax_13 = j_sub_140a82f30(0x18)
void*** rdi_1 = rax_13

if (rax_13 == 0)
    rdi_1 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rdi_1 = &data_142d42ea8
    rdi_1[2] = rsi

void**** r14_1 = &rsi[1]

if (rsi == 0)
    r14_1 = nullptr

if (r14_1 != 0)
    void* rax_14
    
    if (*r14_1 != 0)
        rax_14 = r14_1[1]
    
    if (*r14_1 == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        *r14_1 = rsi
        int64_t* rcx_4 = r14_1[1]
        
        if (rdi_1 != rcx_4)
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
                rcx_4 = r14_1[1]
            
            if (rcx_4 != 0)
                int32_t temp4_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
            
            r14_1[1] = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rdi_1)[1](rdi_1, 1)

void* rax_18 = arg1[1]
int64_t rdx_4 = arg1[7]
int128_t var_38 = zx.o(0)
var_68.d = *(rax_18 + 0x58)
void arg_8
int64_t* rax_19 = sub_140ebce80(&arg_8, rdx_4, arg8, &var_38, var_68)
void*** var_58 = rsi
void*** var_50 = rdi_1
*(rsi + 0x8c) = *rax_19

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140ea20e0(arg1[1], &var_58)
int64_t result = (*(*arg1 + 0x10))(arg1, arg6, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rdi_1)[1](rdi_1, 1)

return result
