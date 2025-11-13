// 函数: sub_140e3b960
// 地址: 0x140e3b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x35e0)
int64_t var_35e8 = -2
void var_3618
int64_t rax_1 = __security_cookie ^ &var_3618

if (arg4 != 0)
    *arg4 = 0

int64_t result

if (arg4 == 0 || arg1 == 0 || arg2 == 0 || arg3 == 0 || arg6 == 0 || ((arg6 - 1) & 0xfffffffc) != 0
        || arg6 == 2)
    result = 0
else
    struct _SETJMP_FLOAT128 var_35d8[0x10]
    int512_t zmm1 = sub_140e309b0(&var_35d8, arg1, arg5)
    int32_t var_58
    int64_t result_1
    
    if (var_58 != 0)
        result_1 = 0
    else
        int32_t i_6
        int64_t i_5 = sx.q(i_6)
        *arg2 = i_5.d
        int32_t var_34cc
        *arg3 = var_34cc
        int32_t var_340c
        *arg4 = var_340c
        int32_t rax_4
        int512_t zmm1_1
        rax_4, zmm1_1 = sub_140e34a40(&var_35d8, zmm1)
        
        if (rax_4 != 0)
            result_1 = 0
        else
            uint32_t count = i_5.d * arg6
            int64_t result_2 = sub_140a82f30(sx.q(count * var_34cc), 0)
            result_1 = result_2
            
            if (result_2 == 0)
                result_1 = 0
            else
                int32_t rsi_1 = 0
                
                if (var_34cc s> 0)
                    int32_t rdi_1 = 0
                    
                    while (true)
                        void* var_35f8 = nullptr
                        void var_35f0
                        int32_t rax_7
                        rax_7, zmm1_1 = sub_140e3a890(&var_35d8, &var_35f8, &var_35f0, zmm1_1)
                        
                        if (rax_7 != 0)
                            sub_140a74f90(result_1)
                            break
                        
                        char* rax_9 = sx.q(rdi_1) + result_1
                        int32_t rcx_4 = var_340c
                        
                        if (arg6 == 4)
                            if (rcx_4 != 3)
                                goto label_140e3bab8
                            
                            memcpy(rax_9, var_35f8, count)
                        else if (arg6 != 1)
                        label_140e3bab8:
                            
                            if (rcx_4 != 1)
                                goto label_140e3bb53
                            
                            char* rdx_2 = nullptr
                            
                            if (arg6 != 3)
                                if (i_5 s> 0)
                                    void* r8_3 = var_35f8
                                    
                                    do
                                        char rcx_7 = *(rdx_2 + r8_3)
                                        *rax_9 = rcx_7
                                        rax_9[1] = rcx_7
                                        rax_9[2] = rcx_7
                                        rax_9[3] = 0xff
                                        rax_9 = &rax_9[4]
                                        rdx_2 = &rdx_2[1]
                                    while (rdx_2 s< i_5)
                            else if (i_5 s> 0)
                                void* r8_1 = var_35f8
                                
                                do
                                    char rcx_5 = *(rdx_2 + r8_1)
                                    *rax_9 = rcx_5
                                    rax_9[1] = rcx_5
                                    rax_9[2] = rcx_5
                                    rax_9 = &rax_9[3]
                                    rdx_2 = &rdx_2[1]
                                while (rdx_2 s< i_5)
                        else
                            rcx_4 = var_340c
                            
                            if (rcx_4 != arg6)
                            label_140e3bb53:
                                
                                if (rcx_4 == 3)
                                    if (arg6 == 1)
                                        char* r11_1 = nullptr
                                        
                                        if (i_5 s> 0)
                                            void* r10_2 = var_35f8 + 2
                                            
                                            do
                                                *(r11_1 + rax_9) = ((zx.d(*(r10_2 - 1)) * 0x9646
                                                    + 0x8000 + zx.d(*(r10_2 - 2)) * 0x4c8b
                                                    + zx.d(*r10_2) * 0x1d2f) u>> 0x10).b
                                                r11_1 = &r11_1[1]
                                                r10_2 += 4
                                            while (r11_1 s< i_5)
                                    else if (i_5 s> 0)
                                        void* rdx_10 = var_35f8 + 2
                                        int64_t i_3 = i_5
                                        int64_t i
                                        
                                        do
                                            *rax_9 = *(rdx_10 - 2)
                                            rax_9[1] = *(rdx_10 - 1)
                                            rax_9[2] = *rdx_10
                                            rax_9 = &rax_9[3]
                                            rdx_10 += 4
                                            i = i_3
                                            i_3 -= 1
                                        while (i != 1)
                            else
                                memcpy(rax_9, var_35f8, count)
                        
                        rsi_1 += 1
                        rdi_1 += count
                        
                        if (rsi_1 s>= var_34cc)
                            goto label_140e3bc1c
                    
                    result_1 = 0
    
label_140e3bc1c:
    int64_t var_34c8_1 = 0
    int64_t* i_4
    int64_t* i_2 = i_4
    
    if (i_2 != 0)
        int64_t* i_1
        
        do
            i_1 = *i_2
            sub_140a74f90(i_2)
            i_2 = i_1
        while (i_1 != 0)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_3618)
return result
