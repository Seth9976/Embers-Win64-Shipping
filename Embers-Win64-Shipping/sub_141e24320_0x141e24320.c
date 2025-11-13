// 函数: sub_141e24320
// 地址: 0x141e24320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = *(arg3 + 0x30)
int64_t* result = nullptr
int64_t rsi = 0
uint64_t r12_1 = sx.q(*(arg3 + 0x38)) << 2 u>> 2

if (r14 u> &r14[sx.q(*(arg3 + 0x38))])
    r12_1 = 0

if (r12_1 != 0)
    do
        int32_t rbx_1 = *r14
        void* rdi_1 = *arg2
        void* rax_2
        int32_t zmm0_1
        int32_t zmm6_1
        rax_2, zmm0_1, zmm6_1 = sub_142468100()
        int64_t* result_1 = sub_141e03000(rdi_1, rbx_1, rax_2)
        
        if (result_1 != 0 && *(result_1 + 0x15) == 0)
            (*(*result_1 + 0xd0))(result_1)
            
            if (not(zmm0_1 f<= zmm6_1))
                (*(*result_1 + 0xd0))(result_1)
                result = result_1
        
        r14 = &r14[1]
        rsi += 1
    while (rsi != r12_1)

int32_t* i = *(arg3 + 0x40)

for (void* r12_2 = &i[sx.q(*(arg3 + 0x48))]; i != r12_2; i = &i[1])
    void* rax_7 = sub_141e03000(*arg2, *i, sub_1424683a0())
    
    if (rax_7 != 0)
        int64_t* rbx_4 = *(rax_7 + 0x30)
        
        if (rbx_4 != 0)
            int32_t rax_8 = *(rbx_4 + 0xc)
            void* const rax_14
            
            if (rax_8 s>= data_143e1d9b4)
                rax_14 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_8)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_10 = temp1_1 + rdx_3
                rax_14 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_10.w) - rdx_3) * 0x18
            
            if (((*(rax_14 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_17 = sub_14245f6d0()
                void* rcx_8 = rbx_4[2]
                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                
                if (rax_18.d s<= *(rcx_8 + 0x38)
                        && *(*(rcx_8 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                    int64_t** var_48
                    int32_t zmm0_2
                    int32_t zmm6_2
                    zmm0_2, zmm6_2 = sub_141e022a0(rbx_4, &var_48, rax_7 + 0xa8)
                    int64_t** rdi_4 = var_48
                    int32_t var_40
                    void* rcx_10 = &rdi_4[sx.q(var_40)]
                    int64_t rsi_1 = 0
                    uint64_t rbp_4 = (rcx_10 - rdi_4 + 7) u>> 3
                    
                    if (rdi_4 u> rcx_10)
                        rbp_4 = 0
                    
                    if (rbp_4 != 0)
                        do
                            int64_t* result_2 = *rdi_4
                            
                            if (*(result_2 + 0x15) == 0)
                                (*(*result_2 + 0xd0))(result_2)
                                
                                if (not(zmm0_2 f<= zmm6_2))
                                    (*(*result_2 + 0xd0))(result_2)
                                    zmm6_2 = zmm0_2
                                    result = result_2
                            
                            rdi_4 = &rdi_4[1]
                            rsi_1 += 1
                        while (rsi_1 != rbp_4)
                        
                        rdi_4 = var_48
                    
                    if (rdi_4 != 0)
                        sub_140a74f90(rdi_4)

return result
