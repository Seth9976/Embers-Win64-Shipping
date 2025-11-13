// 函数: sub_1420ac560
// 地址: 0x1420ac560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)

if (rcx == 0 || (*(*rcx + 0x260))(rcx) == 0)
    return 

int64_t r11_1 = *(arg3 + 0x50)

if (r11_1 == 0)
    return 

void* r9_1 = *(arg3 + 0x58)

if (r9_1 == 0)
    return 

int64_t rax_2 = sx.q(*(arg1 + 0x78))
bool rcx_1 = false

if (rax_2.d != 0)
    int32_t* r8
    
    if (rax_2.d != 1)
        r8 = *(arg1 + 0x70)
    
    if (rax_2.d == 1 || arg2.d f<= *r8)
        rcx_1 = *(*(arg1 + 0x70) + 4) & 1
    else if (arg2.d f< r8[rax_2 * 2 - 2])
        int32_t rdx_1 = 1
        
        if (rax_2.d s> 1)
            int64_t rax_4 = 1
            
            while (not(arg2.d f< r8[rax_4 * 2]))
                rdx_1 += 1
                rax_4 += 1
                
                if (rax_4 s>= rax_2)
                    goto label_1420ac629
            
            rcx_1 = r8[sx.q(rdx_1) * 2 - 1].b & 1
    else
        rcx_1 = r8[rax_2 * 2 - 1].b & 1
else
    rcx_1 = (*(r9_1 + 0x7b) & *(zx.q(*(r9_1 + 0x79)) + r11_1)) != 0

label_1420ac629:
uint64_t rdx_2 = zx.q(*(r9_1 + 0x79))

if (rcx_1 == 0)
    rcx_1 = false
else
    rcx_1 = *(r9_1 + 0x7a)

*(rdx_2 + r11_1) = (not.b(*(r9_1 + 0x7b)) & *(rdx_2 + r11_1)) | rcx_1
sub_1420824a0(arg3)
