// 函数: sub_1403fc250
// 地址: 0x1403fc250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t r13 = sx.q(arg4)
int32_t zmm3 = (zx.o(0)).d
void var_b4
void var_b0
uint128_t zmm0
uint128_t zmm2

if (arg5 != 1)
    zmm0 = *arg2
    int64_t rdx_1 = sx.q(arg3)
    int64_t r9_1 = rdx_1 << 2
    zmm2 = *(r9_1 + arg2)
    
    if (not(zmm0.d f> zmm2.d))
        zmm0 = zmm2
    
    void* rbx_1 = 1
    var_b8 = zmm0.d
    
    if (r13 s> 1)
        uint128_t zmm4
        int32_t zmm5
        
        if (r13 - 1 s>= 4)
            void* r8_2 = arg2 - &var_b8
            int32_t* rcx_3 = &var_b8
            int64_t i_7 = ((r13 - 5) u>> 2) + 1
            rbx_1 = (i_7 << 2) + 1
            int64_t i
            
            do
                zmm2 = *(r8_2 + rcx_3 + 4)
                zmm4 = *(r9_1 - &var_b8 + arg2 + rcx_3 + 4)
                
                if (zmm2.d f<= zmm4.d)
                    zmm5 = zmm4.d
                else
                    zmm5 = zmm2.d
                
                zmm0.d = (*rcx_3).d f- 1f
                
                if (not(zmm0.d f> zmm5))
                    if (zmm2.d f<= zmm4.d)
                        zmm0 = zmm4
                    else
                        zmm0 = zmm2
                
                zmm2 = *(r8_2 + rcx_3 + 8)
                zmm4 = *((rdx_1 << 2) + 8 - &var_b8 + arg2 + rcx_3)
                rcx_3[1] = zmm0.d
                
                if (zmm2.d f<= zmm4.d)
                    zmm5 = zmm4.d
                else
                    zmm5 = zmm2.d
                
                zmm0.d = zmm0.d f- 1f
                
                if (not(zmm0.d f> zmm5))
                    if (zmm2.d f<= zmm4.d)
                        zmm0 = zmm4
                    else
                        zmm0 = zmm2
                
                zmm2 = *(r8_2 + rcx_3 + 0xc)
                zmm4 = *(rcx_3 + (rdx_1 << 2) + 0xc - &var_b8 + arg2)
                rcx_3[2] = zmm0.d
                
                if (zmm2.d f<= zmm4.d)
                    zmm5 = zmm4.d
                else
                    zmm5 = zmm2.d
                
                zmm0.d = zmm0.d f- 1f
                
                if (not(zmm0.d f> zmm5))
                    if (zmm2.d f<= zmm4.d)
                        zmm0 = zmm4
                    else
                        zmm0 = zmm2
                
                zmm2 = *(r8_2 + rcx_3 + 0x10)
                zmm4 = *((rdx_1 << 2) + 0x10 - &var_b8 + arg2 + rcx_3)
                rcx_3[3] = zmm0.d
                
                if (zmm2.d f<= zmm4.d)
                    zmm5 = zmm4.d
                else
                    zmm5 = zmm2.d
                
                zmm0.d = zmm0.d f- 1f
                
                if (not(zmm0.d f> zmm5))
                    if (zmm2.d f<= zmm4.d)
                        zmm0 = zmm4
                    else
                        zmm0 = zmm2
                
                rcx_3 = &rcx_3[4]
                *rcx_3 = zmm0.d
                i = i_7
                i_7 -= 1
            while (i != 1)
        
        if (rbx_1 s< r13)
            void* rax_10 = &(&var_b8)[rbx_1 - 1]
            void* i_13 = r13 - rbx_1
            void* i_1
            
            do
                zmm2 = *(rax_10 + arg2 - &var_b8 + 4)
                zmm4 = *(rax_10 + r9_1 - &var_b8 + arg2 + 4)
                
                if (zmm2.d f<= zmm4.d)
                    zmm5 = zmm4.d
                else
                    zmm5 = zmm2.d
                
                zmm0.d = (*rax_10).d f- 1f
                
                if (not(zmm0.d f> zmm5))
                    if (zmm2.d f<= zmm4.d)
                        zmm0 = zmm4
                    else
                        zmm0 = zmm2
                
                rax_10 += 4
                *rax_10 = zmm0.d
                i_1 = i_13
                i_13 -= 1
            while (i_1 != 1)
else
    void* rbx = 1
    var_b8 = (*arg2).d
    
    if (r13 s> 1)
        if (r13 - 1 s>= 4)
            void* rax_3 = arg2 + 8
            void* rdx = &var_b8 - arg2
            void* r8 = &var_b4 - arg2
            int64_t i_8 = ((r13 - 5) u>> 2) + 1
            rbx = (i_8 << 2) + 1
            int64_t i_2
            
            do
                zmm2 = *(rax_3 - 4)
                zmm0.d = (*(rdx + rax_3 - 8)).d f- 1f
                
                if (not(zmm0.d f> zmm2.d))
                    zmm0 = zmm2
                
                zmm2 = *rax_3
                *(r8 + rax_3 - 8) = zmm0.d
                zmm0.d = zmm0.d f- 1f
                
                if (not(zmm0.d f> zmm2.d))
                    zmm0 = zmm2
                
                zmm2 = *(rax_3 + 4)
                *(rdx + rax_3) = zmm0.d
                zmm0.d = zmm0.d f- 1f
                
                if (not(zmm0.d f> zmm2.d))
                    zmm0 = zmm2
                
                zmm2 = *(rax_3 + 8)
                *(r8 + rax_3) = zmm0.d
                zmm0.d = zmm0.d f- 1f
                
                if (not(zmm0.d f> zmm2.d))
                    zmm0 = zmm2
                
                *(&var_b0 - arg2 + rax_3) = zmm0.d
                rax_3 += 0x10
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
        
        if (rbx s< r13)
            int32_t* rax_4 = arg2 + (rbx << 2)
            void* rcx_2 = &var_b8 - arg2
            void* i_12 = r13 - rbx
            void* i_3
            
            do
                zmm2 = *rax_4
                zmm0.d = (*(rcx_2 + rax_4 - 4)).d f- 1f
                
                if (not(zmm0.d f> zmm2.d))
                    zmm0 = zmm2
                
                *(rax_4 + rcx_2) = zmm0.d
                rax_4 = &rax_4[1]
                i_3 = i_12
                i_12 -= 1
            while (i_3 != 1)

int32_t rdx_3 = (r13 - 2).d
int64_t r9_3 = sx.q(rdx_3)

if (rdx_3 s>= 0)
    if (rdx_3 + 1 s>= 4)
        void* rcx_5 = &(&var_b8)[r9_3 - 2]
        uint64_t i_11 = zx.q(rdx_3 + 1) u>> 2
        rdx_3 += neg.d(i_11.d) << 2
        r9_3 += neg.q(i_11) << 2
        uint64_t i_4
        
        do
            zmm0 = *(rcx_5 + 8)
            zmm2.d = (*(rcx_5 + 0xc)).d f- 1f
            
            if (not(zmm0.d f> zmm2.d))
                zmm0 = zmm2
            
            zmm2 = *(rcx_5 + 4)
            *(rcx_5 + 8) = zmm0.d
            zmm0.d = zmm0.d f- 1f
            
            if (not(zmm2.d f> zmm0.d))
                zmm2 = zmm0
            
            zmm0 = *rcx_5
            *(rcx_5 + 4) = zmm2.d
            zmm2.d = zmm2.d f- 1f
            
            if (not(zmm0.d f> zmm2.d))
                zmm0 = zmm2
            
            zmm2 = *(rcx_5 - 4)
            *rcx_5 = zmm0.d
            zmm0.d = zmm0.d f- 1f
            
            if (not(zmm2.d f> zmm0.d))
                zmm2 = zmm0
            
            *(rcx_5 - 4) = zmm2.d
            rcx_5 -= 0x10
            i_4 = i_11
            i_11 -= 1
        while (i_4 != 1)
    
    if (rdx_3 s>= 0)
        void* rax_16 = &(&var_b8)[r9_3]
        int32_t temp1_1
        
        do
            zmm2 = *rax_16
            zmm0.d = (*(rax_16 + 4)).d f- 1f
            
            if (not(zmm2.d f> zmm0.d))
                zmm2 = zmm0
            
            *rax_16 = zmm2.d
            rax_16 -= 4
            temp1_1 = rdx_3
            rdx_3 -= 1
        while (temp1_1 - 1 s>= 0)

int32_t rsi_4 = (r13 - 1).d
int32_t rbp_4 = 0

do
    int32_t rbx_2 = 2
    void* rdi_4 = 2
    
    if (rsi_4 s> 2)
        if (rsi_4 - 2 s>= 4)
            uint64_t rax_20 = zx.q(((rsi_4 - 6) u>> 2) + 1)
            void* rcx_6 = arg1 + 0x10
            rbx_2 = ((rax_20 << 2) + 2).d
            rdi_4 = (rax_20 << 2) + 2
            uint64_t i_9 = zx.q(rax_20.d)
            uint64_t i_5
            
            do
                zmm0 = *(rcx_6 - 8)
                
                if (not(0f f<= zmm0.d))
                    zmm0 = zx.o(0)
                
                zmm2 = *(&var_b0 - arg1 + rcx_6 - 0x10)
                
                if (not(0f f<= zmm2.d))
                    zmm2 = zx.o(0)
                
                zmm0.d = zmm0.d f- zmm2.d
                
                if (not(0f f<= zmm0.d))
                    zmm0 = zx.o(0)
                
                zmm0.d = zmm0.d f+ zmm3
                zmm3 = *(rcx_6 - 4)
                
                if (not(0f f<= zmm3))
                    zmm3 = (zx.o(0)).d
                
                void var_ac
                zmm2 = *(&var_ac - arg1 + rcx_6 - 0x10)
                
                if (not(0f f<= zmm2.d))
                    zmm2 = zx.o(0)
                
                zmm3 = zmm3 f- zmm2.d
                
                if (not(0f f<= zmm3))
                    zmm3 = (zx.o(0)).d
                
                zmm2 = *rcx_6
                zmm3 = zmm3 f+ zmm0.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 = zx.o(0)
                
                zmm0 = *(&var_b8 - arg1 + rcx_6)
                
                if (not(0f f<= zmm0.d))
                    zmm0 = zx.o(0)
                
                zmm2.d = zmm2.d f- zmm0.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 = zx.o(0)
                
                zmm2.d = zmm2.d f+ zmm3
                zmm3 = *(rcx_6 + 4)
                
                if (not(0f f<= zmm3))
                    zmm3 = (zx.o(0)).d
                
                zmm0 = *(&var_b4 - arg1 + rcx_6)
                
                if (not(0f f<= zmm0.d))
                    zmm0 = zx.o(0)
                
                zmm3 = zmm3 f- zmm0.d
                
                if (not(0f f<= zmm3))
                    zmm3 = (zx.o(0)).d
                
                rcx_6 += 0x10
                zmm3 = zmm3 f+ zmm2.d
                i_5 = i_9
                i_9 -= 1
            while (i_5 != 1)
        
        if (rbx_2 s< rsi_4)
            void* rcx_7 = &(&var_b8)[rdi_4]
            uint64_t i_10 = zx.q(rsi_4 - rbx_2)
            uint64_t i_6
            
            do
                zmm0 = *(arg1 - &var_b8 + rcx_7)
                
                if (not(0f f<= zmm0.d))
                    zmm0 = zx.o(0)
                
                zmm2 = *rcx_7
                
                if (not(0f f<= zmm2.d))
                    zmm2 = zx.o(0)
                
                zmm0.d = zmm0.d f- zmm2.d
                
                if (not(0f f<= zmm0.d))
                    zmm0 = zx.o(0)
                
                zmm0.d = zmm0.d f+ zmm3
                rcx_7 += 4
                zmm3 = zmm0.d
                i_6 = i_10
                i_10 -= 1
            while (i_6 != 1)
    
    rbp_4 += 1
while (rbp_4 s< arg5)

int32_t r14
r14.b = zmm3 f/ _mm_cvtepi32_ps(zx.o((r13 - 3).d * arg5)).d f> 1f
__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(r14)
