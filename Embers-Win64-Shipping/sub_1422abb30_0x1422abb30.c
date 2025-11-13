// 函数: sub_1422abb30
// 地址: 0x1422abb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg2[1]
char* rcx = *r9

if (&rcx[1] u> r9[1])
    (*(*arg2 + 0x150))(arg2, arg1, 1)
else
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 1

void*** rcx_2 = *(arg1 + 8)

if (rcx_2 == 0)
    char rbx_1 = *arg1
    void*** rax_4 = j_sub_140a82f30(0x48)
    rcx_2 = rax_4
    
    if (rbx_1 != 2)
        if (rcx_2 == 0)
            rcx_2 = nullptr
        else
            rax_4[1].d = 0xffffffff
            *(rax_4 + 0xc) = 4
            rcx_2[2] = 0
            rcx_2[3] = 0
            *rcx_2 = &data_143020c80
            rcx_2[5] = 0
            rcx_2[6] = 0
            rcx_2[4] = &data_142dd66a0
            rcx_2[7].b = arg3
            rcx_2[8].d = 0
    else if (rax_4 == 0)
        rcx_2 = nullptr
    else
        rax_4[1].d = 0xffffffff
        *(rax_4 + 0xc) = 4
        rcx_2[2] = 0
        rcx_2[3] = 0
        *rcx_2 = &data_143020d20
        rcx_2[5] = 0
        rcx_2[6] = 0
        rcx_2[4] = &data_142da8520
        rcx_2[7].b = arg3
        rcx_2[8].d = 0
    
    *(arg1 + 8) = rcx_2

jump(*(*rcx_2 + 0x48))
