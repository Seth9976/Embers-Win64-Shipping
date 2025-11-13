// 函数: sub_141f55a20
// 地址: 0x141f55a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
char arg_10 = 0

if (arg2 == 0)
    return 0

sub_142397ac0(arg2, *(arg1 + 0x100), *(arg2 + 0x468))
int32_t i = 0

if (*(arg2 + 0x468) s> 0)
    int64_t rcx_1 = 0
    int64_t r9_1 = 0
    void* r8_1 = nullptr
    
    do
        if (rcx_1 s>= 0 && i s< *(arg1 + 0x110))
            *(r8_1 + *(arg2 + 0x460)) = *(*(arg1 + 0x108) + r9_1)
        
        i += 1
        rcx_1 += 1
        r8_1 += 0x90
        r9_1 += 0x10
    while (i s< *(arg2 + 0x468))

int32_t i_1 = 0

if (*(arg1 + 0x100) s<= 0)
    return 0

int64_t rbp = 0
int64_t arg_18 = 0

do
    void* rax_3 = *(arg1 + 0xf8)
    int64_t rbx_1 = sx.q(*(rax_3 + rbp + 0x20))
    int64_t* rsi_1 = rax_3 + rbp
    
    if (rbx_1.d s>= 0 && rbx_1.d s< *(arg2 + 0x468))
        void* rcx_2 = *(arg2 + 0x440)
        r14 = rbx_1 * 0x90
        void* r13_1 = r14 + *(arg2 + 0x460)
        
        if (rcx_2 != 0 && rbx_1.d s< sub_1423660e0(rcx_2) && rbx_1.d s< *(arg2 + 0x468))
            int64_t rax_6 = *(arg2 + 0x460)
            void* rbx_2 = r14 + rax_6
            
            if (*(r14 + rax_6 + 0x30) != 0)
                sub_141f58940(rbx_2)
                sub_1419a21e0(0)
            
            bool cond:1_1 = *(rbx_2 + 0x2c) == 0
            *(rbx_2 + 0x28) = 0
            
            if (not(cond:1_1))
                sub_1405a51b0(rbx_2 + 0x20, 0)
        
        if (*(r13_1 + 0x30) != 0 || rsi_1[3].d s<= 0)
            r14 = zx.q(arg_10)
        else
            if (r13_1 + 0x20 != rsi_1)
                int64_t rbp_1 = sx.q(rsi_1[1].d)
                r14 = *rsi_1
                int32_t r8_2 = *(r13_1 + 0x2c)
                *(r13_1 + 0x28) = rbp_1.d
                
                if (rbp_1.d != 0 || r8_2 != 0)
                    sub_14083a1f0(r13_1 + 0x20, rbp_1.d, r8_2)
                    memcpy(*(r13_1 + 0x20), r14, (rbp_1 << 5).d)
                else
                    *(r13_1 + 0x2c) = rbp_1.d
                
                rbp = arg_18
            
            void*** rax_7 = j_sub_140a82f30(0x40)
            
            if (rax_7 != 0)
                rax_7 = sub_1422877b0(rax_7)
            
            *(r13_1 + 0x30) = rax_7
            sub_1422a3d10(rax_7, rsi_1[2], rsi_1[3].d, 4, 1)
            sub_141997e80(*(r13_1 + 0x30))
            r14.b = 1
            arg_10 = 1
    
    rbp += 0x28
    i_1 += 1
    arg_18 = rbp
while (i_1 s< *(arg1 + 0x100))

return zx.q(r14.b)
