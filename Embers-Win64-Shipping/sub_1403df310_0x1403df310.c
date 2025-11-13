// 函数: sub_1403df310
// 地址: 0x1403df310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg3)
uint64_t rsi = zx.q(arg2)
memset(arg1, 0, 0x130)
int32_t rax_7
char r9

if (arg4 == 0)
    if ((rsi.d == 0x1f40 || rsi.d == 0x2ee0 || rsi.d == 0x3e80) && (r14.d == 0x1f40
            || r14.d == 0x2ee0 || r14.d == 0x3e80 || r14.d == 0x5dc0 || r14.d == 0xbb80))
        r9 = 0
        int32_t rcx_2
        rcx_2.b = rsi.d s> 0x3e80
        int32_t rax_10 = (rsi.d s>> 0xc) - rcx_2
        rcx_2.b = rsi.d s> 0x5dc0
        int32_t rcx_3
        rcx_3.b = r14.d s> 0x3e80
        int64_t rdx_6 = sx.q((r14.d s>> 0xc) - rcx_3)
        rcx_3.b = r14.d s> 0x5dc0
        rax_7 = sx.d(*((sx.q(rax_10) s>> rcx_2.b) * 5 + (rdx_6 s>> rcx_3.b) + 0x1436fc82a))
    label_1403df4a4:
        *(arg1 + 0x124) = rax_7
        uint64_t r8_6 = zx.q(rsi.d s/ 0x3e8)
        *(arg1 + 0x11c) = r8_6.d
        *(arg1 + 0x120) = r14.d s/ 0x3e8
        *(arg1 + 0x10c) = (r8_6 * 5).d * 2
        
        if (r14.d s> rsi.d)
            if (r14.d != (rsi * 2).d)
                *(arg1 + 0x108) = 2
                r9 = 1
            else
                *(arg1 + 0x108) = 1
            
            goto label_1403df65f
        
        if (r14.d s>= rsi.d)
            *(arg1 + 0x108) = 0
        label_1403df65f:
            int32_t i = rsi.d << r9
            int32_t r9_1 = sx.d(r14.w)
            int32_t r10_4 = ((r14.d s>> 0xf) + 1) s>> 1
            uint32_t rdx_14 = divs.dp.d(sx.q(rsi.d << (r9 + 0xe)), r14.d) << 2
            *(arg1 + 0x110) = rdx_14
            
            if (((zx.d(rdx_14.w) * r9_1) s>> 0x10) + (rdx_14 s>> 0x10) * r9_1 + r10_4 * rdx_14 s< i)
                int32_t r8_8 = r10_4 * rdx_14
                
                do
                    rdx_14 += 1
                    r8_8 += r10_4
                while ((rdx_14 s>> 0x10) * r9_1 + ((zx.d(rdx_14.w) * r9_1) s>> 0x10) + r8_8 s< i)
                
                *(arg1 + 0x110) = rdx_14
            
            return 0
        
        uint32_t rdx_12 = (r14 << 2).d
        *(arg1 + 0x108) = 3
        
        if (rdx_12 == (rsi * 3).d)
            *(arg1 + 0x118) = 3
            *(arg1 + 0x114) = 0x12
            *(arg1 + 0x128) = &data_1436fca28
            goto label_1403df65f
        
        uint32_t rcx_6 = (r14 * 3).d
        
        if (rcx_6 == (rsi * 2).d)
            *(arg1 + 0x118) = 2
            *(arg1 + 0x114) = 0x12
            *(arg1 + 0x128) = &data_1436fca68
            goto label_1403df65f
        
        if ((r14 * 2).d == rsi.d)
            *(arg1 + 0x118) = 1
            *(arg1 + 0x114) = 0x18
            *(arg1 + 0x128) = &data_1436fca90
            goto label_1403df65f
        
        if (rcx_6 == rsi.d)
            *(arg1 + 0x118) = 1
            *(arg1 + 0x114) = 0x24
            *(arg1 + 0x128) = &data_1436fcab0
            goto label_1403df65f
        
        if (rdx_12 == rsi.d)
            *(arg1 + 0x118) = 1
            *(arg1 + 0x114) = 0x24
            *(arg1 + 0x128) = &data_1436fcad8
            goto label_1403df65f
        
        if ((r14 * 3).d * 2 == rsi.d)
            *(arg1 + 0x118) = 1
            *(arg1 + 0x114) = 0x24
            *(arg1 + 0x128) = &data_1436fcb00
            goto label_1403df65f
else if ((rsi.d == 0x1f40 || rsi.d == 0x2ee0 || rsi.d == 0x3e80 || rsi.d == 0x5dc0
        || rsi.d == 0xbb80) && (r14.d == 0x1f40 || r14.d == 0x2ee0 || r14.d == 0x3e80))
    r9 = 0
    int32_t rcx
    rcx.b = rsi.d s> 0x3e80
    int32_t rax_3 = (rsi.d s>> 0xc) - rcx
    rcx.b = rsi.d s> 0x5dc0
    int32_t rcx_1
    rcx_1.b = r14.d s> 0x3e80
    int64_t rdx_2 = sx.q((r14.d s>> 0xc) - rcx_1)
    rcx_1.b = r14.d s> 0x5dc0
    rax_7 = sx.d(*((sx.q(rax_3) s>> rcx.b) * 3 + (rdx_2 s>> rcx_1.b) + 0x1436fc81c))
    goto label_1403df4a4
return 0xffffffff
