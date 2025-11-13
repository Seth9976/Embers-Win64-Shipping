// 函数: sub_141916e40
// 地址: 0x141916e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t r10 = arg3
int64_t var_78 = arg4
uint64_t result

if (data_1439c74e9 == 0 || data_1439c74f0 == 0)
    void* rax_4 = *(arg1 + 0x570)
    int32_t rsi_1 = 0
    int32_t rdx = 0
    void* rbx_1 = *(rax_4 + 0x88)
    int32_t var_88_1 = 0
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
        rax_4 = *(arg1 + 0x570)
        rdx = 0
        arg4 = var_78
        r10 = arg3
    
    result = *(rax_4 + 0x80)
    int32_t i = 0
    void* r8 = *(rbx_1 + 0x38)
    int32_t rdi_1 = 1
    void* var_80_1 = r8
    uint64_t result_1 = result
    
    if (*(result + 0x1d8) s> 0)
        int32_t r11_1 = arg6
        void* r14_1 = result + 0x1c
        
        do
            uint32_t r15_1 = zx.d(*(r14_1 + 0x15))
            int32_t rbx_2 = 1 << r15_1.b
            
            if ((rbx_2 & zx.d(*(r8 + 0xb0))) == 0)
                rdx = var_88_1
            else
                uint64_t rax_6 = zx.q(*r14_1)
                
                if (rax_6.d u>= arg5)
                    int32_t rax_12 = *(arg2 + 0x878)
                    
                    if ((rbx_2 & rax_12) != 0)
                        *(arg2 + 0x878) = not.d(rbx_2) & rax_12
                        data_143effda8()
                    
                    int128_t var_60 = zx.o(0)
                    data_143f00018(zx.q(r15_1), &var_60)
                    r8 = var_80_1
                    r11_1 = arg6
                    rdx = var_88_1
                else
                    uint64_t rdx_2 = rax_6 * 3
                    void* rcx_1 = *(arg4 + (rdx_2 << 3))
                    int32_t r12_1 = *(arg4 + (rdx_2 << 3) + 8)
                    int32_t rcx_2
                    uint64_t rdx_4
                    
                    if ((*(rcx_1 + 0x1c) & 0x800) == 0)
                        rcx_2 = *(rcx_1 + 0x28)
                        rdx_4 = zx.q(r10 * r12_1 + *(r14_1 + 4) + *(arg4 + (rdx_2 << 3) + 0xc))
                    else
                        r12_1 = *(rcx_1 + 0x18)
                        rdx_4 = 0
                        rcx_2 = sub_14190d200(rcx_1, r12_1, r11_1, r14_1 - 4)[5].d
                    
                    int32_t var_a0
                    var_a0.q = rdx_4
                    sub_14190ccd0(arg1, arg2, r15_1, r14_1 - 4, r12_1, var_a0, rcx_2)
                    r8 = var_80_1
                    rdx = var_88_1 | rbx_2
                    r11_1 = arg6
                    var_88_1 = rdx
            
            result = result_1
            i += 1
            arg4 = var_78
            r14_1 += 0x1c
            r10 = arg3
        while (i s< *(result + 0x1d8))
    
    uint32_t i_1 = *(arg2 + 0x878) & not.d(rdx)
    
    while (i_1 != 0)
        if ((i_1.b & 1) != 0)
            data_143effda8(zx.q(rsi_1))
            result = zx.q(not.d(rdi_1))
            *(arg2 + 0x878) &= result.d
        
        i_1 u>>= 1
        rsi_1 += 1
        rdi_1 = rol.d(rdi_1, 1)
        
        if (rsi_1 u>= 0x10)
            break
else
    int32_t var_a0_1 = arg6
    result = sub_1419170d0(arg1, arg2, arg3, arg4, arg5)

__security_check_cookie(rax_1 ^ &var_c8)
return result
