// 函数: sub_140afd730
// 地址: 0x140afd730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rdi = sx.q(arg1[1].d)
uint64_t var_a0 = arg3

if (rdi.d != 0)
    int32_t r13_1 = 0
    int32_t r14_1 = 0
    arg3.b = **arg1 != arg2
    int64_t rsi_1 = 0
    char var_a8_1 = arg3.b
    
    do
        int64_t r10_1 = sx.q(r14_1)
        rsi_1 += 1
        r14_1 += 1
        
        if (rsi_1 s< rdi)
            int64_t* rcx_2 = rsi_1 * 0x50 + *arg1
            
            do
                int32_t rax_3
                rax_3.b = *rcx_2 != arg2
                
                if (zx.d(arg3.b) != rax_3)
                    break
                
                r14_1 += 1
                rsi_1 += 1
                rcx_2 = &rcx_2[0xa]
            while (rsi_1 s< rdi)
        
        int32_t i_1 = r14_1 - r10_1.d
        
        if (arg3.b != 0)
            if (r13_1 != r10_1.d)
                memmove(sx.q(r13_1) * 0x50 + *arg1, r10_1 * 0x50 + *arg1, i_1 * 0x50)
                arg3 = zx.q(var_a8_1)
            
            r13_1 += i_1
        else if (i_1 != 0)
            int64_t* rdi_4 = r10_1 * 0x50 + 0x20 + *arg1
            int32_t i
            
            do
                if (rdi_4[-2] != 0)
                    void* rax_6 = *rdi_4
                    void* rcx_6 = &rdi_4[2]
                    
                    if (rax_6 != 0)
                        rcx_6 = rax_6
                    
                    (*(*rcx_6 + 0x10))(rcx_6)
                
                rdi_4 = &rdi_4[0xa]
                i = i_1
                i_1 -= 1
            while (i != 1)
            arg3 = zx.q(var_a8_1)
        
        arg3.b ^= 1
        var_a8_1 = arg3.b
    while (rsi_1 s< rdi)
    
    arg3 = var_a0
    rdi = zx.q(r13_1)
    arg1[1].d = r13_1

int64_t rax_8 = *arg3
int128_t* result_1 = nullptr

if (rax_8 != 0)
    int64_t* rax_9 = *(arg3 + 0x10)
    int64_t* rcx_7 = arg3 + 0x20
    
    if (rax_9 != 0)
        rcx_7 = rax_9
    
    (**rcx_7)(rcx_7, &result_1)
    rdi = zx.q(arg1[1].d)

int32_t rax_11 = (rdi + 1).d
arg1[1].d = rax_11

if (rax_11 s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int64_t* rcx_11 = sx.q(rdi.d) * 0x50 + *arg1
*rcx_11 = arg2
rcx_11[2] = rax_8
int128_t* result = result_1
rcx_11[4] = result
int128_t var_68
int128_t zmm0 = var_68
result_1 = nullptr
*(rcx_11 + 0x30) = zmm0
int128_t var_58
*(rcx_11 + 0x40) = var_58

if (rcx_11[2] == 0 && rax_8 != 0)
    int128_t* result_2 = result_1
    int128_t* result_3 = &var_68
    
    if (result_2 != 0)
        result_3 = result_2
    
    result = (*(*result_3 + 0x10))(result_3)

__security_check_cookie(rax_1 ^ &var_c8)
return result
