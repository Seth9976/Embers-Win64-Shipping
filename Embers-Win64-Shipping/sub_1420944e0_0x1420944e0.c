// 函数: sub_1420944e0
// 地址: 0x1420944e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x250)

if (rcx == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x130)

if (rcx_1 == 0 || (rcx_1[5].b & 1) == 0)
    return 

*(arg2 + 0xb8) |= 8
(*(*rcx_1 + 0x270))(rcx_1, arg2 + 0x70, &data_143dbb0c0)
int32_t var_10_1 = 0
int64_t (* var_18)(int64_t* arg1) = sub_14207a5cc
void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_143084628
    sub_140d3a3a0(&rax_2[1], arg1 - 0x1f0)
    *(rax_2 + 0x10) = var_18.o
    rax_2[5] = sub_140a387b0()
    *rax_2 = &data_143084680

if (&var_18 != arg2 + 0x50)
    if (rax_2 != 0)
        (*rax_2)[8](rax_2, arg2 + 0x50)
    else if (*(arg2 + 0x58) != 0)
        int64_t (** rcx_4)(int64_t* arg1) = *(arg2 + 0x50)
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x38))(rcx_4, 0)
            int64_t (** rcx_5)(int64_t* arg1) = *(arg2 + 0x50)
            
            if (rcx_5 != 0)
                *(arg2 + 0x50) = sub_140a84c80(rcx_5, 0, 0)
            
            *(arg2 + 0x58) = 0

if (rax_2 == 0)
    return 

(*rax_2)[7](rax_2, 0)
int64_t (** rax)(int64_t* arg1) = sub_140a84c80(rax_2, 0, 0)

if (rax != 0)
    sub_140a74f90(rax)
