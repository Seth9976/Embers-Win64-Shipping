// 函数: sub_1421cee20
// 地址: 0x1421cee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t* r10 = arg1
void* rcx = *(arg2 + 0x28)
void* rdx = *(rcx + 0x30)
uint32_t rbp = zx.d(*(rdx + 0xa9))

if (rbp == 0)
    return 

uint64_t r13_1 = zx.q(*(arg2 + 0x38))

if (r13_1.d == 0 || (rbp - 3 u<= 1 && *(rdx + 0xbc) == 0))
    return 

int64_t* rcx_1 = *(rcx + 0x48)

if (rcx_1 == 0)
    goto label_1421ceea9

if ((*(*rcx_1 + 0x370))(rcx_1).b == 0)
    return 

r10 = arg1
label_1421ceea9:
int32_t rax_2 = *(arg2 + 0x118)
int64_t r12_1 = *(arg2 + 0xf8)
int64_t r14_1 = *(arg2 + 0xf0)
int32_t r15_1 = *(arg2 + 0x114)
int64_t rdi_1 = sx.q(rax_2 - 1)

if (rax_2 - 1 s< 0)
    return 

int64_t temp1_1

do
    void* r9_3 = zx.q(zx.d(*(r12_1 + (rdi_1 << 1))) * r15_1) + r14_1
    
    if ((*(r9_3 + 0x5c) & 0x4000000) == 0 && not(1f f< *(r9_3 + 0xc)))
        void* rbx_1 = r9_3 + r13_1
        int32_t var_68_1 = arg4.d
        void* var_70_1 = rbx_1
        uint32_t var_78_1 = rbp
        (*(*r10 + 0x348))(r10, arg2)
        *rbx_1 = arg5
    
    temp1_1 = rdi_1
    rdi_1 -= 1
    r10 = arg1
while (temp1_1 - 1 s>= 0)
