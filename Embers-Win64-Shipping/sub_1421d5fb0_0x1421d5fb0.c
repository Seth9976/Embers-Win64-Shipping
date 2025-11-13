// 函数: sub_1421d5fb0
// 地址: 0x1421d5fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rbx = arg3
void** r12 = arg6
void* r13 = arg1
int64_t rdx = sx.q(arg4)
int32_t var_7c = 0x20
void* var_88 = nullptr
int64_t* r8 = *arg5 + rdx * 0x18
int32_t var_80 = 0
int32_t* rcx_1 = r8[1]
int32_t r15 = 0
int32_t var_184 = arg4
int32_t var_188 = rbx
uint64_t result = &rcx_1[sx.q(r8[2].d)]
void** var_178 = r12
int32_t var_1a8 = 0
int32_t var_1a4 = 0
int64_t var_1a0 = rdx
int64_t* var_160 = r8
int32_t* var_168 = rcx_1
uint64_t result_1 = result
void var_108

if (rcx_1 != result)
    do
        int64_t rsi_1 = sx.q(*rcx_1)
        result = *(r13 + 0x28)
        int64_t* rcx_4 = (rsi_1 << 4) + *(r13 + 0x38)
        int64_t* rdi_1 = *(result + (rsi_1 << 3))
        
        if ((*(rcx_4 + 0xd) & 2) == 0)
            void* rcx_5 = *rcx_4
            
            if (rcx_5 == 0)
                goto label_1421d6173
            
            void* rax_4 = *(rcx_5 + 0x50)
            
            if (rax_4 == 0 || *(rax_4 + 0x10) == 0)
                goto label_1421d6173
            
            int64_t* var_158
            int64_t rax_6
            
            if (rdx != 6)
                r15 |= 1
                var_1a8 = r15
                void* rcx_7 = *sub_1423c0d30(rcx_5 + 0x30, &var_158)
                rax_6 = 0
                
                if (0 == *(rcx_7 + 8))
                    *(rcx_7 + 8) = 0
                else
                    rax_6 = *(rcx_7 + 8)
            
            if (rdx == 6 || ((rax_6 u>> 0x1a).b & 1) != 0)
                rbx.b = 1
            else
                rbx.b = 0
            
            if ((r15.b & 1) != 0)
                int64_t* rcx_8 = var_158
                r15 &= 0xfffffffe
                var_1a8 = r15
                
                if (rcx_8 != 0)
                    rcx_8[9].d -= 1
                    
                    if (rcx_8[9].d == 1)
                        sub_140a2f6e0(rcx_8)
            
            if (rbx.b != 0)
                rbx = var_188
            label_1421d6173:
                float zmm6_1
                float zmm7_1
                result, zmm6_1, zmm7_1 = sub_1421887e0(rdi_1)
                
                if (result.b == 0)
                    void* rax_9 = rdi_1[0x14]
                    float zmm0_1
                    
                    if (rax_9 == 0)
                        zmm0_1 = zmm6_1
                    else
                        zmm0_1 = *(rax_9 + 0x98)
                    
                    int64_t* var_198
                    (*(*rdi_1 + 0x338))(rdi_1, zmm7_1 * zmm0_1, zx.q(rbx), 0, var_1a8, var_1a0, 
                        var_198)
                    sub_142195690(rdi_1)
                    void* r15_1 = r13 + 0x88
                    int64_t rbx_2 = sx.q(*(r15_1 + 0x28))
                    int32_t rax_11 = (rbx_2 + 1).d
                    *(r15_1 + 0x28) = rax_11
                    
                    if (rax_11 s> *(r15_1 + 0x2c))
                        sub_141ce8380(r15_1, rbx_2.d)
                    
                    void* rax_12 = *(r15_1 + 0x20)
                    void* rcx_15 = r15_1
                    
                    if (rax_12 != 0)
                        rcx_15 = rax_12
                    
                    *(rcx_15 + (rbx_2 << 2)) = rsi_1.d
                    result = zx.q(*(r13 + 0xb0))
                    
                    if (result.d != data_143a2ef94 || result.d s<= 0)
                        r15 = var_1a8
                    else
                        void var_138
                        void** rax_13 = sub_1421e1630(&var_138, nullptr, 2)
                        void* rcx_17 = *rax_13
                        *(rcx_17 + 0x10) = r13
                        void* rbx_3 = rcx_17 + 0x18
                        *(rbx_3 + 0x20) = 0
                        int64_t rsi_2 = sx.q(*(r15_1 + 0x28))
                        void* r14_1 = *(r15_1 + 0x20)
                        *(rbx_3 + 0x28) = rsi_2.d
                        
                        if (rsi_2.d != 0)
                            sub_1421fc880(rbx_3, rsi_2.d, 0)
                            void* rax_14 = *(rbx_3 + 0x20)
                            void* rdx_6 = r15_1
                            
                            if (r14_1 != 0)
                                rdx_6 = r14_1
                            
                            if (rax_14 != 0)
                                rbx_3 = rax_14
                            
                            memcpy(rbx_3, rdx_6, (rsi_2 << 2).d)
                        else
                            *(rbx_3 + 0x2c) = 8
                        
                        void* rcx_20 = *rax_13
                        int32_t r8_4 = rax_13[2].d
                        int64_t* rdx_7 = rax_13[1]
                        int64_t* rbx_4 = *(rcx_20 + 0x50)
                        var_198 = rbx_4
                        void* rdi_3 = &rbx_4[9]
                        
                        if (rbx_4 != 0)
                            *rdi_3 += 1
                            rbx_4 = var_198
                        
                        sub_1421fcde0(rcx_20, rdx_7, r8_4, 1)
                        void* rax_15 = *r12
                        int64_t* var_150 = rbx_4
                        *(rax_15 + 0x4c) = 2
                        
                        if (rbx_4 != 0)
                            *rdi_3 += 1
                            rbx_4 = var_198
                        
                        sub_14084e1b0(*r12, &var_150)
                        void* rax_16 = *(r15_1 + 0x20)
                        void* rsi_3 = r15_1
                        
                        if (rax_16 != 0)
                            rsi_3 = rax_16
                        
                        int64_t r14_2 = 0
                        int64_t r12_1 = sx.q(*(r15_1 + 0x28)) << 2
                        result = rsi_3 + r12_1
                        uint64_t r12_2 = r12_1 u>> 2
                        
                        if (rsi_3 u> result)
                            r12_2 = 0
                        
                        if (r12_2 != 0)
                            do
                                result = *(r13 + 0x28)
                                void* rdx_9 = *(result + (sx.q(*rsi_3) << 3))
                                int64_t* rcx_23 = *(rdx_9 + 0x650)
                                *(rdx_9 + 0x650) = rbx_4
                                
                                if (rbx_4 != 0)
                                    *rdi_3 += 1
                                    rbx_4 = var_198
                                
                                if (rcx_23 != 0)
                                    result = zx.q(rcx_23[9].d)
                                    rcx_23[9].d -= 1
                                    
                                    if (result.d == 1)
                                        result = sub_140a2f6e0(rcx_23)
                                    
                                    rbx_4 = var_198
                                
                                rsi_3 += 4
                                r14_2 += 1
                            while (r14_2 != r12_2)
                            
                            r15_1 = r13 + 0x88
                        
                        *(r15_1 + 0x28) = 0
                        
                        if (*(r15_1 + 0x2c) s<= 0xffffffff)
                            result = sub_141a64350(r15_1, 0)
                        
                        if (rbx_4 != 0)
                            result = zx.q(*rdi_3)
                            *rdi_3 -= 1
                        
                        if (rbx_4 == 0 || result.d != 1)
                            r15 = var_1a8
                            r12 = var_178
                        else
                            result = sub_140a2f6e0(var_198)
                            r12 = var_178
                            r15 = var_1a8
            else
                int64_t rbx_1 = sx.q(var_80)
                result = zx.q((rbx_1 + 1).d)
                var_80 = result.d
                
                if (result.d s> var_7c)
                    result = sub_1407c3770(&var_108, rbx_1.d)
                
                void* rcx_10 = &var_108
                
                if (var_88 != 0)
                    rcx_10 = var_88
                
                *(rcx_10 + (rbx_1 << 2)) = rsi_1.d
            
            rdx = var_1a0
        
        rbx = var_188
        rcx_1 = &var_168[1]
        var_168 = rcx_1
    while (rcx_1 != result_1)
    
    arg4 = var_184
    r8 = var_160

if (arg4 != 6)
    int64_t rdi_4 = *arg5
    int64_t r13_2 = (rdx + 1) * 3
    int64_t var_180_1 = rdi_4
    int32_t r15_2 = 0
    
    if (var_80 s> 0)
        void* rbx_5 = rdi_4 + (r13_2 << 3)
        int64_t rsi_4 = 0
        
        do
            void* rax_18 = &var_108
            
            if (var_88 != 0)
                rax_18 = var_88
            
            sub_1421f9020(r8, *(rax_18 + rsi_4))
            void* rcx_28 = &var_108
            
            if (var_88 != 0)
                rcx_28 = var_88
            
            int64_t rdi_5 = sx.q(*(rbx_5 + 0x10))
            int64_t r12_3 = sx.q(*(rcx_28 + rsi_4))
            void* r14_5 = (r12_3 << 4) + *(*(rdi_4 + (r13_2 << 3)) + 0x38)
            int32_t rax_21 = (rdi_5 + 1).d
            *(rbx_5 + 0x10) = rax_21
            
            if (rax_21 s> *(rbx_5 + 0x14))
                sub_1405a4cf0(rbx_5 + 8)
            
            void* rcx_30 = &var_108
            r8 = var_160
            *(*(rbx_5 + 8) + (rdi_5 << 2)) = r12_3.d
            *(r14_5 + 8) = rdi_5.d
            rdi_4 = var_180_1
            
            if (var_88 != 0)
                rcx_30 = var_88
            
            r15_2 += 1
            int64_t rcx_31 = sx.q(*(rcx_30 + rsi_4))
            rsi_4 += 4
            result = *(arg1 + 0x38)
            *(result + rcx_31 * 0x10 + 0xc) = var_184.b + 1
        while (r15_2 s< var_80)
    
    r13 = arg1

int32_t var_80_1 = 0

if (var_7c s< 0 && var_7c != 0)
    result = sub_1421fc910(&var_108, 0)

if (*(r13 + 0xb0) s> 0)
    void* r15_3 = r13 + 0x88
    void var_120
    void** rax_25 = sub_1421e1630(&var_120, nullptr, 2)
    void* rcx_35 = *rax_25
    *(rcx_35 + 0x10) = r13
    void* rbx_6 = rcx_35 + 0x18
    *(rbx_6 + 0x20) = 0
    int64_t rsi_5 = sx.q(*(r15_3 + 0x28))
    void* r14_6 = *(r15_3 + 0x20)
    *(rbx_6 + 0x28) = rsi_5.d
    
    if (rsi_5.d != 0)
        sub_1421fc880(rbx_6, rsi_5.d, 0)
        void* rax_26 = *(rbx_6 + 0x20)
        void* rdx_16 = r15_3
        
        if (r14_6 != 0)
            rdx_16 = r14_6
        
        if (rax_26 != 0)
            rbx_6 = rax_26
        
        memcpy(rbx_6, rdx_16, (rsi_5 << 2).d)
    else
        *(rbx_6 + 0x2c) = 8
    
    void* rcx_38 = *rax_25
    int32_t r8_7 = rax_25[2].d
    int64_t* rdx_17 = rax_25[1]
    void* rbx_7 = *(rcx_38 + 0x50)
    void* var_190_1 = rbx_7
    void* rdi_7 = rbx_7 + 0x48
    
    if (rbx_7 != 0)
        *rdi_7 += 1
        rbx_7 = var_190_1
    
    sub_1421fcde0(rcx_38, rdx_17, r8_7, 1)
    void* var_140 = rbx_7
    *(*var_178 + 0x4c) = 2
    
    if (rbx_7 != 0)
        *rdi_7 += 1
        rbx_7 = var_190_1
    
    sub_14084e1b0(*var_178, &var_140)
    void* rax_28 = *(r15_3 + 0x20)
    void* rsi_6 = r15_3
    
    if (rax_28 != 0)
        rsi_6 = rax_28
    
    int64_t r14_7 = 0
    int64_t r12_4 = sx.q(*(r15_3 + 0x28)) << 2
    uint64_t r12_5 = r12_4 u>> 2
    
    if (rsi_6 u> r12_4 + rsi_6)
        r12_5 = 0
    
    if (r12_5 != 0)
        do
            void* rdx_19 = *(*(r13 + 0x28) + (sx.q(*rsi_6) << 3))
            int64_t* rcx_42 = *(rdx_19 + 0x650)
            *(rdx_19 + 0x650) = rbx_7
            
            if (rbx_7 != 0)
                *rdi_7 += 1
                rbx_7 = var_190_1
            
            if (rcx_42 != 0)
                rcx_42[9].d -= 1
                
                if (rcx_42[9].d == 1)
                    sub_140a2f6e0(rcx_42)
                
                rbx_7 = var_190_1
            
            rsi_6 += 4
            r14_7 += 1
        while (r14_7 != r12_5)
    
    result = zx.q(*(r15_3 + 0x2c))
    *(r15_3 + 0x28) = 0
    
    if (result.d s< 0 && result.d != 0)
        result = sub_141a64350(r15_3, 0)
    
    if (rbx_7 != 0)
        result = zx.q(*rdi_7)
        *rdi_7 -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(var_190_1)

if (var_88 != 0)
    result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
