// 函数: sub_140bc6fa0
// 地址: 0x140bc6fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x75) != 0)
    void* r8_1 = *(arg1 + 0x38)
    
    if (r8_1 != 0)
        int32_t rax_1 = *(r8_1 + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_1)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_3 = temp1_1 + rdx_2
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1e).b & 1) == 0 && *(arg1 + 0x77) != 0)
            *(r8_1 + 8) &= 0xffffcbff
            int32_t rax_12 = *(*(arg1 + 0x38) + 0xc)
            void* const rax_19
            
            if (rax_12 s>= data_143e1d9b4)
                rax_19 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_12)
                uint32_t rdx_5 = zx.d(temp2_1)
                int32_t rax_14 = temp3_1 + rdx_5
                rax_19 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_14.w) - rdx_5) * 0x18
            
            *(rax_19 + 8) |= 0x20000000
            int64_t arg_8 = 0
            void* rax_20 = sub_140cddea0()
            int64_t var_18
            void arg_10
            int64_t* rax_23 =
                sub_140b63b70(sub_140d25240(&arg_10, sub_140cde0b0(), rax_20, 0), &var_18)
            int16_t* const rdx_9
            
            if (rax_23[1].d == 0)
                rdx_9 = &data_142d40450
            else
                rdx_9 = *rax_23
            
            int64_t* rcx_10 = *(arg1 + 0x38)
            (*(*rcx_10 + 0x138))(rcx_10, rdx_9, 0, 0x35)
            int64_t rcx_11 = var_18
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)

int64_t r9 = 0
int64_t* r8_3 = *(arg1 + 0xb8)
uint64_t r10_1 = sx.q(*(arg1 + 0xc0)) << 3 u>> 3

if (r8_3 u> &r8_3[sx.q(*(arg1 + 0xc0))])
    r10_1 = 0

if (r10_1 != 0)
    do
        void* rax_27 = *r8_3
        
        if ((*(rax_27 + 8) & 0x3000) == 0)
            int32_t rax_28 = *(rax_27 + 0xc)
            void* const rax_32
            
            if (rax_28 s>= data_143e1d9b4)
                rax_32 = nullptr
            else
                uint32_t rdx_10 = zx.d(rax_28.w)
                
                if (rax_28 s< 0)
                    rax_28 += 0xffff
                    rdx_10 -= 0x10000
                
                rax_32 = *(data_143e1d9a0 + (sx.q(rax_28 s>> 0x10) << 3)) + sx.q(rdx_10) * 0x18
            
            *(rax_32 + 8) &= 0xf7ffffff
        
        r8_3 = &r8_3[1]
        r9 += 1
    while (r9 != r10_1)

return 2
