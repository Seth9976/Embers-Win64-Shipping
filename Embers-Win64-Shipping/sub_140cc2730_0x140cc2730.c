// 函数: sub_140cc2730
// 地址: 0x140cc2730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
void* r13_2 = sx.q(arg1) * 0x50 + data_143e1d678
int32_t* i = *(r13_2 + 0x18)

for (void* r10 = &i[sx.q(*(r13_2 + 0x20))]; i != r10; i = &i[1])
    int32_t rax_2 = *i
    
    if (rax_2 s>= 0)
        int64_t rdx_1 = sx.q(zx.d(rax_2.w)) * 3
        int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
        void* r8_1 = rcx_1 + (rdx_1 << 3)
        int32_t rdx_2 = *(rcx_1 + (rdx_1 << 3) + 8)
        
        if (((rdx_2 u>> 0x1d).b & 1) != 0)
            *i = 0xffffffff
            arg_8 = 1
        else if (((rdx_2 u>> 0x1c).b & 1) != 0 && test_bit(rdx_2, 0x1c))
            do
                bool z_1
                
                if (rdx_2 == *(r8_1 + 8))
                    *(r8_1 + 8) = rdx_2 & 0xefffffff
                    z_1 = true
                else
                    *(r8_1 + 8)
                    z_1 = false
                
                if (z_1)
                    break
                
                rdx_2 = *(r8_1 + 8)
            while (test_bit(rdx_2, 0x1c))

int32_t* r14 = *(r13_2 + 0x28)
int64_t rbp
rbp.b = 0
int64_t result = sx.q(*(r13_2 + 0x30))
void* r12 = &r14[result]

if (r14 != r12)
    do
        result = zx.q(*r14)
        
        if (result.d s>= 0)
            int64_t rdx_4 = sx.q(zx.d(result.w)) * 3
            int64_t rcx_5 = *(data_143e1d9a0 + (sx.q(result.d s>> 0x10) << 3))
            result = zx.q(*(rcx_5 + (rdx_4 << 3) + 8))
            int64_t* rbx_1 = rcx_5 + (rdx_4 << 3)
            
            if (((result.d u>> 0x1d).b & 1) != 0)
                *r14 = 0xffffffff
                rbp.b = 1
            else if (((result.d u>> 0x1c).b & 1) == 0)
                if (*(rbx_1 + 0xc) s> 0 && ((result.d u>> 0x17).b & 1) == 0
                        && not(test_bit(result.d, 0x17)))
                    do
                        bool z_3
                        
                        if (result.d == rbx_1[1].d)
                            rbx_1[1].d = result.d | 0x800000
                            z_3 = true
                        else
                            rbx_1[1].d
                            z_3 = false
                        
                        if (z_3)
                            int32_t rax_18 = *(rbx_1 + 0xc)
                            uint32_t rdx_7 = zx.d(rax_18.w)
                            
                            if (rax_18 s< 0)
                                rax_18 += 0xffff
                                rdx_7 -= 0x10000
                            
                            int64_t rdx_8 = sx.q(rdx_7) * 3
                            int64_t rcx_20 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                            void* r8_2 = rcx_20 + (rdx_8 << 3)
                            int32_t result_1 = *(rcx_20 + (rdx_8 << 3) + 8)
                            result = zx.q(result_1 u>> 0x1c)
                            
                            if ((result.b & 1) != 0 && test_bit(result_1, 0x1c))
                                do
                                    result = zx.q(result_1)
                                    bool z_4
                                    
                                    if (result.d == *(r8_2 + 8))
                                        *(r8_2 + 8) = result_1 & 0xefffffff
                                        z_4 = true
                                    else
                                        result = zx.q(*(r8_2 + 8))
                                        z_4 = false
                                    
                                    if (z_4)
                                        result = sub_140cc2730(zx.q(not.d(*(r8_2 + 0xc))), arg2)
                                        break
                                    
                                    result_1 = *(r8_2 + 8)
                                while (test_bit(result_1, 0x1c))
                            
                            break
                        
                        result = zx.q(rbx_1[1].d)
                    while (not(test_bit(result.d, 0x17)))
            else
                while (test_bit(result.d, 0x1c))
                    bool z_2
                    
                    if (result.d == rbx_1[1].d)
                        rbx_1[1].d = result.d & 0xefffffff
                        z_2 = true
                    else
                        rbx_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        int64_t rdi_1 = sx.q(arg2[1].d)
                        int64_t rsi_1 = *rbx_1
                        int32_t rax_16 = (rdi_1 + 1).d
                        arg2[1].d = rax_16
                        
                        if (rax_16 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        result = *arg2
                        *(result + (rdi_1 << 3)) = rsi_1
                        int32_t rcx_13 = *(rbx_1 + 0xc)
                        
                        if (rcx_13 s< 0)
                            result = sub_140cc2730(zx.q(not.d(rcx_13)), arg2)
                        
                        break
                    
                    result = zx.q(rbx_1[1].d)
        
        r14 = &r14[1]
    while (r14 != r12)
    
    if (rbp.b != 0 || arg_8 != 0)
        goto label_140cc29a7
else if (arg_8 != 0)
label_140cc29a7:
    int64_t rsi_2 = 0
    int32_t* rbx_2 = *(r13_2 + 8)
    result = &rbx_2[sx.q(*(r13_2 + 0x10))]
    uint64_t r14_2 = sx.q(*(r13_2 + 0x10)) << 2 u>> 2
    
    if (rbx_2 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int32_t rax_24 = *rbx_2
            uint32_t rdx_10 = zx.d(rax_24.w)
            
            if (rax_24 s< 0)
                rax_24 += 0xffff
                rdx_10 -= 0x10000
            
            int64_t rdi_2 = sx.q(arg2[1].d)
            int32_t rax_28 = (rdi_2 + 1).d
            int64_t rbp_1 =
                *(*(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3)) + sx.q(rdx_10) * 0x18)
            arg2[1].d = rax_28
            
            if (rax_28 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            result = *arg2
            rbx_2 = &rbx_2[1]
            rsi_2 += 1
            *(result + (rdi_2 << 3)) = rbp_1
        while (rsi_2 != r14_2)
    
    *(r13_2 + 0x48) = 1
    data_143e1d69c = 1

return result
