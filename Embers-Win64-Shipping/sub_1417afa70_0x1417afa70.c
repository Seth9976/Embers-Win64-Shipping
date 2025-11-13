// 函数: sub_1417afa70
// 地址: 0x1417afa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x290)
void* rbp_2 = sx.q(*(arg1 + 0x298)) * 0x30 + rsi

if (rsi != rbp_2)
    int16_t* rdi_1 = rsi + 0x28
    
    do
        int64_t* r14_1 = *(arg1 + 0x268)
        
        if (rdi_1[1].b == 0)
            int64_t* rdx_2 = *(rdi_1 - 0x20)
            int32_t r8_2 = 0
            int32_t r11_1 = 0
            int32_t rbx_1 = 0
            int32_t r10_1 = 0
            int64_t r9_1 = sx.q(rdx_2[1].d)
            void* r15_1 = *rdx_2
            int64_t* var_50_1 = rdx_2
            int64_t var_58 = *(*(r15_1 + 0xe0) + (r9_1 << 3))
            int32_t var_48_1 = *(*(r15_1 + 0x50) + (r9_1 << 2))
            int64_t rcx_3 = r9_1 * 0x18
            int64_t var_44_1
            __builtin_memset(&var_44_1, 0, 0x11)
            void* rdx_4 = *(r15_1 + 0xf8) + rcx_3
            void* rax_5 = rdx_4
            void* rcx_4 = *(rdx_4 + 8)
            
            if (rcx_4 != 0)
                rax_5 = rcx_4
            
            void* rdx_5 = rax_5 + (sx.q(*(rdx_4 + 0x10)) << 3)
            
            while (rax_5 != rdx_5)
                rbx_1 |= **rax_5
                var_44_1.d = rbx_1
                r11_1 |= *(*rax_5 + 4)
                var_44_1:4.d = r11_1
                r10_1 |= *(*rax_5 + 8)
                int64_t var_3c_1
                var_3c_1.d = r10_1
                int64_t rcx_9 = *rax_5
                rax_5 += 8
                r8_2 |= *(rcx_9 + 0xc)
                var_3c_1:4.d = r8_2
            
            char var_34_1 = 1
            (*(*r14_1 + 0x50))(r14_1, &var_58, rcx_3 + *(r15_1 + 0x140), 
                zx.q(*(*(r15_1 + 0x158) + r9_1)), *rdi_1)
        else
            (*(*r14_1 + 0x48))(r14_1, rsi, zx.q(*rdi_1))
        
        rsi += 0x30
        rdi_1 = &rdi_1[0x18]
    while (rsi != rbp_2)

*(arg1 + 0x298) = 0

if (*(arg1 + 0x29c) s<= 0xffffffff)
    sub_1405a5220(arg1 + 0x290, 0)

int32_t result = *(arg1 + 0x2ac)
*(arg1 + 0x2a8) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0x2a0, 0)

return result
