// 函数: sub_1411935f0
// 地址: 0x1411935f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (data_143de5480 == 0)
    rax.b = 1
else
    rax.b = GetCurrentThreadId() == data_143de5470

void* rdi_1 = *(arg1 + 0x10)

if (rax.b != 0)
    int64_t* var_30_1 = arg2
    char rax_1 = sub_140a80f40()
    
    if (rax_1 == 0)
        if (data_143f138f4 != rax_1)
        label_141193678:
            void var_28
            int64_t* rax_3 = sub_141188bb0(&var_28, nullptr, 0xff)
            *(*rax_3 + 0x10) = rdi_1.o
            void* rcx_2 = *rax_3
            int32_t r8_1 = rax_3[2].d
            int64_t* rdx = rax_3[1]
            int64_t* rbx_1 = *(rcx_2 + 0x28)
            int64_t* arg_20 = rbx_1
            int32_t* rdi_2 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_2 += 1
                rbx_1 = arg_20
            
            int32_t result = sub_140a064d0(rcx_2, rdx, r8_1, 1)
            
            if (rbx_1 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    return sub_140a2f6e0(arg_20)
            
            return result
        
        if (data_143de5480 != rax_1)
            uint32_t rax_2
            rax_2.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_2.b == 0)
                goto label_141193678

int64_t rsi_1 = sx.q(*(rdi_1 + 0x1d68))
int32_t rax_5 = (rsi_1 + 1).d
bool cond:1_1 = rax_5 s<= *(rdi_1 + 0x1d6c)
*(rdi_1 + 0x1d68) = rax_5

if (not(cond:1_1))
    sub_1405a4d70(rdi_1 + 0x1d60)

*(*(rdi_1 + 0x1d60) + (rsi_1 << 3)) = arg2
return (**arg2)(arg2)
