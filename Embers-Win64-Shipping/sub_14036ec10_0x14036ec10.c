// 函数: sub_14036ec10
// 地址: 0x14036ec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = -6

if (arg7 != 0 && arg8 == 0x58 && *arg7 == 0x31)
    rsi = -2
    
    if (arg1 != 0)
        *(arg1 + 0x20) = 0
        int64_t (* rax_1)(int64_t arg1, int32_t arg2, int32_t arg3) = *(arg1 + 0x30)
        
        if (rax_1 == 0)
            rax_1 = sub_140374330
            *(arg1 + 0x30) = sub_140374330
            *(arg1 + 0x40) = 0
            
            if (*(arg1 + 0x38) == 0)
                *(arg1 + 0x38) = sub_140374340
        else if (*(arg1 + 0x38) == 0)
            *(arg1 + 0x38) = sub_140374340
        
        int32_t r13_1 = 6
        
        if (arg2 != 0xffffffff)
            r13_1 = arg2
        
        int32_t r9
        int32_t r12_2
        
        if (arg4 s< 0)
            r9 = neg.d(arg4)
            r12_2 = 0
            
            if (arg6 u<= 4)
            label_14036ecbc:
                
                if (r13_1 u<= 9 && arg3 == 8 && arg5 - 1 u<= 8 && (r9 & 0xfffffff8) == 8)
                    int32_t rbp_1 = 9
                    
                    if (r9 != 8)
                        rbp_1 = r9
                    
                    void** rax_2 = rax_1(*(arg1 + 0x40), 1, 0x1720)
                    rsi = -4
                    
                    if (rax_2 != 0)
                        *(arg1 + 0x28) = rax_2
                        *rax_2 = arg1
                        *(rax_2 + 0x2c) = r12_2
                        int32_t rdx = 1 << rbp_1.b
                        rax_2[6] = 0
                        rax_2[9].d = rbp_1
                        *(rax_2 + 0x44) = rdx
                        *(rax_2 + 0x4c) = rdx - 1
                        rax_2[0xf].d = arg5 + 7
                        int32_t rax_4 = 1 << (arg5 + 7).b
                        *(rax_2 + 0x74) = rax_4
                        *(rax_2 + 0x7c) = rax_4 - 1
                        rax_2[0x10].d = zx.d((arg5.b + 9) u/ 3)
                        rax_2[0xa] = (*(arg1 + 0x30))(*(arg1 + 0x40), rdx, 2)
                        rax_2[0xc] = (*(arg1 + 0x30))(*(arg1 + 0x40), zx.q(*(rax_2 + 0x44)), 2)
                        int32_t r14_1
                        r14_1.b = arg5.b + 6
                        int32_t r15_1 = 1 << r14_1.b
                        rax_2[0xd] = (*(arg1 + 0x30))(*(arg1 + 0x40), zx.q(*(rax_2 + 0x74)), 2)
                        rax_2[0x2e3].d = 0
                        rax_2[0x2de].d = r15_1
                        int64_t rax_13 = (*(arg1 + 0x30))(*(arg1 + 0x40), zx.q(r15_1), 4)
                        rax_2[2] = rax_13
                        uint64_t rcx_12 = zx.q(rax_2[0x2de].d)
                        rax_2[3].d = (rcx_12 << 2).d
                        
                        if (rax_2[0xa] == 0 || rax_2[0xc] == 0 || rax_13 == 0 || rax_2[0xd] == 0)
                            rax_2[1].d = 0x29a
                            *(arg1 + 0x20) = "insufficient memory"
                            sub_14036ef90(arg1)
                        else
                            rax_2[0x2df] = (zx.q(rcx_12.d) & 0xfffffffe) + rax_13
                            rax_2[0x2dd] = rcx_12 * 3 + rax_13
                            *(rax_2 + 0xac) = r13_1
                            rax_2[0x16].d = arg6
                            *(rax_2 + 0x3c) = 8
                            int32_t rax_15 = sub_14036f6a0(arg1)
                            rsi = rax_15
                            
                            if (rax_15 == 0)
                                void* rdi_2 = *(arg1 + 0x28)
                                *(rdi_2 + 0x58) = *(rdi_2 + 0x44) * 2
                                *(*(rdi_2 + 0x68) + (zx.q(*(rdi_2 + 0x74) - 1) << 1)) = 0
                                rsi = 0
                                memset(*(rdi_2 + 0x68), 0, zx.q(*(rdi_2 + 0x74) - 1) * 2)
                                int64_t rax_20 = sx.q(*(rdi_2 + 0xac)) << 4
                                *(rdi_2 + 0xa8) = zx.d(*(rax_20 + 0x1435f8b02))
                                *(rdi_2 + 0xb4) = zx.d(*(rax_20 + &data_1435f8b00))
                                *(rdi_2 + 0xb8) = zx.d(*(rax_20 + 0x1435f8b04))
                                *(rdi_2 + 0xa4) = zx.d(*(rax_20 + 0x1435f8b06))
                                *(rdi_2 + 0x84) = 0x200000000
                                *(rdi_2 + 0x9c) = 0x200000000
                                *(rdi_2 + 0x170c) = 0
                                *(rdi_2 + 0x90) = 0
                                *(rdi_2 + 0x70) = 0
        else
            int32_t rcx = arg4 - 0x10
            int32_t r12_1
            r12_1.b = arg4 s> 0xf
            
            if (arg4 s<= 0xf)
                rcx = arg4
            
            r12_2 = r12_1 + 1
            r9 = rcx
            
            if (arg6 u<= 4)
                goto label_14036ecbc

return zx.q(rsi)
