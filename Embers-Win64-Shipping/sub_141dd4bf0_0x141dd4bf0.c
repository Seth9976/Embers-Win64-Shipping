// 函数: sub_141dd4bf0
// 地址: 0x141dd4bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rsi_1 = (arg4 u>> 1).b & 1
void* rdi = arg3
int64_t rbp

if (arg3 == 0 || arg3 == arg1[4])
    rbp.b = 0
else
    rbp.b = 1

if (rsi_1 == 0 && rbp.b != 0)
    arg3.b = 1
    sub_141dd3860(arg1, 0, arg3.b)
    (*(*arg1 + 0x4c8))(arg1, 0)
    void* rax_3 = sub_140d226f0(arg1, sub_142527690())
    
    if (rax_3 != 0)
        int64_t* r9 = *(rax_3 + 0x98)
        int64_t* rdx_1 = r9
        void* r8 = &r9[sx.q(*(rax_3 + 0xa0))]
        
        if (r9 != r8)
            do
                if (*rdx_1 == arg1)
                    int32_t rdx_3 = ((rdx_1 - r9) s>> 3).d
                    
                    if (rdx_3 != 0xffffffff)
                        int64_t* arg_18 = arg1
                        r9[sx.q(rdx_3)] = 0
                        sub_1409d7d20(rax_3 + 0xa8, &arg_18)
                    
                    break
                
                rdx_1 = &rdx_1[1]
            while (rdx_1 != r8)

char rax_4 = sub_140ce4310(arg1, arg2, rdi, zx.q(arg4))

if (rsi_1 == 0 && rbp.b != 0)
    void* rax_6 = sub_140d226f0(arg1, sub_142527690())
    
    if (rax_6 != 0)
        int64_t r14_1 = sx.q(*(rax_6 + 0xa0))
        int32_t rcx_7 = (r14_1 + 1).d
        *(rax_6 + 0xa0) = rcx_7
        
        if (rcx_7 s> *(rax_6 + 0xa4))
            sub_1405a4d70(rax_6 + 0x98)
        
        *(*(rax_6 + 0x98) + (r14_1 << 3)) = arg1
        int64_t r14_2 = sx.q(*(rax_6 + 0xb0))
        int32_t rax_8 = (r14_2 + 1).d
        *(rax_6 + 0xb0) = rax_8
        
        if (rax_8 s> *(rax_6 + 0xb4))
            sub_1405a4d70(rax_6 + 0xa8)
        
        *(*(rax_6 + 0xa8) + (r14_2 << 3)) = arg1
        void* rax_10 = Concurrency::details::_CancellationTokenRegistration::_GetToken(rax_6)
        
        if (rax_10 != 0 && (*(rax_10 + 0x11b) & 0x40) != 0)
            (*(*arg1 + 0x4b0))(arg1)
        
        sub_141dd3860(arg1, 1, 1)

return zx.q(rax_4)
