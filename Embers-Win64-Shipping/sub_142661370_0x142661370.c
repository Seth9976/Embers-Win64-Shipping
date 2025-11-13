// 函数: sub_142661370
// 地址: 0x142661370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = *arg2
int64_t r13 = 0
uint128_t* r15 = nullptr
uint128_t zmm6
uint128_t var_48 = zmm6
int64_t* r14 = arg1
int64_t rax = sx.q(arg2[1].d)
int32_t i_3 = 0
uint128_t* var_88 = nullptr
int32_t r10 = 0
int32_t var_7c = 0
uint64_t result = &r12[rax * 0xc]
uint64_t result_1 = result

if (r12 != result)
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int32_t* r14_1 = &r12[6]
    
    do
        result = zx.q(arg1[0x22].d)
        int32_t result_2
        int64_t r9_1
        
        if (result.d != *(arg1 + 0x13c))
            void* rdx = arg1[0x29]
            void* r8_1 = &arg1[0x28]
            r9_1 = sx.q(*r12)
            
            if (rdx != 0)
                r8_1 = rdx
            
            result_2 = *(r8_1 + (((sx.q(arg1[0x2a].d) - 1) & r9_1) << 2))
        
        if (result.d == *(arg1 + 0x13c) || result_2 == 0xffffffff)
        label_142661436:
            result_2 = -1
        else
            int64_t rdx_1 = arg1[0x21]
            
            while (true)
                result = sx.q(result_2)
                int32_t* rcx_3 = result * 0x34
                
                if (*(rcx_3 + rdx_1) == r9_1.d)
                    break
                
                result_2 = *(rcx_3 + rdx_1 + 0x2c)
                
                if (result_2 == 0xffffffff)
                    goto label_142661436
        
        int32_t rcx_4 = r14_1[5]
        
        if (rcx_4 == 0)
        label_142661458:
            
            if (result_2 == 0xffffffff)
                int32_t arg_10
                sub_14263f2a0(&arg1[0x21], &arg_10, r12, nullptr)
                r10 = var_7c
            else
                int64_t rbx_1 = sx.q(result_2) * 0x34
                int64_t rax_4 = arg1[0x21]
                zmm6 = *(rax_4 + rbx_1 + 4)
                int32_t r13_1 = *(rax_4 + rbx_1 + 0x1c)
                zmm7 = zx.o(*(rax_4 + rbx_1 + 0x14))
                uint64_t var_68_1 = zmm7.q
                
                if (zmm6.d f!= r14_1[-5])
                label_1426614c5:
                    int64_t i_5 = sx.q(i_3)
                    i_3 = (i_5 + 1).d
                    
                    if (i_3 s> r10)
                        sub_1405c50f0(&var_88)
                        r10 = var_7c
                    
                    uint128_t* rcx_7 = i_5 * 0x1c
                    r15 = var_88
                    *(rcx_7 + r15) = zmm6
                    *(rcx_7 + r15 + 0x10) = zmm7.q
                    *(rcx_7 + r15 + 0x18) = r13_1
                else
                    if (_mm_shuffle_ps(zmm6, zmm6, 0x55).d f!= r14_1[-4])
                        goto label_1426614c5
                    
                    if (_mm_shuffle_ps(zmm6, zmm6, 0xaa).d f!= r14_1[-3])
                        goto label_1426614c5
                    
                    if (_mm_shuffle_ps(zmm6, zmm6, 0xff).d f!= r14_1[-2]
                            || var_68_1.d.d f!= r14_1[-1] || not(var_68_1:4.d.d f== *r14_1))
                        goto label_1426614c5
                
                uint128_t* rcx_8 = arg1[0x21]
                *(rcx_8 + rbx_1) = *r12
                *(rcx_8 + rbx_1 + 0x10) = *(r12 + 0x10)
                *(rcx_8 + rbx_1 + 0x20) = *(r12 + 0x20)
                *(rcx_8 + rbx_1 + 0x28) = r12[0xa]
            
            int64_t i_4 = sx.q(i_3)
            i_3 = (i_4 + 1).d
            
            if (i_3 s> r10)
                sub_1405c50f0(&var_88)
                r10 = var_7c
                r15 = var_88
            
            uint128_t* rcx_19 = i_4 * 0x1c
            *(rcx_19 + r15) = *(r14_1 - 0x14)
            *(rcx_19 + r15 + 0x10) = *(r14_1 - 4)
            result = zx.q(r14_1[1])
            *(rcx_19 + r15 + 0x18) = result.d
        else if (rcx_4 == 1)
            if (result_2 != 0xffffffff)
                int64_t r13_2 = arg1[0x21]
                int64_t i_6 = sx.q(i_3)
                i_3 = (i_6 + 1).d
                
                if (i_3 s> r10)
                    sub_1405c50f0(&var_88)
                
                uint128_t* rcx_10 = i_6 * 0x1c
                r15 = var_88
                int64_t result_3 = sx.q(result_2)
                int64_t r10_1 = result_3 * 0x34
                *(rcx_10 + r15) = *(r10_1 + r13_2 + 4)
                *(rcx_10 + r15 + 0x10) = *(r10_1 + r13_2 + 0x14)
                *(rcx_10 + r15 + 0x18) = *(r10_1 + r13_2 + 0x1c)
                
                if (arg1[0x22].d != *(arg1 + 0x13c))
                    void* rdx_4 = arg1[0x29]
                    void* r8_2 = &arg1[0x28]
                    void* r9_2 = arg1[0x21]
                    int64_t rcx_12 = sx.q(arg1[0x2a].d - 1) & sx.q(*(r9_2 + r10_1 + 0x30))
                    
                    if (rdx_4 != 0)
                        r8_2 = rdx_4
                    
                    int32_t i = *(r8_2 + (rcx_12 << 2))
                    void* rdx_5 = r8_2 + (rcx_12 << 2)
                    
                    for (; i != 0xffffffff; i = *rdx_5)
                        if (i == result_2)
                            *rdx_5 = *(r9_2 + r10_1 + 0x2c)
                            break
                        
                        rdx_5 = r9_2 + 0x2c + sx.q(i) * 0x34
                
                void* r8_3 = &arg1[0x23]
                int32_t rdx_7 = rol.d(1, result_2.b)
                
                if (*(arg1 + 0x13c) != 0)
                    *(sx.q(arg1[0x27].d) * 0x34 + arg1[0x21]) = result_2
                
                int32_t* rax_16 = result_3 * 0x34 + arg1[0x21]
                *rax_16 = 0xffffffff
                int32_t rcx_16
                
                if (*(arg1 + 0x13c) s<= 0)
                    rcx_16 = -1
                else
                    rcx_16 = arg1[0x27].d
                
                rax_16[1] = rcx_16
                *(arg1 + 0x13c) += 1
                arg1[0x27].d = result_2
                void* rax_17 = *(r8_3 + 0x10)
                
                if (rax_17 != 0)
                    r8_3 = rax_17
                
                if (result_2 s< 0)
                    result_2 += 0x1f
                
                r10 = var_7c
                result = sx.q(result_2 s>> 5)
                *(r8_3 + (result << 2)) &= not.d(rdx_7)
        else if (rcx_4 == 2)
            goto label_142661458
        
        r12 = &r12[0xc]
        r14_1 = &r14_1[0xc]
    while (r12 != result_1)
    
    r14 = arg1
    r13 = 0

if (r14[0x73].b == 0 && i_3 != 0)
    int64_t* rbx_3 = r14[0x12]
    result = &rbx_3[r14[0x13]]
    uint64_t rdi_3 = sx.q(r14[0x13].d) << 3 u>> 3
    
    if (rbx_3 u> result)
        rdi_3 = 0
    
    if (rdi_3 != 0)
        do
            int64_t* rcx_20 = *rbx_3
            
            if (rcx_20 != 0)
                result = (*(*rcx_20 + 0x658))(rcx_20)
            
            rbx_3 = &rbx_3[1]
            r13 += 1
        while (r13 != rdi_3)
    
    if (i_3 s> 0)
        uint128_t* rbx_4 = r15
        uint64_t i_2 = zx.q(i_3)
        uint64_t i_1
        
        do
            if ((arg1[0x6d].b & 1) != 0 && *(rbx_4 + 0x18) != 0)
                int64_t rsi = sx.q(arg1[0x6c].d)
                zmm6 = *rbx_4
                int32_t var_60_1 = *(rbx_4 + 0x18)
                int32_t rax_21 = (rsi + 1).d
                uint64_t var_68_2 = rbx_4[1].q
                int32_t var_5c_1 = 0xb
                arg1[0x6c].d = rax_21
                
                if (rax_21 s> *(arg1 + 0x364))
                    sub_1405c4e40(&arg1[0x6b])
                
                result = arg1[0x6b]
                int64_t rcx_23 = rsi << 5
                *(rcx_23 + result) = zmm6
                *(rcx_23 + result + 0x10) = var_68_2.o
            
            rbx_4 += 0x1c
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        r15 = var_88
        r14 = arg1

if (r14[0x13].d == 0)
    if (r14[0x15].d s> 0)
        (*(*r14 + 0x330))(r14)
    
    if ((r14[0x15].d s<= 0 || r14[0x13].d == 0) && (r14[0xd].b & 1) != 0)
        (*(*r14 + 0x3b0))(r14)
        (*(*r14 + 0x330))(r14)
    
    result = (*(*r14 + 0x320))(r14)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
