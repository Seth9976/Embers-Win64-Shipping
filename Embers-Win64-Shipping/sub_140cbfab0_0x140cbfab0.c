// 函数: sub_140cbfab0
// 地址: 0x140cbfab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int64_t* rsi_1 = arg2
uint64_t r14_1 = arg1
int64_t i_1 = sx.q(arg3)
int64_t i

do
    uint64_t rax = *rsi_1
    uint64_t* rdi_1 = *(r14_1 + 0x20)
    
    if (rax u< data_143e1d660 || rax u>= data_143e1d668)
        arg1.b = 0
    else
        arg1.b = 1
    
    if (rax != 0 && arg1.b == 0)
        int32_t rax_1 = *(rax + 0xc)
        uint32_t rdx = zx.d(rax_1.w)
        
        if (rax_1 s< 0)
            rax_1 += 0xffff
            rdx -= 0x10000
        
        int64_t rdx_1 = sx.q(rdx) * 3
        int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3))
        rax = zx.q(*(rcx_1 + (rdx_1 << 3) + 8))
        void* r8 = rcx_1 + (rdx_1 << 3)
        
        if (((rax.d u>> 0x1d).b & 1) != 0 && *(r14_1 + 0x28) != 0)
            *rsi_1 = 0
        else if (((rax.d u>> 0x1c).b & 1) != 0 && test_bit(rax.d, 0x1c))
            do
                bool z_1
                
                if (rax.d == *(r8 + 8))
                    *(r8 + 8) = rax.d & 0xefffffff
                    z_1 = true
                else
                    *(r8 + 8)
                    z_1 = false
                
                if (z_1)
                    int64_t rbx_1 = sx.q(rdi_1[1].d)
                    int32_t rax_6 = (rbx_1 + 1).d
                    rdi_1[1].d = rax_6
                    
                    if (rax_6 s> *(rdi_1 + 0xc))
                        sub_1405a4d70(rdi_1)
                    
                    *(*rdi_1 + (rbx_1 << 3)) = *rsi_1
                    break
                
                rax = zx.q(*(r8 + 8))
            while (test_bit(rax.d, 0x1c))
    
    rsi_1 = &rsi_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
