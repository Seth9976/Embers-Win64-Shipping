// 函数: sub_1423ff730
// 地址: 0x1423ff730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140a1d9d0(arg1, arg2, arg3)
int64_t* rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_140a1d9d0(rax, &arg2[2], zmm1)
int64_t* rax_2
int512_t zmm1_2
rax_2, zmm1_2 = sub_140a1d9d0(rax_1, &arg2[5], zmm1_1)
int64_t* rax_3
int512_t zmm1_3
rax_3, zmm1_3 = sub_140a1d9d0(rax_2, &arg2[0xb], zmm1_2)
int64_t* rax_4
int512_t zmm1_4
rax_4, zmm1_4 = sub_140a3cdd0(rax_3, &arg2[9], zmm1_3)
int64_t* rdx_4 = rax_4[1]
int32_t* rax_5 = *rdx_4

if (&rax_5[1] u<= rdx_4[1])
    arg2[4].d = *rax_5
    int64_t* rcx_6 = rax_4[1]
    *rcx_6 += 4
else if ((*(rax_4 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_4, &arg2[4], zmm1_4)
else
    (*(*rax_4 + 0x150))(rax_4, &arg2[4], 4)

int64_t* rcx_8 = rax_4[1]
int32_t* r8 = *rcx_8

if (&r8[1] u<= rcx_8[1])
    *(arg2 + 0x24) = *r8
    int64_t* rax_9 = rax_4[1]
    *rax_9 += 4
else if ((*(rax_4 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_4, arg2 + 0x24, zmm1_4)
else
    (*(*rax_4 + 0x150))(rax_4, arg2 + 0x24, 4)

return arg1
