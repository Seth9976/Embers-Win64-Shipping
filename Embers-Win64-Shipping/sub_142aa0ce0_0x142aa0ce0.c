// 函数: sub_142aa0ce0
// 地址: 0x142aa0ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d8 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint64_t rdi = zx.q(arg3)
bool cond:0 = arg3 s>= 0

if (arg3 s<= 0)
    goto label_142aa0d37

void* rcx = *(arg1 + 0x28)
void* result

if (rcx == 0)
    cond:0 = arg3 s>= 0
label_142aa0d37:
    
    if (not(cond:0))
        rdi = -1
        
        do
            rdi += 1
        while (arg2[rdi] != 0)
    
    if (rdi.d != 0)
        void* rcx_1 = *(arg1 + 0x58)
        
        if (rcx_1 == 0)
            void* r8_1 = *(arg1 + 0x50)
            int32_t i = 0
            
            if (r8_1 == 0 || *(r8_1 + 8) == 0)
                goto label_142aa0dcf
            
            int32_t r9
            r9.b = arg4 != 0
            void var_1c8
            int512_t zmm2 = sub_142b15620(&var_1c8, arg1, r8_1, r9 + 0x25)
            int32_t var_d0
            
            if (var_d0 == 0)
                sub_142b15d30(&var_1c8)
            label_142aa0dcf:
                int32_t r15_1 = 1
                
                if (arg4 == 0)
                    r15_1 = arg4
                
                int32_t rbp_1 = 0
                
                do
                    uint32_t rdx_2 = zx.d(arg2[sx.q(i)])
                    i += 1
                    
                    if (rdx_2.b s< 0)
                        if (i == rdi.d)
                            rdx_2 = 0xfffd
                        else
                            int32_t rdx_7
                            
                            if (rdx_2 u< 0xe0)
                                if (rdx_2 u< 0xc2)
                                    rdx_2 = 0xfffd
                                else
                                    rdx_7 = rdx_2 & 0x1f
                                label_142aa0eb1:
                                    char rcx_10 = arg2[sx.q(i)] - 0x80
                                    
                                    if (rcx_10 u> 0x3f)
                                        rdx_2 = 0xfffd
                                    else
                                        rdx_2 = rdx_7 << 6 | zx.d(rcx_10)
                                        i += 1
                            else
                                uint64_t rdx_3
                                uint32_t r9_3
                                
                                if (rdx_2 u< 0xf0)
                                    rdx_3 = zx.q(rdx_2) & 0xf
                                    r9_3 = zx.d(arg2[sx.q(i)])
                                    
                                    if (not(test_bit(sx.d((*" 000000000000")[rdx_3]), 
                                            zx.d((r9_3 u>> 5).b))))
                                        rdx_2 = 0xfffd
                                    else
                                        r9_3.b &= 0x3f
                                    label_142aa0e95:
                                        rdx_7 = rdx_3.d << 6 | zx.d(r9_3.b)
                                        i += 1
                                        
                                        if (i != rdi.d)
                                            goto label_142aa0eb1
                                        
                                        rdx_2 = 0xfffd
                                else if (rdx_2 - 0xf0 s> 4)
                                    rdx_2 = 0xfffd
                                else
                                    uint32_t rcx_7 = zx.d(arg2[sx.q(i)])
                                    
                                    if (not(test_bit(sx.d(*((zx.q(rcx_7) u>> 4) + 0x14363c6e8)), 
                                            rdx_2 - 0xf0)))
                                        rdx_2 = 0xfffd
                                    else
                                        rdx_3 = (zx.q(rcx_7.b) & 0x3f) | zx.q((rdx_2 - 0xf0) << 6)
                                        i += 1
                                        
                                        if (i == rdi.d)
                                            rdx_2 = 0xfffd
                                        else
                                            r9_3.b = arg2[sx.q(i)] - 0x80
                                            
                                            if (r9_3.b u<= 0x3f)
                                                goto label_142aa0e95
                                            
                                            rdx_2 = 0xfffd
                    
                    int64_t* rcx_11 = *(arg1 + 0x28)
                    uint64_t rax_6
                    
                    if (rcx_11 == 0)
                        void* rcx_12 = *(arg1 + 0x58)
                        
                        if (rcx_12 != 0)
                            rax_6 = sub_142a9f280(rcx_12, rdx_2)
                        else if (rdx_2 s< 0x110000)
                            rax_6.b = sub_142a9f8f0(arg1, rdx_2).b & 1
                        else
                            rax_6.b = 0
                    else
                        rax_6 = (*(*rcx_11 + 8))(rcx_11, rdx_2)
                    
                    if (r15_1 != sx.d(rax_6.b))
                        break
                    
                    rbp_1 = i
                while (i s< rdi.d)
                
                result = zx.q(rbp_1)
            else
                int32_t result_1 = sub_142b17820(&var_1c8, arg2, rdi.d, arg4, zmm2)
                sub_142b15d30(&var_1c8)
                result = zx.q(result_1)
        else
            result = sub_142b17820(rcx_1, arg2, rdi.d, arg4, arg5)
    else
        result = nullptr
else
    result = sub_142b151c0(rcx, arg2, arg3, arg4) - arg2

__security_check_cookie(rax_1 ^ &var_1f8)
return result
