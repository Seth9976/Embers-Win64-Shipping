// 函数: sub_14271d9a0
// 地址: 0x14271d9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xa0)
int64_t rax
void* const rdi
void* const r9

if (rbx == 0)
label_14271da24:
    rdi = nullptr
    r9 = nullptr
    rax.b = 0
else
    void* rax_1 = sub_142497110()
    void* rdx_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx_1 + 0x38))
        goto label_14271da24
    
    if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
        goto label_14271da24
    
    int32_t rax_2 = *(rbx + 0xc)
    rdi = nullptr
    r9 = rbx
    void* const rax_8
    
    if (rax_2 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_3
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_3) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
        rax.b = 0
    else
        rax.b = 1

if (rax.b != 0)
    return r9

if (rbx == 0)
    rbx = nullptr
    rax.b = 0
else
    void* rax_11 = sub_14255d000()
    void* rdx_5 = *(rbx + 0x10)
    rax = sx.q(*(rax_11 + 0x38))
    
    if (rax.d s> *(rdx_5 + 0x38))
        rbx = nullptr
        rax.b = 0
    else if (*(*(rdx_5 + 0x30) + (rax << 3)) != rax_11 + 0x30)
        rbx = nullptr
        rax.b = 0
    else
        int32_t rax_12 = *(rbx + 0xc)
        void* const rax_19
        
        if (rax_12 s>= data_143e1d9b4)
            rax_19 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_12)
            uint32_t rdx_7 = zx.d(temp2_1)
            int32_t rax_14 = temp3_1 + rdx_7
            rax_19 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                + sx.q(zx.d(rax_14.w) - rdx_7) * 0x18
        
        if (((*(rax_19 + 8) u>> 0x1d).b & 1) != 0)
            rax.b = 0
        else
            rax.b = 1

if (rax.b != 0)
    void* r8_4 = *(rbx + 0x258)
    
    if (r8_4 != 0)
        int32_t rax_21 = *(r8_4 + 0xc)
        
        if (rax_21 s< data_143e1d9b4)
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_21)
            uint32_t rdx_10 = zx.d(temp4_1)
            int32_t rax_23 = temp5_1 + rdx_10
            rdi = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3))
                + sx.q(zx.d(rax_23.w) - rdx_10) * 0x18
    
    if (r8_4 == 0 || ((*(rdi + 8) u>> 0x1d).b & 1) != 0)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b != 0)
        return r8_4

return 0
