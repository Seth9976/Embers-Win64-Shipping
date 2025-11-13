// 函数: sub_1417bda30
// 地址: 0x1417bda30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg2
int64_t rbp = 0
int64_t rdi = sx.q(r15[1].d)
int128_t zmm4 = *(arg1 + 0x10) ^ 0x80000000
int128_t zmm0
int128_t zmm1
float zmm2

if (rdi s>= 4)
    void* rcx = *r15
    int64_t r11_1 = *arg4
    int32_t* r9 = rcx + 4
    int64_t rbx_1 = *arg2[1]
    int32_t* rdx = rcx + 0x14
    int64_t i_2 = ((rdi - 4) u>> 2) + 1
    rbp = i_2 << 2
    int64_t i
    
    do
        *(r11_1 + (sx.q(*r9) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_2 = sx.q(r9[-1]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_2 << 2))
        zmm1.d = (*(rbx_1 + (rcx_2 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_2 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm4.d f/ zmm1.d
                *(r11_1 + (sx.q(*r9) << 2)) = zmm0.d
        
        *(r11_1 + (sx.q(rdx[-2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_4 = sx.q(r9[1]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_4 << 2))
        zmm1.d = (*(rbx_1 + (rcx_4 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_4 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm4.d f/ zmm1.d
                *(r11_1 + (sx.q(rdx[-2]) << 2)) = zmm0.d
        
        *(r11_1 + (sx.q(*rdx) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_6 = sx.q(r9[3]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_6 << 2))
        zmm1.d = (*(rbx_1 + (rcx_6 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_6 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm4.d f/ zmm1.d
                *(r11_1 + (sx.q(*rdx) << 2)) = zmm0.d
        
        *(r11_1 + (sx.q(rdx[2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_8 = sx.q(r9[5]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_8 << 2))
        zmm1.d = (*(rbx_1 + (rcx_8 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_8 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm4.d f/ zmm1.d
                *(r11_1 + (sx.q(rdx[2]) << 2)) = zmm0.d
        
        r9 = &r9[8]
        rdx = &rdx[8]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbp s>= rdi)
    return 

int64_t i_3 = rdi - rbp
int64_t r11_2 = *arg4
int64_t r9_1 = *arg2[1]
void* rdx_1 = *r15 + (rbp << 3)
int64_t i_1

do
    *(r11_2 + (sx.q(*(rdx_1 + 4)) << 2)) = *(arg1 + 0x1c)
    int64_t rcx_10 = sx.q(*rdx_1) * 3
    zmm0.d = (*arg3).d f* *(r9_1 + (rcx_10 << 2))
    zmm1.d = (*(r9_1 + (rcx_10 << 2) + 8)).d f* *(arg3 + 8)
    zmm2 = *(r9_1 + (rcx_10 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
    
    if (not(zmm2 >= -9.99999994e-09f))
        zmm1 = *(arg1 + 0x20)
        
        if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
            zmm1.d = 1f - zmm2 f/ zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm0.d = zmm4.d f/ zmm1.d
            *(r11_2 + (sx.q(*(rdx_1 + 4)) << 2)) = zmm0.d
    
    rdx_1 += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
