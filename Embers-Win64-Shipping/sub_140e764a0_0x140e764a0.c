// 函数: sub_140e764a0
// 地址: 0x140e764a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
void* entry_r8

if ((*(arg1 + 0x322) != 0 || *(arg1 + 0x321) != 0) && arg1[2].d != *(arg1 + 0x3c))
    int64_t rax_2 = data_143e1e008
    arg_8 = rax_2
    int32_t rax_4 = sub_140b5ead0(rax_2.d) + arg_8:4.d
    entry_r8 = &arg1[8]
    void* rcx_1 = *(entry_r8 + 8)
    
    if (rcx_1 != 0)
        entry_r8 = rcx_1
    
    int32_t i = *(entry_r8 + (((sx.q(arg1[0xa].d) - 1) & sx.q(rax_4)) << 2))
    
    if (i != 0xffffffff)
        entry_r8 = arg1[1]
        
        do
            int64_t* rdx_5 = sx.q(i) << 5
            
            if (*(rdx_5 + entry_r8) == data_143e1e008)
                if (i == 0xffffffff)
                    break
                
                if (*(arg1 + 0x322) == 0)
                    i.b = 0
                    return i
                
                int64_t* rcx_14 = *(data_143e20d18 + 8)
                int512_t zmm2
                zmm2.o = 0x3f800000
                return (*(*arg1 + 0xc8))(arg1, (*(*rcx_14 + 0x18))(rcx_14, &arg_8), zmm2, 0, 0)
            
            i = *(rdx_5 + entry_r8 + 0x18)
        while (i != 0xffffffff)

uint64_t rdi
rdi.b = 1
int32_t arg_10
(*(arg1[-0x23] + 0x58))(&arg1[-0x23], &arg_10, entry_r8)
int32_t arg_18
(*(arg1[-0x23] + 0x60))(&arg1[-0x23], &arg_18)
int64_t zmm0 = arg_18

if (zmm0.d f!= arg_10)
label_140e76598:
    (*(arg1[-0x23] + 0x50))(&arg1[-0x23])
    arg1[0x41] = zmm0
    int64_t* rdi_1 = data_143e202c8
    int64_t* r15_1 = data_143e20d18
    int64_t r12_1 = data_143e202b8
    int64_t r13_1 = data_143e202c0
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* rcx_6 = arg1[0x9d]
    int32_t rax_10 = (**rcx_6)(rcx_6)
    int64_t r8 = *r15_1
    int16_t* rax_11 = (*(r8 + 0x58))(r15_1, &arg_8, r8)
    int64_t var_b0_1 = arg_10.q
    zmm0.d = arg_10.d f- arg_18
    int64_t var_a8_1 = arg_18.q
    int64_t zmm1
    zmm1.d = arg2.d f- arg3
    int16_t var_c0_1 = *rax_11
    void** const var_c8 = &data_142ecfd88
    int64_t var_90_1 = r12_1
    int64_t var_88_1 = r13_1
    int32_t var_a0_1 = zmm0.d
    int32_t var_9c_1 = zmm1.d
    char var_be_1 = 0
    int32_t var_bc_1 = rax_10
    int64_t var_b8_1 = 0
    void* var_98_1 = &arg1[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t var_70_1 = 0x3f800000
    int32_t var_78_1 = 0xa
    int32_t var_74_1 = 0
    int16_t var_6c_1 = 0
    int64_t var_68_1 = 0
    int16_t var_60_1 = 0
    char var_5e_1 = 0
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    void* var_58 = &arg1[-0x23]
    void** const* var_50_1 = &var_c8
    void** var_40_1 = &var_58
    int64_t (* var_48)(int64_t* arg1, int64_t* arg2) = sub_140e5a3f0
    
    if (sub_140e79540(&arg1[0x8e], &var_48) != 0)
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        return 1
    
    rdi = zx.q(sub_140e7d5c0(&arg1[-0x23], &var_c8, 0))
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            int64_t rdx_13 = *rdi_1
            (*rdx_13)(rdi_1, rdx_13)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
else
    zmm0 = arg3
    
    if (not(zmm0.d f== arg2))
        goto label_140e76598

return rdi.b
