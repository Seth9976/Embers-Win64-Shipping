// 函数: sub_141a2cc80
// 地址: 0x141a2cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_38 = __security_cookie ^ &var_38
uint32_t r13 = zx.d(*(arg2 + 0xb6))
void* rdi = arg3
int64_t result

if (*(arg2 + 0xb8) != 0xffff || *(arg2 + 0xb4) u> 1)
    if (r13 != 0)
        uint64_t rax_2 = zx.q(r13 + 0xf)
        int64_t rax_3 = rax_2 + 0xf
        
        if (rax_3 u<= zx.q(rax_2.d))
            rax_3 = 0xffffffffffffff0
        
        int64_t rax_4 = rax_3 & 0xfffffffffffffff0
        __chkstk(rax_4)
        void var_58
        rdi = (&var_58 - rax_4 + 0x2f) & 0xfffffffffffffff0
    else
        rdi = nullptr
    
    int64_t* i = *(arg2 + 0x70)
    __saved_rsi_1.b = 1
    
    for (; i != 0; i = i[0xb])
        int32_t rdx_1 = i[7].d * *(i + 0x3c)
        int64_t rcx_1 = sx.q(*(i + 0x4c))
        
        if (rcx_1.d + rdx_1 s<= r13)
            void* rcx_2 = rcx_1 + rdi
            
            if (not(test_bit(zx.q(i[8].d), 9)))
                (*(*i + 0xf0))(i, rcx_2)
            else
                memset(rcx_2, 0, sx.q(rdx_1))
            
            result = i[8]
            
            if (result.b s< 0 && not(test_bit(result, 0xa)) && __saved_rsi_1.b != 0)
                if (*(i + 0x3c) != 8)
                    goto label_141a2cdef
                
                void* rcx_5 = sx.q(*(i + 0x4c)) + rdi
                
                if (rcx_5 != arg3)
                    if (not(test_bit(result, 0x1e)))
                        i[7].d
                        (*(*i + 0xb0))(nop)
                    else
                        memcpy(rcx_5, arg3, i[7].d << 3)
            
            __saved_rsi_1.b = 0

result = (*(*arg1 + 0x210))(arg1, arg2, rdi)
label_141a2cdef:
__security_check_cookie(var_38 ^ &var_38)
return result
