// 函数: sub_1409d9000
// 地址: 0x1409d9000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cedf20 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cedf20)
    
    if (data_143cedf20 == 0xffffffff)
        atexit(sub_142cba380)
        _Init_thread_footer(&data_143cedf20)

sub_1409d99e0(&data_143cedf10, arg4[1].d)
int32_t* r15 = *arg4
int64_t r12 = 0
uint64_t r13_1 = sx.q(arg4[1].d) << 2 u>> 2

if (r15 u> &r15[arg4[1]])
    r13_1 = 0

if (r13_1 != 0)
    do
        int64_t rbp_1 = sx.q(data_143cedf18)
        int64_t rdi_1 = sx.q(*r15)
        int32_t rax_4 = (rbp_1 + 1).d
        bool cond:0_1 = rax_4 s<= data_143cedf1c
        data_143cedf18 = rax_4
        
        if (not(cond:0_1))
            sub_1405c4ec0(&data_143cedf10)
        
        int32_t* rdx_4 = data_143cedf10 + rbp_1 * 0x28
        *rdx_4 = data_143a1c6c8
        __builtin_memset(&rdx_4[2], 0, 0x20)
        int32_t* r14_1 = data_143cedf10 + sx.q(data_143cedf18 - 1) * 0x28
        *r14_1 = rdi_1.d
        int64_t rdx_6 = rdi_1 * 5
        int64_t rcx_3 = *(*(arg1 + 0x28) + 0xe0)
        int32_t* r8 = *(rcx_3 + (rdx_6 << 3))
        int32_t* rdi_2 = r8
        void* rcx_4 = &r8[sx.q(*(rcx_3 + (rdx_6 << 3) + 8))]
        
        if (r8 != rcx_4)
            do
                if (*rdi_2 == arg2)
                    int32_t rdi_4 = ((rdi_2 - r8) s>> 2).d
                    
                    if (rdi_4 != 0xffffffff)
                        int64_t rbp_2 = sx.q(r14_1[4])
                        int32_t rax_13 = (rbp_2 + 1).d
                        r14_1[4] = rax_13
                        
                        if (rax_13 s> r14_1[5])
                            sub_1405a4d70(&r14_1[2])
                        
                        int64_t* r8_1 = *(r14_1 + 8) + (rbp_2 << 3)
                        *r8_1 = 0
                        *(r8_1 + 4) = data_143a1c6b0
                        **(r14_1 + 8) = rdi_4
                        *(*(r14_1 + 8) + 4) = arg3
                    
                    break
                
                rdi_2 = &rdi_2[1]
            while (rdi_2 != rcx_4)
        
        r15 = &r15[1]
        r12 += 1
    while (r12 != r13_1)

return sub_1409b2280(arg1, &data_143cedf10) __tailcall
