// 函数: sub_140ef7200
// 地址: 0x140ef7200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x60)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    int64_t r11_1 = *arg4
    *arg4 = 0
    int32_t r10_1 = arg4[1].d
    int32_t r9 = *(arg4 + 0xc)
    arg4[1] = 0
    int64_t r8 = *arg3
    int64_t rdx = arg3[1]
    arg3[1] = 0
    *arg3 = 0
    int64_t rcx = *arg2
    int64_t rax_1 = arg2[1]
    arg2[1] = 0
    *arg2 = 0
    rbx[1].b = 0
    *rbx = &data_142ee0f38
    rbx[2] = rcx
    rbx[3] = rax_1
    rbx[4] = r8
    rbx[5] = rdx
    rbx[6] = r11_1
    rbx[7].d = r10_1
    *(rbx + 0x3c) = r9
    rbx[8] = 0
    rbx[9] = 0
    rbx[0xa] = arg5
    rbx[0xb].d = 0x3f800000
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    sub_140596d80(&var_28)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx

*arg1 = rbx
arg1[1] = rax_3
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

sub_140596d80(arg4)
return arg1
