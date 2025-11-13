// 函数: sub_142816430
// 地址: 0x142816430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x130)
uint64_t r10 = 0
int64_t result

if (r11 == 0)
label_1428164b1:
    sub_142817350(arg1, 0x20, 
        "PxBinaryConverter: union not found: %s, please check the source metadata.\n", arg2)
    result.b = 0
else
    int64_t rdi_1 = *(arg1 + 0x128)
    
    while (true)
        char* rax_2 = *(rdi_1 + r10 * 0x18)
        void* r8_1 = arg2 - rax_2
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_2)
            i = zx.d(*(rax_2 + r8_1))
            
            if (rdx != i)
                break
            
            rax_2 = &rax_2[1]
        while (i != 0)
        
        if (rdx - i == 0)
            uint64_t rcx_1 = r10 * 3
            int64_t var_18 = arg3
            void* r8_2 = rdi_1 + (rcx_1 << 3)
            uint64_t rcx_2 = zx.q(*(rdi_1 + (rcx_1 << 3) + 0x10))
            int32_t r9
            int32_t var_10_1 = r9
            
            if ((*(rdi_1 + (rcx_1 << 3) + 0x14) & 0x7fffffff) u> rcx_2.d)
                uint64_t rax_6 = rcx_2 << 4
                
                if (rax_6 != neg.q(*(r8_2 + 8)))
                    *(rax_6 + *(r8_2 + 8)) = var_18.o
                
                *(r8_2 + 0x10) += 1
            else
                sub_142816970(r8_2 + 8, &var_18)
            
            int32_t var_20_1 = r9
            int64_t var_28_1 = arg3
            sub_142817350(arg1, 1, "Registering union type: %s | %s | %d\n", arg2)
            result.b = 1
            break
        
        r10 = zx.q(r10.d + 1)
        
        if (r10.d u>= r11)
            goto label_1428164b1

return result
