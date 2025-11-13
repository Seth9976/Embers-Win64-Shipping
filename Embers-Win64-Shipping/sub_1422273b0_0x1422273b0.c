// 函数: sub_1422273b0
// 地址: 0x1422273b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142218330(arg1)
int32_t result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 0xf0)

if (result.b != 0)
    result = sub_142271960(arg1 + 0xf0)
    
    if (result.b != 0)
        void* arg_8 = arg1
        void** var_20_1 = &arg_8
        int64_t (* var_28)(void** arg1, int64_t* arg2) = j_sub_14220cbe0
        result = sub_14226a4e0(arg1 + 0xf0, &var_28)

void* rsi = *(arg1 + 0x108)

if (rsi != 0)
    *(rsi + 0x24) += 1
    int32_t rax = *(rsi + 0x18)
    int32_t rcx_3 = *(rsi + 0x24)
    int64_t r14
    r14.b = 0
    int64_t rdi_1 = sx.q(rax - 1)
    
    if (rax - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp1_1
        
        do
            int64_t rax_2 = *(rsi + 0x10)
            
            if (*(rbx_2 + rax_2 + 8) == 0)
                r14.b = 1
            else
                int64_t* rcx_4 = *(rbx_2 + rax_2)
                
                if (rcx_4 == 0)
                    r14.b = 1
                else if ((*(*rcx_4 + 0x50))(rcx_4, arg1) == 0)
                    r14.b = 1
            
            rbx_2 -= 0x10
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_3 = *(rsi + 0x24)
    
    result = rcx_3 - 1
    *(rsi + 0x24) = result
    
    if (r14.b != 0)
        return sub_140599630(rsi + 0x10, 0)

return result
