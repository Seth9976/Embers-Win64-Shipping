// 函数: sub_142c59660
// 地址: 0x142c59660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rsi = 0
*arg4 = 0
void var_a8
void* result
void var_68

if (sub_142c70d80(2, arg2, &var_a8) s<= 0)
    if (sub_142c70d80(0x17, arg2, &var_68) s<= 0)
        int32_t rcx = arg1[0x89].d
        
        if (rcx == 1)
            rsi = 2
        else
            if (rcx == 2)
                rsi = rcx + 0x15
            
            if (sub_142c5a8f0() == 0)
                rsi = 2
        
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x30)
        int64_t var_90
        var_90.d = *(arg1 + 0xbc)
        var_98:4.d = rsi
        void var_58
        int512_t zmm2 = sub_142c564b0(&var_58, 0xc, "%d", zx.q(arg3), arg5)
        
        if (sub_142c59c40(arg1, arg2, arg3, &var_98) == 0)
            char* rax_8
            int512_t zmm2_1
            rax_8, zmm2_1 = sub_142c55790(arg1, *_errno(), zmm2)
            int512_t zmm2_2 =
                sub_142c64850(*arg1, "init_resolve_thread() failed for %s; %s\n", arg2, zmm2_1)
            void* result_1
            
            if (sub_142c71120(arg2, &var_58, &var_98, &result_1) == 0)
                result = result_1
            else
                char* rax_11
                int512_t zmm2_3
                rax_11, zmm2_3 = sub_142c55790(arg1, WSAGetLastError(), zmm2_2)
                char* var_b8_1 = rax_11
                sub_142c64850(*arg1, "getaddrinfo() failed for %s:%d; %s\n", arg2, zmm2_3)
                result = nullptr
        else
            *arg4 = 1
            result = nullptr
    else
        result = sub_142c714a0(0x17, &var_68, arg2, arg3.w)
else
    result = sub_142c714a0(2, &var_a8, arg2, arg3.w)
__security_check_cookie(rax_1 ^ &var_d8)
return result
