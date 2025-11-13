// 函数: sub_14245f2f0
// 地址: 0x14245f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r12 = arg3
int64_t* result

if (arg4 != 0)
    int32_t i
    
    do
        int64_t j_1 = 3
        void* rdi_2 = r12 - arg2
        *arg2 = *r12
        int32_t* rbx_1 = arg2 + 0x94
        arg2[1].q = r12[1].q
        int64_t j
        
        do
            rbx_1[-5] = *(rdi_2 + rbx_1 - 0x14)
            rbx_1[-4].b = *(rdi_2 + rbx_1 - 0x10)
            *(rbx_1 - 0xf) = *(rdi_2 + rbx_1 - 0xf)
            result = &rbx_1[-3] + rdi_2
            
            if (&rbx_1[-3] != result)
                int64_t rsi_1 = sx.q(*(rbx_1 + rdi_2 - 4))
                int64_t r15_1 = *result
                int32_t r8 = *rbx_1
                rbx_1[-1] = rsi_1.d
                
                if (rsi_1.d != 0 || r8 != 0)
                    sub_1405c4b20(&rbx_1[-3], rsi_1.d, r8)
                    memcpy(*(rbx_1 - 0xc), r15_1, rsi_1.d * 0x1c)
                else
                    *rbx_1 = rsi_1.d
            
            rbx_1 -= -0x80
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg2 += 0x198
        r12 += 0x198
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
