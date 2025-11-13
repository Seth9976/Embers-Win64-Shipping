// 函数: sub_14150b7e0
// 地址: 0x14150b7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15_2 = zx.q(*(arg1 + 0x168)) * 0x50 + arg1
uint64_t rax

if (*(arg1 + 0x16c) u> 0)
    void* rcx = *(r15_2 + 0x58)
    
    if (*(rcx + 0xc) == 0)
        rax = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax = zx.q(*(rcx + 8))
        
        if (rax.d s> 0)
            int64_t* r10_1 = data_143f0f180
            void arg_20
            
            if ((*(*r10_1 + 0x328))(r10_1, *(*(arg1 + 0x150) + (sx.q(*(arg1 + 0x168)) + 1) * 0x10), 
                    &arg_20, 0, 0xffffffff).b != 0)
                int32_t rax_2 = *(r15_2 + 0x54)
                int32_t rbx = *(arg2 + 0x8c)
                
                if (rbx != rax_2)
                    *(arg2 + 0x8c) = rax_2
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_3 = &rdx_3[3]
                        
                        if (rax_3 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_3 = &rdx_3[3]
                        
                        *(arg2 + 0x30) = rax_3
                        int64_t* rax_4 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_4 = rdx_3
                        int32_t rax_5 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_3[1]
                        rdx_3[1] = 0
                        *rdx_3 = &data_142f11588
                        rdx_3[2].d = rax_5
                    else
                        *(arg2 + 0x90) = rax_2
                
                int32_t i = 0
                *(arg3 + 0x14) = *(r15_2 + 0x10)
                
                if (*(r15_2 + 0x10) s> 0)
                    void* rax_8 = r15_2 + 0x10 - arg3
                    void* rcx_7 = arg3 + 0x24
                    
                    do
                        i += 1
                        *(rcx_7 - 0xc) = *(rax_8 - 0x20 + rcx_7)
                        *(rcx_7 - 8) = *(rax_8 - 0x1c + rcx_7)
                        *(rcx_7 - 4) = *(rax_8 - 0x18 + rcx_7)
                        *rcx_7 = *(rax_8 - 0x14 + rcx_7)
                        rcx_7 += 0x10
                    while (i s< *(r15_2 + 0x10))
                
                arg3[2].d = *(arg1 + 0x158)
                void* r9_3 = *(*(arg1 + 0x150) + 8)
                void* arg_8 = r9_3
                
                if (r9_3 != 0)
                    *(r9_3 + 8) += 1
                    r9_3 = arg_8
                
                int64_t* rcx_8 = data_143f0f180
                int64_t rax_15 =
                    (*(*rcx_8 + 0xc0))(rcx_8, arg2, *(r15_2 + 0x58), r9_3, 0, *(arg1 + 0x160))
                sub_14081c9d0(&arg_8)
                int32_t rdx_7 = arg3[1].d
                uint32_t rcx_11 = *(arg1 + 0x160) u>> 2
                
                if (rcx_11 s> rdx_7)
                    arg3[1].d = rcx_11
                    
                    if (rcx_11 s> *(arg3 + 0xc))
                        sub_1405a4cf0(arg3)
                else if (rcx_11 s< rdx_7 && rcx_11 != rdx_7)
                    arg3[1].d = rcx_11
                    sub_1405dac90(arg3)
                
                memcpy(*arg3, rax_15, *(arg1 + 0x160))
                int64_t* rcx_15 = data_143f0f180
                (*(*rcx_15 + 0xc8))(rcx_15, arg2, *(r15_2 + 0x58))
                sub_1405d16e0(r15_2 + 0x58, nullptr)
                int32_t rax_17 = *(arg1 + 0x168)
                *(arg1 + 0x16c) -= 1
                *(arg1 + 0x168) = (rax_17 + 1) & 3
                int32_t rax_19
                
                if (*(arg2 + 0x8c) != rbx)
                    *(arg2 + 0x8c) = rbx
                    
                    if (*(arg2 + 0x14) u<= 0)
                        *(arg2 + 0x90) = rbx
                        rax_19.b = 1
                        return rax_19
                    
                    void*** rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_20 = &rdx_12[3]
                    
                    if (rax_20 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_20 = &rdx_12[3]
                    
                    *(arg2 + 0x30) = rax_20
                    int64_t* rax_21 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_21 = rdx_12
                    rax_19 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_12[1]
                    rdx_12[1] = 0
                    *rdx_12 = &data_142f11588
                    rdx_12[2].d = rax_19
                
                rax_19.b = 1
                return rax_19

rax.b = 0
return rax
