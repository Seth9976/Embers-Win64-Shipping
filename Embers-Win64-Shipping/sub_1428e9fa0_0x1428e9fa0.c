// 函数: sub_1428e9fa0
// 地址: 0x1428e9fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg2
char* rbx = arg1
char* rdx = arg1
char* r10 = arg3
int64_t rax = r11

if (test_bit(arg5, 0xf))
    if (r11 u> arg4)
        do
            char r8 = *rdx
            
            if (r8 == 0)
                break
            
            if ((arg5.b & 0x10) != 0 && r8 == 0x2e)
                break
            
            rdx = &rdx[1]
            rax -= 1
        while (rax u> arg4)
    
    if (rax == arg4)
        rbx = rdx
        r11 = rax

if (r11 != arg4)
    return 0

if (r11 == 0)
    return 1

void* rbx_1 = rbx - r10

while (true)
    char r9 = *(rbx_1 + r10)
    char rdx_1 = *r10
    
    if (r9 == 0)
        return 0
    
    if (r9 != rdx_1)
        char r8_1 = rdx_1 + 0x20
        
        if (rdx_1 - 0x41 u> 0x19)
            r8_1 = rdx_1
        
        char rcx_2 = r9 + 0x20
        
        if (r9 - 0x41 u> 0x19)
            rcx_2 = r9
        
        if (rcx_2 != r8_1)
            return 0
    
    r10 = &r10[1]
    int64_t temp0_1 = r11
    r11 -= 1
    
    if (temp0_1 == 1)
        return 1
