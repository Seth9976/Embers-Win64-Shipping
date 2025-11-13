// 函数: sub_141db7080
// 地址: 0x141db7080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xfffffffe
int32_t* result = arg1
arg1[3] = 0xffffffff
arg1[4] = 0
int32_t* r12 = nullptr
arg1[5] = 0xffffffff
int32_t r9 = 0
arg1[6] = 0
*(arg1 + 0x38) = 0
void* rsi = arg2
*(arg1 + 0x40) = 0
void* rax = *(arg2 + 0x410)
int32_t r14 = 0
int32_t* var_60 = nullptr
int32_t var_54 = 0

if (rax != 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(rax + 0x60) s> 0)
        int64_t r13_1 = 0
        
        do
            int64_t r8 = *(rax + 0x58)
            int32_t j = 0
            int64_t var_68_1 = r8
            
            if (*(r8 + r13_1 + 0x38) s> 0)
                int64_t* rdi = nullptr
                
                do
                    int64_t rbp_1 = *(r8 + r13_1 + 0x30)
                    int32_t* rdx = r12
                    void* rax_2 = &r12[sx.q(r14) * 3]
                    int64_t rdx_3
                    
                    if (r12 != rax_2)
                        while ((*(rdi + rbp_1)).d f!= *rdx || (*(rdi + rbp_1 + 4)).d f!= rdx[1]
                                || not((*(rdi + rbp_1 + 8)).d f== rdx[2]))
                            rdx = &rdx[3]
                            
                            if (rdx == rax_2)
                                goto label_141db71a3
                        
                        int64_t rax_3
                        int64_t rdx_2
                        rdx_2:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, rdx - r12)
                        rdx_3 = rdx_2 s>> 1
                    
                    if (r12 == rax_2 || rdx_3.d + (rdx_3 u>> 0x3f).d == 0xffffffff)
                    label_141db71a3:
                        int64_t rsi_1 = sx.q(r14)
                        r14 = (rsi_1 + 1).d
                        
                        if (r14 s> r9)
                            sub_140638a00(&var_60)
                            r9 = var_54
                            r8 = var_68_1
                            r12 = var_60
                        
                        int64_t rcx_2 = rsi_1 * 3
                        *(r12 + (rcx_2 << 2)) = *(rdi + rbp_1)
                        r12[rcx_2 + 2] = *(rdi + rbp_1 + 8)
                    
                    j += 1
                    rdi += 0xc
                while (j s< *(r8 + r13_1 + 0x38))
                
                i = i_1
                rsi = arg2
            
            rax = *(rsi + 0x410)
            i += 1
            r13_1 += 0xb0
            i_1 = i
        while (i s< *(rax + 0x60))
        
        result = arg1

*(result + 0x4a) &= 0xfe
*(result + 0x49) = 0
*(result + 4) = 0
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax_7 = data_143dbb200
var_54.q = zmm0.q
int32_t var_58_2 = rax_7
int32_t var_4c = rax_7
zmm0.q = zmm0.q
*(result + 0x1c) = zmm0
int64_t var_50
*(result + 0x2c) = var_50
result[0xd] = 0.d
sub_141dd7400(result, arg3)
sub_141dd7d10(result, r12, 0, r14, 0, rsi + 0x1c0)

if (r12 != 0)
    sub_140a74f90(r12)

return result
