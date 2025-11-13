// 函数: sub_14067a730
// 地址: 0x14067a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1)
    return 

int64_t rax_1 = sx.q(arg3[1].d)
int128_t* rdi_1 = *arg3
void* var_58 = nullptr
int64_t var_50_1 = 0
void* rsi_1 = rdi_1 + (rax_1 << 2)

if (rdi_1 != rsi_1)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        zmm6 = *rdi_1
        void*** rax_2 = j_sub_140a82f30(0x18)
        void*** rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            int64_t temp0_1 = _mm_cvtps_pd(zmm6.q)
            *rax_2 = &data_142d84b38
            rax_2[1].d = 3
            rax_2[2] = temp0_1
        
        void*** rax_3 = j_sub_140a82f30(0x18)
        
        if (rax_3 == 0)
            rax_3 = nullptr
        else
            rax_3[1].d = 1
            *(rax_3 + 0xc) = 1
            *rax_3 = &data_142d86170
            rax_3[2] = rbx_1
        
        int64_t rbx_2 = sx.q(var_50_1.d)
        int32_t rax_4 = (rbx_2 + 1).d
        var_50_1.d = rax_4
        
        if (rax_4 s> var_50_1:4.d)
            sub_140610660(&var_58)
        
        rdi_1 += 4
        void**** rcx_3 = (rbx_2 << 4) + var_58
        *rcx_3 = rbx_1
        rcx_3[1] = rax_3
        int64_t var_40_2 = 0
        int64_t var_48_2 = 0
    while (rdi_1 != rsi_1)

sub_140b75640(*(arg1 + 0x28), arg2, &var_58)
int32_t i_1 = var_50_1.d

if (i_1 != 0)
    int64_t* rdi_3 = var_58 + 8
    int32_t i
    
    do
        int64_t* rbx_3 = *rdi_3
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_3 = &rdi_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_7 = var_58

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
