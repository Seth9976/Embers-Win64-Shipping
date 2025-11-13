// 函数: sub_14212fcb0
// 地址: 0x14212fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f4ab20)
int32_t temp0 = *(arg1 + 0x74)
*(arg1 + 0x74) -= 1

if (temp0 == 1)
    int32_t rax_1 = *(arg1 + 0x7c)
    
    if ((rax_1.b & 1) != 0)
        uint64_t rsi_1 = 0x31
        *(arg1 + 0x7c) = rax_1 & 0xfffffffe
        void* rdi_1 = *(arg1 + 0x28)
        uint64_t rax_3
        
        if (rdi_1 == 0)
            rax_3 = 0x31
        else
            rax_3 = zx.q(*(rdi_1 + 0x58))
        
        int32_t arg_8
        sub_1421244c0(rax_3 * 0x50 + &data_143f4ab50, &arg_8, arg1 + 0x40)
        int64_t rax_4 = sx.q(arg_8)
        int64_t rax_5
        
        if (rax_4.d != 0xffffffff)
            rax_5 = rax_4 * 0x38
        
        int64_t rcx_1
        
        if (rax_4.d == 0xffffffff || rax_5 == neg.q(*(rax_3 * 0x50 + &data_143f4ab50)))
            rcx_1 = 0
        else
            rcx_1 = *(rax_5 + *(rax_3 * 0x50 + &data_143f4ab50) + 0x28)
        
        if (rcx_1 == arg1)
            if (rdi_1 != 0)
                rsi_1 = zx.q(*(rdi_1 + 0x58))
            
            sub_14212ff20(rsi_1 * 0x50 + &data_143f4ab50, arg1 + 0x40)
    
    *(arg1 + 0x78) = 1

int64_t result = LeaveCriticalSection(&data_143f4ab20)

if (*(arg1 + 0x78) == 0)
    return result

return sub_141997870(arg1 + 0x38) __tailcall
