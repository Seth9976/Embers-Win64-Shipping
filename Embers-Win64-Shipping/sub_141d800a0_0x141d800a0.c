// 函数: sub_141d800a0
// 地址: 0x141d800a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141d83d80(arg1)
void* rcx = arg1[0xc]

if (rcx == 0)
    return result

void* var_68
int128_t zmm6_1 = sub_141d7a6b0(rcx, &var_68)
void* rdi_1 = var_68
int32_t var_60
void* i = rdi_1 + sx.q(var_60) * 0x28

if (rdi_1 != i)
    int32_t* rdi_2 = rdi_1 + 0xc
    int128_t var_48_1 = zmm6_1
    
    do
        int64_t rsi_1 = *(rdi_2 - 0xc)
        *(rdi_2 - 0xc) = 0
        int64_t rbx_1 = sx.q(rdi_2[-1])
        int64_t r14_1 = sx.q(*rdi_2)
        *(rdi_2 - 4) = 0
        void*** rax_1 = j_sub_140a82f30(0x50)
        
        if (rax_1 == 0)
            rax_1 = nullptr
        else
            rax_1[1].d = 1
            *(rax_1 + 0xc) = 1
            *rax_1 = &data_143234140
            rax_1[2] = &data_142d56f80
            rax_1[3] = *(rdi_2 + 4)
            rax_1[4].d = 0
            *(rax_1 + 0x24) = 0x801
            *(rax_1 + 0x26) = 4
            rax_1[5] = 0
            rax_1[6] = 0
            rax_1[2] = &data_142d56fd0
            rax_1[7] = rsi_1
            rsi_1 = 0
            rax_1[8] = rbx_1
            rax_1[9] = r14_1
        
        uint128_t zmm0_1 = (&rax_1[2]).o
        uint128_t var_78 = zmm0_1
        void* rax_2 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
            
            if (rax_1 != 0)
                rax_1[1].d -= 1
                
                if (rax_1[1].d == 1)
                    (**rax_1)(rax_1)
                    int32_t rax_5 = *(rax_1 + 0xc)
                    *(rax_1 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*rax_1)[1](rax_1, 1)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        zmm6_1 = *(*(rdi_2 + 0xc) + 8)
        arg1[0xd].d -= 1
        int64_t* rbx_3 = var_78.q
        int64_t arg_8 = 0
        int64_t arg_10 = 0
        (*(*rbx_3 + 8))(rbx_3, &arg_8, &arg_10)
        
        if (arg_8 != 0 && arg_10 == (zx.q(*(rbx_3 + 0x15)) u>> 3) * zx.q(*(rbx_3 + 0x16))
                * sx.q(*(rbx_3 + 0xc)) * sx.q(rbx_3[1].d))
            int128_t var_58 = zmm6_1
            sub_141d83ba0(arg1, &var_78, &arg1[0x10], &var_58)
        
        int64_t* rbx_4 = var_78:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_14 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        rdi_2 = &rdi_2[0xa]
    while (&rdi_2[-3] != i)

return sub_141d750f0(&var_68)
