// 函数: sub_142498320
// 地址: 0x142498320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r13 = arg3
void* result = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t j_1 = 4
        void* rdi_2 = r13 - result
        int32_t* rbx_1 = result + 0x7c
        int64_t j
        
        do
            rbx_1[-5] = *(rdi_2 + rbx_1 - 0x14)
            rbx_1[-4].b = *(rdi_2 + rbx_1 - 0x10)
            *(rbx_1 - 0xf) = *(rdi_2 + rbx_1 - 0xf)
            void* rax_5 = &rbx_1[-3] + rdi_2
            
            if (&rbx_1[-3] != rax_5)
                int32_t rsi_1 = *(rbx_1 + rdi_2 - 4)
                int64_t r15_1 = *rax_5
                int32_t r8 = *rbx_1
                rbx_1[-1] = rsi_1
                
                if (rsi_1 != 0 || r8 != 0)
                    sub_1405c4b20(&rbx_1[-3], rsi_1, r8)
                    memcpy(*(rbx_1 - 0xc), r15_1, rsi_1 * 0x1c)
                else
                    *rbx_1 = rsi_1
            
            rbx_1 -= -0x80
            j = j_1
            j_1 -= 1
        while (j != 1)
        int64_t rax_6 = *(r13 + 0x200)
        r13 += 0x208
        i = i_1
        i_1 -= 1
        *(result + 0x200) = rax_6
        result += 0x208
    while (i != 1)

result.b = 1
return result
