// 函数: sub_141e3eb50
// 地址: 0x141e3eb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t rbx = sx.q(*(arg2 + 8))
int64_t* rsi = arg3
int64_t* r13 = arg2
int64_t* r14 = arg1
void* var_2e8 = arg2
int64_t* var_2c8 = arg1
int64_t result

if (rbx.d != 0)
    int64_t r15_1 = 0
    int32_t var_74_1 = 8
    void* rax_4 = nullptr
    void* var_80_1 = nullptr
    int32_t var_78_1 = rbx.d
    void var_140
    
    if (rbx.d s> 8)
        sub_141a63ee0(&var_140, 0)
        rax_4 = var_80_1
    
    void* rcx_3 = &var_140
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    memset(rcx_3, 0, rbx * 0x18)
    int32_t var_144_1 = 8
    void* rax_5 = nullptr
    void* var_150_1 = nullptr
    int32_t var_148_1 = rbx.d
    void var_250
    
    if (rbx.d s> 8)
        sub_141acb850(&var_250, 0)
        rax_5 = var_150_1
    
    void* rcx_5 = &var_250
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    memset(rcx_5, 0, rbx << 5)
    int32_t var_254_1 = 8
    void* rax_6 = nullptr
    void* var_260_1 = nullptr
    int32_t var_258_1 = rbx.d
    void var_280
    
    if (rbx.d s> 8)
        sub_14083a280(&var_280, 0)
        rax_6 = var_260_1
    
    void* rcx_7 = &var_280
    
    if (rax_6 != 0)
        rcx_7 = rax_6
    
    memset(rcx_7, 0, rbx << 2)
    int32_t rbx_1 = var_78_1
    int32_t r12_1 = 0
    void* rdx_6
    float zmm6[0x4]
    
    if (rbx_1 s<= 0)
        rdx_6 = var_150_1
    else
        int64_t r13_1 = 0
        
        do
            void* rbx_2 = &var_140
            int32_t rdx_1 = 0
            
            if (var_80_1 != 0)
                rbx_2 = var_80_1
            
            void* rax_8 = rsi[2]
            void* rbx_3 = rbx_2 + r13_1
            *(rbx_3 + 0x10) = rax_8
            int32_t rdi_1 = *(rax_8 + 8)
            *(rbx_3 + 8) = 0
            
            if (rdi_1 s> *(rbx_3 + 0xc))
                arg5, zmm6 = sub_141acba60(rbx_3, rdi_1)
                rdx_1 = *(rbx_3 + 8)
            
            int32_t rax_9 = rdx_1 + rdi_1
            *(rbx_3 + 8) = rax_9
            
            if (rax_9 s> *(rbx_3 + 0xc))
                arg5, zmm6 = sub_141acb8e0(rbx_3, rdx_1)
            
            rdx_6 = var_150_1
            void* rbx_4 = &var_250
            
            if (rdx_6 != 0)
                rbx_4 = rdx_6
            
            void* rbx_5 = rbx_4 + r15_1
            
            if (arg4 != rbx_5)
                int64_t* rdx_3 = arg4[2]
                *(rbx_5 + 0x10) = rdx_3
                int32_t rcx_10 = 0
                
                if (rdx_3 != 0)
                    int64_t i_2 = sx.q(rdx_3[1].d)
                    
                    if (i_2 s> 0)
                        void* rdx_4 = *rdx_3
                        int64_t i
                        
                        do
                            int32_t rax_10 = rcx_10
                            rdx_4 += 2
                            rcx_10 += 1
                            
                            if (*(rdx_4 - 2) == 0xffff)
                                rcx_10 = rax_10
                            
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                
                *(rbx_5 + 0x18) = rcx_10.w
                int32_t rax_11 = *(rbx_5 + 0xc)
                *(rbx_5 + 8) = 0
                
                if (rax_11 s< 0 && rax_11 != 0)
                    arg5, zmm6 = sub_14083ad10(rbx_5, 0)
                
                uint64_t rsi_1 = zx.q(*(rbx_5 + 0x18))
                int64_t rdi_2 = sx.q(*(rbx_5 + 8))
                int32_t rax_12 = (rdi_2 + rsi_1).d
                *(rbx_5 + 8) = rax_12
                
                if (rax_12 s> *(rbx_5 + 0xc))
                    arg5, zmm6 = sub_14083a440(rbx_5, rdi_2.d)
                
                memset(*rbx_5 + (rdi_2 << 3), 0, rsi_1 << 3)
                rsi = arg3
                *(rbx_5 + 0x1a) = 1
                rdx_6 = var_150_1
            
            rbx_1 = var_78_1
            r12_1 += 1
            r13_1 += 0x18
            r15_1 += 0x20
        while (r12_1 s< rbx_1)
        
        r14 = var_2c8
        r13 = var_2e8
    
    int32_t i_1 = 0
    float zmm0_1[0x4]
    
    if (r13[1].d s> 0)
        float var_58_1[0x4] = zmm6
        void* rdi_3 = nullptr
        int64_t r15_2 = 0
        int64_t r12_2 = 0
        zmm6 = zx.o(0)
        
        do
            void* rbx_6 = &var_140
            int64_t rcx_14 = *r13
            
            if (var_80_1 != 0)
                rbx_6 = var_80_1
            
            void* rbx_7 = rbx_6 + r12_2
            int64_t rax_15 = sx.q(*(rdi_3 + rcx_14))
            int64_t* rcx_16
            
            if (rax_15.d s>= 0 && rax_15.d s< r14[0x1a].d)
                zmm0_1 = *(rdi_3 + rcx_14 + 0x10)
                int64_t r8_7 = r14[0x19]
                
                if (zmm0_1[0] >= zmm6[0])
                    zmm0_1 = _mm_min_ss(zmm0_1[0], 0x3f800000)
                else
                    zmm0_1 = zmm6
                
                void* rcx_15 = &var_280
                
                if (var_260_1 != 0)
                    rcx_15 = var_260_1
                
                *(rcx_15 + r15_2) = zmm0_1[0]
                rcx_16 = *(r8_7 + rax_15 * 0x18)
            
            if (rax_15.d s< 0 || rax_15.d s>= r14[0x1a].d || rcx_16 == 0)
                if ((*(*r14 + 0x278))(r14) == 0)
                    arg5, zmm6 = sub_141e0ba30(rbx_7)
                else
                    arg5 = sub_140324950(*rbx_7, *(rbx_7 + 8), arg5)
            else
                arg5[0].o = *(rdi_3 + *r13 + 0x14)
                
                if (arg5[0] f>= zmm6[0])
                    zmm0_1 = _mm_min_ss(rcx_16[0x12].d[0], arg5[0])
                else
                    zmm0_1 = zmm6
                
                void* r8_8 = &var_250
                int64_t var_2a0_1 = 0
                int64_t var_290_1 = 0
                
                if (var_150_1 != 0)
                    r8_8 = var_150_1
                
                float var_2a4_1 = zmm0_1[0]
                char var_2a8 = 1
                int64_t var_298_1 = 0
                int64_t var_288_1 = 0
                (*(*rcx_16 + 0x2c0))(rcx_16, rbx_7, r8_8 + (sx.q(i_1) << 5), &var_2a8)
                
                if (var_290_1 != 0)
                    arg5 = sub_140a74f90(var_290_1)
                
                if (var_2a0_1 != 0)
                    arg5 = sub_140a74f90(var_2a0_1)
            
            i_1 += 1
            r12_2 += 0x18
            r15_2 += 4
            rdi_3 += 0x40
        while (i_1 s< r13[1].d)
        
        rbx_1 = var_78_1
        rdx_6 = var_150_1
    
    void* rdi_4 = &var_140
    
    if (var_80_1 != 0)
        rdi_4 = var_80_1
    
    int64_t* rbx_8
    uint32_t zmm1[0x8]
    float var_2b8[0x4]
    
    if (r14[0x17].d s<= 0)
        void* rcx_27 = &var_280
        
        if (var_260_1 != 0)
            rcx_27 = var_260_1
        
        int32_t var_2e0_7 = var_258_1
        var_2e8 = rcx_27
        void* rax_35 = &var_250
        
        if (rdx_6 != 0)
            rax_35 = rdx_6
        
        var_2b8 = var_2e8.o
        var_2e8 = rax_35
        int32_t var_2e0_8 = var_148_1
        zmm0_1 = var_2e8.o
        int32_t var_2e0_9 = rbx_1
        rbx_8 = arg3
        var_2e8 = rdi_4
        var_2c8.o = zmm0_1
        var_2e8.o = var_2e8.o
        zmm1 = sub_141de3ac0(&var_2e8, &var_2c8, &var_2b8, rbx_8, arg4)
    else
        bool cond:3_1 = (*(*r14 + 0x278))(r14, rdx_6) == 0
        var_2e8 = *r13
        void* rax_27
        void* rcx_24
        
        if (cond:3_1)
            rcx_24 = &var_250
            int32_t var_2e0_4 = r13[1].d
            zmm0_1 = var_2e8.o
            rax_27 = var_150_1
        label_141e3f0bb:
            var_2b8 = zmm0_1
            int64_t* r8_11 = &r14[0x10]
            
            if (rax_27 != 0)
                rcx_24 = rax_27
            
            var_2e8 = rcx_24
            int32_t var_2e0_5 = var_148_1
            zmm0_1 = var_2e8.o
            
            if (r14 == 0)
                r8_11 = nullptr
            
            int32_t var_2e0_6 = rbx_1
            rbx_8 = arg3
            var_2e8 = rdi_4
            var_2c8.o = zmm0_1
            var_2e8.o = var_2e8.o
            zmm1 = sub_141de3fa0(&var_2e8, &var_2c8, r8_11, &var_2b8, arg5, rbx_8, arg4)
        else
            rax_27 = var_150_1
            int32_t var_2e0_1 = r13[1].d
            rcx_24 = &var_250
            zmm0_1 = var_2e8.o
            
            if (r14[0x11].b == 0)
                goto label_141e3f0bb
            
            var_2c8.o = zmm0_1
            
            if (rax_27 != 0)
                rcx_24 = rax_27
            
            var_2e8 = rcx_24
            int32_t var_2e0_2 = var_148_1
            zmm0_1 = var_2e8.o
            int32_t var_2e0_3 = rbx_1
            rbx_8 = arg3
            var_2e8 = rdi_4
            var_2b8 = zmm0_1
            var_2e8.o = var_2e8.o
            zmm1 = sub_141de4750(&var_2e8, &var_2b8, r14, &var_2c8, rbx_8, arg4)
    result = sub_1403248d0(*rbx_8, rbx_8[1].d, zmm1)
    
    if (var_260_1 != 0)
        result = sub_140a74f90(var_260_1)
    
    if (var_150_1 != 0)
        result = sub_140a74f90(var_150_1)
    
    if (var_80_1 != 0)
        result = sub_140a74f90(var_80_1)
else if ((*(*arg1 + 0x278))() == 0)
    result = sub_141e0ba30(rsi)
else
    result = sub_140324950(*rsi, rsi[1].d, arg5)

__security_check_cookie(rax_1 ^ &var_318)
return result
