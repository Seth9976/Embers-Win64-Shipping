// 函数: sub_1410ec000
// 地址: 0x1410ec000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint64_t r15 = 0

if (arg1[1].d u> 0)
    do
        int64_t rdi_1 = *arg1
        uint64_t rbx_1 = r15 * 5
        
        if (*(rdi_1 + (rbx_1 << 3) + 0x1e) == 0)
            void* rcx = arg1[3]
            int64_t rdx_1 = sx.q(*(rdi_1 + (rbx_1 << 3) + 0x18))
            int64_t r13_1 = *(rcx + 0xde8)
            int64_t r12_1 = rdx_1 * 5
            void* r14_1 = *(*(rcx + 0xdb8) + (rdx_1 << 3))
            int64_t* rcx_1 = *(r14_1 + 8)
            int64_t* rbp_2 = sx.q(*(rdi_1 + (rbx_1 << 3) + 0x1c)) * 0x5240 + arg1[2]
            char rax_3 = (*(*rcx_1 + 0x180))(rcx_1)
            int32_t arg_20 = 0
            char r12_2
            int32_t* var_98
            char var_90
            int32_t var_88
            char var_80
            int512_t zmm3
            
            if ((*(r14_1 + 0xfc) & 1) == 0)
                float zmm2 = arg1[4].d f* *(rbp_2 + 0xd5c)
                var_80 = 0
                int32_t zmm1 = *(r13_1 + (r12_1 << 3) + 4)
                int32_t var_68 = (*(r13_1 + (r12_1 << 3))).d
                var_88 = zmm2
                var_90 = rax_3
                var_98 = &arg_20
                int32_t var_60_1 = (*(r13_1 + (r12_1 << 3) + 8)).d
                int32_t var_64_1 = zmm1
                int32_t var_5c_1 = 0x3f800000
                void arg_18
                int16_t* rax_7
                rax_7, zmm3 = sub_1422e0040(&arg_18, r14_1 + 0x38, rbp_2, &var_68, 
                    (*(r13_1 + (r12_1 << 3) + 0x18)).d, *(arg1 + 0x24), var_98, var_90, var_88, 0)
                r12_2 = *rax_7
            else
                zmm3.o = *(rbp_2 + 0xd5c)
                int32_t var_a0
                var_a0.q = &arg_20
                int64_t* rcx_4 = *(*(arg1[3] + 0xdd8) + (rdx_1 << 3))
                int64_t r9_1 = *rcx_4
                void arg_10
                char rcx_5 = *(*(r9_1 + 0x168))(rcx_4, &arg_10, rbp_2, r9_1, *(arg1 + 0x24), 
                    var_a0, var_98, var_90, var_88, var_80, rdx_1)
                r12_2 = rax_3
                
                if (rcx_5 s>= rax_3)
                    r12_2 = rcx_5
            int32_t rbp_3 = sx.d(r12_2)
            result = sub_14139dbd0(r14_1, rbp_3)
            
            if (result != 0 && r12_2 s>= 0 && rbp_3 s< *(r14_1 + 0x108))
                *(rdi_1 + (rbx_1 << 3) + 0x1d) = r12_2
                *(rdi_1 + (rbx_1 << 3)) = sub_14139dbd0(r14_1, rbp_3)
                int64_t rcx_9 = sx.q(r12_2) * 3
                int64_t rax_10 = *(r14_1 + 0x100)
                void* rdx_8 = rax_10 + (rcx_9 << 3)
                void* rax_11 = *(rax_10 + (rcx_9 << 3) + 8)
                void* rcx_10 = rdx_8
                
                if (rax_11 != 0)
                    rcx_10 = rax_11
                
                int32_t var_50_1 = *(rdx_8 + 0x10)
                int64_t r8_2 = 0
                *(rdi_1 + (rbx_1 << 3) + 8) = rcx_10.o
                int32_t* rdx_9 = *(rdi_1 + (rbx_1 << 3) + 8)
                uint64_t r9_4 = sx.q(*(rdi_1 + (rbx_1 << 3) + 0x10)) << 2 u>> 2
                
                if (rdx_9 u> &rdx_9[sx.q(*(rdi_1 + (rbx_1 << 3) + 0x10))])
                    r9_4 = 0
                
                if (r9_4 != 0)
                    do
                        int64_t rax_15 = sx.q(*rdx_9)
                        
                        if (rax_15.d s>= 0)
                            rcx_10 = rax_15 * 0x88 + *(arg1[3] + 0xd80)
                            *(rdi_1 + (rbx_1 << 3) + 0x1f) |= *(rcx_10 + 0x7d)
                            *(rdi_1 + (rbx_1 << 3) + 0x20) &= *(rcx_10 + 0x7f)
                            *(rdi_1 + (rbx_1 << 3) + 0x21) |= *(rcx_10 + 0x7e)
                            *(rdi_1 + (rbx_1 << 3) + 0x22) |= *(rcx_10 + 0x80)
                        
                        rdx_9 = &rdx_9[1]
                        r8_2 += 1
                    while (r8_2 != r9_4)
                
                result = zx.q(*(rdi_1 + (rbx_1 << 3) + 0x21))
                char temp0_1 = result.b
                result.b = neg.b(result.b)
                rcx_10.b = sbb.b(rcx_10.b, rcx_10.b, temp0_1 != 0)
                rcx_10.b &= 8
                *(rdi_1 + (rbx_1 << 3) + 0x1f) |= rcx_10.b
        
        r15 = zx.q(r15.d + 1)
    while (r15.d u< arg1[1].d)

return result
