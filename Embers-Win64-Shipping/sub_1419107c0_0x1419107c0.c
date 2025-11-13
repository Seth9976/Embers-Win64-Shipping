// 函数: sub_1419107c0
// 地址: 0x1419107c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = data_143eff600

if (rsi == 0)
    return 

EnterCriticalSection(rsi + 0x15bd0)
int64_t* r10_1 = *(rsi + 0x15bc0)
uint64_t r9_1 = sx.q(*(rsi + 0x15bc8))
int64_t* rax = r10_1
void* rdx_1 = &r10_1[r9_1]

if (r10_1 != rdx_1)
    do
        if (*rax == arg1)
            rax = (rax - r10_1) s>> 3
            
            if (rax.d != 0xffffffff)
                int32_t rdx_4 = r9_1.d - rax.d - 1
                
                if (rdx_4 s>= 1)
                    rdx_4 = 1
                
                if (rdx_4 != 0)
                    memcpy(&r10_1[sx.q(rax.d)], &r10_1[sx.q(r9_1.d - rdx_4)], rdx_4 << 3)
                    r9_1 = zx.q(*(rsi + 0x15bc8))
                
                *(rsi + 0x15bc8) = (r9_1 - 1).d
                sub_1405c53d0(rsi + 0x15bc0)
            
            break
        
        rax = &rax[1]
    while (rax != rdx_1)

if (rsi != -0x15bd0)
    LeaveCriticalSection(rsi + 0x15bd0)
