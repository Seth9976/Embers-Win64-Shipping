// 函数: sub_1420b0ba0
// 地址: 0x1420b0ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int128_t var_48 = data_142d57d10
int128_t zmm0 = data_142d57920
int128_t var_38 = data_142d3f800
int64_t r15 = *(rax + 0x10)
int64_t* rax_2 = (*(*(rax + 0x48) + 8))(rax + 0x48)
void*** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t* r14 = *rax_2
void* rax_3 = &rbx_2[0xa]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rbx_2[0xa]

*(arg2 + 0x30) = rax_3
int64_t* rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rbx_2
*(arg2 + 8) = &rbx_2[1]
rbx_2[1] = 0
*rbx_2 = &data_142d56628
rbx_2[2].d = var_48.d
__builtin_memset(rbx_2 + 0x14, 0xff, 0x20)
*(rbx_2 + 0x34) = zmm0:4.d
rbx_2[7].d = zmm0:8.d
*(rbx_2 + 0x3c) = zmm0:0xc.d
rbx_2[8] = r14
rbx_2[9] = r15

if ((*(*r14 + 8))(r14) == 0)
    int64_t* rcx_3 = rbx_2[8]
    
    if ((*(*rcx_3 + 0x18))(rcx_3) == 0)
        int64_t* rcx_4 = rbx_2[8]
        
        if ((*(*rcx_4 + 0x20))(rcx_4) == 0)
            int64_t* rcx_5 = rbx_2[8]
            (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rcx_6 = rbx_2[9]

if ((*(*rcx_6 + 8))(rcx_6) == 0)
    int64_t* rcx_7 = rbx_2[9]
    
    if ((*(*rcx_7 + 0x18))(rcx_7) == 0)
        int64_t* rcx_8 = rbx_2[9]
        
        if ((*(*rcx_8 + 0x20))(rcx_8) == 0)
            int64_t* rcx_9 = rbx_2[9]
            (*(*rcx_9 + 0x10))(rcx_9)

return j_sub_140a74f90(arg1[1]) __tailcall
