// 函数: sub_1426b2410
// 地址: 0x1426b2410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1426b21d0(arg1, arg2)
void* rdx = *(arg1 + 0xc0)
char rdi = result.b

if (rdx != 0)
    uint64_t rcx = zx.q(result.b)
    
    if (rcx.d s< *(arg1 + 0xe0) && result.b != 0xff)
        result = zx.q(*(rdx + 0x4c))
        
        if (rdi u< result.b)
            void* rcx_3 = *(rdx + 0x30)
            
            if (rcx_3 != 0)
                result = sub_1426b21a0(rcx_3, rdi)
                goto label_1426b2487
        else
            result = *(rdx + 0x38) + (rcx - zx.q(result.b)) * 0x18
        label_1426b2487:
            
            if (result != 0)
                int64_t* r10_1 = *(result + 8)
                
                if (r10_1 != 0)
                    int32_t* r8_2 = zx.q(*(*(arg1 + 0xd8) + (zx.q(rdi) << 1))) + *(arg1 + 0xc8)
                    
                    if ((*(r10_1 + 0x2b) & 2) == 0)
                        jump(*(*r10_1 + 0x2a8))
                    
                    if (r8_2 != 0)
                        int64_t rax_3 = sx.q(*r8_2)
                        
                        if (rax_3.d s>= 0 && rax_3.d s< *(arg1 + 0xf0))
                            jump(*(**(*(arg1 + 0xe8) + (rax_3 << 3)) + 0x2a8))
                    
                    jump(*(*nullptr + 0x2a8))

result.b = 0
return result
