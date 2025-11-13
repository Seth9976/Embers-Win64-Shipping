// 函数: sub_140bc5c50
// 地址: 0x140bc5c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
void* r13_2 = r14 * 0x30 + *(arg1 + 0x120)
int64_t* r14_2 = (r14 << 4) + *(arg1 + 0x130)
int32_t rax_1 = *(*(*(arg1 + 0xc8) + 0x268) + (sx.q(*(r13_2 + 8)) << 2))
int32_t rdx_1 = *(r13_2 + 0x14)
int32_t arg_c = *(r13_2 + 0xc)
int64_t* rax_3

if (rdx_1 != 0)
    int64_t r8
    r8.b = 1
    rax_3 = sub_140bc5ea0(arg1, rdx_1)
else
    rax_3 = sub_140bdf2e0()

void* rbp = nullptr
int64_t rax_4 = sx.q(*(r13_2 + 0x10))
void* const r15

if (rax_4.d != 0)
    r15 = nullptr
    int32_t temp0_1 = rax_4.d
    
    if (temp0_1 s> 0)
        r15 = *(*(arg1 + 0x130) + rax_4 * 0x10 - 0x10)
    else if (temp0_1 s< 0)
        int32_t rax_6 = not.d(rax_4.d)
        void* rax_7
        
        if (data_14399fa4c == 0 || rax_6 s>= *(arg1 + 0x174))
            rax_7 = sub_140bc8740((sx.q(rax_6) << 4) + *(arg1 + 0x148))
        else
            rax_7 = sub_140bc79e0(rax_6, *(arg1 + 0x148), *(arg1 + 0x158), *(arg1 + 0x150))
        
        r15 = rax_7
else
    r15 = *(arg1 + 0x38)

int32_t var_50 = 0
int64_t rax_8 = sub_140d3f470(nullptr, r15, rax_1.q, 1, 0, 0, 0)
*r14_2 = rax_8
int64_t rdx_4 = rax_8
char r8_3

if (rax_8 == 0)
    int64_t* rax_17 = sub_140bc5ea0(arg1, *(r13_2 + 0x1c))
    sub_140cd8660(rax_17, 0)
    var_50.q = rax_17
    int64_t rax_18 =
        sub_140d2dfc0(rax_3, r15, rax_1.q, *(r13_2 + 0x24) | 0x83400, 0, var_50, 0, 0, 1)
    *r14_2 = rax_18
    
    if (data_14399fa4c != 0 || data_143e1d99c != 0)
        int32_t rax_19 = *(rax_18 + 0xc)
        
        if (rax_19 s< data_143e1d9b4)
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_19)
            uint32_t rdx_8 = zx.d(temp1_1)
            int32_t rax_21 = temp2_1 + rdx_8
            rbp = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3))
                + sx.q(zx.d(rax_21.w) - rdx_8) * 0x18
        
        *(rbp + 8) |= 0x40000000
    
    rdx_4 = *r14_2
    r8_3 = 0
else
    int32_t rcx_8 = *(rax_8 + 8)
    
    if (((rcx_8 u>> 0x15).b & 1) != 0)
        r8_3 = 1
    else
        *(rdx_4 + 8) = (not.d(rcx_8 << 9) & 0x2000) | rcx_8 | 0x81400
        rdx_4 = *r14_2
        r8_3 = 0

sub_140bc2910(arg1, rdx_4, r8_3)
int64_t result = sx.q(*(r13_2 + 0x20))

if (result.d s>= 0)
    int64_t result_1 = result
    result = *r14_2
    int64_t* rcx_18 = (result_1 << 4) + *(arg1 + 0x148)
    *rcx_18 = result
    *(rcx_18 + 0xc) = 0

return result
