// 函数: sub_142647220
// 地址: 0x142647220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int64_t* r13 = arg1

if (result != 0)
    int32_t i_1 = 0
    int32_t i = 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x20)
    
    if (arg3[1].d s> 0)
        float* rdi_1 = nullptr
        int128_t zmm6 = *arg5
        int128_t zmm7 = *(arg5 + 4)
        int128_t zmm8 = *(arg5 + 8)
        
        do
            int64_t rax_1 = *arg3
            float zmm1 = zmm7.d f+ *(rdi_1 + rax_1 + 4)
            float var_a4 = zmm6.d f+ *(rdi_1 + rax_1)
            float var_a0_1 = zmm1
            float var_9c_1 = zmm8.d f+ *(rdi_1 + rax_1 + 8)
            sub_142648d50(&var_98, &var_a4, arg4)
            i += 1
            rdi_1 = &rdi_1[3]
        while (i s< arg3[1].d)
        
        result = arg2[1].d
    
    int64_t var_88
    
    if (result s> 0)
        int32_t* r15_1 = 4
        
        do
            int64_t rax_2 = *arg2
            int64_t var_80_1
            int64_t rdi_2 = sx.q(var_80_1.d)
            int32_t rcx_1 = *(rax_2 + r15_1 + 4)
            int32_t r13_1 = *(rax_2 + r15_1 - 4)
            int32_t rsi_1 = (rdi_2 + 1).d
            int32_t rcx_2 = *(r15_1 + rax_2)
            var_80_1.d = rsi_1
            
            if (rsi_1 s> var_80_1:4.d)
                sub_1405a4cf0(&var_88)
                rsi_1 = var_80_1.d
            
            *(var_88 + (rdi_2 << 2)) = r13_1
            int32_t rdi_3 = rsi_1 + 1
            var_80_1.d = rdi_3
            
            if (rdi_3 s> var_80_1:4.d)
                sub_1405a4cf0(&var_88)
                rdi_3 = var_80_1.d
            
            *(var_88 + (sx.q(rsi_1) << 2)) = rcx_2
            var_80_1.d = rdi_3 + 1
            
            if (rdi_3 + 1 s> var_80_1:4.d)
                sub_1405a4cf0(&var_88)
            
            i_1 += 3
            r15_1 = &r15_1[3]
            *(var_88 + (sx.q(rdi_3) << 2)) = rcx_1
        while (i_1 s< arg2[1].d)
        
        r13 = arg1
    
    int32_t var_78_1 = arg4
    int64_t rbx_1 = sx.q(r13[1].d)
    int32_t rax_7 = (rbx_1 + 1).d
    r13[1].d = rax_7
    
    if (rax_7 s> *(r13 + 0xc))
        sub_1405c4ec0(r13)
    
    result = sub_1426412f0(*r13 + rbx_1 * 0x28, &var_98)
    int64_t rcx_11 = var_88
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_98
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)

return result
