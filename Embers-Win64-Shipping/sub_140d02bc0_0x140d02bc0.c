// 函数: sub_140d02bc0
// 地址: 0x140d02bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
*arg1 = 0
arg1[1] = 0
int32_t r8 = *(arg2 + 0xc)
void* const rax_7

if (r8 s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1e).b & 1) != 0)
    sub_140a20ba0(arg1, u"(root) ", 7)
    r8 = *(arg2 + 0xc)

void* const rax_17

if (r8 s>= data_143e1d9b4)
    rax_17 = nullptr
else
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8)
    uint32_t rdx_4 = zx.d(temp2_1)
    int32_t rax_12 = temp3_1 + rdx_4
    rax_17 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_4) * 0x18

if (((*(rax_17 + 8) u>> 0x19).b & 1) != 0)
    sub_140a20ba0(arg1, u"(native) ", 9)
    r8 = *(arg2 + 0xc)

void* const rax_27

if (r8 s>= data_143e1d9b4)
    rax_27 = nullptr
else
    int16_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r8)
    uint32_t rdx_7 = zx.d(temp4_1)
    int32_t rax_22 = temp5_1 + rdx_7
    rax_27 = *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(zx.d(rax_22.w) - rdx_7) * 0x18

if (((*(rax_27 + 8) u>> 0x1d).b & 1) != 0)
    sub_140a20ba0(arg1, u"(PendingKill) ", 0xe)

if (((*(arg2 + 8) u>> 1).b & 1) != 0)
    sub_140a20ba0(arg1, u"(standalone) ", 0xd)

int32_t r8_1 = *(arg2 + 0xc)
void* const rax_39

if (r8_1 s>= data_143e1d9b4)
    rax_39 = nullptr
else
    int16_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r8_1)
    uint32_t rdx_10 = zx.d(temp6_1)
    int32_t rax_34 = temp7_1 + rdx_10
    rax_39 = *(data_143e1d9a0 + (sx.q(rax_34 s>> 0x10) << 3)) + sx.q(zx.d(rax_34.w) - rdx_10) * 0x18

if (((*(rax_39 + 8) u>> 0x1a).b & 1) != 0)
    sub_140a20ba0(arg1, u"(async) ", 8)
    r8_1 = *(arg2 + 0xc)

void* const rax_49

if (r8_1 s>= data_143e1d9b4)
    rax_49 = nullptr
else
    int16_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(r8_1)
    uint32_t rdx_13 = zx.d(temp8_1)
    int32_t rax_44 = temp9_1 + rdx_13
    rax_49 = *(data_143e1d9a0 + (sx.q(rax_44 s>> 0x10) << 3)) + sx.q(zx.d(rax_44.w) - rdx_13) * 0x18

if (((*(rax_49 + 8) u>> 0x1b).b & 1) != 0)
    sub_140a20ba0(arg1, u"(asyncloading) ", 0xf)
    r8_1 = *(arg2 + 0xc)

if (r8_1 s<= data_143e1d994)
    sub_140a20ba0(arg1, u"(NeverGCed) ", 0xc)
    r8_1 = *(arg2 + 0xc)

if (r8_1 s< data_143e1d9b4)
    int16_t temp10_1
    int32_t temp11_1
    temp10_1:temp11_1 = sx.q(r8_1)
    uint32_t rdx_16 = zx.d(temp10_1)
    int32_t rax_54 = temp11_1 + rdx_16
    rdi = *(data_143e1d9a0 + (sx.q(rax_54 s>> 0x10) << 3)) + sx.q(zx.d(rax_54.w) - rdx_16) * 0x18

if ((*(rdi + 0xb) & 1) != 0)
    sub_140a20ba0(arg1, u"(ClusterRoot) ", 0xe)

if (*(rdi + 0xc) s> 0)
    sub_140a20ba0(arg1, u"(Clustered) ", 0xc)

return arg1
