// 函数: sub_14268d850
// 地址: 0x14268d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142698750(arg1)
int64_t* rbx = arg1[0x1d]
void* rdi = *(rbx[0x95] + 8)
uint64_t result = sub_14243ade0((*(*rbx + 0x150))(rbx))

if (result.b == 0 || *(rbx + 0x2ac) == 2)
    result = arg1[0x1d]
    
    if ((not.b(*(result + 0x408)) & 1) != 0 && rdi != 0)
        float zmm2_1[0x4] = *(arg1 + 0xb4)
        uint128_t zmm1_1
        zmm1_1.d = _mm_cvtepi32_ps(zx.o(arg1[4].d)).d f* arg1[5].d
        int32_t rax_3
        int128_t zmm6_1
        rax_3, zmm6_1 = sub_1426760e0(&arg1[0x1b], zmm1_1, zmm2_1)
        result = sub_1405f8990(rdi)
        
        if (result.d != rax_3)
            result = sub_142696230(*(arg1[0x1d] + 0x4a8), 0)
            int32_t rdx_2 = arg1[0x1c].d
            
            if (rdx_2 s> 0)
                int64_t var_48 = 0
                int64_t var_40_1 = 0
                sub_1405a51b0(&var_48, rdx_2)
                int128_t* rbx_2 = arg1[0x1b]
                void* rbp_2 = sx.q(arg1[0x1c].d) * 0x1c + rbx_2
                
                if (rbx_2 != rbp_2)
                    int128_t var_18_1 = zmm6_1
                    
                    do
                        int64_t rdi_1 = sx.q(var_40_1.d)
                        zmm6_1 = *rbx_2
                        int32_t var_20_1 = *(rbx_2 + 0x18)
                        int32_t rax_6 = (rdi_1 + 1).d
                        uint64_t var_28_1 = rbx_2[1].q
                        int32_t var_1c_1 = 8
                        var_40_1.d = rax_6
                        
                        if (rax_6 s> var_40_1:4.d)
                            sub_1405c4e40(&var_48)
                        
                        int64_t rax_7 = var_48
                        int64_t rcx_9 = rdi_1 << 5
                        rbx_2 += 0x1c
                        *(rcx_9 + rax_7) = zmm6_1
                        *(rcx_9 + rax_7 + 0x10) = var_28_1.o
                    while (rbx_2 != rbp_2)
                
                result = (*(*arg1 + 0x30))(arg1, &var_48)
                int64_t rcx_11 = var_48
                
                if (rcx_11 != 0)
                    return sub_140a74f90(rcx_11)

return result
