// 函数: sub_141e23210
// 地址: 0x141e23210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2

if (arg3 <= 9.99999975e-05f)
    return *arg1

bool cond:1 = 0f >= arg1[3]
arg1[5] = arg3 + arg1[5]

if (not(cond:1))
    int32_t rdx_1 = arg1[8]
    arg1[4] = 0
    int32_t r8_1 = 0
    int64_t rcx = *(arg1 + 0x18)
    
    if (rdx_1 s> 0)
        int64_t rax_1 = 0
        
        do
            if (not(arg1[5] f- *(rax_1 + rcx + 4) <= arg1[3]))
                *(rax_1 + rcx + 4) = 0
            
            rcx = *(arg1 + 0x18)
            
            if (not(0f f>= *(rax_1 + rcx + 4)))
                arg1[4] += 1
            
            rdx_1 = arg1[8]
            r8_1 += 1
            rax_1 += 8
        while (r8_1 s< rdx_1)
    
    int64_t rdi_1 = sx.q(arg1[2])
    int64_t r9_1 = rdi_1
    
    if (not(0f f>= *(rcx + (rdi_1 << 3) + 4)))
        if (rdx_1 s<= 0)
        label_141e232f9:
            rdi_1 = zx.q(rdx_1)
            int64_t rbp_1 = sx.q(arg1[8])
            int32_t rax_6 = (rbp_1 + 5).d
            arg1[8] = rax_6
            
            if (rax_6 s> arg1[9])
                sub_1405a4d70(&arg1[6])
            
            int64_t rax_7 = *(arg1 + 0x18)
            *(rax_7 + (rbp_1 << 3)) = 0
            *(rax_7 + (rbp_1 << 3) + 8) = 0
            *(rax_7 + (rbp_1 << 3) + 0x10) = 0
            *(rax_7 + (rbp_1 << 3) + 0x18) = 0
            *(rax_7 + (rbp_1 << 3) + 0x20) = 0
        else
            int64_t r11_1 = sx.q(rdx_1)
            int32_t r8_2 = rdi_1.d
            
            while (true)
                int32_t r10_2 = r8_2 - rdx_1
                
                if (r9_1 s< r11_1)
                    r10_2 = r8_2
                
                int64_t rax_3 = r9_1 - r11_1
                
                if (r9_1 s< r11_1)
                    rax_3 = r9_1
                
                if (0f f>= *(rcx + (rax_3 << 3) + 4))
                    rdi_1 = zx.q(r10_2)
                    break
                
                r8_2 += 1
                r9_1 += 1
                
                if (r8_2 - rdi_1.d s>= rdx_1)
                    goto label_141e232f9
    
    int64_t rax_8 = *(arg1 + 0x18)
    int32_t zmm4 = (zx.o(0)).d
    float zmm0 = arg1[5]
    int64_t rcx_2 = sx.q(rdi_1.d)
    arg1[2] = rdi_1.d
    *(rax_8 + (rcx_2 << 3)) = zmm7.d
    zmm7 = zx.o(0)
    *(rax_8 + (rcx_2 << 3) + 4) = zmm0
    int32_t i_2 = arg1[8]
    
    if (i_2 s<= 0)
        zmm7 = zx.o(0)
    else
        int32_t* rdx_3 = *(arg1 + 0x18)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            zmm0 = rdx_3[1]
            
            if (not(zmm0 <= 0f))
                arg2 = arg1[3]
                arg3 = arg1[5] - zmm0
                
                if (not(arg3 f> arg2.d))
                    int32_t rcx_3 = arg1[1]
                    
                    if (rcx_3 == 0)
                        arg2 = 0x3f800000
                    label_141e233e3:
                        zmm4 = zmm4 f+ arg2.d
                        arg2.d = arg2.d f* *rdx_3
                        zmm7.d = zmm7.d f+ arg2.d
                    else if (rcx_3 == 1)
                        arg2.d = 1f - arg3 f/ arg2.d
                    label_141e233d9:
                        
                        if (not(arg2.d f<= 0f))
                            goto label_141e233e3
                    else if (rcx_3 == 2)
                        arg2.d = 1f - arg3 * arg3 * arg3 f/ arg2.d
                        goto label_141e233d9
            
            rdx_3 = &rdx_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (zmm4 f<= 0f)
            zmm7 = zx.o(0)
        else
            zmm7.d = zmm7.d f/ zmm4
    
    arg1[2] += 1
    
    if (arg1[2] s> i_2 - 1)
        arg1[2] = 0

*arg1 = zmm7.d
return zmm7.d
