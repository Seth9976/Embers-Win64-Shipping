// 函数: sub_142c3ab00
// 地址: 0x142c3ab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140dc0ea0(1, 0x30)

if (result == 0)
    return result

int32_t r10
r10.b = *(arg1 + 4) == 0x41726162
int32_t r10_1 = r10 | (*(result + 0x28) & 0xfffffffe)
int32_t r8 = 0
*(result + 0x28) = r10_1
int32_t rdx = *(arg1 + 0x38)
int32_t rdx_1 = rdx - 1
int64_t r11 = *(arg1 + 0x40)
void* rax_14

if (rdx - 1 s>= 0)
    uint64_t rcx
    
    while (true)
        uint64_t rax_3 = zx.q((rdx_1 + r8) u>> 1)
        rcx = zx.q(rax_3.d)
        int32_t r9_1 = *(r11 + rax_3 * 0x24)
        int32_t rax_5
        
        if (r9_1 u<= 0x73746368)
            rax_5.b = r9_1 u< 0x73746368
        
        if (r9_1 u> 0x73746368 || rax_5 s< 0)
            rdx_1 = (rcx - 1).d
        else
            if (rax_5 s<= 0)
                break
            
            r8 = (rcx + 1).d
        
        if (r8 s> rdx_1)
            goto label_142c3aba9
    
    rax_14 = r11 + rcx * 0x24

int32_t rax_15

if (rdx - 1 s< 0 || rax_14 == 0)
label_142c3aba9:
    rax_15 = 0
else
    rax_15 = *(rax_14 + 0x1c)

int32_t rax_6 = neg.d(rax_15)
char const* const rdi = "losianif2nif3nifidem2demtini"
int64_t i_1 = 7
*(result + 0x28) = (sbb.d(rax_6, rax_6, rax_15 != 0) & 2) | (r10_1 & 0xfffffffd)
int64_t i

do
    int32_t rdx_2 = *(arg1 + 0x38)
    int32_t r8_1 = 0
    int32_t rdx_3 = rdx_2 - 1
    int32_t r10_3 = *rdi
    int64_t r11_1 = *(arg1 + 0x40)
    void* rax_19
    
    if (rdx_2 - 1 s>= 0)
        uint64_t rcx_1
        
        while (true)
            uint64_t rax_11 = zx.q((rdx_3 + r8_1) u>> 1)
            rcx_1 = zx.q(rax_11.d)
            int32_t r9_2 = *(r11_1 + rax_11 * 0x24)
            int32_t rax_13
            
            if (r10_3 u>= r9_2)
                rax_13.b = r10_3 u> r9_2
            
            if (r10_3 u< r9_2 || rax_13 s< 0)
                rdx_3 = (rcx_1 - 1).d
            else
                if (rax_13 s<= 0)
                    break
                
                r8_1 = (rcx_1 + 1).d
            
            if (r8_1 s> rdx_3)
                goto label_142c3ac33
        
        rax_19 = r11_1 + rcx_1 * 0x24
    
    int32_t rax_16
    
    if (rdx_2 - 1 s< 0 || rax_19 == 0)
    label_142c3ac33:
        rax_16 = 0
    else
        rax_16 = *(rax_19 + 0x1c)
    
    *(result - "losianif2nif3nifidem2demtini" + rdi) = rax_16
    char rax_18
    
    if ((*(result + 0x28) & 1) != 0 && *rdi - 0x32 u> 1)
        rax_18 = sub_142c3c890(arg1 + 0x28, r10_3)
    
    int32_t rax_20
    
    if ((*(result + 0x28) & 1) == 0 || (*rdi - 0x32 u> 1 && rax_18 == 0))
        rax_20 = 0
    else
        rax_20 = 1
    
    *(result + 0x28) &= 0xfffffffe
    rdi = &rdi[4]
    *(result + 0x28) |= rax_20
    i = i_1
    i_1 -= 1
while (i != 1)
return result
