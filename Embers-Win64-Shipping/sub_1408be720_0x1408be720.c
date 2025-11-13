// 函数: sub_1408be720
// 地址: 0x1408be720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x18))
int32_t rdx = 0
int64_t rbx = 0
void* rdi
int32_t zmm0

if (r10 s< 4)
    if (r10 s<= 0)
        return 0
    
    rdi = *(arg1 + 0x10)
else
    rdi = *(arg1 + 0x10)
    int64_t i_3 = ((r10 - 4) u>> 2) + 1
    void* r9_1 = rdi + 0x10
    rbx = i_3 << 2
    int32_t rcx_1
    int64_t i
    
    do
        void* rax_1 = *(r9_1 - 0x10)
        
        if (*(rax_1 + 0x280) == 0)
            if (*(rax_1 + 0x282) == 0)
                zmm0 = *(rax_1 + 0xd0)
            
            if (*(rax_1 + 0x282) != 0 || zmm0 f<= *(rax_1 + 0xc) || zmm0 f<= 0f)
                rax_1.b = 1
            else
                rax_1.b = 0
        else
            rax_1.b = 0
        
        int32_t rcx = rdx + 1
        void* rax_2 = *(r9_1 - 8)
        
        if (rax_1.b != 0)
            rcx = rdx
        
        if (*(rax_2 + 0x280) == 0)
            if (*(rax_2 + 0x282) == 0)
                zmm0 = *(rax_2 + 0xd0)
            
            if (*(rax_2 + 0x282) != 0 || zmm0 f<= *(rax_2 + 0xc) || zmm0 f<= 0f)
                rax_2.b = 1
            else
                rax_2.b = 0
        else
            rax_2.b = 0
        
        int32_t rdx_1 = rcx + 1
        void* rax_3 = *r9_1
        
        if (rax_2.b != 0)
            rdx_1 = rcx
        
        if (*(rax_3 + 0x280) == 0)
            if (*(rax_3 + 0x282) == 0)
                zmm0 = *(rax_3 + 0xd0)
            
            if (*(rax_3 + 0x282) != 0 || zmm0 f<= *(rax_3 + 0xc) || zmm0 f<= 0f)
                rax_3.b = 1
            else
                rax_3.b = 0
        else
            rax_3.b = 0
        
        int32_t r8_1 = rdx_1 + 1
        void* rax_4 = *(r9_1 + 8)
        
        if (rax_3.b != 0)
            r8_1 = rdx_1
        
        if (*(rax_4 + 0x280) == 0)
            if (*(rax_4 + 0x282) == 0)
                zmm0 = *(rax_4 + 0xd0)
            
            if (*(rax_4 + 0x282) != 0 || zmm0 f<= *(rax_4 + 0xc) || zmm0 f<= 0f)
                rax_4.b = 1
            else
                rax_4.b = 0
        else
            rax_4.b = 0
        
        rcx_1 = r8_1 + 1
        
        if (rax_4.b != 0)
            rcx_1 = r8_1
        
        r9_1 += 0x20
        rdx = rcx_1
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (rbx s>= r10)
        return zx.q(rcx_1)

int64_t* r8_2 = rdi + (rbx << 3)
int64_t i_2 = r10 - rbx
int32_t rcx_2
int64_t i_1

do
    void* rax_6 = *r8_2
    
    if (*(rax_6 + 0x280) == 0)
        if (*(rax_6 + 0x282) == 0)
            zmm0 = *(rax_6 + 0xd0)
        
        if (*(rax_6 + 0x282) != 0 || zmm0 f<= *(rax_6 + 0xc) || zmm0 f<= 0f)
            rax_6.b = 1
        else
            rax_6.b = 0
    else
        rax_6.b = 0
    
    rcx_2 = rdx + 1
    
    if (rax_6.b != 0)
        rcx_2 = rdx
    
    r8_2 = &r8_2[1]
    rdx = rcx_2
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return zx.q(rcx_2)
