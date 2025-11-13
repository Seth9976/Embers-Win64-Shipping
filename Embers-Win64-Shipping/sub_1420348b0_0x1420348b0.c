// 函数: sub_1420348b0
// 地址: 0x1420348b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rax_1 = sub_1424c7800()
uint64_t rax = rax_1[0x23]

if (rax == 0)
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x390))(rax_1, arg3, r8_1)
    rax = rax_1[0x23]

if ((*(rax + 0x38) & 4) == 0 || sub_140e6ae00(data_143e29f28, arg3).b != 0)
    return 

int32_t arg_10
(*(*arg2 + 0xd0))(arg2, &arg_10, 0)
void* rcx_3 = *(arg1 + 0x90)

if (rcx_3 == 0 || *(rcx_3 + 0xbc) != data_143f58d48 || rcx_3 == 8)
    return 

void* const rdi_2 = *(rcx_3 + 0x248)
int64_t* rcx_5 = *(rcx_3 + 0x250)

if (rcx_5 != 0)
    *(rcx_5 + 0xc) += 1

int64_t* rbx_2 = rcx_5

if (rcx_5 != 0)
    rax = zx.q(rcx_5[1].d)
    
    if (rax.d != 0)
        rcx_5[1].d = rax.d + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_2 = nullptr

if (rbx_2 == 0)
    rdi_2 = nullptr

if (rcx_5 != 0)
    int32_t temp1_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

if (rdi_2 != 0 && sub_140e19760(rdi_2, arg3).b == 0)
    arg3.o = zx.o(arg4)
    void* rcx_7 = data_143e29f28
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(arg_10))
    arg3.o = _mm_cvtepi32_ps(arg3.o)
    int32_t arg_18 = zmm0_1.d
    int32_t arg_1c = arg3.d
    sub_140e88cf0(rcx_7, 0, &arg_18)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp3_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
