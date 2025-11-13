// 函数: sub_14105c1f0
// 地址: 0x14105c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* r13 = arg2
int64_t* rdi = arg7
int64_t* r12 = arg1
int32_t* rbx = arg8
int64_t* r15 = arg3
int64_t* rsi = arg9
int32_t* var_160 = rbx
int64_t* var_168 = rsi
int32_t var_b8
(*(*arg3 + 0x50))(arg3, &var_b8)
int32_t var_80
(*(*r13 + 0x50))(r13, &var_80)
int64_t var_a8
int64_t result

if (var_b8 != 1 || var_a8 u< *rdi + arg6)
    result = 0
else
    uint64_t i_4 = zx.q(arg5)
    int64_t var_148
    
    if (var_80 != 1 || (arg4 == 0 && i_4.d == 1))
        if ((*(*r15 + 0x40))(r15, 0, 0, &var_148) s< 0)
            result = 0
        else
            if (i_4.d != 0)
                void* r8 = rdi + 0x14
                uint64_t i_3 = i_4
                void* var_158_1 = r8
                int64_t* r14_1 = arg10 + 0x10
                uint64_t i_2 = i_4
                uint64_t i
                
                do
                    int32_t k_2 = *rbx
                    uint64_t r13_1 = zx.q(*(r8 + 4))
                    int64_t r12_2 = var_148 + *(r8 - 0x14)
                    int32_t count = (*rsi).d
                    uint64_t rax_9 = zx.q(r13_1.d * k_2)
                    int32_t k_3 = k_2
                    uint64_t j_1 = zx.q(*r8)
                    
                    if (j_1.d != 0)
                        uint64_t rcx_3 = rax_9
                        int64_t r15_1 = 0
                        int64_t var_178_1 = 0
                        uint64_t j_2 = j_1
                        uint64_t j
                        
                        do
                            int64_t rbx_3 = r15_1 * *r14_1 + r14_1[-2]
                            
                            if (k_2 != 0)
                                int64_t rdi_1 = 0
                                int64_t rsi_1 = r12_2
                                uint64_t k_1 = zx.q(k_2)
                                uint64_t k
                                
                                do
                                    memcpy(rsi_1, r14_1[-1] * rdi_1 + rbx_3, count)
                                    rdi_1 += 1
                                    rsi_1 += r13_1
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                                r15_1 = var_178_1
                                j_1 = j_2
                                k_2 = k_3
                                rcx_3 = rax_9
                            
                            r15_1 += 1
                            r12_2 += rcx_3
                            j = j_1
                            j_1 -= 1
                            var_178_1 = r15_1
                            j_2 = j_1
                        while (j != 1)
                        r8 = var_158_1
                        rbx = var_160
                        rsi = var_168
                        i_2 = i_3
                    
                    rsi = &rsi[1]
                    rbx = &rbx[1]
                    r8 += 0x20
                    var_168 = rsi
                    r14_1 = &r14_1[3]
                    var_160 = rbx
                    i = i_2
                    i_2 -= 1
                    var_158_1 = r8
                    i_3 = i_2
                while (i != 1)
                r15 = arg3
                i_4 = zx.q(arg5)
                r12 = arg1
                r13 = arg2
            
            (*(*r15 + 0x48))(r15, 0, 0)
            
            if (var_80 != 1)
                int32_t i_1 = 0
                
                if (i_4.d != 0)
                    do
                        int128_t zmm0 = *rdi
                        int64_t r10_2 = *r12
                        int128_t zmm1 = *(rdi + 0x10)
                        int32_t var_d8_1 = arg4 + i_1
                        int64_t var_198_1 = 0
                        int64_t* var_118
                        int64_t** var_1a0_2 = &var_118
                        int64_t var_1a8
                        var_1a8.d = 0
                        int64_t* var_e8 = r13
                        int32_t var_e0_1 = 0
                        var_118 = r15
                        int32_t var_110_1 = 1
                        int128_t var_108_1 = zmm0
                        int128_t var_f8_1 = zmm1
                        (*(r10_2 + 0x80))(r12, &var_e8, 0, 0, var_1a8, var_1a0_2, var_198_1)
                        i_1 += 1
                        rdi = &rdi[4]
                    while (i_1 u< i_4.d)
                
                result = arg6
            else
                (*(*r12 + 0x78))(r12, r13, 0, r15, *rdi, zx.q(*(rdi + 0xc)))
                result = arg6
    else
        result = 0

__security_check_cookie(rax_1 ^ &var_1c8)
return result
