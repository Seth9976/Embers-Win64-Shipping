// 函数: sub_141f9c770
// 地址: 0x141f9c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
int32_t* result = sub_141f87c30(arg1, arg2)

if (result != 0)
    int32_t rcx_2 = *result
    
    if (rcx_2 s>= 0 && rcx_2 s< rax_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        int64_t rcx_6 = sx.q(*sub_141f87c30(arg1, arg2))
        int128_t zmm7 = *(arg1[0xf] + (rcx_6 << 3) + 4)
        sub_141f84940(arg1, arg2)
        int64_t rax_6 = sx.q(arg1[0x10].d)
        int32_t rdi_1 = 0
        int32_t arg_8 = arg2
        
        if (rax_6.d s> 0)
            int64_t rcx_8 = 0
            int32_t* rax_7 = arg1[0xf]
            
            while (not(arg3.d f<= *rax_7))
                rdi_1 += 1
                rcx_8 += 1
                rax_7 = &rax_7[2]
                
                if (rcx_8 s>= rax_6)
                    break
        
        int32_t rbp_1 = arg1[0x10].d
        arg1[0x10].d = rbp_1 + 1
        
        if (rbp_1 + 1 s> *(arg1 + 0x84))
            sub_1405a4d70(&arg1[0xf])
        
        int64_t rbx_1 = sx.q(rdi_1)
        int64_t rdx_7 = arg1[0xf] + (rbx_1 << 3)
        memmove(rdx_7 + 8, rdx_7, (rbp_1 - rdi_1) << 3)
        int64_t rax_10 = arg1[0xf]
        *(rax_10 + (rbx_1 << 3)) = arg3.d
        *(rax_10 + (rbx_1 << 3) + 4) = zmm7.d
        return sub_141f7f180(&arg1[1], &arg_8, rdi_1)

return result
