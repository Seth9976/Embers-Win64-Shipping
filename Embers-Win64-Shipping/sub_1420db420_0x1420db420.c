// 函数: sub_1420db420
// 地址: 0x1420db420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
void** r15 = arg1
void* rcx = *arg1
int64_t* rdi = *(rcx + 0x210)
uint64_t r14_1 = sx.q(*(rcx + 0x218)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(rcx + 0x218))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            if ((rbx_1[0x11].b & 1) != 0)
                int64_t rdx_1 = 0x30
                
                if (sub_140d23dc0(rbx_1, 0x30) == 0)
                    int32_t rax_3 = *(rbx_1 + 0xc)
                    void* const rax_7
                    
                    if (rax_3 s>= data_143e1d9b4)
                        rax_7 = nullptr
                    else
                        uint32_t rdx_2 = zx.d(rax_3.w)
                        
                        if (rax_3 s< 0)
                            rax_3 += 0xffff
                            rdx_2 -= 0x10000
                        
                        rdx_1 = sx.q(rdx_2) * 3
                        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + (rdx_1 << 3)
                    
                    if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
                        sub_141ee03d0(rbx_1, rdx_1)
            
            *(rbx_1 + 0x8b) &= 0xcf
            rbx_1[0x10].d = 0xffffffff
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)
    
    rcx = *r15

*(rcx + 0x218) = 0

if (*(rcx + 0x21c) s<= 0xffffffff)
    sub_1405c5570(rcx + 0x210, 0)

void* rcx_7 = *r15 + 0x200
int32_t result = *(rcx_7 + 0xc)
*(rcx_7 + 8) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(rcx_7, 0) __tailcall

return result
