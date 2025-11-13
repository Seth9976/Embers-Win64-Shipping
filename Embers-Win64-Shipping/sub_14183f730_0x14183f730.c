// 函数: sub_14183f730
// 地址: 0x14183f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xf8)
int64_t* r14 = arg2
int64_t result = sx.q(*(arg1 + 0x100))
void* rdi_1 = result * 0x138 + i
void* var_58 = rdi_1

for (; i != rdi_1; i += 0x138)
    if (*(i + 0x70) != 3)
        int64_t* rbx_1 = *(i + 0x88)
        result = (*(*rbx_1 + 0x40))(rbx_1)
        
        if (*(result + 8) s> 1)
            int64_t rdi_2 = sx.q(r14[1].d)
            int32_t rax_1 = (rdi_2 + 1).d
            r14[1].d = rax_1
            
            if (rax_1 s> *(r14 + 0xc))
                sub_1405e3f90(r14)
            
            int64_t* rsi_2 = rdi_2 * 0xa8 + *r14
            int64_t* rcx_2 = &rsi_2[2]
            *rsi_2 = 0
            void* rdi_3 = &rsi_2[0xc]
            rsi_2[1] = 0
            rcx_2[2] = 0
            rcx_2[3].d = 0
            *(rcx_2 + 0x1c) = 0x80
            int64_t* rax_2 = rcx_2[2]
            
            if (rax_2 != 0)
                rcx_2 = rax_2
            
            *rcx_2 = 0
            rcx_2[1] = 0
            rsi_2[6].d = 0xffffffff
            *(rsi_2 + 0x34) = 0
            rsi_2[8] = 0
            rsi_2[9].d = 0
            __builtin_memset(&rsi_2[0xa], 0, 0x50)
            int64_t* rax_4 = (*(*rbx_1 + 0x30))(rbx_1, 0)
            
            if (rsi_2 != rax_4)
                int64_t rsi_3 = sx.q(rax_4[9].d)
                void* rdi_5 = &rsi_2[7]
                sub_1405a4aa0(rdi_5, 0, rsi_3.d, 4)
                void* r10_1 = *(rdi_5 + 8)
                void* rdx_2 = &rax_4[7]
                void* r9_1 = *(rdx_2 + 8)
                
                if (r9_1 != 0)
                    rdx_2 = r9_1
                
                if (r10_1 != 0)
                    rdi_5 = r10_1
                
                memcpy(rdi_5, rdx_2, (rsi_3 << 2).d)
                rsi_2[9].d = rsi_3.d
                sub_141823c70(rsi_2, rax_4)
            
            int64_t* rax_7 = (*(*rbx_1 + 0x10))(rbx_1)
            
            if (&rsi_2[0x10] != rax_7)
                int32_t rsi_4 = rax_7[1].d
                int64_t* rax_8 = *rax_7
                int32_t r8_4 = *(rsi_2 + 0x8c)
                rsi_2[0x11].d = rsi_4
                
                if (rsi_4 != 0 || r8_4 != 0)
                    sub_1405a4c70(&rsi_2[0x10], rsi_4, r8_4)
                    memcpy(rsi_2[0x10], rax_8, rsi_4 * 2)
                else
                    *(rsi_2 + 0x8c) = rsi_4
            
            int64_t* rax_10 = (*(*rbx_1 + 0x48))(rbx_1)
            
            if (&rsi_2[0xe] != rax_10)
                int32_t rsi_5 = rax_10[1].d
                int64_t r14_2 = *rax_10
                int32_t r8_7 = *(rsi_2 + 0x7c)
                rsi_2[0xf].d = rsi_5
                
                if (rsi_5 != 0 || r8_7 != 0)
                    sub_1405a4c70(&rsi_2[0xe], rsi_5, r8_7)
                    memcpy(rsi_2[0xe], r14_2, rsi_5 * 2)
                else
                    *(rsi_2 + 0x7c) = rsi_5
            
            int64_t* rax_12 = (*(*rbx_1 + 0x38))(rbx_1)
            
            if (&rsi_2[0xa] != rax_12)
                int32_t rsi_6 = rax_12[1].d
                int64_t r14_3 = *rax_12
                int32_t r8_10 = *(rsi_2 + 0x5c)
                rsi_2[0xb].d = rsi_6
                
                if (rsi_6 != 0 || r8_10 != 0)
                    sub_1405a4c70(&rsi_2[0xa], rsi_6, r8_10)
                    memcpy(rsi_2[0xa], r14_3, rsi_6 * 2)
                else
                    *(rsi_2 + 0x5c) = rsi_6
            
            int64_t* rax_14 = (*(*rbx_1 + 0x40))(rbx_1)
            
            if (rdi_3 != rax_14)
                int32_t rsi_7 = rax_14[1].d
                int64_t r14_4 = *rax_14
                int32_t r8_13 = *(rdi_3 + 0xc)
                *(rdi_3 + 8) = rsi_7
                
                if (rsi_7 != 0 || r8_13 != 0)
                    sub_1405a4c70(rdi_3, rsi_7, r8_13)
                    memcpy(*rdi_3, r14_4, rsi_7 * 2)
                else
                    *(rdi_3 + 0xc) = rsi_7
            
            result = (*(*rbx_1 + 0x18))(rbx_1)
            
            if (&rsi_2[0x12] != result)
                int32_t rbx_2 = *(result + 8)
                int64_t rdi_6 = *result
                int32_t r8_16 = *(rsi_2 + 0x9c)
                rsi_2[0x13].d = rbx_2
                
                if (rbx_2 != 0 || r8_16 != 0)
                    sub_1405a4c70(&rsi_2[0x12], rbx_2, r8_16)
                    memcpy(rsi_2[0x12], rdi_6, rbx_2 * 2)
                else
                    *(rsi_2 + 0x9c) = rbx_2
            
            r14 = arg2
            result.b = *(i + 0x70) == 2
            rdi_1 = var_58
            rsi_2[0x14].b = result.b

return result
