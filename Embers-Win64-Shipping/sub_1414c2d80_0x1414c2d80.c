// 函数: sub_1414c2d80
// 地址: 0x1414c2d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg2 + 0x20)

if (*(rdx + 0x139) s>= 0)
    return 

int32_t r14_1 = *(*(arg1 + 8) + 8)
int64_t arg_10
int64_t rbp
int64_t* rdi_1

if ((*(arg1 + 0x38) & 0x10000000) == 0)
label_1414c2e0b:
    rbp.b = 0
    int64_t* rax_6 = sub_14210f630(2)
    rdi_1 = (*(*rax_6 + 0x280))(rax_6)
else
    int64_t* rcx = *(rdx + 0x128)
    
    if (rcx == 0)
        goto label_1414c2e0b
    
    int64_t rax_2 = *rcx
    arg_10 = 0
    int64_t* rax_3 = (*(rax_2 + 0x40))(rcx, zx.q(r14_1), &arg_10)
    int64_t rdx_2 = *rax_3
    
    if ((*(rdx_2 + 0x90))(rax_3, rdx_2) == 0)
        goto label_1414c2e0b
    
    rbp.b = 1
    rdi_1 = *(*(arg2 + 0x20) + 0x128)

int64_t r9 = *rdi_1
arg_10 = 0
int64_t* rax_8 = (*(r9 + 0x40))(rdi_1, zx.q(r14_1), &arg_10, r9)
int64_t rdx_4 = *rax_8

if ((*(rdx_4 + 0x90))(rax_8, rdx_4).b == 0)
    return 

int64_t* var_20_1 = rdi_1
int64_t rdi_2 = sx.q(arg4[1].d)
int64_t var_30_1 = arg3
int32_t rax_9 = (rdi_2 + 1).d
arg4[1].d = rax_9

if (rax_9 s> *(arg4 + 0xc))
    sub_140dbce90(arg4, rdi_2.d)

int64_t rax = *arg4
int64_t rcx_7 = rdi_2 << 5
*(rcx_7 + rax) = arg2.o
*(rcx_7 + rax + 0x10) = rbp.b.o
