// 函数: sub_1422df290
// 地址: 0x1422df290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) s<= arg2)
    return 

int64_t* rax = (sx.q(arg2) << 4) + *(arg1 + 0x28)
uint64_t var_68 = 0
uint64_t rbp_1 = 0
int64_t rbx_1 = sx.q(rax[1].d)
int64_t rdi_1 = *rax
int32_t i_2 = rbx_1.d

if (rbx_1.d != 0)
    sub_1405a4be0(&var_68, rbx_1.d, 0)
    rbp_1 = var_68
    memcpy(rbp_1, rdi_1, (rbx_1 << 4).d)
    
    if (i_2 s> 0)
        int32_t* rdi_2 = rbp_1 + 8
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(*rdi_2, 0).b == 0
            rax.b = rdi_2[1] != 0
            rax.b |= rcx_2.b
            
            if (rax.b == 0)
                rax.b = 0
            else
                rax = sub_140d3c6e0(&rdi_2[-2])
                
                if (rax == 0)
                    rax.b = 0
                else
                    rax.b = sub_140d1fd20(rax, *rdi_2) != 0
            
            if (rax.b != 0)
                int32_t zmm0_1 = *(arg3 + 0x18)
                char var_58 = *arg3
                int64_t var_50_1 = *(arg3 + 8)
                char var_48_1 = arg3[0x10]
                int32_t var_44_1 = *(arg3 + 0x14)
                int32_t var_40_1 = zmm0_1
                uint64_t var_38 = 0
                int64_t var_30_1 = 0
                int64_t var_28_1 = 0
                sub_140597df0(&var_38, &arg3[0x20])
                int64_t var_28_2 = *(arg3 + 0x30)
                int64_t* rax_8 = sub_140d3c6e0(&rdi_2[-2])
                int64_t rax_9 = sub_140d1fd30(rax_8, *rdi_2)
                int64_t r9_1 = *rax_8
                (*(r9_1 + 0x210))(rax_8, rax_9, &var_58, r9_1)
                uint64_t rcx_9 = var_38
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
            
            rdi_2 = &rdi_2[4]
            i = i_1
            i_1 -= 1
        while (i != 1)

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)
