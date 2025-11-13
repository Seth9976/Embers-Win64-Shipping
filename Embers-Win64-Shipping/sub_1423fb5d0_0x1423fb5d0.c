// 函数: sub_1423fb5d0
// 地址: 0x1423fb5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
uint128_t var_78
sub_1409aa070(&var_78, sub_140d41340(), 0, 0x10, 0x20000000)
uint128_t zmm2 = var_78
void* rax_2 = zmm2.q
int96_t var_b8 = zmm2.12
uint128_t temp0 = _mm_bsrli_si128(zmm2, 8)
int32_t r10 = *(rax_2 + 0x24)
int32_t arg_8 = r10

if (temp0.d != r10)
    int32_t rbx_1 = var_b8:8.d
    int64_t* var_68
    int64_t* rsi_1 = var_68
    void* r15_1 = var_b8.q
    
    do
        void* const rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = nullptr
        else
            rsi_2 = *rsi_1
        
        int64_t r8_1 = *(rsi_2 + 0x20)
        int64_t arg_20 = r8_1
        
        if (r8_1 != 0)
            int32_t arg_10
            sub_1405ba560(arg1, &arg_10, r8_1)
            int64_t rax_4 = sx.q(arg_10)
            void* const rcx_4
            
            if (rax_4.d == 0xffffffff)
                rcx_4 = nullptr
            else
                rcx_4 = (rax_4 << 5) + *arg1
            
            int64_t* rdi_1 = rcx_4 + 8
            
            if (rcx_4 == 0)
                rdi_1 = nullptr
            
            int64_t rax_7
            int64_t r14_1
            
            if (rdi_1 == 0)
                int64_t var_c8 = 0
                int64_t* var_88 = &arg_20
                int64_t var_c0_1 = 0
                int64_t* var_80_1 = &var_c8
                int32_t arg_18
                sub_1423f6910(arg1, &arg_18, &var_88, nullptr)
                int64_t rcx_7 = var_c8
                void* rdi_4 = (sx.q(arg_18) << 5) + *arg1
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                r14_1 = sx.q(*(rdi_4 + 0x10))
                int32_t rax_6 = (r14_1 + 1).d
                *(rdi_4 + 0x10) = rax_6
                
                if (rax_6 s> *(rdi_4 + 0x14))
                    sub_1405a4d70(rdi_4 + 8)
                
                rax_7 = *(rdi_4 + 8)
            else
                r14_1 = sx.q(rdi_1[1].d)
                int32_t rax_5 = (r14_1 + 1).d
                rdi_1[1].d = rax_5
                
                if (rax_5 s> *(rdi_1 + 0xc))
                    sub_1405a4d70(rdi_1)
                
                rax_7 = *rdi_1
            
            r10 = arg_8
            *(rax_7 + (r14_1 << 3)) = rsi_2
        
        int32_t r8_3 = *(rax_2 + 0x24)
    label_1423fb7b0:
        int32_t rax_9 = rbx_1 + 1
        rsi_1 = nullptr
        var_b8:8.d = rax_9
        rbx_1 = rax_9
        
        if (rax_9 s< r8_3)
            int32_t rax_15
            
            do
                uint32_t rcx_9 = zx.d(var_b8:8.w)
                int32_t rax_10 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_10 = rbx_1 + 0xffff
                    rcx_9 -= 0x10000
                
                int64_t rcx_10 = sx.q(rcx_9) * 3
                int64_t rax_13 = *(*(r15_1 + 0x10) + (sx.q(rax_10 s>> 0x10) << 3))
                void* rax_14 = *(rax_13 + (rcx_10 << 3))
                
                if (rax_14 != 0)
                    rsi_1 = rax_13 + (rcx_10 << 3)
                    int64_t var_58
                    
                    if ((*(rax_14 + 8) & var_58.d) != 0)
                        goto label_1423fb7b0
                    
                    int32_t rax_16 = *(rax_14 + 0xc)
                    void* const rax_20
                    
                    if (rax_16 s>= data_143e1d9b4)
                        rax_20 = nullptr
                    else
                        uint32_t rdx_8 = zx.d(rax_16.w)
                        
                        if (rax_16 s< 0)
                            rax_16 += 0xffff
                            rdx_8 -= 0x10000
                        
                        rax_20 =
                            *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3)) + sx.q(rdx_8) * 0x18
                    
                    if ((*(rax_20 + 8) & var_58:4.d) != 0)
                        goto label_1423fb7b0
                    
                    goto label_1423fb866
                
                rax_15 = rbx_1 + 1
                var_b8:8.d = rax_15
                rbx_1 = rax_15
            while (rax_15 s< r8_3)
        
    label_1423fb866:
    while (rbx_1 != r10)

return arg1
