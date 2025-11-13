// 函数: sub_1419ccf30
// 地址: 0x1419ccf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
void* arg_8
(*(*arg1 + 0x48))(arg1, &arg_8, zx.q(rbp.d))

if (data_143f0f21f != 0)
    void* rbx_1 = arg_8
    
    if (rbx_1 != 0 && *(rbx_1 + 0x2c) == 8)
        EnterCriticalSection(&data_143f203f8)
        int32_t rcx = data_143f203e0
        int64_t rsi_1
        
        if (rcx == 0)
            int64_t rsi_2 = sx.q(data_143f203f0)
            int32_t rax_8 = (rsi_2 + 1).d
            bool cond:0_1 = rax_8 s<= data_143f203f4
            data_143f203f0 = rax_8
            
            if (not(cond:0_1))
                sub_1405a4d70(&data_143f203e8)
            
            *(data_143f203e8 + (rsi_2 << 3)) = rbx_1
            rsi_1 = zx.q(data_143f203f0 - 1)
        else
            int64_t r10_1 = data_143f203d8
            rsi_1 = sx.q(*(r10_1 + (sx.q(rcx - 1) << 2)))
            
            if (0 != 0)
                memmove(r10_1 + (sx.q(rcx - 1) << 2), r10_1 + (sx.q(rcx) << 2), 0 << 2)
                rcx = data_143f203e0
            
            int64_t rax_7 = data_143f203e8
            data_143f203e0 = rcx - 1
            *(rax_7 + (rsi_1 << 3)) = rbx_1
        
        LeaveCriticalSection(&data_143f203f8)
        *(arg1[5] + (rbp << 2)) = rsi_1.d

sub_1405d1600(arg1[3] + (rbp << 3), &arg_8)
return sub_1405d1550(&arg_8)
