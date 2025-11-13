// 函数: sub_142263f40
// 地址: 0x142263f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg3:4.d
int64_t rbx = arg3
int64_t rax

if (arg2 == 0)
    rax = sub_140b5b8a0(rbx.d, arg2.d)
    arg3.b = r12 == 0

if (arg2 == 0 && (arg3.b & rax.b) != 0)
    bool cond:0_1 = *(arg1 + 0x35c) == 0
    *(arg1 + 0x358) = 0
    
    if (not(cond:0_1))
        return sub_1405a5130(arg1 + 0x350, 0) __tailcall
    
    return 

int32_t rbp_1 = *(arg1 + 0x358)
int32_t rbp_2 = rbp_1 - 1

if (rbp_1 - 1 s< 0)
    return 

int64_t* rsi_2 = sx.q(rbp_2) * 0x18
int64_t* r14_1 = rsi_2
int32_t temp1_1

do
    if (arg2 == 0 || *(rsi_2 + *(arg1 + 0x350)) == arg2)
        int32_t rcx_3
        rcx_3.b = r12 == 0
        
        if ((rcx_3.b & sub_140b5b8a0(rbx.d, 0)) != 0 || *(rsi_2 + *(arg1 + 0x350) + 8) == rbx)
            int32_t rdx_1 = *(arg1 + 0x358)
            int32_t rax_6 = rdx_1 - rbp_2 - 1
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                int64_t r9_2 = *(arg1 + 0x350)
                memcpy(r14_1 + r9_2, r9_2 + sx.q(rdx_1 - rax_6) * 0x18, rax_6 * 0x18)
                rdx_1 = *(arg1 + 0x358)
            
            *(arg1 + 0x358) = rdx_1 - 1
            sub_1405fde90(arg1 + 0x350)
    
    r14_1 -= 0x18
    rsi_2 -= 0x18
    temp1_1 = rbp_2
    rbp_2 -= 1
while (temp1_1 - 1 s>= 0)
