// 函数: sub_142a25690
// 地址: 0x142a25690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_20 = arg4
int32_t r13 = arg5
int64_t* rbp = arg2
uint32_t r12 = arg7
int64_t* var_58 = rbp
int32_t rdx = 8

if (arg1 != 0)
    rdx = 4

int32_t rdi = 1 | 1 << (rdx u% 0x20)
uint64_t r14 = zx.q(arg3)
uint32_t result = 0xffff

if (arg1 != 0)
    result = 0xff

uint32_t i = (arg4 | r13 | arg6 | r12) & result

if (i != 0)
    int64_t rcx = arg8
    char* r8 = arg9
    uint64_t r9 = zx.q(rdx)
    uint32_t rdx_3 = arg_20
    uint64_t arg_10 = r9
    
    do
        if ((rdi & i) != 0)
            uint64_t rax_1 = zx.q(r8[r9])
            int32_t (* rbx_3)[0x4] = zx.q(*r8) * 0x30 + rcx
            int32_t (* var_48)[0x4] = rbx_3
            int32_t (* rsi_3)[0x4] = rax_1 * 0x30 + rcx
            int32_t (* var_40_1)[0x4] = rsi_3
            void* var_50_1 = sx.q((r14 << 3).d) + rbp
            int32_t rax_4 = rdi & rdx_3
            
            if (rax_4 != 0)
                if (rax_4 != rdi)
                    int32_t (* r8_2)[0x4] = (&var_48)[zx.q(not.d(rdx_3)) & 1]
                    sub_142a17a50((&var_58)[zx.q(not.d(rdx_3)) & 1], zx.q(r14.d), r8_2, &r8_2[1], 
                        &r8_2[2])
                else
                    sub_142a17330(rbp, zx.q(r14.d), rbx_3, &rbx_3[1], &rbx_3[2])
            
            int32_t rax_11 = rdi & r13
            
            if (rax_11 != 0)
                if (rax_11 != rdi)
                    int32_t (* r8_4)[0x4] = (&var_48)[zx.q(not.d(r13)) & 1]
                    sub_142a18790((&var_58)[zx.q(not.d(r13)) & 1], zx.q(r14.d), r8_4, &r8_4[1], 
                        &r8_4[2])
                else
                    sub_142a183f0(rbp, zx.q(r14.d), rbx_3, &rbx_3[1], &rbx_3[2], rsi_3, &rsi_3[1], 
                        &rsi_3[2])
            
            int32_t rax_18 = rdi & arg6
            
            if (rax_18 != 0)
                if (rax_18 != rdi)
                    int64_t* r8_6 = (&var_48)[zx.q(not.d(arg6)) & 1]
                    sub_142a18080((&var_58)[zx.q(not.d(arg6)) & 1], zx.q(r14.d), r8_6, &r8_6[2], 
                        &r8_6[4])
                else
                    sub_142a17ce0(rbp, zx.q(r14.d), rbx_3, &rbx_3[1], &rbx_3[2], rsi_3, &rsi_3[1], 
                        &rsi_3[2])
            
            int32_t rax_25 = rdi & r12
            
            if (rax_25 != 0)
                if (rax_25 != rdi)
                    uint64_t rax_29 = zx.q(not.d(r12)) & 1
                    int64_t* r8_8 = (&var_48)[rax_29]
                    sub_142a18080((&var_58)[rax_29] + 4, zx.q(r14.d), r8_8, &r8_8[2], &r8_8[4])
                else
                    sub_142a17ce0(rbp + 4, zx.q(r14.d), rbx_3, &rbx_3[1], &rbx_3[2], rsi_3, 
                        &rsi_3[1], &rsi_3[2])
            
            rdx_3 = arg_20
            r8 = arg9
            r9 = arg_10
        
        arg6 u>>= 1
        rbp = &rbp[1]
        r8 = &r8[1]
        rdx_3 u>>= 1
        rcx = arg8
        r13 u>>= 1
        r12 u>>= 1
        result = i u>> 1
        var_58 = rbp
        arg9 = r8
        arg_20 = rdx_3
        i = not.d(rdi) u>> 1 & result
    while (i != 0)

return result
