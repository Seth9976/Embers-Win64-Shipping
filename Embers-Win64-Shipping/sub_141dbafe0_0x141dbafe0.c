// 函数: sub_141dbafe0
// 地址: 0x141dbafe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = sub_140d226f0(arg1, sub_142527690())
int64_t r8 = *arg1
(*(r8 + 0x4c8))(arg1, 0, r8)

if (rax_1 != 0)
    int32_t rax_2 = *(rax_1 + 0xc)
    void* const rax_9
    
    if (rax_2 s>= data_143e1d9b4)
        rax_9 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    if (((*(rax_9 + 8) u>> 0x1c).b & 1) == 0)
        int64_t* r10_1 = *(rax_1 + 0x98)
        int64_t r9_1 = sx.q(*(rax_1 + 0xa0))
        int64_t* rax_12 = r10_1
        void* rdx_4 = &r10_1[r9_1]
        
        if (r10_1 != rdx_4)
            while (*rax_12 != arg1)
                rax_12 = &rax_12[1]
                
                if (rax_12 == rdx_4)
                    return sub_140cd7d40(arg1) __tailcall
            
            int32_t rax_15 = ((rax_12 - r10_1) s>> 3).d
            
            if (rax_15 != 0xffffffff)
                int32_t rcx_10 = r9_1.d - rax_15 - 1
                
                if (rcx_10 s>= 1)
                    rcx_10 = 1
                
                if (rcx_10 != 0)
                    memcpy(&r10_1[sx.q(rax_15)], &r10_1[sx.q(r9_1.d - rcx_10)], rcx_10 << 3)
                    r9_1 = zx.q(*(rax_1 + 0xa0))
                
                *(rax_1 + 0xa0) = (r9_1 - 1).d

return sub_140cd7d40(arg1) __tailcall
