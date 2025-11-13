// 函数: sub_142b9a180
// 地址: 0x142b9a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 == 0 || arg3 == 0 || arg4 == 0)
    return 6

void* rbx = arg1 + 0x18
void* r9 = rbx + (zx.q(*(arg1 + 0x14)) << 3)
bool cond:0 = rbx != r9

if (rbx u< r9)
    do
        char* rax_4 = *(**rbx + 8)
        void* r8_1 = arg2 - rax_4
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_4)
            i = zx.d(*(rax_4 + r8_1))
            
            if (rdx != i)
                break
            
            rax_4 = &rax_4[1]
        while (i != 0)
        
        if (rdx - i == 0)
            break
        
        rbx += 8
    while (rbx u< r9)
    
    cond:0 = rbx != r9

if (not(cond:0))
    return 0xb

int64_t* rcx = *rbx
int64_t r8_2 = *(*rcx + 0x30)

if (r8_2 != 0)
    int64_t rax_7 = r8_2(rcx, "properties")
    
    if (rax_7 != 0)
        bool cond:2_1
        
        if (arg5 == 0)
            cond:2_1 = *(rax_7 + 8) == 0
        else
            cond:2_1 = *rax_7 == 0
        
        if (cond:2_1 == 0)
            *rbx
            
            if (arg5 == 0)
                jump(*(rax_7 + 8))
            
            jump(*rax_7)

return 7
