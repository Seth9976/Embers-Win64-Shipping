// 函数: sub_140d1e5a0
// 地址: 0x140d1e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(*arg2)
int64_t rbx = 0
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int32_t* r14 = *(arg2 + 0x38)
int64_t rdx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
*(arg2 + 0x38) = 0
int64_t rdi = sx.q(arg2[0x10])
*(arg2 + 0x40) = 0

if (((*(rcx_1 + (rdx_2 << 3) + 8) u>> 0x1c).b & 1) == 0)
    int32_t* r9_1 = *(arg2 + 8)
    int64_t r10_1 = 0
    int32_t rdx_4 = not.d(*(rcx_1 + (rdx_2 << 3) + 0xc))
    uint64_t r11_2 = sx.q(arg2[4]) << 2 u>> 2
    
    if (r9_1 u> &r9_1[sx.q(arg2[4])])
        r11_2 = 0
    
    if (r11_2 != 0)
        do
            int32_t rax_11 = *r9_1
            uint32_t r8_2 = zx.d(rax_11.w)
            
            if (rax_11 s< 0)
                rax_11 += 0xffff
                r8_2 -= 0x10000
            
            r9_1 = &r9_1[1]
            r10_1 += 1
            *(*(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(r8_2) * 0x18 + 0xc) = 0
        while (r10_1 != r11_2)
    
    sub_140d20120(arg1, rdx_4)

int32_t* rdi_1 = r14
uint64_t result = &r14[rdi]
uint64_t rsi_1 = rdi << 2 u>> 2

if (r14 u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int32_t rax_15 = *rdi_1
        uint32_t rdx_5 = zx.d(rax_15.w)
        
        if (rax_15 s< 0)
            rax_15 += 0xffff
            rdx_5 -= 0x10000
        
        result =
            zx.q(*(*(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3)) + sx.q(rdx_5) * 0x18 + 0xc))
        
        if (result.d != 0)
            result = sub_140d1e5a0(arg1, sx.q(not.d(result.d)) * 0x50 + *arg1)
        
        rdi_1 = &rdi_1[1]
        rbx += 1
    while (rbx != rsi_1)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
