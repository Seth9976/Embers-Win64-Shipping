// 函数: sub_1421b0590
// 地址: 0x1421b0590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4[0] = arg4[0] * 0.00999999978f
void* rbp = arg2
float temp0[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
int64_t result
void* const rdi

if (arg2 == 0)
    rdi = nullptr
else
    void* rax
    rax, arg1 = sub_14249f080()
    arg2 = *(rbp + 0x10)
    arg3 = rax + 0x30
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        rdi = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        rdi = nullptr
    else
        rdi = rbp

void* const r15

if (rbp == 0)
    r15 = nullptr
else
    void* rax_1
    rax_1, arg1 = sub_14249f2e0()
    arg2 = *(rbp + 0x10)
    arg3 = rax_1 + 0x30
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        r15 = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        r15 = nullptr
    else
        r15 = rbp

void* rbx

if (rbp == 0)
    rbx = nullptr
else
    void* rax_2
    rax_2, arg1 = sub_14249f580()
    arg2 = *(rbp + 0x10)
    arg3 = rax_2 + 0x30
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        rbx = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        rbx = nullptr
    else
        rbx = rbp

void* const r14

if (rbp == 0)
    r14 = nullptr
else
    void* rax_3
    rax_3, arg1 = sub_14249f650()
    arg2 = *(rbp + 0x10)
    arg3 = rax_3 + 0x30
    result = sx.q(*(rax_3 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        r14 = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        r14 = nullptr
    else
        r14 = rbp

if (rbp == 0)
label_1421b06e1:
    
    if (r14 != 0)
        int32_t i = 0
        
        if ((**(r14 + 0x28))(r14 + 0x28, arg2, arg3).d s<= 0)
            *(rbp + 0x30) |= 2
            result.b = 1
        else
            do
                int32_t rdi_1 = 0
                
                if ((*(*(r14 + 0x28) + 8))(r14 + 0x28) s> 0)
                    int32_t rax_11
                    
                    do
                        (*(*(r14 + 0x28) + 0x20))(r14 + 0x28, zx.q(rdi_1), zx.q(i))
                        int64_t rax_9 = *(r14 + 0x28)
                        arg1[0] = arg1[0] * temp0[0]
                        (*(rax_9 + 0x70))(r14 + 0x28, zx.q(rdi_1), zx.q(i), arg1, arg5)
                        rdi_1 += 1
                        rax_11 = (*(*(r14 + 0x28) + 8))(r14 + 0x28)
                    while (rdi_1 s< rax_11)
                
                i += 1
                result = (**(r14 + 0x28))(r14 + 0x28)
            while (i s< result.d)
            
            *(rbp + 0x30) |= 2
            result.b = 1
    else
        float zmm1
        
        if (rdi != 0)
            zmm1 = temp0[0]
            temp0[0] = temp0[0] f* *(rdi + 0x38)
            result.b = 1
            zmm1 = zmm1 f* *(rdi + 0x3c)
            temp0[0] = temp0[0] f* *(rdi + 0x40)
            *(rdi + 0x38) = temp0[0]
            *(rdi + 0x3c) = zmm1
            *(rdi + 0x40) = temp0[0]
            *(rbp + 0x30) |= 2
        else if (r15 != 0)
            int32_t i_1 = 0
            
            if ((**(r15 + 0x28))(r15 + 0x28).d s<= 0)
                *(rbp + 0x30) |= 2
                result.b = 1
            else
                do
                    int32_t rdi_2 = 0
                    
                    if ((*(*(r15 + 0x28) + 8))(r15 + 0x28) s> 0)
                        int32_t rax_19
                        
                        do
                            (*(*(r15 + 0x28) + 0x20))(r15 + 0x28, zx.q(rdi_2), zx.q(i_1))
                            int64_t rax_17 = *(r15 + 0x28)
                            arg1[0] = arg1[0] * temp0[0]
                            (*(rax_17 + 0x70))(r15 + 0x28, zx.q(rdi_2), zx.q(i_1), arg1, arg5)
                            rdi_2 += 1
                            rax_19 = (*(*(r15 + 0x28) + 8))(r15 + 0x28)
                        while (rdi_2 s< rax_19)
                    
                    i_1 += 1
                    result = (**(r15 + 0x28))(r15 + 0x28)
                while (i_1 s< result.d)
                
                *(rbp + 0x30) |= 2
                result.b = 1
        else if (rbx == 0)
            result.b = 0
        else
            zmm1 = temp0[0]
            temp0[0] = temp0[0] f* *(rbx + 0x44)
            zmm1 = zmm1 f* *(rbx + 0x48)
            *(rbx + 0x44) = temp0[0]
            temp0[0] = temp0[0] f* *(rbx + 0x4c)
            *(rbx + 0x48) = zmm1
            zmm1 = temp0[0] f* *(rbx + 0x38)
            *(rbx + 0x4c) = temp0[0]
            temp0[0] = temp0[0] f* *(rbx + 0x3c)
            temp0[0] = temp0[0] f* *(rbx + 0x40)
            *(rbx + 0x3c) = temp0[0]
            *(rbx + 0x38) = zmm1
            *(rbx + 0x40) = temp0[0]
            *(rbp + 0x30) |= 2
            result.b = 1
else
    void* rax_4
    rax_4, arg1 = sub_14249f4b0()
    arg2 = *(rbp + 0x10)
    arg3 = rax_4 + 0x30
    result = sx.q(*(rax_4 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        goto label_1421b06e1
    
    if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        goto label_1421b06e1
    
    result.b = 1
    *(rbp + 0x70) = _mm_mul_ps(*(rbp + 0x70), temp0)
    temp0[0] = temp0[0] f* *(rbp + 0x84)
    temp0[0] = temp0[0] f* *(rbp + 0x80)
    *(rbp + 0x84) = temp0[0]
    *(rbp + 0x80) = temp0[0]
    *(rbp + 0x30) |= 2

return result
