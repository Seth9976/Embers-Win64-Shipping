// 函数: sub_14246bbd0
// 地址: 0x14246bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rdi = arg3
int64_t* rsi = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = rsi
        rsi = &rsi[4]
        
        if (rbx_1 != rdi)
            int64_t rbp_1 = sx.q(rdi[1].d)
            int64_t r15_1 = *rdi
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405a4be0(rbx_1, rbp_1.d, r8)
                memcpy(*rbx_1, r15_1, (rbp_1 << 4).d)
            else
                *(rbx_1 + 0xc) = 0
        
        sub_140627690(&rbx_1[2], &rdi[2])
        rdi = &rdi[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
