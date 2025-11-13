// 函数: sub_140cda8e0
// 地址: 0x140cda8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t r12 = 0
int64_t* rsi_1

if (arg2 != 0)
    rsi_1 = arg2

if (arg2 == 0 || ((zx.q(*(arg2[1] + 0x10)) u>> 0x14).b & 1) == 0)
    rsi_1 = nullptr

int32_t rcx = arg8
uint8_t r13_1 = (rcx u>> 0x19).b & 1
uint8_t result = (rcx u>> 7).b & 1
uint8_t result_1 = result

if (rsi_1 != 0 && arg2[7].d == 1 && result == 0)
    void* rax_3 = rsi_1[0xf]
    int32_t rcx_1 = *(rax_3 + 0x5c)
    int64_t rax_4 = sub_140a82f30(sx.q((*(rax_3 + 0x58) - 1 + rcx_1) & neg.d(rcx_1)), 0)
    r12 = rax_4
    
    if (not(test_bit(zx.q(rsi_1[8].d), 9)))
        result = (*(*rsi_1 + 0xf0))(rsi_1, r12)
    else
        result = memset(rax_4, 0, sx.q(*(rsi_1 + 0x3c) * rsi_1[7].d))
    
    rcx = arg8

int32_t rbp = 0
int32_t r14 = 0

if (arg4 s> 0)
    do
        rbp += 1
        
        if (r13_1 != 0)
            if (rbp s> 1)
                int32_t rdx_6 = arg1[1].d
                int32_t rax_15
                rax_15.b = rdx_6 s<= 0
                int32_t rdi_2 = rdx_6 - 1
                
                if (rdx_6 s<= 0)
                    rdi_2 = 0
                
                int32_t rax_17 = rax_15 + 1 + rdx_6
                arg1[1].d = rax_17
                
                if (rax_17 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                int64_t rcx_15 = sx.q(rdi_2)
                *(*arg1 + (rcx_15 << 1)) = 0xa
                *(*arg1 + (rcx_15 << 1) + 2) = 0
            
            int64_t var_48
            sub_140a2e390(&var_48, u"[%i] ", zx.q(r14))
            int32_t var_40
            int32_t r8_3
            
            if (var_40 == 0)
                r8_3 = 0
            else
                r8_3 = var_40 - 1
            
            sub_140a20ba0(arg1, var_48, r8_3)
            int64_t rcx_18 = var_48
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
        else
            int32_t rdx_5 = arg1[1].d
            int32_t rdi_1 = rdx_5 - 1
            int32_t rax_6
            
            if (rbp != 1)
                rax_6.b = rdx_5 s<= 0
                
                if (rdx_5 s<= 0)
                    rdi_1 = 0
                
                int32_t rax_12 = rax_6 + 1 + rdx_5
                arg1[1].d = rax_12
                
                if (rax_12 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                int64_t rcx_13 = sx.q(rdi_1)
                *(*arg1 + (rcx_13 << 1)) = 0x2c
                *(*arg1 + (rcx_13 << 1) + 2) = 0
            else
                rax_6.b = rdx_5 s<= 0
                
                if (rdx_5 s<= 0)
                    rdi_1 = 0
                
                int32_t rax_8 = rax_6 + 1 + rdx_5
                arg1[1].d = rax_8
                
                if (rax_8 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                int64_t rcx_11 = sx.q(rdi_1)
                *(*arg1 + (rcx_11 << 1)) = 0x28
                *(*arg1 + (rcx_11 << 1) + 2) = 0
        
        int64_t var_58_1 = arg9
        int32_t var_60_1 = rcx | 2
        int64_t var_68_1 = arg7
        result = (*(*arg2 + 0xa0))(arg2, arg1)
        r14 += 1
    while (r14 s< arg4)
    
    if (rbp s> 0 && r13_1 == 0)
        result = sub_140a20ba0(arg1, &data_142da76f4, 1)

if (r12 == 0)
    return result

if ((not.b((rsi_1[8] u>> 0x24).b) & 1) != 0)
    (*(*rsi_1 + 0xe8))(rsi_1, r12)

return sub_140a74f90(r12)
