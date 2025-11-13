// 函数: sub_1422ba6e0
// 地址: 0x1422ba6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg3)
    return 

int32_t rbp_1 = arg2
int64_t rdi_1 = arg4

do
    int64_t* r14_3 = (sx.q(rbp_1) << 5) + *(arg1 + 0x38)
    int64_t var_68
    int32_t var_60
    int64_t* var_58
    
    if (*(r14_3 + 0x1c) != 0)
        if (not(test_bit(zx.q(*(*(*(arg1 + 0x28) + zx.q(*(r14_3 + 0x16)) * 0x30) + 0x40)), 8))
                && (*(r14_3 + 0x1d) & 1) != 0)
            int64_t rcx_4 = sx.q(*(r14_3 + 0xc))
            int64_t rsi_2 = sx.q(arg7[1].d)
            int32_t var_44_1 = arg5
            int32_t var_40_1 = arg6
            int32_t var_3c_1 = (rcx_4 + rdi_1).d
            int32_t rax_9 = (rsi_2 + 1).d
            arg7[1].d = rax_9
            
            if (rax_9 s> *(arg7 + 0xc))
                sub_1405c4e40(arg7)
            
            int64_t rcx_7 = rsi_2 << 5
            var_68 = 0
            __builtin_memset(rcx_7 + *arg7, 0, 0x20)
            int128_t* rsi_4 = *arg7 + rcx_7
            *rsi_4 = rbp_1.o
            rsi_4[1].d = *(arg7[2] + 0xa0)
            *(rsi_4 + 0x18) = *(arg7[2] + 0xa0)
            int64_t* rcx_10 = *r14_3
            (*(*rcx_10 + 0x90))(rcx_10, arg7[2], 0, rdi_1 + rcx_4, 0, var_60, var_58)
            *(rsi_4 + 0x1c) = *(arg7[2] + 0xa0) - *(rsi_4 + 0x18)
            *(rsi_4 + 0x14) = arg7[2][0x14].d - rsi_4[1].d
    else
        int64_t rbx_1 = sx.q(*(r14_3 + 0xc))
        int32_t r12_1 = *(rbx_1 + rdi_1 + 8)
        
        if (r12_1 s<= data_143a2fda8 && zx.d(*(r14_3 + 0xa)) * r12_1 s<= data_143a2fdac)
            int64_t rbx_2 = *(rbx_1 + rdi_1)
            int32_t rsi_1 = 0
            
            if (r12_1 s> 0)
                do
                    var_58 = arg7
                    var_60 = arg6 + 1
                    var_68.d = rsi_1
                    sub_1422ba6e0(arg1, zx.q(rbp_1 + 1), zx.q(zx.d(r14_3[1].w) - 1), 
                        sx.q(zx.d(*(r14_3 + 0xa)) * rsi_1) + rbx_2, var_68, var_60, var_58)
                    rsi_1 += 1
                while (rsi_1 s< r12_1)
                
                rdi_1 = arg4
        
        rbp_1 = zx.d(r14_3[1].w) - 1
    rbp_1 += 1
while (rbp_1 s< arg3)
