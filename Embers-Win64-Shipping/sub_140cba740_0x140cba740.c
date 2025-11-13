// 函数: sub_140cba740
// 地址: 0x140cba740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t i = 0

if (arg1[1].d s> 0)
    do
        int64_t r10_1 = *arg1
        int64_t i_1 = sx.q(i)
        int32_t* r8 = r10_1 + (i_1 << 2)
        uint64_t rax = zx.q(*(r10_1 + (i_1 << 2)))
        uint64_t r9_2 = zx.q(rax.d u>> 8) & 0x1f
        
        if (r9_2.d u> 0x12)
            sub_140af98a0("Unknown", 0xad4, Unknown token type (%u) when trying to add ARO token.", 
                r9_2)
            sub_140afbb40()
        else
            switch (r9_2)
                case 2, 0x10
                    int32_t rcx_1 = rax.d & 0xffffe2ff
                    rax = (zx.q(rax.d) & 0xfffff0ff) | 0x1000
                    
                    if (arg4 != 0)
                        rax = zx.q(rcx_1) | 0x200
                    
                    *r8 = rax.d
                case 3, 0xf
                    int32_t rcx_4 = rax.d & 0xffffe3ff
                    rax = (zx.q(rax.d) & 0xffffefff) | 0xf00
                    
                    if (arg3 != 0)
                        rax = zx.q(rcx_4) | 0x300
                    
                    *r8 = rax.d
                case 5, 0x12
                    i = ((((i + 2) << 8) + *(r10_1 + (sx.q(i + 2) << 2))) u>> 8) - 1
                case 6, 7, 9, 0xa
                    i += 2
                case 8
                    if (arg2 != 0)
                        r8[1] = arg2.d
                        r8[2] = (arg2 u>> 0x20).d
                    
                    rbp.b = 1
                    i += 2
        
        i += 1
    while (i s< arg1[1].d)

if ((arg1[1].d s> 0 && rbp.b != 0) || arg2 == 0)
    return 

TEB* gsbase

if (data_143e1b3c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b3c8)
    
    if (data_143e1b3c8 == 0xffffffff)
        sub_140b58170(&data_143e1b3c0, "AROToken", 1)
        _Init_thread_footer(&data_143e1b3c8)

int64_t rbx_4 = sx.q(arg1[1].d)
int32_t rax_6 = (rbx_4 + 1).d
arg1[1].d = rax_6

if (rax_6 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rbx_4 << 2)) = 0x800
sub_140cb83d0(arg1, arg2)
