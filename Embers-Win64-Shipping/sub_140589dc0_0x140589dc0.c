// 函数: sub_140589dc0
// 地址: 0x140589dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
void* rcx = **(arg1 + 0x38)

if (rcx == 0 || **(arg1 + 0x18) u>= rcx || (arg2 != 0xffffffff && zx.d(*(rcx - 1)) != arg2))
    FILE* _Stream = *(arg1 + 0x80)
    
    if (_Stream == 0 || rdi == 0xffffffff)
        return 0xffffffff
    
    int32_t rax_6
    
    if (*(arg1 + 0x68) == 0)
        rax_6 = ungetc(zx.d(rdi.b), _Stream)
    
    if (*(arg1 + 0x68) != 0 || rax_6 == 0xffffffff)
        int64_t* r8_1 = *(arg1 + 0x38)
        
        if (*r8_1 == arg1 + 0x70)
            return 0xffffffff
        
        int64_t* r9 = *(arg1 + 0x18)
        *(arg1 + 0x70) = rdi.b
        int64_t rax_7 = *r9
        
        if (rax_7 != arg1 + 0x70)
            *(arg1 + 0x88) = rax_7
            *(arg1 + 0x90) = sx.q(**(arg1 + 0x50)) + *r8_1
        
        *r9 = arg1 + 0x70
        **(arg1 + 0x38) = arg1 + 0x70
        **(arg1 + 0x50) = arg1.d - (arg1 + 0x70).d + 0x71
else
    int32_t* rax_3 = *(arg1 + 0x50)
    *rax_3 += 1
    int64_t* rax_4 = *(arg1 + 0x38)
    *rax_4 -= 1
    
    if (rdi == 0xffffffff)
        rdi = 0

return zx.q(rdi)
