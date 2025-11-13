// 函数: sub_142617470
// 地址: 0x142617470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
void var_78
int64_t var_48 = __security_cookie ^ &var_78
int64_t r15 = sx.q(arg2)
int32_t* r14 = arg1
int64_t result

if (arg2 s< 0 || r15.d s> *arg1)
label_1426175c6:
    result.b = 0
else
    int32_t result_1 = 0
    int128_t* buffer1 = arg3 + 8
    zmm6 = buffer1[0x20].d
    int32_t rbp_1 = 0
    
    while (true)
        void* buffer2 = &r14[0x1ba + sx.q(rbp_1) * 0x88]
        
        if (not(zmm6.d f!= *(buffer2 + 0x200)) && not((*(buffer2 + 0x204)).d f!= *(buffer1 + 0x204))
                && *(buffer1 + 0x208) == *(buffer2 + 0x208)
                && *(buffer1 + 0x20a) == *(buffer2 + 0x20a)
                && *(buffer1 + 0x20c) == *(buffer2 + 0x20c)
                && *(buffer1 + 0x20d) == *(buffer2 + 0x20d) && memcmp(buffer1, buffer2, 0x100) == 0
                && memcmp(&buffer1[0x10], buffer2 + 0x100, 0x100) == 0)
            *(r15 * 0x328 + *(r14 + 8) + 0x2af) = rbp_1.b
            result.b = 1
            break
        
        rbp_1 += 1
        
        if (rbp_1 s>= 0x10)
            int64_t r8 = sx.q(*r14)
            int64_t var_58 = 0
            int64_t var_50_1 = 0
            
            if (r8 s> 0)
                int64_t rdx_2 = 0
                char* rcx_4 = *(r14 + 8) + 0x2af
                
                do
                    if (rcx_4[0x77] != 0 && rdx_2 != r15)
                        *(&var_58 + zx.q(*rcx_4)) = 1
                    
                    rdx_2 += 1
                    rcx_4 = &rcx_4[0x328]
                while (rdx_2 s< r8)
            
            while (true)
                result = sx.q(result_1)
                
                if (*(&var_58 + result) == 0)
                    void* rcx_9 = &r14[0x1ba + result * 0x88]
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
                    *(r15 * 0x328 + *(r14 + 8) + 0x2af) = result_1.b
                    result.b = 1
                    break
                
                result_1 += 1
                
                if (result_1 s>= 0x10)
                    goto label_1426175c6
            
            break

__security_check_cookie(var_48 ^ &var_78)
return result
