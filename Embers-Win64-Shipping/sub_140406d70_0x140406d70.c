// 函数: sub_140406d70
// 地址: 0x140406d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*arg1)
int64_t* r14 = *(arg1 + 0x20)
int32_t r9
r9.b = r10.d == 0
int32_t rax
rax.b = arg3 != 0
int64_t rcx = sx.q(r9)
float* rbp = arg2
int32_t i = 0
int64_t arg_8 = rcx

do
    int32_t rbx_1 = 0
    
    if (arg1[0xa] s>= 8)
        if (r10 == 0)
            rbx_1 = sub_1403f7340(r14, 1)
        else
            rbx_1.b = 0f > *rbp
            sub_1403fe100(r14, rbx_1, 1)
        
        arg1[0xa] -= 8
        rcx = arg_8
    
    if (rcx != 0)
        float zmm0
        
        zmm0 = rbx_1 == 0 ? 1f : -1f
        
        *rbp = zmm0
    
    i += 1
    rbp = arg3
while (i s< rax + 1)

if (arg4 != 0)
    *arg4 = *arg2

return 1
