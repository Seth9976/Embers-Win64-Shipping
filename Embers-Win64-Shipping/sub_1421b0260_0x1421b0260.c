// 函数: sub_1421b0260
// 地址: 0x1421b0260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg5
arg5.d = arg4.d f* 0.00999999978f
void* rdi = arg3
void* rbp = arg2
int64_t result
void* r15

if (arg2 == 0)
    r15 = nullptr
else
    void* rax
    rax, arg1 = sub_1424a01d0()
    arg2 = *(rbp + 0x10)
    arg3 = rax + 0x30
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        r15 = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        r15 = nullptr
    else
        r15 = rbp

void* r14

if (rbp == 0)
    r14 = nullptr
else
    void* rax_1
    rax_1, arg1 = sub_1424a03a0()
    arg2 = *(rbp + 0x10)
    arg3 = rax_1 + 0x30
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        r14 = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        r14 = nullptr
    else
        r14 = rbp

void* const rsi

if (rbp == 0)
    rsi = nullptr
else
    void* rax_2
    rax_2, arg1 = sub_14249ed50()
    arg2 = *(rbp + 0x10)
    arg3 = rax_2 + 0x30
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        rsi = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        rsi = nullptr
    else
        rsi = rbp

void* const rbx

if (rbp == 0)
    rbx = nullptr
else
    void* rax_3
    rax_3, arg1 = sub_14249ee60()
    arg2 = *(rbp + 0x10)
    arg3 = rax_3 + 0x30
    result = sx.q(*(rax_3 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        rbx = nullptr
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        rbx = nullptr
    else
        rbx = rbp

if (rbp == 0)
label_1421b0396:
    
    if (rbx != 0)
        int32_t i = 0
        
        if ((**(rbx + 0x28))(rbx + 0x28, arg2, arg3).d s<= 0)
            *(rbp + 0x30) |= 2
            result.b = 1
        else
            do
                int32_t rdi_1 = 0
                
                if ((*(*(rbx + 0x28) + 8))(rbx + 0x28) s> 0)
                    int32_t rax_11
                    
                    do
                        (*(*(rbx + 0x28) + 0x20))(rbx + 0x28, zx.q(rdi_1), zx.q(i))
                        arg1.d = arg1.d f* arg5.d
                        (*(*(rbx + 0x28) + 0x70))(rbx + 0x28, zx.q(rdi_1), zx.q(i), arg1, 
                            __saved_zmm6)
                        rdi_1 += 1
                        rax_11 = (*(*(rbx + 0x28) + 8))(rbx + 0x28)
                    while (rdi_1 s< rax_11)
                
                i += 1
                result = (**(rbx + 0x28))(rbx + 0x28)
            while (i s< result.d)
            
            *(rbp + 0x30) |= 2
            result.b = 1
    else if (r15 != 0)
        void* rax_13
        int64_t rax_14
        void* rdx_2
        
        if (rdi != 0)
            rax_13 = sub_1424a01d0()
            rdx_2 = *(rdi + 0x10)
            rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rdi == 0 || rax_14.d s> *(rdx_2 + 0x38)
                || *(*(rdx_2 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
            rdi = nullptr
        
        arg5.d = arg5.d f* *(rdi + 0x38)
        (*(*(r15 + 0x28) + 0x70))(r15 + 0x28, 0, 0, arg5, __saved_zmm6)
        *(rbp + 0x30) |= 2
        result.b = 1
    else if (r14 != 0)
        int64_t rax_18
        
        if (rdi != 0)
            void* rax_17
            rax_17, arg1 = sub_1424a03a0()
            arg2 = *(rdi + 0x10)
            arg3 = rax_17 + 0x30
            rax_18 = sx.q(*(rax_17 + 0x38))
        
        if (rdi == 0 || rax_18.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_18 << 3)) != arg3)
            rdi = nullptr
        
        int32_t i_1 = 0
        
        if ((**(rdi + 0x28))(rdi + 0x28, arg2, arg3).d s<= 0)
            *(rbp + 0x30) |= 2
            result.b = 1
        else
            do
                int64_t rbx_2 = *(r14 + 0x28)
                (*(*(rdi + 0x28) + 0x18))(rdi + 0x28, zx.q(i_1))
                int512_t zmm1
                zmm1.o = arg1
                (*(rbx_2 + 0x58))(r14 + 0x28, zmm1)
                int32_t rbx_3 = 0
                
                if ((*(*(rdi + 0x28) + 8))(rdi + 0x28) s> 0)
                    int32_t rax_27
                    
                    do
                        (*(*(rdi + 0x28) + 0x20))(rdi + 0x28, zx.q(rbx_3), zx.q(i_1))
                        arg1.d = arg1.d f* arg5.d
                        (*(*(r14 + 0x28) + 0x70))(r14 + 0x28, zx.q(rbx_3), zx.q(i_1), arg1, 
                            __saved_zmm6)
                        rbx_3 += 1
                        rax_27 = (*(*(rdi + 0x28) + 8))(rdi + 0x28)
                    while (rbx_3 s< rax_27)
                
                i_1 += 1
                result = (**(rdi + 0x28))(rdi + 0x28)
            while (i_1 s< result.d)
            
            *(rbp + 0x30) |= 2
            result.b = 1
    else if (rsi == 0)
        result.b = 0
    else
        arg4.d = arg5.d f* *(rsi + 0x38)
        (*(*(rsi + 0x28) + 0x70))(rsi + 0x28, 0, 0, arg4, __saved_zmm6)
        arg5.d = arg5.d f* *(rsi + 0x3c)
        (*(*(rsi + 0x28) + 0x70))(rsi + 0x28, 1, 0, arg5)
        *(rbp + 0x30) |= 2
        result.b = 1
else
    void* rax_4
    rax_4, arg1 = sub_14249ec80()
    arg2 = *(rbp + 0x10)
    arg3 = rax_4 + 0x30
    result = sx.q(*(rax_4 + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        goto label_1421b0396
    
    if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        goto label_1421b0396
    
    result.b = 1
    arg1.d = arg5.d f* *(rbp + 0x50)
    arg5.d = arg5.d f* *(rbp + 0x54)
    *(rbp + 0x50) = arg1.d
    *(rbp + 0x54) = arg5.d
    *(rbp + 0x30) |= 2

return result
