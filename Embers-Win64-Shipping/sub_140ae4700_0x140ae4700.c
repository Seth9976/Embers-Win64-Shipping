// 函数: sub_140ae4700
// 地址: 0x140ae4700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg3
int32_t r10 = arg2
int16_t* r9 = arg1

if (arg2 != 0)
    uint64_t rcx
    
    do
        rcx = zx.q(r10 - 1)
        
        if (r9[rcx] != 0x3d)
            break
        
        r10 = rcx.d
    while (rcx.d != 0)

uint64_t result
result.b = r10.b & 3

if (result.b == 1)
label_140ae481d:
    result.b = 0
    return result

int32_t rdx = 0

if (r10 u>= 4)
label_140ae4750:
    result = 0
    int32_t r11_1 = 0
    
    while (true)
        int16_t rcx_1 = *r9
        r9 = &r9[1]
        
        if (rcx_1 u>= 0x100)
            goto label_140ae481d
        
        char r8 = *(zx.q(rcx_1) + &data_142e71190)
        
        if (r8 == 0xff)
            goto label_140ae481d
        
        r11_1 += 1
        result = zx.q(result.d << 6) | zx.q(r8)
        
        if (r11_1 s>= 4)
            rbx[2] = result.b
            r10 -= 4
            uint32_t rax_1 = result.d u>> 8
            rbx[1] = rax_1.b
            *rbx = (rax_1 u>> 8).b
            rbx = &rbx[3]
            
            if (r10 u>= 4)
                goto label_140ae4750
            
            break

if (r10 != 0)
    int32_t r8_1 = 0
    
    do
        result = zx.q(*r9)
        r9 = &r9[1]
        
        if (result.w u>= 0x100)
            goto label_140ae481d
        
        char rcx_4 = *(zx.q(result.w) + &data_142e71190)
        
        if (rcx_4 == 0xff)
            goto label_140ae481d
        
        r8_1 += 1
        rdx = rdx << 6 | zx.d(rcx_4)
    while (r8_1 u< r10)
    
    if (r10 s< 4)
        uint64_t i_1 = zx.q(4 - r10)
        uint64_t i
        
        do
            rdx <<= 6
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    uint32_t rdx_2 = rdx u>> 8
    
    if (r10 u>= 3)
        rbx[1] = rdx_2.b
    
    *rbx = (rdx_2 u>> 8).b

result.b = 1
return result
