// 函数: sub_14177c490
// 地址: 0x14177c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* result = sub_140865c40(arg1 + 0x38, &arg_8, arg2)

if (*result == 0xffffffff)
    int32_t r14_1 = *(arg1 + 0x10)
    int32_t rax = r14_1
    
    if (*(arg1 + 0xc0) s> 0)
        int64_t r8_1 = sx.q(*(arg1 + 0xc0))
        r14_1 = *(*(arg1 + 0xb8) + (r8_1 << 2) - 4)
        *(arg1 + 0xc0) = (r8_1 - 1).d
        sub_1405dac90(arg1 + 0xb8)
        rax = *(arg1 + 0x10)
    
    if (rax s<= r14_1)
        int64_t rdi_1 = sx.q(*(arg1 + 0x10))
        
        if (r14_1 + 1 s> rdi_1.d)
            *(arg1 + 0x10) = r14_1 + 1
            int32_t i_1 = r14_1 + 1 - rdi_1.d
            
            if (r14_1 + 1 s> *(arg1 + 0x14))
                sub_1405c4e40(arg1 + 8)
            
            void* rax_5 = (rdi_1 << 5) + *(arg1 + 8)
            
            if (i_1 != 0)
                int32_t i
                
                do
                    __builtin_memset(rax_5, 0, 0x18)
                    *(rax_5 + 0x18) = 0xffffffff
                    rax_5 += 0x20
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        else if (r14_1 + 1 s< rdi_1.d)
            sub_14177d850(arg1 + 8, r14_1 + 1, rdi_1.d - (r14_1 + 1), 1)
    
    int64_t rax_7 = *(arg1 + 8) + 0x10
    arg_8 = r14_1
    int64_t* rdx_5 = (sx.q(r14_1) << 5) + rax_7
    int64_t* var_48 = rdx_5
    int32_t* var_40_1 = &arg_8
    *rdx_5 = arg2
    void arg_18
    sub_1413b83d0(arg1 + 0x38, &arg_18, &var_48, nullptr)
    int64_t rax_8 = sx.q(arg_8)
    int32_t rbp_3 = rax_8.d - *(arg1 + 0xe0) + 1
    
    if (rbp_3 s> 0)
        int64_t rdi_3 = sx.q(*(arg1 + 0xe0))
        int32_t rax_9 = rdi_3.d + rbp_3
        *(arg1 + 0xe0) = rax_9
        
        if (rax_9 s> *(arg1 + 0xe4))
            sub_1405a4cf0(arg1 + 0xd8)
        
        return memset(*(arg1 + 0xd8) + (rdi_3 << 2), 0, sx.q(rbp_3) << 2)
    
    result = *(arg1 + 0xd8)
    result[rax_8] = 0

return result
