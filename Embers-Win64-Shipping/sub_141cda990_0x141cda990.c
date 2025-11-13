// 函数: sub_141cda990
// 地址: 0x141cda990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t r14 = arg3
int64_t rbp = sx.q(arg2)
int32_t var_78 = rbp.d

if (arg5 != 0)
    arg5[1].d = 0
    
    if (*(arg5 + 0xc) != 0)
        sub_1405dadb0(arg5, 0)

int64_t rax_2 = arg1[0x1c]
int64_t rsi = sx.q(arg4[1].d)
int64_t rcx_2 = rbp * 5
int64_t* r11 = rax_2 + (rcx_2 << 3)
int32_t rax_3 = *(rax_2 + (rcx_2 << 3) + 8)
int64_t* var_80 = r11

if (rsi.d s> rax_3)
    r11[1].d = rsi.d
    
    if (rsi.d s> *(r11 + 0xc))
        sub_1405a4cf0(r11)
        r11 = var_80
else if (rsi.d s< rax_3 && rsi.d != rax_3)
    r11[1].d = rsi.d
    sub_1405dac90(r11)
    r11 = var_80

if (rsi.d s> 0)
    int64_t rbx_1 = *arg4
    int64_t r10_1 = 0
    int64_t rbp_1 = rsi
    int64_t var_68_1 = rbx_1
    int32_t r13_1 = 1
    
    do
        int64_t r8 = arg1[7]
        int64_t r9 = r10_1 << 2
        int64_t rax_4 = sx.q(*(r9 + rbx_1))
        int64_t rcx_5 = 0
        
        if (r13_1 != rsi.d)
            rcx_5 = r10_1 + 1
        
        int64_t rdi_1 = sx.q(*(r8 + rax_4 * 0x18))
        int32_t rbx_2 = *(r8 + sx.q(*(rbx_1 + (rcx_5 << 2))) * 0x18)
        *(r9 + *r11) = rax_4.d
        int64_t rax_5 = *arg1
        int64_t rcx_9 = rdi_1 << 5
        int32_t* r8_1 = *(rcx_9 + rax_5 + 0x10)
        void* r9_1 = &r8_1[sx.q(*(rcx_9 + rax_5 + 0x18))]
        
        if (r8_1 == r9_1)
        label_141cdab0c:
            int64_t var_58_1 = 0
            int64_t var_50_1 = 0
            int32_t rax_9 = data_143a1c6b4
            int32_t var_60 = rax_9
            int32_t var_5c_1 = rax_9
            int32_t rax_10 = sub_1409af2d0(&arg1[0xe], &var_60)
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            sub_141cda530(arg1, rax_10, rdi_1.d, rbx_2)
            
            if (arg5 != 0)
                int64_t rbx_3 = sx.q(arg5[1].d)
                int32_t rax_11 = (rbx_3 + 1).d
                arg5[1].d = rax_11
                
                if (rax_11 s> *(arg5 + 0xc))
                    sub_1405a4cf0(arg5)
                
                *(*arg5 + (rbx_3 << 2)) = rax_10
            
            r11 = var_80
            rsi = zx.q(rbp_1.d)
        else
            int64_t r10_3 = arg1[0xe]
            int64_t rdx_3
            
            while (true)
                rdx_3 = sx.q(*r8_1)
                int64_t rcx_10 = rdx_3 * 3
                int32_t rcx_11 = *(r10_3 + (rcx_10 << 3))
                int32_t rax_8 = *(r10_3 + (rcx_10 << 3) + 4)
                
                if (rcx_11 == rdi_1.d && rax_8 == rbx_2)
                    break
                
                if (rcx_11 == rbx_2 && rax_8 == rdi_1.d)
                    break
                
                r8_1 = &r8_1[1]
                
                if (r8_1 == r9_1)
                    goto label_141cdab0c
            
            if (rdx_3.d == data_143a1c6bc)
                goto label_141cdab0c
        
        r10_1 += 1
        r13_1 += 1
        rbx_1 = var_68_1
    while (r10_1 s< rbp_1)
    
    rbp = zx.q(var_78)
    r14 = arg3

r11[4].d = r14
int64_t* rbx_6 = (sx.q(r14) << 4) + arg1[0x23]
int64_t rdi_2 = sx.q(rbx_6[1].d)
int32_t rax_13 = (rdi_2 + 1).d
rbx_6[1].d = rax_13

if (rax_13 s> *(rbx_6 + 0xc))
    sub_1405a4cf0(rbx_6)

*(*rbx_6 + (rdi_2 << 2)) = rbp.d
sub_141cd95d0(arg1, rbp.d)
int64_t result = sub_14090bdf0(&arg1[0x56], rbp.d)
__security_check_cookie(rax_1 ^ &var_a8)
return result
