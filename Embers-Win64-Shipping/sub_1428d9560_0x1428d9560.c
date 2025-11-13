// 函数: sub_1428d9560
// 地址: 0x1428d9560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r14 = arg5
int32_t rbx = arg3
bool cond:3 = arg3 s>= r14
int64_t* rsi = arg2
int64_t* r15 = arg4

if (arg3 s>= r14)
    rbx = r14

if (arg3 s>= r14)
    r15 = arg2

if (arg3 s>= r14)
    r14 = arg3

if (cond:3)
    rsi = arg4

int64_t* rdi_1 = &arg1[sx.q(r14)]

if (rbx s<= 0)
    return sub_14291f9e0(arg1, r15, r14, 0)

int64_t result = sub_14291f9e0(arg1, r15, r14, *rsi)
int32_t i = rbx - 1
*rdi_1 = result

if (i s> 0)
    void* rdi_2 = &rdi_1[2]
    void* rsi_1 = &rsi[2]
    void* rbp_1 = &arg1[2]
    
    do
        result = sub_14291d050(rbp_1 - 8, r15, r14, *(rsi_1 - 8))
        *(rdi_2 - 8) = result
        
        if (i - 1 s<= 0)
            break
        
        result = sub_14291d050(rbp_1, r15, r14, *rsi_1)
        *rdi_2 = result
        
        if (i - 2 s<= 0)
            break
        
        result = sub_14291d050(rbp_1 + 8, r15, r14, *(rsi_1 + 8))
        *(rdi_2 + 8) = result
        
        if (i - 3 s<= 0)
            break
        
        result = sub_14291d050(rbp_1 + 0x10, r15, r14, *(rsi_1 + 0x10))
        *(rdi_2 + 0x10) = result
        rsi_1 += 0x20
        rdi_2 += 0x20
        rbp_1 += 0x20
        i -= 4
    while (i s> 0)

return result
