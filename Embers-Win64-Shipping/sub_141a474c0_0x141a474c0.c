// 函数: sub_141a474c0
// 地址: 0x141a474c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
char result_1 = arg1[0xc6].b
arg1[0xc6].b = 1
sub_141a2e830(&arg1[0x36], &arg1[0x1a])
arg1[0x38] = 0

if (arg1[0x39] s<= 0xffffffff)
    sub_1405dadb0(&arg1[0x36], 0)

int32_t rax_2 = arg1[0x3d]
arg1[0x3c] = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405a5410(&arg1[0x3a], 0)

if (arg1[4] != arg4)
    sub_141a3bb00(arg1, arg3)
    int32_t rax_3 = arg1[0x1d]
    arg1[0x1c] = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405dadb0(&arg1[0x1a], 0)
    
    int32_t rax_4 = arg1[0x21]
    arg1[0x20] = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405a5410(&arg1[0x1e], 0)

int128_t* rax_5 = sub_140d3c6e0(arg1)
int128_t* r14 = rax_5
char result

if (rax_5 == 0)
    result = sub_141a3bb00(arg1, arg3)
    arg1[0xc6].b = result_1
else
    if (arg4 == data_143f29fb0)
        goto label_141a475e7
    
    void* rax_6 = sub_141a4c440(*(arg1 + 8) + 0xd0, &arg_20)
    
    if (rax_6 == 0)
        result = sub_141a3bb00(arg1, arg3)
        arg1[0xc6].b = result_1
    else
        r14 = sub_141a52920(rax_6)
    label_141a475e7:
        
        if (r14 == 0)
            result = sub_141a3bb00(arg1, arg3)
            arg1[0xc6].b = result_1
        else
            int64_t* rax_8 = sub_141a695e0(arg1, r14, arg4, arg2)
            
            if (rax_8 != 0)
                int32_t var_168[0x20]
                sub_141a413f0(arg1, &var_168, r14)
                int32_t i_1 = 0
                int32_t (* var_1a8)[0x20] = &var_168
                var_1a8.o = var_1a8.o
                int32_t (* r14_1)[0x20] = var_1a8
                
                for (int32_t i = i_1; i s>= 0; i += 1)
                    if (i s>= (*r14_1)[0x42])
                        break
                    
                    int32_t (* rax_9)[0x20] = r14_1[2][0].q
                    int32_t (* r8_2)[0x20] = r14_1
                    int32_t (* rdx_6)[0x20] = r14_1
                    
                    if (rax_9 != 0)
                        r8_2 = rax_9
                    
                    if (rax_9 != 0)
                        rdx_6 = rax_9
                    
                    sub_141a3ae20(&arg3[1], &(*rdx_6)[sx.q(i) * 8], *(r8_2 + (sx.q(i) << 5) + 8), 
                        arg3)
                
                int64_t* var_198 = arg3
                int32_t (** var_190)[0x20] = nullptr
                int64_t var_188_1 = 0
                sub_141a3bc60(arg1, &var_168, arg3, &var_198)
                sub_141a56ac0(&arg3[1])
                sub_141a482f0(arg1, &var_168, rax_8, arg2, arg3)
                sub_141a39070(&arg1[0x62], arg2, arg3)
                
                if ((arg3[0x64].b & 1) != 0)
                    void* rcx_19 = &arg3[0x5c]
                    
                    if ((arg3[0x64].b & 2) == 0)
                        rcx_19 = *rcx_19
                    
                    (*(*rcx_19 + 0x10))(rcx_19, arg3)
                
                int32_t (** rsi_1)[0x20] = var_190
                int32_t (** rbx_1)[0x20] = rsi_1
                void* r15_1 = rsi_1 + sx.q(var_188_1.d) * 0xc
                
                if (rsi_1 != r15_1)
                    int64_t* r14_2 = var_198
                    
                    do
                        int32_t rax_12 = rbx_1[1].d
                        var_1a8 = *rbx_1
                        int32_t var_1a0_1 = rax_12
                        char var_170_1 = 0
                        void var_180
                        sub_141a651c0(&r14_2[0x1f], r14_2, &var_1a8, &var_180)
                        rbx_1 += 0xc
                    while (rbx_1 != r15_1)
                
                int32_t rax_13 = var_188_1:4.d
                
                if (rax_13 s< 0)
                    var_188_1.d = 0
                    
                    if (rax_13 != 0)
                        sub_14083ad30(&var_190, 0)
                        rsi_1 = var_190
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
                
                int64_t var_68
                
                if (var_68 != 0)
                    sub_140a74f90(var_68)
                
                result = result_1
                arg1[0xc6].b = result
            else
                sub_141a3bb00(arg1, arg3)
                result = result_1
                arg1[0xc6].b = result

int64_t rcx_26 = *(arg2 + 0x38)

if (rcx_26 != 0)
    result = sub_140a74f90(rcx_26)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
