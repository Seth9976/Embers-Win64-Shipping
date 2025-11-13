// 函数: sub_1422ab420
// 地址: 0x1422ab420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[8].d s< 0x11b)
    int64_t* rcx = arg2[1]
    int64_t rax_2 = *rcx + 4
    
    if (rax_2 u> rcx[1])
        int64_t rax_3 = *arg2
        int32_t arg_8 = 1
        (*(rax_3 + 0x150))(arg2, &arg_8, 4)
    else
        *rcx = rax_2

int64_t* rcx_2 = arg2[1]
char* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, arg1, 1)
else
    *arg1 = *rdx_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 1

void*** rcx_4 = *(arg1 + 8)

if (rcx_4 == 0)
    char rbx_1 = *arg1
    void*** rax_8 = j_sub_140a82f30(0x48)
    rcx_4 = rax_8
    
    if (rbx_1 != 2)
        if (rcx_4 == 0)
            rcx_4 = nullptr
        else
            rax_8[1].d = 0xffffffff
            *(rax_8 + 0xc) = 4
            rcx_4[2] = 0
            rcx_4[3] = 0
            *rcx_4 = &data_143020c80
            rcx_4[5] = 0
            rcx_4[6] = 0
            rcx_4[4] = &data_142dd66a0
            rcx_4[7].b = arg3
            rcx_4[8].d = 0
    else if (rax_8 == 0)
        rcx_4 = nullptr
    else
        rax_8[1].d = 0xffffffff
        *(rax_8 + 0xc) = 4
        rcx_4[2] = 0
        rcx_4[3] = 0
        *rcx_4 = &data_143020d20
        rcx_4[5] = 0
        rcx_4[6] = 0
        rcx_4[4] = &data_142da8520
        rcx_4[7].b = arg3
        rcx_4[8].d = 0
    
    *(arg1 + 8) = rcx_4

jump(*(*rcx_4 + 0x40))
