// 函数: sub_141e4ed70
// 地址: 0x141e4ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_1425a2090()
void* r8 = arg2[2]
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s<= *(r8 + 0x38) && *(*(r8 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    int64_t* rdx_1 = *arg3
    int64_t r8_1 = sx.q(arg3[1].d)
    int64_t* rax_4 = rdx_1
    void* rcx = &rdx_1[r8_1]
    
    if (rdx_1 != rcx)
        while (*rax_4 != arg2)
            rax_4 = &rax_4[1]
            
            if (rax_4 == rcx)
                goto label_141e4edec
    
    if (rdx_1 == rcx || ((rax_4 - rdx_1) s>> 3).d == 0xffffffff)
    label_141e4edec:
        int32_t rax_7 = (r8_1 + 1).d
        arg3[1].d = rax_7
        
        if (rax_7 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        *(*arg3 + (r8_1 << 3)) = arg2

int32_t rax = (*(*arg2 + 0x2a8))(arg2)
int32_t rsi_1 = 0

if (arg2[6].d s<= 0)
    return 

int64_t i = 0

while (i s< sx.q(rax))
    sub_141e4ed70(arg1, *(arg2[5] + (i << 3)), arg3)
    rsi_1 += 1
    i += 1
    
    if (rsi_1 s>= arg2[6].d)
        break
