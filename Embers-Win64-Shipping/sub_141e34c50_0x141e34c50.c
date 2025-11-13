// 函数: sub_141e34c50
// 地址: 0x141e34c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *arg1
int64_t rbp = sx.q(arg1[1].d)
int32_t* rax = r8
int64_t rdi_1 = rbp << 6
void* rcx = &r8[rbp * 0x10]

if (r8 != rcx)
    do
        if (*arg2 == *rax)
            int32_t result = ((rax - r8) s>> 6).d
            
            if (result != 0xffffffff)
                return result
            
            break
        
        rax = &rax[0x10]
    while (rax != rcx)

int32_t rax_2 = (rbp + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405c4fe0(arg1)

int64_t rdx_2 = *arg1
*(rdi_1 + rdx_2) = *arg2
*(rdi_1 + rdx_2 + 8) = *(arg2 + 8)
*(rdi_1 + rdx_2 + 0x10) = arg2[4]
*(rdi_1 + rdx_2 + 0x14) = arg2[5]
*(rdi_1 + rdx_2 + 0x18) = arg2[6]
*(rdi_1 + rdx_2 + 0x1c) = arg2[7]
*(rdi_1 + rdx_2 + 0x20) = *(arg2 + 0x20)
*(rdi_1 + rdx_2 + 0x30) = 0
*(rdi_1 + rdx_2 + 0x30) = *(arg2 + 0x30)
*(arg2 + 0x30) = 0
*(rdi_1 + rdx_2 + 0x38) = arg2[0xe]
*(rdi_1 + rdx_2 + 0x3c) = arg2[0xf]
*(arg2 + 0x38) = 0
return rbp.d
