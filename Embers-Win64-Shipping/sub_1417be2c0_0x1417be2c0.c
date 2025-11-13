// 函数: sub_1417be2c0
// 地址: 0x1417be2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg2
int64_t rbp = 0
int64_t rdi = sx.q(r15[1].d)
int128_t zmm0
int128_t zmm1
float zmm2

if (rdi s>= 4)
    void* r9 = *r15
    int64_t r11_1 = *arg4
    int32_t* rdx = r9 + 4
    int64_t rbx_1 = *arg2[1]
    int32_t* r9_1 = r9 + 0x14
    int64_t i_2 = ((rdi - 4) u>> 2) + 1
    rbp = i_2 << 2
    int64_t i
    
    do
        *(r11_1 + (sx.q(*rdx) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_1 = sx.q(rdx[-1]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_1 << 2))
        zmm1.d = (*(rbx_1 + (rcx_1 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_1 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm0.d = zmm1.d f* *(arg1 + 0x10)
                zmm0.d = zmm0.d f* zmm1.d
                *(r11_1 + (sx.q(*rdx) << 2)) = zmm0.d
        
        *(r11_1 + (sx.q(r9_1[-2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_3 = sx.q(rdx[1]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_3 << 2))
        zmm1.d = (*(rbx_1 + (rcx_3 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_3 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm0.d = zmm1.d f* *(arg1 + 0x10)
                zmm0.d = zmm0.d f* zmm1.d
                *(r11_1 + (sx.q(r9_1[-2]) << 2)) = zmm0.d
        
        *(r11_1 + (sx.q(*r9_1) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_5 = sx.q(rdx[3]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_5 << 2))
        zmm1.d = (*(rbx_1 + (rcx_5 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_5 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm0.d = zmm1.d f* *(arg1 + 0x10)
                zmm0.d = zmm0.d f* zmm1.d
                *(r11_1 + (sx.q(*r9_1) << 2)) = zmm0.d
        
        *(r11_1 + (sx.q(r9_1[2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_7 = sx.q(rdx[5]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_7 << 2))
        zmm1.d = (*(rbx_1 + (rcx_7 << 2) + 8)).d f* *(arg3 + 8)
        zmm2 = *(rbx_1 + (rcx_7 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
        
        if (not(zmm2 >= -9.99999994e-09f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
                zmm1.d = 1f - zmm2 f/ zmm1.d
                zmm0.d = zmm1.d f* *(arg1 + 0x10)
                zmm0.d = zmm0.d f* zmm1.d
                *(r11_1 + (sx.q(r9_1[2]) << 2)) = zmm0.d
        
        rdx = &rdx[8]
        r9_1 = &r9_1[8]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbp s>= rdi)
    return 

int64_t i_3 = rdi - rbp
int64_t r11_2 = *arg4
int64_t r9_2 = *arg2[1]
void* rdx_1 = *r15 + (rbp << 3)
int64_t i_1

do
    *(r11_2 + (sx.q(*(rdx_1 + 4)) << 2)) = *(arg1 + 0x1c)
    int64_t rcx_9 = sx.q(*rdx_1) * 3
    zmm0.d = (*arg3).d f* *(r9_2 + (rcx_9 << 2))
    zmm1.d = (*(r9_2 + (rcx_9 << 2) + 8)).d f* *(arg3 + 8)
    zmm2 = *(r9_2 + (rcx_9 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d f+ zmm1.d f- *(arg3 + 0xc)
    
    if (not(zmm2 >= -9.99999994e-09f))
        zmm1 = *(arg1 + 0x20)
        
        if (not(zmm2 f<= (zmm1 ^ 0x80000000).d))
            zmm1.d = 1f - zmm2 f/ zmm1.d
            zmm0.d = zmm1.d f* *(arg1 + 0x10)
            zmm0.d = zmm0.d f* zmm1.d
            *(r11_2 + (sx.q(*(rdx_1 + 4)) << 2)) = zmm0.d
    
    rdx_1 += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
