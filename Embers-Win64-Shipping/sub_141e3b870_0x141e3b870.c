// 函数: sub_141e3b870
// 地址: 0x141e3b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg2 + 0x1b0))
int64_t* rsi = nullptr
int32_t r8 = 0
int64_t r12 = 0
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_40 = 0
int32_t var_50 = 0
int64_t var_48 = 0
int32_t var_3c = 0

if (rbx.d != 0)
    sub_1405dadb0(&var_48, rbx.d)
    r8 = var_3c
    rdx = var_40
    r12 = var_48

int32_t rax = rbx.d + rdx
int32_t var_40_1 = rax

if (rax s> r8)
    sub_1405a4cf0(&var_48)
    r12 = var_48

int64_t arg_10 = rbx
int64_t arg_8

if (rbx.d s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rbx_1 = *(rsi + *(arg2 + 0x1a8))
        int32_t r14_1 = -1
        int32_t rcx_2
        rcx_2.b = sub_140b5b8a0(rbx_1.d, 0) == 0
        uint32_t rax_4
        rax_4.b = (rbx_1 u>> 0x20).d != 0
        rcx_2.b |= rax_4.b
        
        if (rcx_2.b != 0)
            void* const rcx_6
            
            if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
            labelid_37:
                rcx_6 = nullptr
            else
                arg_8 = rbx_1
                int32_t rax_7 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
                void* r8_1 = arg1 + 0x120
                void* rcx_4 = *(r8_1 + 8)
                
                if (rcx_4 != 0)
                    r8_1 = rcx_4
                
                int32_t rax_9 = *(r8_1 + (((sx.q(*(arg1 + 0x130)) - 1) & sx.q(rax_7)) << 2))
                
                if (rax_9 == 0xffffffff)
                label_141e3b9b2:
                    rcx_6 = nullptr
                else
                    int64_t r8_2 = *(arg1 + 0xe8)
                    
                    while (true)
                        int64_t rdx_5 = sx.q(rax_9) * 5
                        rcx_6 = r8_2 + (rdx_5 << 2)
                        
                        if (*(r8_2 + (rdx_5 << 2)) == rbx_1)
                            break
                        
                        rax_9 = *(rcx_6 + 0xc)
                        
                        if (rax_9 == 0xffffffff)
                            goto label_141e3b9b2_1
                    
                    if (rax_9 == 0xffffffff)
                    label_141e3b9b2_1:
                        rcx_6 = nullptr
            
            void* rax_10 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rax_10 = nullptr
            
            if (rax_10 != 0)
                r14_1 = *rax_10
        
        *(r12 + (rdi_1 << 2)) = r14_1
        rsi += 0xc
        rdi_1 += 1
    while (rdi_1 s< arg_10)
    
    rsi = nullptr

int64_t rbx_2 = sx.q(*(arg1 + 0x80))
int32_t rdx_6 = 0
var_50 = 0

if (0 != rbx_2.d)
    sub_1405dadb0(&var_58, rbx_2.d)
    rdx_6 = var_50

int32_t rax_11 = rbx_2.d + rdx_6
var_50 = rax_11

if (rax_11 s> 0)
    sub_1405a4cf0(&var_58)

if (rbx_2.d s> 0)
    int64_t rdi_2 = 0
    
    do
        int64_t rbx_3 = *(rsi + *(arg1 + 0x78))
        int32_t r14_2 = -1
        int32_t rcx_9
        rcx_9.b = sub_140b5b8a0(rbx_3.d, 0) == 0
        uint32_t rax_15
        rax_15.b = (rbx_3 u>> 0x20).d != 0
        rcx_9.b |= rax_15.b
        
        if (rcx_9.b != 0)
            void* const rcx_13
            
            if (*(arg2 + 0x220) == *(arg2 + 0x24c))
            labelid_13:
                rcx_13 = nullptr
            else
                arg_8 = rbx_3
                int32_t rax_18 = sub_140b5ead0(rbx_3.d) + arg_8:4.d
                void* r8_3 = arg2 + 0x250
                void* rcx_11 = *(r8_3 + 8)
                
                if (rcx_11 != 0)
                    r8_3 = rcx_11
                
                int32_t rax_20 = *(r8_3 + (((sx.q(*(arg2 + 0x260)) - 1) & sx.q(rax_18)) << 2))
                
                if (rax_20 == 0xffffffff)
                label_141e3bad2:
                    rcx_13 = nullptr
                else
                    int64_t r8_4 = *(arg2 + 0x218)
                    
                    while (true)
                        int64_t rdx_11 = sx.q(rax_20) * 5
                        rcx_13 = r8_4 + (rdx_11 << 2)
                        
                        if (*(r8_4 + (rdx_11 << 2)) == rbx_3)
                            break
                        
                        rax_20 = *(rcx_13 + 0xc)
                        
                        if (rax_20 == 0xffffffff)
                            goto label_141e3bad2_1
                    
                    if (rax_20 == 0xffffffff)
                    label_141e3bad2_1:
                        rcx_13 = nullptr
            
            void* rax_21 = rcx_13 + 8
            
            if (rcx_13 == 0)
                rax_21 = nullptr
            
            if (rax_21 != 0)
                r14_2 = *rax_21
        
        rsi += 0xc
        *(var_58 + (rdi_2 << 2)) = r14_2
        rdi_2 += 1
    while (rdi_2 s< rbx_2)

int64_t rdi_3 = sx.q(*(arg1 + 0x300))
int32_t rax_23 = (rdi_3 + 1).d
*(arg1 + 0x300) = rax_23

if (rax_23 s> *(arg1 + 0x304))
    sub_1405c4e40(arg1 + 0x2f8)

sub_141e37c60((rdi_3 << 5) + *(arg1 + 0x2f8), &var_58)
arg_8.d = rdi_3.d
sub_140d3a3a0(&arg_10, arg2)
sub_141e353f0(arg1 + 0x308, &arg_10, &arg_8)
int64_t rcx_20 = var_48

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = var_58

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return zx.q(arg_8.d)
