// 函数: sub_142094f30
// 地址: 0x142094f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
int512_t zmm2
zmm1, zmm2 = sub_141f17fa0(arg1, arg2)
void* rax = arg1[0x9d]

if (rax != 0)
    *(arg2 + 8) += *(rax + 0x10)

int32_t i = 0
int64_t rcx_1 = *(arg2 + 8) + (sx.q(*(arg1 + 0x524)) << 3)
*(arg2 + 8) = rcx_1

if (arg1[0xa4].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        void* rcx_2 = *(rdi_1 + arg1[0xa3])
        
        if (rcx_2 != 0 && sub_14221b2f0(rcx_2) != 0)
            sub_142216b70(*(arg1[0xa3] + rdi_1), arg2, zmm2, zmm1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[0xa4].d)
    
    rcx_1 = *(arg2 + 8)

int64_t rcx_5 = rcx_1 + (sx.q(*(arg1 + 0x4a4)) << 6)
*(arg2 + 8) = rcx_5
int64_t rdx_1 = rcx_5 + (sx.q(*(arg1 + 0x4bc)) << 2)
*(arg2 + 8) = rdx_1
int64_t rcx_6 = rdx_1 + (sx.q(*(arg1 + 0x4dc)) << 2)
*(arg2 + 8) = rcx_6
int64_t result = (sx.q(*(arg1 + 0x504)) << 7) + rcx_6
*(arg2 + 8) = result
return result
