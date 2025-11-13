// 函数: sub_141953810
// 地址: 0x141953810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[5].d == 0
*arg1 = &data_142ff8b10

if (not(cond:0))
    char rax_1 = sub_1419553a0()
    int32_t rdx = arg1[5].d
    
    if (rax_1 == 0)
        arg1[0xb].d
        sub_14195a9f0(arg1[0xa] != 0, rdx, arg3, arg4)
        arg1[5].d = 0
    else
        int32_t rcx_1 = arg1[0xb].d
        int32_t var_20_1 = *(arg1 + 0x2c)
        int64_t rax_3 = arg1[6]
        char rsi_1 = *(arg1 + 0x5c)
        int32_t rdi_1 = data_14399fa54
        int32_t var_1c_1 = rdi_1
        uint64_t rdx_2 = zx.q(rdi_1 u/ 3)
        int32_t var_24_1 = rcx_1
        uint64_t rbx_1 = zx.q(sub_1419552b0(rcx_1))
        int64_t rax_6 = EnterCriticalSection(&data_143f00520)
        int64_t rbx_2 = sx.q(*(((sx.q(rdi_1 - (rdx_2 * 3).d) * 0x2d + rbx_1) << 5)
            + (zx.q((sbb.q(rax_6, rax_6, rsi_1 != 0)).d) & 0x10) + &data_143f00b18))
        int32_t rax_9 = (rbx_2 + 1).d
        *(((sx.q(rdi_1 - (rdx_2 * 3).d) * 0x2d + rbx_1) << 5)
            + (zx.q((sbb.q(rax_6, rax_6, rsi_1 != 0)).d) & 0x10) + &data_143f00b18) = rax_9
        
        if (rax_9 s> *(((sx.q(rdi_1 - (rdx_2 * 3).d) * 0x2d + rbx_1) << 5)
                + (zx.q((sbb.q(rax_6, rax_6, rsi_1 != 0)).d) & 0x10) + &data_143f00b1c))
            sub_1405a4df0(((sx.q(rdi_1 - (rdx_2 * 3).d) * 0x2d + rbx_1) << 5)
                + (zx.q((sbb.q(rax_6, rax_6, rsi_1 != 0)).d) & 0x10) + &data_143f00b10)
        
        int64_t rax_10 = *(((sx.q(rdi_1 - (rdx_2 * 3).d) * 0x2d + rbx_1) << 5)
            + (zx.q((sbb.q(rax_6, rax_6, rsi_1 != 0)).d) & 0x10) + &data_143f00b10)
        int64_t rdx_4 = rbx_2 * 3
        *(rax_10 + (rdx_4 << 3)) = rdx.o
        *(rax_10 + (rdx_4 << 3) + 0x10) = rax_3
        LeaveCriticalSection(&data_143f00520)

int64_t* rcx_4 = arg1[0xa]

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        (**rcx_4)(rcx_4, 1)

sub_14081c910(&arg1[8])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
