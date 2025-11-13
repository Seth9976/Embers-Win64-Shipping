// 函数: sub_141e98b10
// 地址: 0x141e98b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xe0)
int64_t rax

if (rbx != 0)
    void* rax_1 = sub_14247bd50()
    void* r10_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(r10_1 + 0x38))
        goto label_141e98b6e
    
    if (*(*(r10_1 + 0x30) + (rax << 3)) != rax_1 + 0x30 || *(rbx + 0x58) != 2)
        goto label_141e98b6e
    
    return 

label_141e98b6e:

if (arg2 != 0 && sub_141eafa00().b != 0)
    rax = *(arg1 + 0x290)
    
    if (rax != 0)
        void* rdx = *(arg1 + 0x298)
        
        if (rdx != 0)
            int64_t r14_1 = sx.q(*(rax + 0x4c))
            rax = *(r14_1 + arg2)
            
            if (arg3 == 0)
                if (rax != 0)
                    sub_140a74f90(rax)
                    *(r14_1 + arg2) = 0
                    rdx = *(arg1 + 0x298)
                
                goto label_141e98be2
            
            if (rax == 0)
            label_141e98be2:
                int64_t rdi_1 = 0
                
                if (((*(rdx + 8) u>> 0x15).b & 1) != 0)
                    int32_t rcx_2 = *(rdx + 0x5c)
                    int64_t rax_5 =
                        sub_140a82f30(sx.q((*(rdx + 0x58) - 1 + rcx_2) & not.d(rcx_2 - 1)), 0)
                    void* rcx_4 = *(arg1 + 0x298)
                    rdi_1 = rax_5
                    int32_t r9 = *(rcx_4 + 0x5c)
                    memset(rax_5, 0, sx.q(*(rcx_4 + 0x58) - 1 + r9) & sx.q(not.d(r9 - 1)))
                    
                    for (int64_t* i = *(*(arg1 + 0x298) + 0x70); i != 0; i = i[0xb])
                        if (not(test_bit(zx.q(i[8].d), 9)))
                            (*(*i + 0xf0))(i, sx.q(*(i + 0x4c)) + rdi_1)
                        else
                            memset(sx.q(*(i + 0x4c)) + rdi_1, 0, sx.q(*(i + 0x3c) * i[7].d))
                
                *(r14_1 + arg2) = rdi_1

if (arg4 == 0)
    int64_t* rcx_12 = *(arg1 + 0x40)
    (*(*rcx_12 + 0x330))(rcx_12, arg2, zx.q(arg3), 0, 0)
