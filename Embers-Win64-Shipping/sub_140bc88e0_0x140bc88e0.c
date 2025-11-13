// 函数: sub_140bc88e0
// 地址: 0x140bc88e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a1) != 0)
    return 

uint64_t rax_1 = zx.q(*(arg1 + 0x18))
*(arg1 + 0x1a1) = 1
void* r13_1 = *(arg1 + 0xc8)
uint64_t rdx_1 = rax_1 * 5
uint64_t rax = *(r13_1 + 0x338)
int64_t r12_1 = sx.q(*(rax + (rdx_1 << 3) + 0x20))

if (r12_1.d s< 0)
    return 

uint64_t rcx_2 = *(r13_1 + 0x348) + (sx.q(*(rax + (rdx_1 << 3) + 0x24)) u>> 2 << 2)
uint64_t arg_10 = rcx_2

if (rcx_2 == 0 || r12_1.d s<= 0)
    return 

int64_t rsi
int64_t var_10_1 = rsi
int64_t r14_1 = 0

while (true)
    int64_t r15_1 = sx.q(*(rcx_2 + (r14_1 << 2)))
    rsi.b = 0
    rax = *(r13_1 + 0x338)
    int32_t rbx_1 = 1
    int64_t rcx_3 = r15_1 * 5
    int64_t* rdi_1 = rax + (rcx_3 << 3)
    
    if (*(rax + (rcx_3 << 3) + 0x1c) s> 1)
        while (true)
            rax = sub_140bc8740((sx.q(rdi_1[3].d + rbx_1) << 4) + *(arg1 + 0x148))
            
            if (rax == 0 || (*(rax + 8) & 0x280000) != 0x280000)
                rsi.b = 1
                break
            
            rbx_1 += 1
            
            if (rbx_1 s>= *(rdi_1 + 0x1c))
                break
            
            continue
    
    if (rsi.b != 0)
        uint64_t rcx_9 = zx.q(rdi_1[1].d)
        int64_t rax_3 = *rdi_1
        int64_t arg_18 = rax_3
        int64_t r8_1
        
        if (rcx_9.d == 0xffffffff)
            r8_1 = rax_3
        else
            r8_1 = *(*(r13_1 + 0x338) + rcx_9 * 0x28)
        
        void* rcx_11 = *(arg1 + 0xc8)
        int64_t var_5c_1 = r8_1
        int32_t var_68 = 0xffffffff
        int32_t var_64_1 = r15_1.d
        int32_t var_60_1 = r15_1.d
        int64_t var_54_1 = rax_3
        int64_t* var_48_1 = nullptr
        char arg_8
        rax = sub_140bc6d00(rcx_11, &var_68, &arg_8)
        
        if (rax != 0)
            *(rax + 0xc) += 1
            
            if (r12_1.d s> *(arg1 + 0xb4))
                sub_1405c5570(arg1 + 0xa8, r12_1.d)
            
            rsi = sx.q(*(arg1 + 0xb0))
            int32_t rax_4 = (rsi + 1).d
            *(arg1 + 0xb0) = rax_4
            
            if (rax_4 s> *(arg1 + 0xb4))
                sub_1405a4d70(arg1 + 0xa8)
            
            bool cond:2_1 = arg_8 == 0
            *(*(arg1 + 0xa8) + (rsi << 3)) = rax
            
            if (not(cond:2_1))
                sub_140bc88e0(rax)
                sub_140bd13b0(rax)
        
        if (var_48_1 != 0)
            sub_140745b20(var_48_1)
            j_sub_140a74f90(var_48_1)
    
    rcx_2 = arg_10
    r14_1 += 1
    
    if (r14_1 s>= r12_1)
        break
