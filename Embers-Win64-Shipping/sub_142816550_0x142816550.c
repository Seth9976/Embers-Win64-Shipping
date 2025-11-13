// 函数: sub_142816550
// 地址: 0x142816550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x130)
int32_t r9 = 0
int32_t r10 = 0

if (r11 != 0)
    int64_t rdi_1 = *(arg1 + 0x128)
    
    do
        char* rax_3 = *(rdi_1 + zx.q(r10) * 0x18)
        void* r8_1 = arg2 - rax_3
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_3)
            i = zx.d(*(rax_3 + r8_1))
            
            if (rdx != i)
                break
            
            rax_3 = &rax_3[1]
        while (i != 0)
        
        if (rdx - i == 0)
            uint64_t rcx_1 = zx.q(r10) * 3
            int32_t rcx_2 = *(rdi_1 + (rcx_1 << 3) + 0x10)
            
            if (rcx_2 != 0)
                int64_t rdx_3 = *(rdi_1 + (rcx_1 << 3) + 8)
                
                do
                    uint64_t rax_7 = zx.q(r9) * 2
                    
                    if (*(rdx_3 + (rax_7 << 3) + 8) == arg3)
                        return *(rdx_3 + (rax_7 << 3))
                    
                    r9 += 1
                while (r9 u< rcx_2)
            
            break
        
        r10 += 1
    while (r10 u< r11)

int32_t var_18_1 = arg3
sub_142817350(arg1, 0x20, 
    "PxBinaryConverter: union type not found: %s, type %d, please check the source metadata.\n", 
    arg2)
return 0
