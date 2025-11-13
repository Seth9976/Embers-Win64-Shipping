// 函数: sub_14091c530
// 地址: 0x14091c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg2

if (arg1[2].b == 0)
    int64_t rax_1 = sx.q(*(arg1 + 0xc))
    int32_t r9_1 = arg1[1].d
    int32_t r8_1 = (rax_1 + 1).d
    bool r10_1
    
    if (rax_1.d s>= r9_1)
        r10_1 = arg3
        arg2.b = 1
        arg1[2].b = 1
        r8_1 = rax_1.d
    else
        arg2.b = 0
        r10_1 = *(rax_1 + *arg1)
        *(arg1 + 0xc) = r8_1
    
    if (zx.d(r10_1) - 1 u<= 8)
        switch (r10_1)
            case true
                if (arg2.b != 0 || r8_1 + 4 s> r9_1)
                    arg1[2].b = 1
                    sub_140943db0(rsi, arg3.d)
                    return arg1
                
                int64_t rcx_6 = *arg1
                int64_t rdx_1 = sx.q(r8_1)
                uint32_t r8_13 = ((zx.d(*(rdx_1 + rcx_6 + 1)) | zx.d(*(rdx_1 + rcx_6)) << 8) << 8
                    | zx.d(*(rdx_1 + rcx_6 + 2))) << 8 | zx.d(*(rdx_1 + rcx_6 + 3))
                *(arg1 + 0xc) = r8_1 + 4
                sub_140943db0(rsi, r8_13)
            case true
                if (arg2.b != 0 || r8_1 + 8 s> r9_1)
                    arg1[2].b = 1
                    sub_140943fd0(rsi, arg3.q)
                    return arg1
                
                int64_t rcx_9 = *arg1
                int64_t rdx_4 = sx.q(r8_1)
                uint64_t r8_20 = ((zx.q(*(rdx_4 + rcx_9 + 1)) | zx.q(*(rdx_4 + rcx_9)) << 8) << 8
                    | zx.q(*(rdx_4 + rcx_9 + 2))) << 8 | zx.q(*(rdx_4 + rcx_9 + 3))
                uint64_t r8_28 = (((r8_20 << 8 | zx.q(*(rdx_4 + rcx_9 + 4))) << 8
                    | zx.q(*(rdx_4 + rcx_9 + 5))) << 8 | zx.q(*(rdx_4 + rcx_9 + 6))) << 8
                    | zx.q(*(rdx_4 + rcx_9 + 7))
                *(arg1 + 0xc) = r8_1 + 8
                sub_140943fd0(rsi, r8_28)
            case true
                if (arg2.b != 0 || r8_1 + 8 s> r9_1)
                    arg1[2].b = 1
                    sub_140943ed0(rsi, zx.o(arg3.q))
                    return arg1
                
                int64_t rcx_12 = *arg1
                int64_t rdx_7 = sx.q(r8_1)
                uint64_t r8_35 = ((zx.q(*(rdx_7 + rcx_12 + 1)) | zx.q(*(rdx_7 + rcx_12)) << 8) << 8
                    | zx.q(*(rdx_7 + rcx_12 + 2))) << 8 | zx.q(*(rdx_7 + rcx_12 + 3))
                uint64_t r8_43 = (((r8_35 << 8 | zx.q(*(rdx_7 + rcx_12 + 4))) << 8
                    | zx.q(*(rdx_7 + rcx_12 + 5))) << 8 | zx.q(*(rdx_7 + rcx_12 + 6))) << 8
                    | zx.q(*(rdx_7 + rcx_12 + 7))
                *(arg1 + 0xc) = r8_1 + 8
                arg3.q = r8_43
                sub_140943ed0(rsi, zx.o(arg3.q))
            case true
                int64_t var_18 = 0
                int64_t var_10_1 = 0
                sub_14091c220(arg1, &var_18)
                sub_140943d90(rsi, &var_18)
                int64_t rcx_20 = var_18
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
            case true
                if (arg2.b != 0 || r8_1 + 4 s> r9_1)
                    arg1[2].b = 1
                    sub_140943e80(rsi, arg3.d)
                    return arg1
                
                int64_t rcx_3 = *arg1
                int64_t rdx = sx.q(r8_1)
                uint32_t r8_7 = ((zx.d(*(rdx + rcx_3 + 1)) | zx.d(*(rdx + rcx_3)) << 8) << 8
                    | zx.d(*(rdx + rcx_3 + 2))) << 8 | zx.d(*(rdx + rcx_3 + 3))
                *(arg1 + 0xc) = r8_1 + 4
                arg3.d = r8_7
                sub_140943e80(rsi, arg3.d)
            case true
                int32_t r10_6
                
                if (arg2.b == 0)
                    r10_6 = r8_1 + 4
                
                int32_t rdi_5
                
                if (arg2.b != 0 || r10_6 s> r9_1)
                    rdi_5 = arg3.d
                    arg2.b = 1
                    arg1[2].b = 1
                    r10_6 = r8_1
                else
                    int64_t rcx_15 = *arg1
                    arg2 = sx.q(r8_1)
                    rdi_5 = ((zx.d(*(arg2 + rcx_15 + 1)) | zx.d(*(arg2 + rcx_15)) << 8) << 8
                        | zx.d(*(arg2 + rcx_15 + 2))) << 8 | zx.d(*(arg2 + rcx_15 + 3))
                    *(arg1 + 0xc) = r10_6
                    arg2.b = 0
                
                int32_t rax_38
                
                if (rdi_5 s< 0 || rdi_5 s> r9_1 - r10_6)
                    rax_38.b = 0
                else
                    rax_38.b = 1
                
                if (arg2.b != 0 || rax_38.b == 0)
                    arg1[2].b = 1
                    return arg1
                
                sub_140943e00(rsi, rdi_5, sx.q(r10_6) + *arg1)
                *(arg1 + 0xc) += rdi_5
            case true
                bool rdx_11
                
                if (arg2.b != 0 || r8_1 s>= r9_1)
                    rdx_11 = arg3
                    arg1[2].b = 1
                else
                    rdx_11 = *(sx.q(r8_1) + *arg1)
                    *(arg1 + 0xc) = r8_1 + 1
                
                sub_140944020(rsi, rdx_11 != 0)

return arg1
