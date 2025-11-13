// 函数: sub_1412603c0
// 地址: 0x1412603c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t i_3 = sx.q(arg2[1].d)
uint64_t rbx = 0
int32_t i_4 = i_3.d
int64_t* rbp = arg3
void* r8 = *arg2
int64_t* r10 = arg2
int64_t i_2 = i_3

if (arg1 != 0)
    int32_t* r9 = arg6
    int32_t rcx = 1
    int64_t* rsi_1 = arg5
    int32_t* r13_1 = nullptr
    int32_t r14_1 = -1
    *r9 = 1
    int32_t arg_28 = 0xffffffff
    int32_t arg_8 = 1
    
    if (i_3.d s> 0)
        int32_t j_4 = arg10
        int32_t* rdi_1 = r8 + 0x1c
        int64_t i
        
        do
            int32_t rax = *rdi_1
            uint64_t var_d8_1
            int64_t rax_2
            int64_t rcx_5
            
            if (rax != r14_1 || rax == 0xffffffff)
                void* rdx_1 = *(rdi_1 - 0x1c)
                arg_28 = rax
                
                if (*(rdx_1 + 0xe0) s< 0 || *(rdx_1 + 0xcc) != 1 || rcx s>= i_3.d
                        || rax != rdi_1[0xa])
                    int64_t rbp_3 = sx.q(rsi_1[1].d)
                    r13_1 = nullptr
                    uint128_t var_a8_2 = *(rdi_1 - 0x1c)
                    int32_t rax_14 = (rbp_3 + 1).d
                    uint128_t var_60_1 = *(rdi_1 - 0xc)
                    var_60_1:8.d = rbx.d
                    var_d8_1 = *(rdi_1 + 4)
                    rsi_1[1].d = rax_14
                    
                    if (rax_14 s> *(rsi_1 + 0xc))
                        sub_1410b38f0(rsi_1, rbp_3.d)
                    
                    rax_2 = *rsi_1
                    j_4 = arg10
                    rcx_5 = rbp_3 * 5
                    *(rax_2 + (rcx_5 << 3)) = var_a8_2
                    *(rax_2 + (rcx_5 << 3) + 0x10) = var_60_1
                    *(rax_2 + (rcx_5 << 3) + 0x20) = var_d8_1
                else
                    int32_t rax_3 = sub_14108e790(rbp, rdx_1)
                    int32_t var_b8_1 = rbx.d
                    int64_t rbp_2 = sx.q(rsi_1[1].d)
                    void* r13_3 = zx.q(rax_3 s% 0x46) * 0xe8 + *(*rbp + (sx.q(rax_3 s/ 0x46) << 3))
                    int32_t rax_6 = rdi_1[-3]
                    int32_t var_bc_1 = rdi_1[-2]
                    int32_t var_b4_1 = *rdi_1
                    int32_t var_b0 = var_b0 ^ ((rdi_1[1] ^ var_b0) & 0x3f)
                    int64_t var_c8_1 = *(rdi_1 - 0x14)
                    int32_t rax_12 = (rbp_2 + 1).d
                    rsi_1[1].d = rax_12
                    
                    if (rax_12 s> *(rsi_1 + 0xc))
                        sub_1410b38f0(rsi_1, rbp_2.d)
                    
                    int64_t rax_13 = *rsi_1
                    j_4 = arg10
                    int64_t rcx_16 = rbp_2 * 5
                    r13_1 = r13_3 + 0xcc
                    *(rax_13 + (rcx_16 << 3)) = r13_3.o
                    *(rax_13 + (rcx_16 << 3) + 0x10) = rax_6.o
                    *(rax_13 + (rcx_16 << 3) + 0x20) = var_b0.q
            else if (r13_1 == 0)
                int64_t rbp_1 = sx.q(rsi_1[1].d)
                uint128_t var_a8_1 = *(rdi_1 - 0x1c)
                int32_t rax_1 = (rbp_1 + 1).d
                uint128_t var_88_1 = *(rdi_1 - 0xc)
                var_88_1:8.d = rbx.d
                var_d8_1 = *(rdi_1 + 4)
                rsi_1[1].d = rax_1
                
                if (rax_1 s> *(rsi_1 + 0xc))
                    sub_1410b38f0(rsi_1, rbp_1.d)
                    j_4 = arg10
                
                rax_2 = *rsi_1
                rcx_5 = rbp_1 * 5
                *(rax_2 + (rcx_5 << 3)) = var_a8_1
                *(rax_2 + (rcx_5 << 3) + 0x10) = var_88_1
                *(rax_2 + (rcx_5 << 3) + 0x20) = var_d8_1
            else
                int32_t rcx_2 = *r13_1 + 1
                *r13_1 = rcx_2
                
                if (*r9 s>= rcx_2)
                    rcx_2 = *r9
                
                *r9 = rcx_2
            
            if (j_4 != 0)
                uint64_t j_3 = zx.q(j_4)
                uint64_t j
                
                do
                    int32_t* r14_2 = arg4 + (rbx << 2)
                    int32_t rax_16
                    
                    if (sub_1419a2670(arg9) != 0)
                        uint32_t rcx_20 = zx.d(sub_1422a1490())
                        int32_t temp7_1
                        int32_t temp8_1
                        temp7_1:temp8_1 = sx.q(rdi_1[-3])
                        rax_16 = divs.dp.d(temp7_1:temp8_1, rcx_20) << 0x10
                            | mods.dp.d(temp7_1:temp8_1, rcx_20)
                    else
                        rax_16 = rdi_1[-3]
                    
                    rbx = zx.q(rbx.d + 1)
                    *r14_2 = rax_16
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                rsi_1 = arg5
                j_4 = arg10
            
            rdi_1 = &rdi_1[0xa]
            r14_1 = arg_28
            rcx = arg_8 + 1
            r9 = arg6
            i_3 = zx.q(i_4)
            rbp = arg3
            arg_8 = rcx
            i = i_2
            i_2 -= 1
        while (i != 1)
        r10 = arg2
    
    *arg7 = r10[1].d
    *arg8 = rsi_1[1].d
    int64_t rcx_24 = *r10
    *r10 = *rsi_1
    *rsi_1 = rcx_24
    int64_t rdx_10 = r10[1]
    r10[1] = rsi_1[1]
    rsi_1[1] = rdx_10
    result = *(rsi_1 + 0xc)
    rsi_1[1].d = 0
    
    if (result s< 0 && result != 0)
        return sub_141105150(rsi_1, 0) __tailcall
else if (i_3.d s> 0)
    uint64_t j_5 = zx.q(arg10)
    void* r8_4 = r8 + 0x10
    int64_t i_1
    
    do
        if (j_5.d != 0)
            int32_t rdx_12 = *r8_4
            uint64_t j_2 = j_5
            uint64_t j_1
            
            do
                *(arg4 + (rbx << 2)) = rdx_12
                rbx = zx.q(rbx.d + 1)
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        r8_4 += 0x28
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
