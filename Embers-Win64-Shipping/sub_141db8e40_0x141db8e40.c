// 函数: sub_141db8e40
// 地址: 0x141db8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_142459c10()
void* rcx = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rcx + 0x38) || *(*(rcx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void* rcx_1 = *arg1
void* arg_18 = arg2

if (*(arg2 + 0xa0) != rcx_1)
    return 

void arg_10
sub_140946410(rcx_1 + 0x1a0, &arg_10, &arg_18, nullptr)

if ((*(arg2 + 0x88) & 0x10) == 0)
    return 

int64_t* rdi_3 = *arg1 + 0x190
int64_t* r8_3 = *rdi_3
int64_t rdx_2 = sx.q(rdi_3[1].d)
int64_t* rax_2 = r8_3
void* rcx_3 = &r8_3[rdx_2]

if (r8_3 != rcx_3)
    while (*rax_2 != arg2)
        rax_2 = &rax_2[1]
        
        if (rax_2 == rcx_3)
            goto label_141db8efc

if (r8_3 != rcx_3 && ((rax_2 - r8_3) s>> 3).d != 0xffffffff)
    return 

label_141db8efc:
int32_t rax_4 = (rdx_2 + 1).d
rdi_3[1].d = rax_4

if (rax_4 s> *(rdi_3 + 0xc))
    sub_1405a4d70(rdi_3)

*(*rdi_3 + (rdx_2 << 3)) = arg2
