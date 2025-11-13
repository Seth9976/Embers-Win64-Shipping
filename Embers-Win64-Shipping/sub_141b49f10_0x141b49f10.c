// 函数: sub_141b49f10
// 地址: 0x141b49f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14306c448
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

*arg1 = &data_14306c470
arg1[3].d = 0
arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 4
arg1[6] = 0
arg1[4] = &data_14306c370
arg1[7] = 0
arg1[8].d = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 4
arg1[0xb] = 0
arg1[9] = &data_14306c258
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 4
arg1[0x10] = 0
arg1[0xe] = &data_14306c300
void**** rax_2 = j_sub_140a82f30(8)
void**** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    void*** rax_3 = j_sub_140a82f30(0x50)
    void*** rdx = rax_3
    
    if (rax_3 == 0)
        rdx = nullptr
    else
        rax_3[2].d = 0xffffffff
        *(rax_3 + 0x14) = 4
        *rdx = &data_14306c918
        rdx[1] = &data_14306c938
        rdx[3] = &data_14306c978
        rdx[6] = 0
        rdx[7].d = 0
        *(rdx + 0x3c) = 2
        *(rdx + 0x44) = data_143dbb180
        *(rdx + 0x4c) = 2
    
    *rdi = rdx
    void* rcx = &rdx[1]
    
    if (rdx == 0)
        rcx = nullptr
    
    sub_141997e80(rcx)

arg1[0x11] = rdi
void*** rax_5 = j_sub_140a82f30(0x18)

if (rax_5 != 0)
    rax_5[1].d = 1
    *rax_5 = &data_14306d058
    *(rax_5 + 0xc) = 1
    rax_5[2] = rdi

arg1[0x12] = rax_5
arg1[0x13] = *arg3
void* rax_7 = arg3[1]
arg1[0x14] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg1[0x15].w = 0x101
arg1[0x16].b = 0

if (arg4[1].b != 0)
    *(arg1 + 0xac) = *arg4
    arg1[0x16].b = 1

uint64_t rsi = 0x64
__builtin_memset(&arg1[0x17], 0, 0x18)
int32_t rdi_1 = 0x64
int32_t rax_10

if (arg1[0x16].b == 0)
    void* rcx_3 = data_143ddb400
    
    if (rcx_3 != 0)
        int32_t arg_8 = 0
        
        if (sub_140af3c10(rcx_3, SlateRenderer", NumPreallocatedVertices", &arg_8, &data_143de5780)
                == 0)
            goto label_141b4a151
        
        rdi_1 = arg_8
        goto label_141b4a149
    
label_141b4a151:
    rax_10 = 0xf4240
    
    if (rdi_1 s< 0xf4240)
        rax_10 = rdi_1
else
    rdi_1 = *(arg1 + 0xac)
label_141b4a149:
    
    if (rdi_1 s>= 0x64)
        goto label_141b4a151
    
    rax_10 = 0x64

if (rax_10 s>= 0x64)
    rsi = zx.q(rax_10)

*(arg1 + 0x3c) = (rsi * 5).d << 3

if (sub_140a80f40() == 0)
    sub_141997e80(&arg1[4])
else
    arg1[4][5](&arg1[4])

*(arg1 + 0x64) = (rsi << 2).d

if (sub_140a80f40() == 0)
    sub_141997e80(&arg1[9])
else
    arg1[9][5](&arg1[9])

sub_141997e80(&arg1[0xe])
int64_t* rdi_2 = arg2[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp2_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_4 = arg3[1]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp3_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

if (arg4[1].b != 0)
    arg4[1].b = 0

return arg1
