// 函数: sub_1419c49c0
// 地址: 0x1419c49c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int32_t i = 0

if (rbx[4].d s<= 0)
    return 

int32_t* r14_1 = nullptr
int64_t* r15_1 = nullptr
int64_t* rcx

do
    rcx = rbx
    
    if (*(r15_1 + rbx[3]) == 0)
        void* arg_8
        (*(*rbx + 0x48))(rcx, &arg_8, zx.q(i))
        
        if (data_143f0f21f != 0)
            void* rsi_1 = arg_8
            
            if (rsi_1 != 0 && *(rsi_1 + 0x2c) == 8)
                EnterCriticalSection(&data_143f203f8)
                int32_t rcx_1 = data_143f203e0
                int64_t rbp_1
                
                if (rcx_1 == 0)
                    int64_t rbp_2 = sx.q(data_143f203f0)
                    int32_t rax_9 = (rbp_2 + 1).d
                    bool cond:0_1 = rax_9 s<= data_143f203f4
                    data_143f203f0 = rax_9
                    
                    if (not(cond:0_1))
                        sub_1405a4d70(&data_143f203e8)
                    
                    *(data_143f203e8 + (rbp_2 << 3)) = rsi_1
                    rbp_1 = zx.q(data_143f203f0 - 1)
                else
                    int64_t r10_1 = data_143f203d8
                    rbp_1 = sx.q(*(r10_1 + (sx.q(rcx_1 - 1) << 2)))
                    
                    if (0 != 0)
                        memmove(r10_1 + (sx.q(rcx_1 - 1) << 2), r10_1 + (sx.q(rcx_1) << 2), 0 << 2)
                        rcx_1 = data_143f203e0
                    
                    int64_t rax_8 = data_143f203e8
                    data_143f203e0 = rcx_1 - 1
                    *(rax_8 + (rbp_1 << 3)) = rsi_1
                
                LeaveCriticalSection(&data_143f203f8)
                *(r14_1 + rbx[5]) = rbp_1.d
        
        sub_1405d1600(rbx[3] + (sx.q(i) << 3), &arg_8)
        sub_1405d1550(&arg_8)
        rcx = *arg1
    
    i += 1
    r15_1 = &r15_1[1]
    r14_1 = &r14_1[1]
    rbx = rcx
while (i s< rcx[4].d)
