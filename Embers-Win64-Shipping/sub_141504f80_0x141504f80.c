// 函数: sub_141504f80
// 地址: 0x141504f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r14 = *(arg1 + 0x10)

if (*r14 == 0)
    memset(&r14[0xc], 0xff, 0x4000)
    *r14 = 1
    r14 = *(arg1 + 0x10)

int32_t r12 = *(arg1 + 0x1c)
int32_t r8 = 0
int32_t rcx_1 = *(arg1 + 0x20)
int32_t rdx = -1
int64_t r13 = *(arg1 + 8)
int32_t rbp = 0
uint64_t i_2 = zx.q(*(arg1 + 0x18))
int32_t arg_8 = rcx_1

if (r12 == 0)
    return 

do
    int32_t* rdi_2 = (zx.q(rbp * rcx_1) << 2) + r13
    
    if (i_2.d != 0)
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int32_t rbx_1 = *rdi_2
            
            if (rbx_1 != rdx)
                if (rdx != 0xffffffff)
                    sub_1414fd540(r14, rdx, r8)
                
                rdx = rbx_1
                r8 = 1
            else
                r8 += 1
            
            rdi_2 = &rdi_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_1 = arg_8
    
    rbp += 1
while (rbp u< r12)

if (rdx != 0xffffffff)
    sub_1414fd540(r14, rdx, r8)
