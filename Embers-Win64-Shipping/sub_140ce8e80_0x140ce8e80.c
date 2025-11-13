// 函数: sub_140ce8e80
// 地址: 0x140ce8e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
int64_t* rdi = *(*arg2 + 8)
int64_t arg_18 = *(arg1 + 0x20)
int64_t arg_10 = *(arg1 + 0x18)
void* arg_8 = rdx

if (((*(rdx + 8) u>> 0xa).b & 1) != 0)
    (*(*rdi + 0x170))(rdi)
    
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        void* rax_8 = arg_8
        int64_t rdx_1 = *(rax_8 + 0x118)
        
        if (rdx_1 != 0 && *(rax_8 + 0x58) s> 0)
            (*(*rdi + 0x170))(rdi, rdx_1)

if ((rdi[5].b & 3) == 0 && (*(rdi + 0x2a) & 0x20) == 0)
    int64_t* rcx_2 = *(*arg2 + 8)
    (*(*rcx_2 + 0x140))(rcx_2, &arg_10)
    char rax_12 = *(rdi + 0x2a)
    
    if ((rax_12 & 2) == 0)
        int64_t* rcx_3 = *(*arg2 + 8)
        (*(*rcx_3 + 0x130))(rcx_3, &arg_18)
        rax_12 = *(rdi + 0x2a)
    
    if ((rax_12 & 8) == 0)
        int64_t* rcx_4 = *(*arg2 + 8)
        (*(*rcx_4 + 0x130))(rcx_4, &arg_8)

int64_t rax_17
int512_t zmm1
rax_17, zmm1 = sub_140bdf2e0()

if (arg_8 != rax_17)
    sub_140ce9c80(arg1, arg2)

sub_140cc4100(arg1, arg2, zmm1)

if ((rdi[5].b & 1) != 0)
    data_1439aaa30 += 1

void* rax_18 = *(arg1 + 0x10)
int32_t r8 = *(rax_18 + 0x5c)
int64_t rdx_11 = sx.q(*(rax_18 + 0x58) - 1 + r8) & sx.q(neg.d(r8))
return (*(*rdi + 8))(rdi, rdx_11, rdx_11)
