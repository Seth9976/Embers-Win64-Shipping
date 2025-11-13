// 函数: sub_142bcba50
// 地址: 0x142bcba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x19c))
int32_t r11 = 0
int64_t* rbp = *(arg1 + 0x1a0)
char r9 = 0
int64_t rbx = 0

if (rdi s> 0)
    int64_t* r10_1 = rbp
    
    while (true)
        if (r9 == 0)
            char* rax_1 = *r10_1
            void* r8_2 = arg2 - rax_1
            uint32_t i
            uint32_t rdx
            
            do
                rdx = zx.d(*rax_1)
                i = zx.d(*(rax_1 + r8_2))
                
                if (rdx != i)
                    break
                
                rax_1 = &rax_1[1]
            while (i != 0)
            
            if (rdx - i == 0)
                r9 = 1
            
            r11 += 1
            rbx += 1
            r10_1 = &r10_1[3]
            
            if (rbx s< rdi)
                continue
            else if (r9 == 0)
                break
        
        return &rbp[-3 + sx.q(r11) * 3]

return nullptr
