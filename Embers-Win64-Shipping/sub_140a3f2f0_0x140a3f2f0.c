// 函数: sub_140a3f2f0
// 地址: 0x140a3f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int16_t* rsi_1 = arg2
int16_t i = *arg2

while (i != 0)
    uint64_t rax = zx.q(zx.d(i) - 0xd)
    
    if (rax.d u> 0x31)
    label_140a3f3d0:
        
        if (i != 0)
            int32_t rdx = arg1[1].d
            int32_t rax_3
            rax_3.b = rdx s<= 0
            int32_t rbp_1 = rdx - 1
            
            if (rdx s<= 0)
                rbp_1 = 0
            
            int32_t rax_5 = rax_3 + 1 + rdx
            arg1[1].d = rax_5
            
            if (rax_5 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int64_t rcx_8 = sx.q(rbp_1)
            *(*arg1 + (rcx_8 << 1)) = i
            *(*arg1 + (rcx_8 << 1) + 2) = 0
    else
        switch (&__dos_header.e_magic[zx.q(jump_table_140a3f43c[zx.q(lookup_table_140a3f458[sx.q(rax
                .d)])])])
            case 0x140a3f357
                sub_140a20ba0(arg1, u"&amp;", 5)
            case 0x140a3f371
                sub_140a20ba0(arg1, u"&quot;", 6)
            case 0x140a3f38b
                sub_140a20ba0(arg1, u"&apos;", 6)
            case 0x140a3f3a2
                sub_140a20ba0(arg1, u"&lt;", 4)
            case 0x140a3f3b9
                sub_140a20ba0(arg1, u"&gt;", 4)
            case 0x140a3f3d0
                goto label_140a3f3d0
    
    i = rsi_1[1]
    rsi_1 = &rsi_1[1]
