// 函数: sub_1405b4590
// 地址: 0x1405b4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg2
int64_t* rdx = arg1[0xd]
float zmm1[0x4] = (&arg1[7]).o
int32_t var_78 = 0
int128_t var_70 = zx.o(0)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
temp0[0] = 0x3f800000
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
void* var_88
var_88.o = temp0_1
int64_t* var_60 = temp0_1[0].q

if (sub_1405b37a0(&arg1[0x10], rdx) != 0)
    uint64_t rbx_1 = data_143cd5ff0
    void* const rcx_4
    
    if (arg1[0x30].d == *(arg1 + 0x1ac))
    label_1405b4680:
        rcx_4 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = &arg1[0x36]
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_6 = *(r8_1 + (((sx.q(arg1[0x38].d) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_1405b4680_1:
            rcx_4 = nullptr
        else
            int64_t r8_2 = arg1[0x2f]
            
            while (true)
                int64_t rdx_4 = sx.q(rax_6) * 3
                rcx_4 = r8_2 + (rdx_4 << 3)
                
                if (*(r8_2 + (rdx_4 << 3)) == rbx_1)
                    break
                
                rax_6 = *(rcx_4 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_1405b4680_2
            
            if (rax_6 == 0xffffffff)
            label_1405b4680_2:
                rcx_4 = nullptr
    
    int64_t rbx_2 = *(rcx_4 + 8)
    void* rax_7 = sub_1405bd3f0(&arg1[0x10])
    
    if (rax_7 != 0)
        sub_142131d00(rax_7, rbx_2, r14)
    
    uint64_t rbx_3 = data_143cd6000
    void* const rdi_1
    
    if (arg1[0x30].d == *(arg1 + 0x1ac))
    label_1405b4720:
        rdi_1 = nullptr
    else
        int32_t rax_10 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
        void* r8_4 = &arg1[0x36]
        void* rcx_8 = *(r8_4 + 8)
        
        if (rcx_8 != 0)
            r8_4 = rcx_8
        
        int32_t rax_12 = *(r8_4 + (((sx.q(arg1[0x38].d) - 1) & sx.q(rax_10)) << 2))
        
        if (rax_12 == 0xffffffff)
        label_1405b4720_1:
            rdi_1 = nullptr
        else
            int64_t r8_5 = arg1[0x2f]
            
            while (true)
                int64_t rdx_9 = sx.q(rax_12) * 3
                rdi_1 = r8_5 + (rdx_9 << 3)
                
                if (*(r8_5 + (rdx_9 << 3)) == rbx_3)
                    break
                
                rax_12 = *(rdi_1 + 0x10)
                
                if (rax_12 == 0xffffffff)
                    goto label_1405b4720_2
            
            if (rax_12 == 0xffffffff)
            label_1405b4720_2:
                rdi_1 = nullptr
    
    int64_t rdi_2 = *(rdi_1 + 8)
    void* rbx_4 = arg1[0x3b]
    void* rax_13
    int128_t zmm6_1
    rax_13, zmm6_1 = sub_1405bd3f0(&arg1[0x10])
    
    if (rax_13 != 0)
        zmm6_1 = sub_142131d00(rax_13, rdi_2, rbx_4)
    
    int128_t* r12_1 = arg1[0xe]
    void* rax_16 = &r12_1[sx.q(arg1[0xf].d)]
    
    if (r12_1 != rax_16)
        int128_t var_48_1 = zmm6_1
        
        do
            int64_t rbx_5 = data_143cd5ff8
            int64_t var_98
            void* const rcx_15
            
            if (arg1[0x30].d == *(arg1 + 0x1ac))
            label_1405b47f0:
                rcx_15 = nullptr
            else
                var_98 = rbx_5
                int32_t rax_19 = sub_140b5ead0(rbx_5.d) + var_98:4.d
                void* r8_7 = &arg1[0x36]
                void* rcx_13 = *(r8_7 + 8)
                
                if (rcx_13 != 0)
                    r8_7 = rcx_13
                
                int32_t rax_21 = *(r8_7 + (((sx.q(arg1[0x38].d) - 1) & sx.q(rax_19)) << 2))
                
                if (rax_21 == 0xffffffff)
                label_1405b47f0_1:
                    rcx_15 = nullptr
                else
                    int64_t r8_8 = arg1[0x2f]
                    
                    while (true)
                        int64_t rdx_14 = sx.q(rax_21) * 3
                        rcx_15 = r8_8 + (rdx_14 << 3)
                        
                        if (*(r8_8 + (rdx_14 << 3)) == rbx_5)
                            break
                        
                        rax_21 = *(rcx_15 + 0x10)
                        
                        if (rax_21 == 0xffffffff)
                            goto label_1405b47f0_2
                    
                    if (rax_21 == 0xffffffff)
                    label_1405b47f0_2:
                        rcx_15 = nullptr
            
            int64_t rbx_6 = *(rcx_15 + 8)
            *r12_1
            void* rax_22
            int128_t zmm6_2
            rax_22, zmm6_2 = sub_1405bd3f0(&arg1[0x10])
            
            if (rax_22 != 0)
                var_98.o = zmm6_2
                sub_1421321b0(rax_22, rbx_6, &var_98)
            
            int32_t rbx_7 = var_78
            uint64_t r14_2 = zx.q(rbx_7) & 1
            void* r15_1 = *(&var_70 + (r14_2 << 3))
            int32_t var_58
            
            if (r15_1 == 0)
                int64_t rdx_16 = *(var_60 + 0x1c)
                int32_t r8_10 = *(var_60 + 0x24)
                uint128_t zmm0_1
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rdx_16.d)).d f* var_58
                uint64_t arg_8
                arg_8.d = int.d(zmm0_1.d)
                zmm0_1.d = _mm_cvtepi32_ps(zx.o((rdx_16 u>> 0x20).d)).d f* var_58
                arg_8:4.d = int.d(zmm0_1.d)
                void* rax_25 = sub_1405c4300(var_60, arg_8, r8_10)
                *(&var_70 + (r14_2 << 3)) = rax_25
                r15_1 = rax_25
                rbx_7 = var_78
            
            void* rax_26 = sub_1405bd3f0(&arg1[0x10])
            
            if (rax_26 == 0)
                uint64_t r8_11 = arg1[0x24]
                
                if (r8_11 != 0)
                    sub_1420bacc0(arg1, r15_1, r8_11)
            else
                sub_1420bacc0(arg1, r15_1, rax_26)
            
            uint64_t rbx_8 = zx.q(rbx_7) & 1
            r14 = *(&var_70 + (rbx_8 << 3))
            
            if (r14 == 0)
                int64_t rdx_20 = *(var_60 + 0x1c)
                int32_t r8_12 = *(var_60 + 0x24)
                uint128_t zmm0_2
                zmm0_2.d = _mm_cvtepi32_ps(zx.o(rdx_20.d)).d f* var_58
                int32_t rax_27 = int.d(zmm0_2.d)
                zmm0_2.d = _mm_cvtepi32_ps(zx.o((rdx_20 u>> 0x20).d)).d f* var_58
                int32_t arg_14 = int.d(zmm0_2.d)
                void* rax_29 = sub_1405c4300(var_60, rax_27.q, r8_12)
                r14 = rax_29
                *(&var_70 + (rbx_8 << 3)) = rax_29
            
            void* rax_30 = sub_1405bd3f0(&arg1[0x10])
            
            if (rax_30 != 0)
                sub_142131d00(rax_30, rdi_2, r14)
            
            int32_t rax_33 = (var_78 + 1) & 0x80000001
            
            if (rax_33 s< 0)
                rax_33 = ((rax_33 - 1) | 0xfffffffe) + 1
            
            r12_1 = &r12_1[1]
            var_78 = rax_33
        while (r12_1 != rax_16)

int32_t rax_38 = (var_78 + 1) & 0x80000001

if (rax_38 s< 0)
    rax_38 = ((rax_38 - 1) | 0xfffffffe) + 1

int64_t rax_41 = sx.q(rax_38)
void* rbx_9 = *(&var_70 + (rax_41 << 3))
*(&var_70 + (rax_41 << 3)) = 0
int64_t rdi_3 = sx.q(var_78)
void* rdx_24 = *(&var_70 + (rdi_3 << 3))

if (rdx_24 != 0)
    sub_1405c2980(var_60, rdx_24)
    *(&var_70 + (rdi_3 << 3)) = 0

if (rbx_9 == 0)
    return r14

return rbx_9
