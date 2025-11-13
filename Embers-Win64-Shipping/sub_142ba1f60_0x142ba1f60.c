// 函数: sub_142ba1f60
// 地址: 0x142ba1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t arg_10 = 0

if (arg2 u>= arg1[1].d)
    *arg4 = 0
    return 6

if (arg3 == 0x40 || arg3 + 1 s>= 0x54)
    arg3 = zx.d(*(arg1[2] + (zx.q(arg2) << 1))) & 0x3fff

int64_t rcx_1 = sx.q(arg3)
void** rbx = arg1[rcx_1 + 4]
void* r15 = (&data_143680ad0)[rcx_1]
void* rsi = (&data_14367f7a8)[sx.q(*(r15 + 4))]

if (rbx == 0)
    int64_t rbp_1 = *(*arg1 + 0x98)
    void** rax_6 = sub_142b99860(rbp_1, *(rsi + 8), &arg_10)
    r10 = arg_10
    rbx = rax_6
    
    if (r10 == 0)
        *rax_6 = r15
        rax_6[6] = arg1
        int64_t rax_7 = *(rsi + 0x10)
        
        if (rax_7 == 0)
            r10 = arg_10
            arg1[rcx_1 + 4] = rbx
        else
            int32_t rax_8 = rax_7(rbx, *arg1)
            arg_10 = rax_8
            r10 = rax_8
            
            if (rax_8 == 0)
                arg1[rcx_1 + 4] = rbx
            else
                int64_t rax_9 = *(rsi + 0x20)
                
                if (rax_9 != 0)
                    rax_9(rbx)
                
                sub_142b99980(rbp_1, rbx)
                r10 = arg_10
                rbx = nullptr

*arg4 = rbx
return zx.q(r10)
