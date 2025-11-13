// 函数: sub_1403ed2b0
// 地址: 0x1403ed2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm5 = *arg2
int128_t zmm6
zmm6.d = zmm5.d f* 9.99999996e-13f
zmm6.d = zmm6.d f+ 9.99999972e-10f

if (not(zmm6.d f<= zmm5.d))
    zmm5 = zmm6

float zmm0 = *(arg2 + 4) f/ zmm5.d
*arg1 = zmm0
zmm5.d = zmm5.d f- zmm0 f* *(arg2 + 4)

if (not(zmm6.d f<= zmm5.d))
    zmm5 = zmm6

int32_t rdi = 1
int64_t r9 = 1

if (arg3 s> 1)
    void* rbx_1 = arg2 - 4
    void* r14_2 = arg1 - arg2
    
    do
        float zmm2 = *(rbx_1 + 0xc)
        int64_t rcx = 0
        float zmm1
        
        if (r9 s>= 4)
            void* rax_1 = &arg1[2]
            void* rdx = rbx_1
            int64_t i_3 = ((r9 - 4) u>> 2) + 1
            rcx = i_3 << 2
            int64_t i
            
            do
                zmm0 = *(rdx + 8)
                zmm1 = *(rdx + 4)
                rax_1 += 0x10
                rdx -= 0x10
                zmm2 = zmm2 - zmm0 f* *(rax_1 - 0x18) - zmm1 f* *(rax_1 - 0x14)
                    - *(rdx + 0x10) f* *(rax_1 - 0x10) - *(rdx + 0xc) f* *(rax_1 - 0xc)
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (rcx s< r9)
            void* rdx_1 = arg2 + ((r9 - rcx) << 2)
            
            do
                zmm0 = arg1[rcx]
                rcx += 1
                rdx_1 -= 4
                zmm2 = zmm2 - zmm0 f* *(rdx_1 + 4)
            while (rcx s< r9)
        
        float zmm4 = zmm2 f/ zmm5.d
        zmm5.d = zmm5.d f- zmm4 * zmm2
        
        if (not(zmm6.d f<= zmm5.d))
            zmm5 = zmm6
        
        uint32_t rsi_1 = 0
        uint64_t rbp_1 = 0
        int32_t r11_2 = rdi s>> 1
        
        if (r11_2 s>= 4)
            void* rcx_1 = &arg1[2]
            void* rdx_2 = r14_2 + rbx_1
            uint64_t rax_6 = zx.q(((r11_2 - 4) u>> 2) + 1)
            uint64_t i_4 = zx.q(rax_6.d)
            rsi_1 = (rax_6 << 2).d
            rbp_1 = rax_6 << 2
            uint64_t i_1
            
            do
                zmm2 = *(rdx_2 + 4)
                rcx_1 += 0x10
                rdx_2 -= 0x10
                *(rdx_2 + 0x14) = zmm2 - zmm4 f* *(rcx_1 - 0x18)
                zmm1 = zmm4 f* *(rcx_1 - 0x14)
                *(rcx_1 - 0x18) = *(rcx_1 - 0x18) - zmm2 * zmm4
                float zmm3 = *(rdx_2 + 0x10)
                *(rdx_2 + 0x10) = zmm3 - zmm1
                zmm1 = zmm4 f* *(rcx_1 - 0x10)
                *(rcx_1 - 0x14) = *(rcx_1 - 0x14) - zmm3 * zmm4
                zmm2 = *(rdx_2 + 0xc)
                *(rdx_2 + 0xc) = zmm2 - zmm1
                zmm1 = zmm4 f* *(rcx_1 - 0xc)
                *(rcx_1 - 0x10) = *(rcx_1 - 0x10) - zmm2 * zmm4
                zmm2 = *(rdx_2 + 8)
                *(rdx_2 + 8) = zmm2 - zmm1
                *(rcx_1 - 0xc) = *(rcx_1 - 0xc) - zmm2 * zmm4
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        if (rsi_1 s< r11_2)
            void* rcx_2 = &arg1[rbp_1]
            uint64_t i_5 = zx.q(r11_2 - rsi_1)
            void* rdx_6 = &arg1[r9 - rbp_1 - 1]
            uint64_t i_2
            
            do
                zmm2 = *rdx_6
                rcx_2 += 4
                rdx_6 -= 4
                *(rdx_6 + 4) = zmm2 - zmm4 f* *(rcx_2 - 4)
                *(rcx_2 - 4) = *(rcx_2 - 4) - zmm2 * zmm4
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if ((rdi.b & 1) != 0)
            int64_t rax_7 = sx.q(r11_2)
            zmm2 = arg1[rax_7]
            arg1[rax_7] = zmm2 - zmm2 * zmm4
        
        rdi += 1
        *(r14_2 + rbx_1 + 8) = zmm4
        r9 += 1
        rbx_1 += 4
    while (rdi s< arg3)

return zmm5.d
