// 函数: sub_1421edcd0
// 地址: 0x1421edcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* r14 = arg2
int32_t* rax_2 = sub_1421b7c40(r14, arg1)
int32_t* rsi = rax_2
char result = sub_140d3e110(rax_2)

if (result != 0)
    uint64_t rax_3 = sub_140d3c6e0(rsi)
    int64_t r13_1 = r14[0x1e]
    
    if (r13_1 != 0 && *(arg1 + 0x30) == 1)
        int32_t rcx_3 = r14[0x23].d
        int32_t rdx_1 = *(r14 + 0x114)
        int64_t rax_4 = r14[0x1f]
        int64_t r15
        r15.b = 0
        int32_t var_c8_1 = rdx_1
        int64_t rbp_1 = sx.q(rcx_3 - 1)
        
        if (rcx_3 - 1 s>= 0)
            int64_t rcx_5 = sx.q(arg3)
            int64_t var_c0_1 = rcx_5
            int64_t temp1_1
            
            do
                void* rdi_3 = zx.q(zx.d(*(rax_4 + (rbp_1 << 1))) * rdx_1) + r13_1
                
                if ((*(rdi_3 + 0x5c) & 0x4000000) == 0 && rax_3 != 0 && *(rax_3 + 0x430) != 0)
                    void* var_b0
                    int128_t var_98
                    
                    if (sub_1421f4330(arg1, rsi, rax_3, *(rcx_5 + rdi_3), &var_b0, &var_98) != 0)
                        int32_t rax_6 = sub_141f5e0e0(rax_3, *(var_b0 + 0x30))
                        
                        if (rax_6 != 0xffffffff)
                            if (sub_141f6c5f0(rax_3, rax_6) != 0)
                                *(rdi_3 + 0xc) = 0x3f8ccccd
                                r15.b = 1
                            else
                                void var_88
                                int128_t zmm0_1 = sub_141f5e780(rax_3, &var_88, rax_6)[2]
                                bool cond:1_1 = zmm0_1.d f!= data_143dbb1f8
                                var_98 = zmm0_1
                                
                                if (not(cond:1_1) && not(var_98:4.d.d f!= data_143dbb1fc)
                                        && not(var_98:8.d.d f!= data_143dbb200))
                                    *(rdi_3 + 0xc) = 0x3f8ccccd
                                    r15.b = 1
                        
                        rsi = rax_2
                    
                    rcx_5 = var_c0_1
                    rdx_1 = var_c8_1
                
                temp1_1 = rbp_1
                rbp_1 -= 1
            while (temp1_1 - 1 s>= 0)
            r14 = arg2
            
            if (r15.b == 1)
                (*(*r14 + 0xe0))(r14)
    
    result = sub_1421f8d70(arg1, rsi, rax_3, sub_1421b85d0(arg1, r14))

__security_check_cookie(rax_1 ^ &var_f8)
return result
