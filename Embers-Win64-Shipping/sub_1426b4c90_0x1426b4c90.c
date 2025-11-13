// 函数: sub_1426b4c90
// 地址: 0x1426b4c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0xc0))
    int64_t rax
    rax.b = 1
    return rax

int64_t rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

if (rax_1 != 0)
    void* rbx_1 = *(rax_1 + 0x138)
    
    if (rbx_1 != 0)
        void* rax_2 = sub_14272b250()
        void* rcx = *(rbx_1 + 0x10)
        rax_1 = sx.q(*(rax_2 + 0x38))
        
        if (rax_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_1 << 3)) == rax_2 + 0x30)
            void* rdx_1 = *(arg1 + 0xc0)
            
            if (rdx_1 != 0 && (*(rdx_1 + 0x48) & 1) != 0)
                sub_1426c1940(rbx_1, rdx_1, arg1)
                sub_1426af080(arg1)
            
            *(arg1 + 0xc0) = arg2
            *(arg1 + 0xd0) = 0
            
            if (*(arg1 + 0xd4) s<= 0xffffffff)
                sub_1405c5510(arg1 + 0xc8, 0)
            
            void* r12 = arg1 + 0xd8
            *(r12 + 8) = 0
            
            if (*(r12 + 0xc) s<= 0xffffffff)
                sub_1405947f0(r12, 0)
            
            *(arg1 + 0x1a8) &= 0xfffffffd
            void* r15 = *(arg1 + 0xc0)
            void* rsi = *(r15 + 0x30)
            int64_t rax_3
            
            if (rsi != 0)
                rax_3 = sx.q(*(r15 + 0x40))
            
            int64_t rax_4
            
            if (rsi == 0 || rax_3.d s<= 0)
            label_1426b4e14:
                
                if (r15 != 0)
                    sub_1426b5d90(arg1, rsi)
                    void* rcx_8 = *(r15 + 0x30)
                    char rax_6
                    
                    if (rcx_8 == 0)
                        rax_6 = 0
                    else
                        rax_6 = *(rcx_8 + 0x4c) + (*(rcx_8 + 0x40)).b
                    
                    *(r15 + 0x4c) = rax_6
                
                void* rax_7 = *(arg1 + 0xc0)
                char* r15_1 = nullptr
                char* var_38 = nullptr
                int32_t i_5 = 0
                int64_t var_30_1 = 0
                int32_t rbx_4 = zx.d(*(rax_7 + 0x4c)) + *(rax_7 + 0x40)
                
                if (rbx_4 s> 0)
                    sub_1405dadb0(&var_38, rbx_4)
                    i_5 = var_30_1.d
                    r15_1 = var_38
                
                sub_1426a99f0(r12, rbx_4)
                
                for (void* i = *(arg1 + 0xc0); i != 0; i = *(i + 0x30))
                    int32_t j = 0
                    
                    if (*(i + 0x40) s> 0)
                        do
                            int64_t* rsi_1 = *(*(i + 0x38) + sx.q(j) * 0x18 + 8)
                            
                            if (rsi_1 != 0)
                                (*(*rsi_1 + 0x260))(rsi_1, arg1)
                                arg3 = *(i + 0x4c) + j.b
                                uint16_t rax_12 =
                                    ((zx.w(*(rsi_1 + 0x2b) u>> 1) & 1) << 2) + rsi_1[5].w
                                
                                if (rax_12 u> 2)
                                    rax_12 = (rax_12 + 3) & 0xfffc
                                
                                int64_t i_6 = sx.q(i_5)
                                uint16_t arg_a = rax_12
                                i_5 = (i_6 + 1).d
                                var_30_1.d = i_5
                                
                                if (i_5 s> var_30_1:4.d)
                                    sub_1405a4cf0(&var_38)
                                    i_5 = var_30_1.d
                                    r15_1 = var_38
                                
                                *(r15_1 + (i_6 << 2)) = arg3.d
                            
                            j += 1
                        while (j s< *(i + 0x40))
                
                sub_1426a2fd0(r15_1, i_5, arg3)
                int16_t count_1 = 0
                
                if (i_5 s> 0)
                    char* rdx_10 = r15_1
                    uint64_t i_3 = zx.q(i_5)
                    uint64_t i_1
                    
                    do
                        uint64_t rcx_16 = zx.q(*rdx_10)
                        rdx_10 = &rdx_10[4]
                        *(*r12 + (rcx_16 << 1)) = count_1
                        count_1 += *(rdx_10 - 2)
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                int64_t rbx_5 = sx.q(*(arg1 + 0xd0))
                uint64_t count = zx.q(count_1)
                int32_t rax_15 = (rbx_5 + count).d
                *(arg1 + 0xd0) = rax_15
                
                if (rax_15 s> *(arg1 + 0xd4))
                    sub_1405daba0(arg1 + 0xc8)
                
                memset(rbx_5 + *(arg1 + 0xc8), 0, count)
                int64_t rbx_6 = sx.q(*(arg1 + 0xf0))
                int32_t rax_16 = i_5 + rbx_6.d
                *(arg1 + 0xf0) = rax_16
                
                if (rax_16 s> *(arg1 + 0xf4))
                    sub_1405a4d70(arg1 + 0xe8)
                
                memset(*(arg1 + 0xe8) + (rbx_6 << 3), 0, sx.q(i_5) << 3)
                
                if (i_5 s> 0)
                    char* rsi_2 = r15_1
                    uint64_t i_4 = zx.q(i_5)
                    uint64_t i_2
                    
                    do
                        char rbx_7 = *rsi_2
                        void* rdx_13 = *(arg1 + 0xc0)
                        void* const rax_21
                        
                        if (rbx_7 == 0xff)
                            rax_21 = nullptr
                        else
                            char rax_18 = *(rdx_13 + 0x4c)
                            
                            if (rbx_7 u< rax_18)
                                void* rcx_25 = *(rdx_13 + 0x30)
                                
                                if (rcx_25 == 0)
                                    rax_21 = nullptr
                                else
                                    rax_21 = sub_1426b21a0(rcx_25, rbx_7)
                            else
                                rax_21 = *(rdx_13 + 0x38) + (zx.q(rbx_7) - zx.q(rax_18)) * 0x18
                        
                        int64_t* r9_2 = *(rax_21 + 8)
                        uint32_t rax_22
                        
                        if (*(arg1 + 0xd0) != 0)
                            rax_22.b = zx.d(rbx_7) s< *(arg1 + 0xe0)
                        
                        uint32_t* rdi_3
                        
                        if (*(arg1 + 0xd0) == 0 || rax_22.b == 0)
                            rdi_3 = nullptr
                        else
                            rdi_3 = zx.q(*(*(arg1 + 0xd8) + (zx.q(rbx_7) << 1))) + *(arg1 + 0xc8)
                        
                        if ((*(r9_2 + 0x2b) & 2) == 0)
                            (*(*r9_2 + 0x298))(r9_2, arg1, rdi_3)
                        else
                            int64_t* rbp_2 = r9_2[2]
                            arg3.q = 0
                            
                            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                                sub_140d19010(arg1, 
                                    NewObject with empty name can't be used to create default subobjects "
                                "(inside of UObject derived class constructor) as it produces 
                                        incon")
                            
                            void* rax_25 = sub_140d2dfc0(rbp_2, arg1, 0, 0, 0, 0, 0, 0, 0)
                            *(rax_25 + 0x2b) |= 1
                            *rdi_3 = zx.d(rbx_7)
                            *(*(arg1 + 0xe8) + (zx.q(rbx_7) << 3)) = rax_25
                            int64_t r9_3 = *rax_25
                            (*(r9_3 + 0x298))(rax_25, arg1, &rdi_3[1], r9_3)
                        
                        rsi_2 = &rsi_2[4]
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    r15_1 = var_38
                
                if ((*(*(arg1 + 0xc0) + 0x48) & 1) != 0)
                    sub_1426b99d0(arg1)
                
                if (r15_1 != 0)
                    sub_140a74f90(r15_1)
                
                rax_4.b = 1
            else
                int64_t* rdi_1 = *(r15 + 0x38)
                int64_t rbp_1 = 0
                int32_t rbx_2 = *(rsi + 0x40)
                
                while (true)
                    uint32_t rdx_2 = 0
                    
                    if (rbx_2 s> 0)
                        while (true)
                            if (*(*(rsi + 0x38) + sx.q(rdx_2) * 0x18) == *rdi_1)
                                rdx_2.b += *(rsi + 0x4c)
                                break
                            
                            rdx_2 += 1
                            
                            if (rdx_2 s>= rbx_2)
                                goto label_1426b4de3
                        
                        goto label_1426b4dfa
                    
                label_1426b4de3:
                    void* rcx_6 = *(rsi + 0x30)
                    
                    if (rcx_6 != 0)
                        rdx_2 = zx.d(sub_1426b5dd0(rcx_6, rdi_1, 0).b)
                    label_1426b4dfa:
                        
                        if (rdx_2.b != 0xff)
                            rax_4.b = 0
                            break
                    
                    rbp_1 += 1
                    rdi_1 = &rdi_1[3]
                    
                    if (rbp_1 s>= rax_3)
                        r12 = arg1 + 0xd8
                        goto label_1426b4e14
            
            return rax_4

rax_1.b = 0
return rax_1
