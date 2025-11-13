// 函数: sub_1419bdff0
// 地址: 0x1419bdff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[4]
int64_t* r9 = arg1
int64_t rsi = sx.q(arg1[5].d)

if (rax != 0)
    r9 = rax

int64_t* rdi = arg1
int64_t r14_1 = rsi * 2
int64_t* rax_1 = r9
void* r8 = &r9[r14_1]
int32_t result

if (r9 != r8)
    while (*rax_1 != *arg2 || *(rax_1 + 0xc) != *(arg2 + 0xc) || rax_1[1].d != arg2[1].d
            || *(rax_1 + 0xe) != *(arg2 + 0xe))
        rax_1 = &rax_1[2]
        
        if (rax_1 == r8)
            goto label_1419be069
    
    result = ((rax_1 - r9) s>> 4).d

if (r9 == r8 || result == 0xffffffff)
label_1419be069:
    int32_t rax_3 = (rsi + 1).d
    rdi[5].d = rax_3
    
    if (rax_3 s> *(rdi + 0x2c))
        sub_1419d6f00(rdi, rsi.d)
    
    int64_t* rcx_4 = rdi[4]
    result = rsi.d
    
    if (rcx_4 != 0)
        rdi = rcx_4
    
    *(rdi + (r14_1 << 3)) = *arg2

return result
