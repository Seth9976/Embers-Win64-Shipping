// 函数: sub_140cbf140
// 地址: 0x140cbf140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2

if (rcx == 0)
    return 

int64_t rdx = arg1[0xe]

if (rdx == 0 || *(rcx + 0x20) == rdx)
label_140cbf18e:
    int64_t i = *arg2
    int64_t* rsi_1 = arg1[3]
    int64_t i_1 = i
    int64_t* rcx_1 = *rsi_1
    int64_t rdx_1 = sx.q(rsi_1[1].d)
    void* rax = &rcx_1[rdx_1]
    
    if (rcx_1 == rax)
    label_140cbf1ce:
        int32_t rax_1 = (rdx_1 + 1).d
        rsi_1[1].d = rax_1
        
        if (rax_1 s> *(rsi_1 + 0xc))
            sub_1405a4d70(rsi_1)
        
        *((rdx_1 << 3) + *rsi_1) = i
    else
        while (*rcx_1 != i)
            rcx_1 = &rcx_1[1]
            
            if (rcx_1 == rax)
                goto label_140cbf1ce
    
    if (*(arg1 + 0x82) == 1)
        int32_t arg_10
        sub_1408296b0(&arg1[4], &arg_10, i)
        rax = sx.q(arg_10)
        
        if (rax.d != 0xffffffff)
            arg1[4]
        
        if (rax.d == 0xffffffff || rax << 4 == neg.q(arg1[4]))
            sub_140812a70(&arg1[4], &arg_10, &i_1, nullptr)
            (*(*arg1 + 0x48))(arg1, i, arg3, arg4)
else if (arg1[0x10].b == 0 && sub_140d23d40(rcx, rdx).b != 0)
    goto label_140cbf18e
