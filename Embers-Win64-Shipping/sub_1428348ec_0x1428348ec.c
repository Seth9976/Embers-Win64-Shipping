// 函数: sub_1428348ec
// 地址: 0x1428348ec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t rsi = arg5
int32_t rdi = arg4
int32_t var_26c = rsi
int32_t r15 = arg3
void* rbp = arg2
void* rax_2 = sub_140963350(arg1)
int64_t* rax_3 = sub_1405f7040(arg1)
int64_t result

while (true)
    if (rax_3 == 0)
        result = 0
        break
    
    if (sub_142835504(rax_3, rdi, rsi) != 0)
        void* rax_5 = sub_1405948b0(rax_3)
        void* rax_6 = sub_14082fb80(rax_5)
        int64_t* rax_7 = sub_1408d7580(rax_5)
        
        while (true)
            if (rax_7 == 0)
                goto label_142834bfd
            
            void* rax_8 = sub_1405948b0(rax_7)
            
            if (sub_14283586c(rax_8) == 0 && rax_8 != 0 && sub_142835504(rax_7, rdi, rsi) != 0)
                int32_t* rax_11 = sub_14283195c(rbp, rax_8, r15, rdi, rsi)
                
                if (rax_11 == 0)
                    result = 0xffffffff
                    break
                
                int32_t i = 0
                void* rbx_3 = &rax_7[6]
                void* rsi_2 = rax_6 - rax_7
                
                do
                    if (*(rbx_3 - 8) != 0)
                        sub_142838e24(rax_11, i, _mm_cvtpd_ps(zx.o(*rbx_3)).d)
                    else if (rax_6 != 0 && *(rbx_3 + rsi_2 - 8) != 0)
                        sub_142838e24(rax_11, i, _mm_cvtpd_ps(zx.o(*(rbx_3 + rsi_2))).d)
                    
                    i += 1
                    rbx_3 += 0x20
                while (i s< 0x3c)
                
                int32_t rbp_1 = 0
                int64_t rbx_4 = 0
                int64_t var_258[0x40]
                
                if (rax_6 != 0)
                    void* i_1 = *(rax_6 + 0x7a8)
                    
                    while (i_1 != 0)
                        var_258[rbx_4] = i_1
                        rbp_1 += 1
                        i_1 = *(i_1 + 0x10)
                        rbx_4 += 1
                
                char* i_2 = rax_7[0xf5]
                
                while (i_2 != 0)
                    int64_t rsi_3 = 0
                    
                    if (rbx_4 s> 0)
                        do
                            char* rdx_4 = var_258[rsi_3]
                            
                            if (rdx_4 != 0 && sub_14283842c(i_2, rdx_4) != 0)
                                var_258[rsi_3] = 0
                            
                            rsi_3 += 1
                        while (rsi_3 s< rbx_4)
                    
                    var_258[rbx_4] = i_2
                    rbp_1 += 1
                    i_2 = *(i_2 + 0x10)
                    rbx_4 += 1
                
                int64_t i_3 = 0
                
                if (rbp_1 s> 0)
                    do
                        char* rdx_5 = var_258[i_3]
                        
                        if (rdx_5 != 0)
                            sub_142838550(rax_11, rdx_5, 0)
                        
                        i_3 += 1
                    while (i_3 s< sx.q(rbp_1))
                
                void* rax_13 = rax_2
                void* rdi_2 = &rax_3[6]
                uint64_t rbx_5 = 0
                void* rsi_5 = rax_13 - rax_3
                
                do
                    if (rbx_5.d u<= 0x3a)
                        rax_13 = rax_2
                    
                    if (rbx_5.d u> 0x3a || not(test_bit(0x644e0000000101f, rbx_5)))
                        if (*(rdi_2 - 8) != 0)
                            sub_142838e04(rax_11, rbx_5.d, _mm_cvtpd_ps(zx.o(*rdi_2)).d)
                            rax_13 = rax_2
                        else if (rax_13 != 0 && *(rsi_5 + rdi_2 - 8) != 0)
                            sub_142838e04(rax_11, rbx_5.d, _mm_cvtpd_ps(zx.o(*(rdi_2 + rsi_5))).d)
                            rax_13 = rax_2
                    
                    rbx_5 = zx.q(rbx_5.d + 1)
                    rdi_2 += 0x20
                while (rbx_5.d s< 0x3c)
                
                int32_t rbp_2 = 0
                int64_t rbx_6 = 0
                
                if (rax_13 != 0)
                    void* i_4 = *(rax_13 + 0x7a8)
                    
                    while (i_4 != 0)
                        var_258[rbx_6] = i_4
                        rbp_2 += 1
                        i_4 = *(i_4 + 0x10)
                        rbx_6 += 1
                
                char* i_5 = rax_3[0xf5]
                
                while (i_5 != 0)
                    int64_t rsi_6 = 0
                    
                    if (rbx_6 s> 0)
                        do
                            char* rdx_7 = var_258[rsi_6]
                            
                            if (rdx_7 != 0 && sub_14283842c(i_5, rdx_7) != 0)
                                var_258[rsi_6] = 0
                            
                            rsi_6 += 1
                        while (rsi_6 s< rbx_6)
                    
                    var_258[rbx_6] = i_5
                    rbp_2 += 1
                    i_5 = *(i_5 + 0x10)
                    rbx_6 += 1
                
                int64_t i_6 = 0
                
                if (rbp_2 s> 0)
                    do
                        char* rdx_8 = var_258[i_6]
                        
                        if (rdx_8 != 0)
                            double zmm0_1 = *(rdx_8 + 8)
                            zmm0_1 - 0.0
                            
                            if (is_unordered.q(zmm0_1, 0.0) || not(zmm0_1 == 0.0))
                                sub_142838550(rax_11, rdx_8, 1)
                        
                        i_6 += 1
                    while (i_6 s< sx.q(rbp_2))
                
                rbp = arg2
                sub_142833050(rbp, rax_11)
                rdi = arg4
                rsi = var_26c
                r15 = arg3
            
            rax_7 = sub_14183e350(rax_7)
        
        break
    
label_142834bfd:
    rax_3 = sub_14183e350(rax_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
