// 函数: sub_142856680
// 地址: 0x142856680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rbp = *(arg1 + 0x568)
uint64_t arg_10 = 0

if (rbp == 0)
    rbp = *(*(arg1 + 0x598) + 0x108)

int32_t rax_2 = arg1[0xe]
uint64_t (* r15)(int32_t* arg1, int32_t arg2, int128_t arg3 @ zmm0, int512_t arg4 @ zmm1) =
    sub_142867fb0
int64_t (* r12)(void* arg1) = sub_142867f10

if (rax_2 == 0)
    r15 = sub_142878500

uint64_t (* r13)(int32_t* arg1, int64_t* arg2, int512_t arg3 @ zmm2) = sub_142868640

if (rax_2 == 0)
    r12 = sub_142878430

uint64_t (* r14)(int32_t* arg1, int32_t arg2) = sub_1428689f0

if (rax_2 == 0)
    r13 = sub_1428789b0

if (rax_2 == 0)
    r14 = sub_142879010

if (arg1[0x1a] != 0)
    arg1[0x178] = 1
    arg1[0x1a] = 0

while (true)
    int32_t rcx = arg1[0x15]
    bool cond:6_1
    int32_t var_58_1
    int32_t r8_2
    
    if (rcx == 0)
        int32_t arg_8
        int32_t* rdx_2 = &arg_8
        int32_t rax_5
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
            rax_5 = sub_142860600(arg1, rdx_2)
        else
            rax_5 = sub_142877970(arg1, rdx_2, &arg_10)
        
        if (rax_5 == 0)
            break
        
        if (rbp != 0)
            int64_t rdx_3 = 0x2001
            
            if (arg1[0xe] == 0)
                rdx_3 = 0x1001
            
            rbp(arg1, rdx_3, 1)
        
        if (r14(arg1, zx.q(arg_8)) == 0)
            break
        
        int64_t rdi_1 = *(*(arg1 + 0xa8) + 0x228)
        
        if (rdi_1 u> r12(arg1))
            arg1[0x19] = 1
            arg1[0x12] = 1
            sub_1428a5670(0x14, 0x160, 0x98, "ssl\statem\statem.c", 0x258)
            
            if (arg1[0x1f] == 1)
                break
            
            sub_1428732d0(arg1, 2, 0x2f)
            break
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0 || rdi_1 == 0)
            goto label_14285686a
        
        int64_t* rcx_9 = *(arg1 + 0x88)
        int64_t rdi_3 = *(arg1 + 0x90) - rcx_9[1]
        
        if (sub_1428a73a0(rcx_9, sx.q((rdi_1 + 4).d)) == 0 || rdi_1 + 4 u< rdi_3)
            var_58_1 = 0x262
            r8_2 = 7
            goto label_142856942
        
        *(arg1 + 0x90) = *(*(arg1 + 0x88) + 8) + rdi_3
    label_14285686a:
        arg1[0x15] = 1
    label_142856882:
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0 && sub_142860360(arg1, &arg_10) == 0)
            break
        
        uint64_t rcx_12 = arg_10
        arg1[0x178] = 0
        
        if (rcx_12 u> 0x7fffffffffffffff)
            var_58_1 = 0x276
            r8_2 = 0x44
            goto label_142856942
        
        uint64_t var_40_1 = rcx_12
        int64_t var_48 = *(arg1 + 0x90)
        int32_t rax_17 = r13(arg1, &var_48)
        *(arg1 + 0x98) = 0
        
        if (rax_17 == 0)
            if (arg1[0x19] != 0 && arg1[0x12] == 1)
                break
            
            var_58_1 = 0x280
        label_142856935:
            r8_2 = 0x100
            goto label_142856942
        
        if (rax_17 == 1)
            cond:6_1 = (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0
        else
            if (rax_17 != 2)
                arg1[0x15] = 0
                continue
            
            arg1[0x15] = 2
            arg1[0x16] = 3
            continue
    else
        if (rcx == 1)
            goto label_142856882
        
        if (rcx != 2)
            var_58_1 = 0x2ae
            r8_2 = 0x44
        label_142856942:
            arg1[0x12] = 1
            arg1[0x19] = 1
            sub_1428a5670(0x14, 0x160, r8_2, "ssl\statem\statem.c", var_58_1)
            
            if (arg1[0x1f] == 1)
                break
            
            sub_1428732d0(arg1, 2, 0x50)
            break
        
        int32_t rax_3 = r15(arg1, zx.q(arg1[0x16]))
        arg1[0x16] = rax_3
        
        if (rax_3 == 0)
            if (arg1[0x19] != 0 && arg1[0x12] == 1)
                break
            
            var_58_1 = 0x298
            goto label_142856935
        
        if (rax_3 == 1)
            cond:6_1 = (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0
        else
            if (rax_3 != 2)
                if (rax_3 s<= 2)
                    continue
                else
                    if (rax_3 s<= 5)
                        break
                    
                    continue
            
            arg1[0x15] = 0
            continue
    
    if (not(cond:6_1))
        sub_142870300(arg1)
    
    return 1

return 0
