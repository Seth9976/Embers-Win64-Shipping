// 函数: sub_1422ac7c0
// 地址: 0x1422ac7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2[1].d)
int64_t rbp
rbp.b = 0
int64_t rbx = 0

if (arg3 == 2)
    rbp.b = 1
else if (arg3 == 3)
    int64_t rdx = 0
    
    while (rdx s< r13)
        int32_t rcx = *(*arg2 + (rdx << 2))
        rbp.b = rcx u> 0xffff
        rdx += 1
        
        if (rcx u> 0xffff)
            break

*(arg1 + 0x28) = 0
int32_t rdx_1 = 0
int32_t r12 = (zx.d(rbp.b) + 1) * r13.d * 2

if (*(arg1 + 0x2c) != r12)
    sub_14083acb0(arg1 + 0x20, r12)
    rdx_1 = *(arg1 + 0x28)

uint64_t result = zx.q(r12 + rdx_1)
*(arg1 + 0x28) = result.d

if (result.d s> *(arg1 + 0x2c))
    result = sub_1407c3da0(arg1 + 0x20, rdx_1)

*(arg1 + 0x38) = r13.d

if (rbp.b == 0)
    void* rdx_4 = *(arg1 + 0x20)
    
    if ((rdx_4.b & 1) != 0)
        rdx_4 = (rdx_4 s>> 1) + arg1 + 0x20
    
    if (r13.d s> 0)
        do
            result = *arg2
            *(rdx_4 + (rbx << 1)) = *(result + (rbx << 2))
            rbx += 1
        while (rbx s< r13)
    
    *(arg1 + 0x3c) = 0
else
    void* rcx_3 = *(arg1 + 0x20)
    
    if ((rcx_3.b & 1) != 0)
        rcx_3 = (rcx_3 s>> 1) + arg1 + 0x20
    
    result = memcpy(rcx_3, *arg2, *(arg1 + 0x28))
    *(arg1 + 0x3c) = 1

return result
