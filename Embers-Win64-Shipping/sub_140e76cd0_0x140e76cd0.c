// 函数: sub_140e76cd0
// 地址: 0x140e76cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3.d
int32_t rsi = arg2.d
int64_t arg_8
int32_t i

if (arg1[0x64].b != 0 || *(arg1 + 0x321) != 0)
    *(arg1 + 0x3c)
    
    if (arg1[2].d != *(arg1 + 0x3c))
        int64_t rax_1 = data_143e1e008
        arg_8 = rax_1
        int32_t rax_3 = sub_140b5ead0(rax_1.d) + arg_8:4.d
        arg3 = &arg1[8]
        void* rcx_1 = *(arg3 + 8)
        arg2 = (sx.q(arg1[0xa].d) - 1) & sx.q(rax_3)
        
        if (rcx_1 != 0)
            arg3 = rcx_1
        
        i = *(arg3 + (arg2 << 2))
        
        if (i != 0xffffffff)
            arg3 = arg1[1]
            
            do
                arg2 = sx.q(i) << 5
                
                if (*(arg2 + arg3) == data_143e1e008)
                    if (i == 0xffffffff)
                        break
                    
                    if (*(arg1 + 0x322) == 0)
                        i.b = 0
                        return i
                    
                    int512_t zmm2
                    zmm2.o = 0x3f800000
                    return (*(*arg1 + 0xc8))(arg1, (*(arg1[-0x23] + 0x58))(&arg1[-0x23], &arg_8), 
                        zmm2, 0, 0)
                
                i = *(arg2 + arg3 + 0x18)
            while (i != 0xffffffff)

if (rsi != 0 || rdi != 0)
    int64_t* rcx_3 = arg1[0x9d]
    int64_t* rbx_1 = data_143e20d18
    int64_t rax_5 = *rcx_3
    uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rsi))
    uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rdi))
    int32_t rax_6 = (*rax_5)(rcx_3, arg2, arg3)
    int64_t r8 = *rbx_1
    int16_t* rax_7 = (*(r8 + 0x58))(rbx_1, &arg_8, r8)
    int64_t r8_1 = arg1[-0x23]
    void arg_20
    int32_t* rax_8 = (*(r8_1 + 0x60))(&arg1[-0x23], &arg_20, r8_1)
    int64_t r8_2 = arg1[-0x23]
    void* var_68
    int32_t* rax_9 = (*(r8_2 + 0x58))(&arg1[-0x23], &var_68, r8_2)
    void** const var_d8 = &data_142d7f690
    int16_t var_d0_1 = *rax_7
    int64_t var_c8_1 = 0
    var_d8 = &data_142ecfd88
    char var_ce_1 = 0
    int32_t var_cc_1 = rax_6
    int32_t var_c0_1 = *rax_9
    int32_t var_bc_1 = rax_9[1]
    int32_t var_b8_1 = *rax_8
    int32_t zmm1 = rax_8[1]
    void* var_a8_1 = &arg1[1]
    int32_t var_88_1 = 0xa
    void** const* var_60_1 = &var_d8
    int64_t* var_50_1 = &var_68
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x18)
    int32_t var_84_1 = 0
    int16_t var_7c_1 = 0
    int64_t var_78_1 = 0
    int16_t var_70_1 = 0
    char var_6e_1 = 0
    int64_t (* var_58)(int64_t* arg1, int64_t* arg2) = sub_140e5a3f0
    int32_t var_b4_1 = zmm1
    int32_t var_b0_1 = zmm6.d
    int32_t var_ac_1 = zmm7.d
    int32_t var_80_1 = 0x3f800000
    var_68 = &arg1[-0x23]
    
    if (sub_140e79540(&arg1[0x8e], &var_58).b == 0)
        sub_140e7d5c0(&arg1[-0x23], &var_d8, 0)
    
    int128_t var_98
    int64_t* rbx_3 = var_98:8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

i.b = 1
return i
