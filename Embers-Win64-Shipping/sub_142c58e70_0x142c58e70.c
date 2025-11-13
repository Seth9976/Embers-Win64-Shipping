// 函数: sub_142c58e70
// 地址: 0x142c58e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg1
void* r10 = *arg2
int32_t rdx = -1
char* rcx = *(r11 + 0x18)
int64_t rax

if (rcx == 0)
    rax = 0
else
    rax = -1
    
    do
        rax += 1
    while (rcx[rax] != 0)

char* r9 = *(r10 + 0x18)
int64_t rcx_1

if (r9 == 0)
    rcx_1 = 0
else
    rcx_1 = -1
    
    do
        rcx_1 += 1
    while (r9[rcx_1] != 0)

if (rax == rcx_1)
    char* rcx_2 = *(r11 + 0x28)
    
    if (rcx_2 == 0)
        rax = 0
    else
        rax = -1
        
        do
            rax += 1
        while (rcx_2[rax] != 0)
    
    char* r9_1 = *(r10 + 0x28)
    
    if (r9_1 == 0)
        rcx_1 = 0
    else
        rcx_1 = -1
        
        do
            rcx_1 += 1
        while (r9_1[rcx_1] != 0)
    
    if (rax == rcx_1)
        char* rax_2 = *(r11 + 8)
        
        if (rax_2 != 0)
            int64_t rdx_1 = *(r10 + 8)
            
            if (rdx_1 != 0)
                void* rdx_2 = rdx_1 - rax_2
                char i
                
                do
                    i = *rax_2
                    char temp0_1 = *(rax_2 + rdx_2)
                    
                    if (i != temp0_1)
                        return zx.q(sbb.d(0, 0, i u< temp0_1)) | 1
                    
                    rax_2 = &rax_2[1]
                while (i != 0)
        
        return 0

if (rcx_1 u> rax)
    rdx = 1

return zx.q(rdx)
