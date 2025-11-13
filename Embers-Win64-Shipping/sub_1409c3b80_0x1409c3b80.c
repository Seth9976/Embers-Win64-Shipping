// 函数: sub_1409c3b80
// 地址: 0x1409c3b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = *(arg1 + 0x28)
int64_t rcx = sx.q(arg2) * 5
int64_t rax_1 = r13[0x1c]
int64_t rbx = sx.q(*(rax_1 + (rcx << 3) + 8))
int64_t* rcx_1 = rax_1 + (rcx << 3)
uint64_t result = zx.q(arg3[1].d)
int64_t* arg_8 = rcx_1

if (rbx.d s> result.d)
    arg3[1].d = rbx.d
    
    if (rbx.d s> *(arg3 + 0xc))
        result = sub_1405a4cf0(arg3)
        rcx_1 = arg_8
else if (rbx.d s< result.d && rbx.d != result.d)
    arg3[1].d = rbx.d

if (rbx.d s> 0)
    int64_t rbp_1 = 0
    int32_t r15_1 = 1
    
    do
        void* rdx_1 = *rcx_1
        int64_t rsi_1 = rbp_1 << 2
        int64_t r8 = r13[7]
        rbp_1 += 1
        int64_t rdi_1 = *arg3
        int64_t rax_3 = 0
        
        if (r15_1 != rbx.d)
            rax_3 = rbp_1
        
        void arg_10
        result = sub_141cdf680(r13, &arg_10, *(r8 + sx.q(*(rdx_1 + rsi_1)) * 0x18), 
            *(r8 + sx.q(*(rdx_1 + (rax_3 << 2))) * 0x18))
        r15_1 += 1
        *(rsi_1 + rdi_1) = *result
        rcx_1 = arg_8
    while (rbp_1 s< rbx)

return result
