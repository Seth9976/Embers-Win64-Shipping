// 函数: sub_140fd4df0
// 地址: 0x140fd4df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg4)

if (arg2 != 0)
    if (arg3 == 0)
        return 
    
    goto label_140fd4e25

if (arg3 != 0)
    return 

label_140fd4e25:
void* rdx = arg1 + (sx.q(rbx.d) << 3)

if (arg2 != 0)
    int64_t rax = zx.q(*(arg1 + 0x40dc))
    int32_t rcx = rbx.d
    
    if (rax.d s>= rbx.d)
        rcx = rax.d
    
    *(arg1 + 0x40dc) = rcx
    *(rdx + 0x2bd0) = arg2
else if (*(rdx + 0x2bd0) != 0)
    *(rdx + 0x2bd0) = 0
    int32_t rcx_1 = *(arg1 + 0x40dc)
    
    if (rcx_1 == rbx.d)
        do
            int32_t temp0_1 = rcx_1
            rcx_1 -= 1
            *(arg1 + 0x40dc) = rcx_1
            
            if (temp0_1 - 1 s< 0)
                break
        while (*(arg1 + (sx.q(rcx_1) << 3) + 0x2bd0) == 0)

int64_t* arg_10 = arg3
void* rdi_1 = arg1 + 0x170 + (rbx << 3)
int64_t* rcx_2 = *(rdi_1 + 0x420)

if (rcx_2 == arg3)
    return 

if (arg3 != 0)
    (*(*arg3 + 8))(arg3)
    rcx_2 = *(rdi_1 + 0x420)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

*(rdi_1 + 0x420) = arg_10
int64_t* rcx_4 = *(arg1 + 0x188)
(*(*rcx_4 + 0x1d8))(rcx_4, zx.q(rbx.d), 1, &arg_10)
