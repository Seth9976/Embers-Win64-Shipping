// 函数: sub_140409ea0
// 地址: 0x140409ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg2
int64_t r14 = sx.q(arg3)

if (arg3 s> 0)
    __builtin_memset(arg1, 0, r14 << 2)

float result = *arg2
result - 0f

if (is_unordered.d(result, 0f) || not(result == 0f))
    int64_t r8 = 0
    int32_t i = 0
    
    if (r14.d s> 0)
        void* rbp_2 = arg1 - arg2
        void* r11_1 = &arg2[1]
        
        do
            int64_t rcx_1 = 0
            int128_t zmm4 = zx.o(0)
            int128_t zmm1
            
            if (r8 s>= 4)
                void* rax_1 = arg1 + 8
                void* rdx = r11_1 - 0xc
                int64_t j_3 = ((r8 - 4) u>> 2) + 1
                rcx_1 = j_3 << 2
                int64_t j
                
                do
                    zmm1 = *(rdx + 8)
                    result = *(rdx + 4)
                    rax_1 += 0x10
                    rdx -= 0x10
                    zmm1.d = zmm1.d f* *(rax_1 - 0x18)
                    zmm1.d = zmm1.d f+ zmm4.d
                    zmm4.d = zmm1.d f+ result f* *(rax_1 - 0x14)
                    zmm1.d = (*(rax_1 - 0x10)).d f* *(rdx + 0x10)
                    zmm4.d = zmm4.d f+ zmm1.d
                    zmm4.d = zmm4.d f+ *(rdx + 0xc) f* *(rax_1 - 0xc)
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            if (rcx_1 s< r8)
                void* rdx_1 = &arg2[r8 - rcx_1]
                
                do
                    result = *(arg1 + (rcx_1 << 2))
                    rcx_1 += 1
                    rdx_1 -= 4
                    zmm4.d = zmm4.d f+ result f* *(rdx_1 + 4)
                while (rcx_1 s< r8)
            
            zmm4.d = zmm4.d f+ *r11_1
            int64_t rcx_2 = 0
            i += 1
            int64_t rdi_5 = sx.q(i) s>> 1
            zmm4.d = zmm4.d f/ zmm5
            zmm4 ^= 0x80000000
            *(r11_1 + rbp_2 - 4) = zmm4.d
            float zmm2
            
            if (rdi_5 s>= 4)
                void* rdx_2 = arg1 + 8
                void* r10_2 = rbp_2 - 0xc + r11_1
                int64_t j_2 = ((rdi_5 - 4) u>> 2) + 1
                rcx_2 = j_2 << 2
                int64_t j_1
                
                do
                    zmm1 = *(r10_2 + 4)
                    zmm2 = *(rdx_2 - 8)
                    r10_2 -= 0x10
                    rdx_2 += 0x10
                    *(rdx_2 - 0x18) = zmm1.d f* zmm4.d + zmm2
                    zmm2 = zmm2 f* zmm4.d f+ zmm1.d
                    zmm1 = *(r10_2 + 0x10)
                    *(r10_2 + 0x14) = zmm2
                    zmm2 = *(rdx_2 - 0x14)
                    *(rdx_2 - 0x14) = zmm1.d f* zmm4.d + zmm2
                    zmm2 = zmm2 f* zmm4.d f+ zmm1.d
                    zmm1 = *(r10_2 + 0xc)
                    *(r10_2 + 0x10) = zmm2
                    float zmm3 = *(rdx_2 - 0x10)
                    *(rdx_2 - 0x10) = zmm1.d f* zmm4.d + zmm3
                    zmm3 = zmm3 f* zmm4.d f+ zmm1.d
                    zmm1 = *(r10_2 + 8)
                    *(r10_2 + 0xc) = zmm3
                    zmm2 = *(rdx_2 - 0xc)
                    *(rdx_2 - 0xc) = zmm1.d f* zmm4.d + zmm2
                    *(r10_2 + 8) = zmm2 f* zmm4.d f+ zmm1.d
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            if (rcx_2 s< rdi_5)
                void* rdx_6 = arg1 + ((r8 - rcx_2 - 1) << 2)
                
                do
                    zmm1 = *rdx_6
                    zmm2 = *(arg1 + (rcx_2 << 2))
                    rcx_2 += 1
                    rdx_6 -= 4
                    *(arg1 + (rcx_2 << 2) - 4) = zmm1.d f* zmm4.d + zmm2
                    *(rdx_6 + 4) = zmm2 f* zmm4.d f+ zmm1.d
                while (rcx_2 s< rdi_5)
            
            zmm4.d = zmm4.d f* zmm4.d
            zmm4.d = zmm4.d f* zmm5
            result = *arg2 * 0.00100000005f
            zmm5 = zmm5 f- zmm4.d
            
            if (result > zmm5)
                break
            
            r8 += 1
            r11_1 += 4
        while (i s< r14.d)

return result
