// 函数: sub_1428b5b20
// 地址: 0x1428b5b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x128)
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t* rbp = *(arg1 + 0x70)
void* i_3 = *(rbp + 0xc8)
int64_t result

if (arg4 == i_3 + 0x10)
    void* i = nullptr
    void var_f8
    void* r13_1 = &var_f8 + (zx.q((neg.q(&var_f8)).d) & 0xf)
    rbp[8] = 0
    char* var_110_1 = r13_1 + 0x30
    char* rbx_1 = r13_1 + 0x40
    int64_t var_108_1
    void* rcx_10
    void* r8_5
    
    if (i_3 u> 0x40)
        var_108_1 = 0x40
        sub_142902860(r13_1, &data_143507960, 0x40, rbp, &rbp[8])
        sub_142902eb0(&rbp[0x34], r13_1)
        rbp[8] = 1
        rbp[0x1c] = 0
        sub_142903010(&rbp[0x34], &rbp[0x25], 0x10)
        *(rbp + 0xa8) = 0xd
        *(rbp + 0xb0) = i_3
        var_110_1 = rbx_1
        
        if (*(arg1 + 0x10) == 0)
            sub_142903010(&rbp[0x34], arg3, i_3)
            sub_142902860(arg2, arg3, i_3, rbp, &rbp[8])
        else
            sub_142902860(arg2, arg3, i_3, rbp, &rbp[8])
            sub_142903010(&rbp[0x34], arg2, i_3)
        
        sub_142903010(&rbp[0x34], &data_143507960, zx.q((neg.q(i_3)).d) & 0xf)
        r8_5 = 0x10
        rcx_10 = r13_1
        i = i_3
    else
        var_108_1 = 0x80
        sub_142902860(r13_1, &data_143507960, 0x80, rbp, &rbp[8])
        sub_142902eb0(&rbp[0x34], r13_1)
        int128_t zmm0_1 = *(rbp + 0x94)
        rbp[0x1c] = 0
        *(r13_1 + 0x30) = zmm0_1
        *(rbp + 0xa8) = 0xd
        *(rbp + 0xb0) = i_3
        
        if (*(arg1 + 0x10) == 0)
            if (i_3 != 0)
                if (i_3 u>= 0x40)
                    void* rcx_5 = i_3 - 1 + rbx_1
                    void* rdx_4 = arg2 - 1 + i_3
                    
                    if (rbx_1 u> rdx_4 || rcx_5 u< arg2)
                        void* rax_10 = arg3 - 1 + i_3
                        
                        if ((rbx_1 u> rax_10 || rcx_5 u< arg3) && (arg2 u> rax_10 || rdx_4 u< arg3))
                            int64_t rax_12 = arg3 - rbx_1
                            char* rcx_6 = rbx_1
                            void* rdx_6 = arg2 - rbx_1
                            
                            do
                                zmm0_1 = *rcx_6
                                void* rax_13 = rcx_6 + rdx_6
                                i += 0x40
                                rcx_6 = &rcx_6[0x40]
                                int128_t zmm2 = *(rax_13 + arg3 - arg2)
                                int128_t zmm1_1 = zmm2 ^ zmm0_1
                                *(rcx_6 - 0x40) = zmm2
                                zmm0_1 = *(rcx_6 - 0x30)
                                zmm2 = *(rax_12 + 0x20 + rcx_6 - 0x40)
                                *rax_13 = zmm1_1
                                zmm1_1 = *(rax_12 + 0x10 + rcx_6 - 0x40)
                                *(rdx_6 + rcx_6 - 0x30) = zmm0_1 ^ zmm1_1
                                *(rcx_6 - 0x30) = zmm1_1
                                zmm1_1 = *(rax_12 + 0x30 + rcx_6 - 0x40)
                                *(rdx_6 + rcx_6 - 0x20) = *(rcx_6 - 0x20) ^ zmm2
                                *(rcx_6 - 0x20) = zmm2
                                zmm0_1 = *(rcx_6 - 0x10)
                                *(rcx_6 - 0x10) = zmm1_1
                                *(rdx_6 + rcx_6 - 0x10) = zmm0_1 ^ zmm1_1
                            while (i u< (i_3 & 0xffffffffffffffc0))
                
                if (i u< i_3)
                    void* r8_3 = r13_1 + 0x40 + i
                    void* i_4 = i_3 - i
                    i = i_3
                    void* i_1
                    
                    do
                        char rax_14 = *r8_3
                        char* rcx_7 = r8_3 + arg2 - rbx_1
                        char rdx_7 = *(rcx_7 + arg3 - arg2)
                        *r8_3 = rdx_7
                        r8_3 += 1
                        *rcx_7 = rax_14 ^ rdx_7
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
        else if (i_3 != 0)
            void* rcx_3 = arg3 - rbx_1
            i = i_3
            void* rdx_2 = arg2 - rbx_1
            void* i_2
            
            do
                *rbx_1 ^= *(rcx_3 + rbx_1)
                *(rdx_2 + rbx_1) = *rbx_1
                rbx_1 = &rbx_1[1]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        uint64_t rbx_4 = zx.q((neg.q(i)).d) & 0xf
        memset(r13_1 + 0x40 + i, 0, zx.q(rbx_4.d))
        void* rax_15 = rbx_4 + i
        r8_5 = rax_15 + 0x20
        rcx_10 = rax_15 + r13_1
    
    void* rbx_5 = arg2 + i
    *(rcx_10 + 0x40) = *(rbp + 0xa8)
    sub_142903010(&rbp[0x34], var_110_1, r8_5)
    sub_1428b8960(r13_1, var_108_1)
    char* rdx_15 = &rbp[0x21]
    
    if (*(arg1 + 0x10) == 0)
        rdx_15 = var_110_1
    
    sub_142902e10(&rbp[0x34], rdx_15)
    *(rbp + 0xc8) = -1
    
    if (*(arg1 + 0x10) == 0)
        if (sub_1428bc500(var_110_1, arg3 + i, 0x10) == 0)
            result = arg4
        else
            memset(rbx_5 - arg4 + 0x10, 0, arg4 - 0x10)
            result = 0xffffffff
    else
        *rbx_5 = *(rbp + 0x84)
        result = arg4
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_148)
return result
