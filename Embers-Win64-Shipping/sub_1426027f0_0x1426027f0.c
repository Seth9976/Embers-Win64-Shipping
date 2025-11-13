// 函数: sub_1426027f0
// 地址: 0x1426027f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t r10 = sx.q(*arg1)
int32_t result_1 = 0
uint64_t result

if (r10.d s<= 0)
label_142602856:
    result = 0xffffffff
else
    void* rcx = *(arg1 + 8)
    int64_t rdx = 0
    char* rax_2 = rcx + 0x326
    
    while (*rax_2 != 0)
        result_1 += 1
        rdx += 1
        rax_2 = &rax_2[0x328]
        
        if (rdx s>= r10)
            goto label_142602856_2
    
    if (result_1 == 0xffffffff)
    label_142602856_1:
        result = 0xffffffff
    else
        int64_t r15_1 = sx.q(result_1) * 0x328
        void* rsi_1 = rcx + r15_1
        
        if (result_1 s< 0 || result_1 s> r10.d)
        label_142602856_2:
            result = 0xffffffff
        else
            int128_t* buffer1 = arg4 + 8
            int32_t rbp_1 = 0
            zmm6 = buffer1[0x20].d
            int64_t var_60
            int32_t var_58
            
            while (true)
                void* buffer2 = &arg1[0x1ba + sx.q(rbp_1) * 0x88]
                
                if (not(zmm6.d f!= *(buffer2 + 0x200))
                        && not((*(buffer2 + 0x204)).d f!= *(buffer1 + 0x204))
                        && *(buffer1 + 0x208) == *(buffer2 + 0x208)
                        && *(buffer1 + 0x20a) == *(buffer2 + 0x20a)
                        && *(buffer1 + 0x20c) == *(buffer2 + 0x20c)
                        && *(buffer1 + 0x20d) == *(buffer2 + 0x20d)
                        && memcmp(buffer1, buffer2, 0x100) == 0
                        && memcmp(&buffer1[0x10], buffer2 + 0x100, 0x100) == 0)
                    *(rsi_1 + 0x2af) = rbp_1.b
                    break
                
                rbp_1 += 1
                
                if (rbp_1 s>= 0x10)
                    int64_t r8 = sx.q(*arg1)
                    var_60 = 0
                    var_58 = 0
                    
                    if (r8 s> 0)
                        int64_t rdx_3 = 0
                        char* rcx_7 = *(arg1 + 8) + 0x2af
                        
                        do
                            if (rcx_7[0x77] != 0 && rdx_3 != sx.q(result_1))
                                *(&var_60 + zx.q(*rcx_7)) = 1
                            
                            rdx_3 += 1
                            rcx_7 = &rcx_7[0x328]
                        while (rdx_3 s< r8)
                    
                    int32_t rdx_4 = 0
                    
                    while (true)
                        int64_t rax_12 = sx.q(rdx_4)
                        
                        if (*(&var_60 + rax_12) == 0)
                            void* rcx_9 = &arg1[0x1ba + rax_12 * 0x88]
                            int64_t i_1 = 4
                            int64_t i
                            
                            do
                                rcx_9 += 0x80
                                int128_t zmm0 = *buffer1
                                buffer1 = &buffer1[8]
                                *(rcx_9 - 0x80) = zmm0
                                *(rcx_9 - 0x70) = buffer1[-7]
                                *(rcx_9 - 0x60) = buffer1[-6]
                                *(rcx_9 - 0x50) = buffer1[-5]
                                *(rcx_9 - 0x40) = buffer1[-4]
                                *(rcx_9 - 0x30) = buffer1[-3]
                                *(rcx_9 - 0x20) = buffer1[-2]
                                *(rcx_9 - 0x10) = buffer1[-1]
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            *rcx_9 = *buffer1
                            *(*(arg1 + 8) + r15_1 + 0x2af) = rdx_4.b
                            break
                        
                        rdx_4 += 1
                        
                        if (rdx_4 s>= 0x10)
                            goto label_142602856_2
                    
                    break
            
            int64_t* rcx_10 = arg3[1]
            *(*(arg1 + 0x2b18) + 8) = rcx_10
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x10))()
            
            int64_t var_78
            sub_14260acd0(*(arg1 + 0x2b18), arg2, &arg1[0x1b5], 
                &arg1[0x1b8 + zx.q(*(rsi_1 + 0x2af)) * 0x88], &var_78, &var_60, nullptr)
            int64_t rbp_2 = var_78
            sub_142633800(rsi_1, rbp_2, &var_60)
            sub_1426337c0(rsi_1 + 0x58)
            void* rcx_14
            
            if (result_1 s<= *arg1)
                void* rdi_2 = *(arg1 + 8)
                *(rdi_2 + r15_1 + 0x268) = *arg3
                int64_t* rbx_1 = arg3[2]
                rcx_14 = rdi_2 + 0x270 + r15_1
                var_78 = arg3[1]
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                if (&var_78 != rcx_14)
                    var_78.o = *rcx_14
                    *rcx_14 = var_78.o
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                *(rdi_2 + r15_1 + 0x280) = arg3[3].d
                *(rdi_2 + r15_1 + 0x284) = *(arg3 + 0x1c)
                *(rdi_2 + r15_1 + 0x288) = arg3[4].d
                *(rdi_2 + r15_1 + 0x28c) = *(arg3 + 0x24)
                *(rdi_2 + r15_1 + 0x290) = arg3[5].d
                *(rdi_2 + r15_1 + 0x294) = *(arg3 + 0x2c)
                *(rdi_2 + r15_1 + 0x298) = arg3[6].d
                *(rdi_2 + r15_1 + 0x29c) = *(arg3 + 0x34)
                *(rdi_2 + r15_1 + 0x2a0) = arg3[7].d
                *(rdi_2 + r15_1 + 0x2a4) = *(arg3 + 0x3c)
                *(rdi_2 + r15_1 + 0x2a8) = arg3[8].d
                *(rdi_2 + r15_1 + 0x2ac) = *(arg3 + 0x44)
                *(rdi_2 + r15_1 + 0x2ae) = *(arg3 + 0x46)
                *(rdi_2 + r15_1 + 0x2af) = *(arg3 + 0x47)
            
            *(rsi_1 + 0x1f0) = 0
            *(rsi_1 + 0x304) = 0
            result = zx.q(result_1)
            *(rsi_1 + 0x224) = 0
            rcx_14.b = rbp_2 != 0
            __builtin_memset(rsi_1 + 0x244, 0, 0x24)
            *(rsi_1 + 0x22c) = var_60.d.d
            *(rsi_1 + 0x230) = var_60:4.d.d
            *(rsi_1 + 0x234) = var_58.d
            *(rsi_1 + 0x228) = 0
            *(rsi_1 + 0x327) = rcx_14.b
            *(rsi_1 + 0x325) = 0x100

__security_check_cookie(rax_1 ^ &var_b8)
return result
