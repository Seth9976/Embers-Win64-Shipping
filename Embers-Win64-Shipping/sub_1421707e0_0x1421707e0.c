// 函数: sub_1421707e0
// 地址: 0x1421707e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x88)

if (r8 != 0)
    int32_t rax_1 = *(r8 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        arg4, arg2, arg3 = sub_14214ed30(r8, arg2, arg3, arg4)

int64_t rbx = sx.q(*(arg1 + 0x98))
int64_t** r14 = nullptr
int64_t rdi = *(arg1 + 0x90)
uint64_t var_28 = 0
int32_t var_20 = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(&var_28, rbx.d, 0)
    r14 = var_28
    arg4 = memcpy(r14, rdi, (rbx << 3).d)
    rbx = zx.q(var_20)

int64_t result = sx.q(rbx.d)
int64_t** rdi_1 = r14
int64_t rbx_1 = 0
void* rcx_7 = &r14[result]
uint64_t rsi_3 = (rcx_7 - r14 + 7) u>> 3

if (r14 u> rcx_7)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* r8_3 = *rdi_1
        int32_t rax_11 = *(r8_3 + 0xc)
        void* const rax_15
        
        if (rax_11 s>= data_143e1d9b4)
            rax_15 = nullptr
        else
            uint32_t rdx_6 = zx.d(rax_11.w)
            
            if (rax_11 s< 0)
                rax_11 += 0xffff
                rdx_6 -= 0x10000
            
            rax_15 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(rdx_6) * 0x18
        
        result = zx.q(*(rax_15 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0)
            result, arg4, arg2, arg3 = sub_14214ed30(r8_3, arg2, arg3, arg4)
        
        rdi_1 = &rdi_1[1]
        rbx_1 += 1
    while (rbx_1 != rsi_3)

int64_t* rcx_11 = *(arg1 + 0x6e8)

if (rcx_11 != 0)
    result = (*(*rcx_11 + 0x2f0))(rcx_11)

if (data_143f3d170 != 0)
    result = sub_142166170(&data_143a2ec70)
    data_143f3d170 = 0

if (r14 == 0)
    return result

return sub_140a74f90(r14)
