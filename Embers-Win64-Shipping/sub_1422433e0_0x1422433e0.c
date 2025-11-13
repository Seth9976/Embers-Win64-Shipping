// 函数: sub_1422433e0
// 地址: 0x1422433e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x38)
int64_t* result

if (rax == 0)
    result = nullptr
else
    result = sub_142239320(rax, arg1 + 0x58, arg2, arg3, arg4)

int64_t rdi_1 = sx.q(*(arg1 + 0x2008))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x2008) = rax_2

if (rax_2 s> *(arg1 + 0x200c))
    sub_1405a4d70(arg1 + 0x2000)

*(*(arg1 + 0x2000) + (rdi_1 << 3)) = result
int64_t* rax_4 = j_sub_140a82f30(0x30)
int64_t* rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    *rax_4 = 0x3f000000
    rax_4[1] = 0x3dcccccd
    rax_4[2].d = 0
    *(rax_4 + 0x14) = 0x3f800000
    rax_4[3] = 0x3f800000
    rax_4[4] = 0
    rax_4[5] = 0

if (arg3 != 0)
    void* rax_5 = sub_142218330(arg3)
    
    if (rax_5 != 0)
        *rbx_1 = *(rax_5 + 0x28)
        rbx_1[1].d = *(rax_5 + 0x30)

int64_t rbp_1 = sx.q(*(arg1 + 0x38))
int32_t rax_7 = (rbp_1 + 1).d
*(arg1 + 0x38) = rax_7

if (rax_7 s> *(arg1 + 0x3c))
    sub_1405a4d70(arg1 + 0x30)

*(*(arg1 + 0x30) + (rbp_1 << 3)) = rbx_1
int64_t rbp_2 = sx.q(*(arg1 + 0x50))
int32_t rax_9 = (rbp_2 + 1).d
*(arg1 + 0x50) = rax_9

if (rax_9 s> *(arg1 + 0x54))
    sub_1405a4d70(arg1 + 0x48)

*(*(arg1 + 0x48) + (rbp_2 << 3)) = rbx_1
int64_t rdi_2 = sx.q(*(arg1 + 0x20))
int32_t rax_11 = (rdi_2 + 1).d
*(arg1 + 0x20) = rax_11

if (rax_11 s> *(arg1 + 0x24))
    sub_140679a80(arg1 + 0x18)

*(rdi_2 + *(arg1 + 0x18)) = 0
*(arg1 + 0x20cc) = 1
j_sub_140a74f90(0)
return result
