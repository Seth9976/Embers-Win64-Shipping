// 函数: sub_140f1c050
// 地址: 0x140f1c050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm0
int64_t zmm1

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t r9_1 = r10_1 * 2
                uint64_t rcx = zx.q(r9_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int64_t r11_1 = sx.q(r9_1)
                    int64_t rax_4 = sx.q(rcx.d)
                    zmm0 = *(&arg1[r11_1] + 0x14)
                    zmm1 = *(&arg1[rax_4] + 4)
                    bool rdx_1
                    
                    if (zmm0.d f!= zmm1.d)
                        rdx_1 = zmm1.d f> zmm0.d
                    else
                        rdx_1 = arg1[r11_1 + 2].d s< arg1[rax_4].d
                    
                    if (rdx_1 != 0)
                        rcx = zx.q(r9_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int64_t rax_6 = sx.q(r10_1)
                zmm0 = *(&arg1[rax_6] + 4)
                int64_t* r10_2 = &arg1[rax_6]
                result = sx.q(rcx.d)
                zmm1 = *(&arg1[result] + 4)
                int32_t* r9_2 = &arg1[result]
                bool rdx_2
                
                if (zmm0.d f!= zmm1.d)
                    rdx_2 = zmm1.d f> zmm0.d
                else
                    result = zx.q(*r9_2)
                    rdx_2 = *r10_2 s< result.d
                
                if (rdx_2 == 0)
                    break
                
                if (r10_2 != r9_2)
                    zmm1 = *r10_2
                    *r10_2 = *r9_2
                    *r9_2 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                r10_1 = rcx.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int64_t* rdi_1 = &arg1[result]
    
    do
        if (arg1 != rdi_1)
            zmm1 = *arg1
            *arg1 = *rdi_1
            *rdi_1 = zmm1
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            do
                int32_t r9_3 = r10_3 * 2
                uint64_t rcx_1 = zx.q(r9_3 + 1)
                
                if ((rcx_1 + 1).d s< i)
                    int64_t rbx_1 = sx.q(r9_3)
                    int64_t rax_8 = sx.q(rcx_1.d)
                    zmm0 = *(&arg1[rbx_1] + 0x14)
                    zmm1 = *(&arg1[rax_8] + 4)
                    bool rdx_3
                    
                    if (zmm0.d f!= zmm1.d)
                        rdx_3 = zmm1.d f> zmm0.d
                    else
                        rdx_3 = arg1[rbx_1 + 2].d s< arg1[rax_8].d
                    
                    if (rdx_3 != 0)
                        rcx_1 = zx.q(r9_3)
                    
                    rcx_1 = zx.q(rcx_1.d + 1)
                
                int64_t rax_10 = sx.q(r10_3)
                zmm0 = *(&arg1[rax_10] + 4)
                void* r10_4 = &arg1[rax_10]
                result = sx.q(rcx_1.d)
                zmm1 = *(&arg1[result] + 4)
                void* r9_4 = &arg1[result]
                bool rdx_4
                
                if (zmm0.d f!= zmm1.d)
                    rdx_4 = zmm1.d f> zmm0.d
                else
                    result = zx.q(*r9_4)
                    rdx_4 = *r10_4 s< result.d
                
                if (rdx_4 == 0)
                    break
                
                if (r10_4 != r9_4)
                    zmm1 = *r10_4
                    *r10_4 = *r9_4
                    *r9_4 = zmm1
                
                result = zx.q(((rcx_1 << 1) + 1).d)
                r10_3 = rcx_1.d
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 8
    while (i s> 0)

return result
