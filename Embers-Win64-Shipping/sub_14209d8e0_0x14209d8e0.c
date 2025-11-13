// 函数: sub_14209d8e0
// 地址: 0x14209d8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = arg1[4].d
int64_t i_2 = sx.q(arg1[1].d)
float zmm0
int128_t zmm1

if (i_2 s> 0)
    int64_t rbx_1 = 0
    int64_t i_1 = i_2
    int64_t i
    
    do
        int128_t* rdi_1 = *arg1
        void* r8_1 = nullptr
        uint32_t r11_1 = 0
        uint64_t rax_1 = 0
        zmm1 = *(rdi_1 + rbx_1)
        
        if (r13 s>= 4)
            void* rcx_1 = arg1[3] + 0x18
            uint64_t rax_4 = zx.q(((r13 - 4) u>> 2) + 1)
            void* rdx_1 = rcx_1
            uint64_t j_3 = zx.q(rax_4.d)
            r11_1 = (rax_4 << 2).d
            rax_1 = rax_4 << 2
            uint64_t j
            
            do
                zmm0 = *(rcx_1 - 0x18) f- zmm1.d
                
                if (not(zmm0 <= -0.00100000005f) && not(zmm0 >= 0.00100000005f))
                    r8_1 = rdx_1 - 0x18
                
                zmm0 = *(rcx_1 - 0xc) f- zmm1.d
                
                if (not(zmm0 <= -0.00100000005f) && not(zmm0 >= 0.00100000005f))
                    r8_1 = rdx_1 - 0xc
                
                zmm0 = *rcx_1 f- zmm1.d
                
                if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                    r8_1 = rdx_1
                
                zmm0 = *(rcx_1 + 0xc) f- zmm1.d
                
                if (not(zmm0 <= -0.00100000005f) && not(zmm0 >= 0.00100000005f))
                    r8_1 = rdx_1 + 0xc
                
                rcx_1 += 0x30
                rdx_1 += 0x30
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        if (r11_1 s< r13)
            int64_t rdx_2 = arg1[3]
            float* r9_1 = rdx_2 + rax_1 * 0xc
            void* r10_1 = rdx_2 + sx.q(r11_1) * 0xc
            uint64_t j_2 = zx.q(r13 - r11_1)
            uint64_t j_1
            
            do
                zmm0 = *r9_1 f- zmm1.d
                
                if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                    r8_1 = r10_1
                
                r9_1 = &r9_1[3]
                r10_1 += 0xc
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        *(rdi_1 + rbx_1 + 4) = *(r8_1 + 4)
        *(*arg1 + rbx_1 + 0x10) = *(r8_1 + 8)
        rbx_1 += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rcx_5 = 0

if (i_2 s> 0)
    int64_t rbp = 0
    int64_t r9_2 = 0
    
    do
        int64_t rax_8 = rbp - 1
        float* r8_2 = *arg1
        int32_t rdx_4 = arg1[1].d - 1
        
        if (rbp s<= 0)
            rax_8 = 0
        
        int64_t rbx_2 = rax_8 * 5
        int32_t rax_9 = rcx_5 + 1
        
        if (rcx_5 s>= rdx_4)
            rax_9 = rdx_4
        
        int64_t r15_1 = sx.q(rax_9) * 5
        
        if (*(r8_2 + r9_2 + 0x10) != 4 || rbp == 0 || rcx_5 == rdx_4)
            zmm0 = *(r8_2 + r9_2 + 4)
        label_14209dbb1:
            zmm1 = r8_2[r15_1 + 1]
            
            if (zmm0 f< zmm1.d)
                if (zmm0 > r8_2[rbx_2 + 1])
                    zmm1.d = zmm1.d f- r8_2[rbx_2 + 1]
                    zmm1.d = zmm1.d f/ (r8_2[r15_1] - r8_2[rbx_2])
                else
                    zmm1 = zx.o(0)
            else if (zmm0 >= r8_2[rbx_2 + 1]
                    || (not(zmm0 f> zmm1.d) && not(zmm0 > r8_2[rbx_2 + 1])))
                zmm1 = zx.o(0)
            else
                zmm1.d = zmm1.d f- r8_2[rbx_2 + 1]
                zmm1.d = zmm1.d f/ (r8_2[r15_1] - r8_2[rbx_2])
            
            *(r8_2 + r9_2 + 0xc) = zmm1.d
            *(r8_2 + r9_2 + 8) = zmm1.d
        else
            int64_t r10_2 = sx.q(arg1[4].d)
            float zmm4 = *(r8_2 + r9_2)
            void* rax_13
            
            if (r10_2.d s>= 8)
                int32_t rdi_3 = 0
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r10_2.d)
                int32_t r11_2 = (temp5_1 - temp4_1) s>> 1
                
                if (r10_2.d s<= 0)
                label_14209db76:
                    rax_13 = nullptr
                else
                    int64_t rsi_1 = arg1[3]
                    
                    while (true)
                        int64_t rdx_7 = sx.q(r11_2) * 3
                        zmm1 = *(rsi_1 + (rdx_7 << 2))
                        rax_13 = rsi_1 + (rdx_7 << 2)
                        zmm0 = zmm1.d - zmm4
                        
                        if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                            break
                        
                        zmm1.d f- zmm4
                        int32_t rax_18 = r11_2
                        
                        if (zmm1.d f<= zmm4)
                            rax_18 = r10_2.d
                        
                        r10_2 = zx.q(rax_18)
                        
                        if (zmm1.d f<= zmm4)
                            rdi_3 = r11_2 + 1
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(rdi_3 + r10_2.d)
                        r11_2 = (temp7_1 - temp6_1) s>> 1
                        
                        if (rdi_3 s>= r10_2.d)
                            goto label_14209db76_1
            else
                int32_t rdx_5 = 0
                int64_t rcx_6 = 0
                
                if (r10_2.d s<= 0)
                label_14209db76_1:
                    rax_13 = nullptr
                else
                    float* rdi_2 = arg1[3]
                    float* rax_11 = rdi_2
                    
                    while (true)
                        zmm0 = *rax_11 - zmm4
                        
                        if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                            rax_13 = &rdi_2[sx.q(rdx_5) * 3]
                            break
                        
                        rdx_5 += 1
                        rcx_6 += 1
                        rax_11 = &rax_11[3]
                        
                        if (rcx_6 s>= r10_2)
                            goto label_14209db76_1
            
            zmm0 = *(r8_2 + r9_2 + 4)
            
            if (*(rax_13 + 9) != 0)
                goto label_14209dbb1
            
            *(r8_2 + r9_2 + 8) = zmm0 - r8_2[rbx_2 + 1]
            *(r8_2 + r9_2 + 0xc) = r8_2[r15_1 + 1] f- *(r8_2 + r9_2 + 4)
        
        rbp += 1
        r9_2 += 0x14
        rcx_5 += 1
    while (rbp s< i_2)

if (r13 s< 2)
    int128_t* rax_24 = arg1[3]
    return sub_141fda760(arg1, *rax_24, rax_24 + 4) __tailcall

if (r13 - 1 s> *(arg1 + 0x34))
    sub_1405c5570(&arg1[5], r13 - 1)

int32_t result = arg1[6].d
bool cond:0 = result s<= 0

if (result == 0)
    arg2 = r13 - 1
    int64_t result_1 = sx.q(result)
    int32_t rax_26 = (result_1 + 1).d
    arg1[6].d = rax_26
    
    if (rax_26 s> *(arg1 + 0x34))
        sub_1405a4d70(&arg1[5])
    
    *(arg1[5] + (result_1 << 3)) = 0.q
    result = arg1[6].d
    cond:0 = result s<= 0

if (not(cond:0))
    do
        int32_t rax_28 = arg1[6].d
        int64_t* rcx_14 = arg1[5]
        int64_t rbx_4 = *rcx_14
        int32_t arg_8
        arg_8.q = rbx_4
        
        if (rax_28 != 1)
            memmove(rcx_14, &rcx_14[1], (rax_28 - 1) << 3)
            rax_28 = arg1[6].d
        
        arg1[6].d = rax_28 - 1
        sub_1405c53d0(&arg1[5])
        result = sub_14209e440(arg1, rbx_4.d, arg2)
    while (arg1[6].d s> 0)

return result
