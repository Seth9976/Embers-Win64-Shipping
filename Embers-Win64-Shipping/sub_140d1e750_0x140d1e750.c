// 函数: sub_140d1e750
// 地址: 0x140d1e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rdi_1 = not.d(*(arg2 + 0xc))
int64_t* r11 = arg2
void* r8_2 = sx.q(rdi_1) * 0x50 + *arg1
int32_t* r14 = *(r8_2 + 0x38)
*(r8_2 + 0x38) = 0
int64_t rsi = sx.q(*(r8_2 + 0x40))
*(r8_2 + 0x40) = 0
int32_t* r9 = *(r8_2 + 8)
int64_t r8_3 = 0
uint64_t r10_1 = sx.q(*(r8_2 + 0x10)) << 2 u>> 2

if (r9 u> &r9[sx.q(*(r8_2 + 0x10))])
    r10_1 = 0

if (r10_1 != 0)
    do
        int32_t rax_3 = *r9
        uint32_t rdx = zx.d(rax_3.w)
        
        if (rax_3 s< 0)
            rax_3 += 0xffff
            rdx -= 0x10000
        
        r9 = &r9[1]
        r8_3 += 1
        arg2 = sx.q(rdx) * 3
        int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
        *(rcx_1 + (arg2 << 3) + 8) |= 0x10000000
        *(rcx_1 + (arg2 << 3) + 0xc) = 0
    while (r8_3 != r10_1)

int64_t* rcx_2 = *r11
(*(*rcx_2 + 0x30))(rcx_2, arg2, r8_3, r9)
sub_140d20120(arg1, rdi_1)
int32_t* rdi_2 = r14
uint64_t result = &r14[rsi]
uint64_t rsi_2 = rsi << 2 u>> 2

if (r14 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int32_t rax_8 = *rdi_2
        uint32_t rdx_2 = zx.d(rax_8.w)
        
        if (rax_8 s< 0)
            rax_8 += 0xffff
            rdx_2 -= 0x10000
        
        void* rdx_4 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
        int32_t rcx_6 = *(rdx_4 + 8)
        result = zx.q(rcx_6 u>> 0x18)
        
        if ((result.b & 1) != 0)
            *(rdx_4 + 8) = rcx_6 | 0x10000000
            result = sub_140d1e750(arg1)
        
        rdi_2 = &rdi_2[1]
        rbx += 1
    while (rbx != rsi_2)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
