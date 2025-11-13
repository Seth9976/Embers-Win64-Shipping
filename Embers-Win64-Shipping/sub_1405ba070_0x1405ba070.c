// 函数: sub_1405ba070
// 地址: 0x1405ba070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rbx = arg4.d
void* rax_2 = sub_141d79720()
void* const r14 = rax_2
void* rax_3
int64_t rax_4
void* rdx

if (rax_2 != 0)
    rax_3 = sub_141d828c0()
    rdx = *(r14 + 0x10)
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rax_2 == 0 || rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    r14 = nullptr

int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0

if (arg2 != 0)
    sub_140d3a3a0(&var_c8, arg2)
    var_c8.q = var_c8.q

int32_t result_1
sub_1405ba7b0(arg1 + 8, &result_1, &var_c8)
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    int64_t rcx_4 = result << 6
    void* rcx_5 = rcx_4 + *(arg1 + 8)
    
    if (rcx_4 != neg.q(*(arg1 + 8)) && rcx_5 != -8)
        int32_t i_2 = *(rcx_5 + 0x30)
        int32_t r8_2 = 0
        void* r11_1 = *(rcx_5 + 0x28)
        int32_t i = i_2
        int32_t r9 = arg_20:4.d
        
        if (i_2 s> 0)
            do
                int32_t rcx_8 = i & 0x80000001
                
                if (rcx_8 s< 0)
                    rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(i)
                int32_t i_1 = (temp6_1 - temp5_1) s>> 1
                i = i_1
                int32_t rax_10 = i_1 + r8_2
                int32_t* rcx_11 = sx.q(rax_10) * 0x1c
                int32_t rax_12 = *(rcx_11 + r11_1)
                result = zx.q(rax_12 - rbx)
                
                if (rax_12 == rbx)
                    result = zx.q(*(rcx_11 + r11_1 + 4) - r9)
                
                if (result.d s< 0)
                    r8_2 = rax_10 + rcx_8
            while (i s> 0)
        
        if (r8_2 s< i_2)
            int64_t rcx_12 = sx.q(r8_2)
            result = rcx_12 * 0x1c
            int32_t rbx_1 = rbx - *(result + r11_1)
            
            if (rbx == *(result + r11_1))
                rbx_1 = r9 - *(result + r11_1 + 4)
            
            if (rbx_1 s>= 0 && r8_2 != 0xffffffff)
                result = rcx_12 * 0x1c
                void* rsi_2 = r11_1 + 8 + result
                
                if (r11_1 + 8 != neg.q(result))
                    int64_t var_a8
                    __builtin_memset(&var_a8, 0, 0x2c)
                    int32_t var_7c_1 = 0x80
                    int32_t var_78_1 = 0xffffffff
                    int32_t var_74_1 = 0
                    int64_t var_68_1 = 0
                    int32_t var_60_1 = 0
                    sub_140b58170(&var_c8, "Element", 1)
                    int64_t rbx_2 = *(arg2 + 0x18)
                    int32_t var_b8
                    sub_1405b3620(&var_a8, &var_b8)
                    int64_t rax_14 = var_c8.q
                    int64_t* var_b0
                    var_b0[1] = rbx_2
                    *var_b0 = rax_14
                    var_b0[2].d = 0xffffffff
                    sub_1405b8300(&var_a8, &result_1, 
                        (rax_14 u>> 0x20).d + sub_140b5ead0(rax_14.d), var_b0, var_b8, nullptr)
                    void* rsi_3
                    
                    if (*(rsi_2 + 8) == 0)
                        rsi_3 = &arg_20
                    else
                        rsi_3 = rsi_2 + 0xc
                    
                    int128_t zmm2_1 = sub_140b58170(&var_c8, "Pass", 1)
                    sub_1405b3620(&var_a8, &var_b8)
                    *var_b0 = var_c8.q
                    var_b0[1] = *rsi_3
                    var_b0[2].d = 0xffffffff
                    int64_t rbx_5 = *var_b0
                    sub_1405b8300(&var_a8, &result_1, (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d), 
                        var_b0, var_b8, nullptr)
                    sub_141d7dd90(r14, arg3, &var_a8, arg5, zmm2_1)
                    result = sub_1405ae080(&var_a8)

__security_check_cookie(rax_1 ^ &var_f8)
return result
