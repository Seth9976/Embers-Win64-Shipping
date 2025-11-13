// 函数: sub_141e8b6c0
// 地址: 0x141e8b6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg2 + 0x5c)
float* rbx
void* rdi
float zmm0
float zmm1

if ((rax & 1) == 0)
    arg3 = arg2[7].d
    rbx = &arg2[4]
    zmm0 = arg1[1].d
    
    if (arg3.d f!= zmm0 || not(0f == rbx[4]))
        rbx[6] = zmm0
        rbx[4] = 0
        rbx[1] = zmm0
        *rbx = zmm0
        rbx[2] = 0
        arg3 = rbx[6]
    
    zmm1 = arg2[1].d
    int32_t zmm3 = arg2[0xb].d
    
    if (arg3.d f!= zmm1 || not(zmm3 f== rbx[4]))
        rbx[6] = zmm1
        
        if (zmm3 f<= 0f)
            rbx[1] = zmm1
            *rbx = zmm1
            rbx[2] = 0
            rbx[4] = 0
        else
            zmm0 = *rbx
            rbx[1] = zmm0
            rbx[4] = zmm3
            rbx[3] = 0
            rbx[2] = zmm1 - zmm0
    
    zmm3 = *(arg2 + 0x54)
    rdi = arg2 + 0x3c
    zmm0 = *(arg1 + 0xc)
    
    if (zmm3 f!= zmm0 || not(0f f== *(rdi + 0x10)))
        *(rdi + 0x18) = zmm0
        *(rdi + 0x10) = 0
        *(rdi + 4) = zmm0
        *rdi = zmm0
        *(rdi + 8) = 0
        zmm3 = *(rdi + 0x18)
    
    zmm1 = *(arg2 + 0xc)
    arg3 = arg2[0xb].d
    
    if (zmm3 f!= zmm1 || not(arg3.d f== *(rdi + 0x10)))
        *(rdi + 0x18) = zmm1
        
        if (arg3.d f<= 0f)
            *(rdi + 4) = zmm1
            *rdi = zmm1
            *(rdi + 8) = 0
            *(rdi + 0x10) = 0
        else
            zmm0 = *rdi
            *(rdi + 4) = zmm0
            *(rdi + 0x10) = arg3.d
            *(rdi + 0xc) = 0
            *(rdi + 8) = zmm1 - zmm0
else
    rdi = arg2 + 0x3c
    
    if ((rax & 2) == 0)
        sub_141e8b090(rdi, arg3.d)
        rbx = &arg2[4]
        sub_141e8b090(rbx, arg3.d)
    else
        zmm1 = *(arg2 + 0xc)
        arg3 = arg2[0xb].d
        
        if (zmm1 f!= *(rdi + 0x18) || not(arg3.d f== *(rdi + 0x10)))
            *(rdi + 0x18) = zmm1
            
            if (arg3.d f<= 0f)
                *(rdi + 4) = zmm1
                *rdi = zmm1
                *(rdi + 8) = 0
                *(rdi + 0x10) = 0
            else
                zmm0 = *rdi
                *(rdi + 4) = zmm0
                *(rdi + 0x10) = arg3.d
                *(rdi + 0xc) = 0
                *(rdi + 8) = zmm1 - zmm0
        
        zmm1 = arg2[1].d
        rbx = &arg2[4]
        arg3 = arg2[0xb].d
        
        if (zmm1 != rbx[6] || not(arg3.d f== rbx[4]))
            rbx[6] = zmm1
            
            if (arg3.d f<= 0f)
                rbx[1] = zmm1
                *rbx = zmm1
                rbx[2] = 0
                rbx[4] = 0
            else
                zmm0 = *rbx
                rbx[1] = zmm0
                rbx[4] = arg3.d
                rbx[3] = 0
                rbx[2] = zmm1 - zmm0

if (*arg1 == 0)
    *arg1 = *arg2

*(arg1 + 0xc) = *rdi
arg1[1].d = *rbx
*(arg1 + 0x14) ^= (*(arg2 + 0x14) ^ *(arg1 + 0x14)) & 1
char result = (*(arg2 + 0x5c) & 0xfd) | 1
*(arg2 + 0x5c) = result

if ((result & 4) != 0 && not(arg2[6].d f> *(arg2 + 0x2c)))
    result |= 8
    *(arg2 + 0x5c) = result

return result
