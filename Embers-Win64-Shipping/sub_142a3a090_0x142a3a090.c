// 函数: sub_142a3a090
// 地址: 0x142a3a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int64_t rsi = arg2

if (arg1 == 0 || *arg4 != 0)
    uint64_t result
    result.b = 0
    return result

int64_t* rax = j_sub_140a82f30(0x70)
int64_t* arg_8 = rax

if (rax != 0)
    __builtin_memcpy(rax, 
        "\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff\x"
    "7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff"
    "7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff"
    "7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff\x7f\xff\xff\xff\xff\xff\xff\xff"
    "7f\xff\xff\xff\xff\xff\xff\xff\x7f", 
        0x68)
    rax[0xd] = 0

int64_t* rbx_1 = rax
int64_t* var_30_1 = rbx_1
uint64_t rdi

if (rax == 0)
label_142a3a40a:
    rdi.b = 0
else
    int64_t r12_1 = rsi + arg3
    
    while (rsi s< r12_1)
        uint64_t rax_1 = sub_142a3e160(arg1, rsi, &arg_8, arg5)
        
        if (rax_1 s< 0)
            goto label_142a3a40a
        
        int64_t rsi_1 = rsi + sx.q(arg_8.d)
        
        if (r12_1 s>= 0 && rsi_1 s>= r12_1)
            goto label_142a3a40a
        
        int64_t rax_2 = sub_142a3e270(arg1, rsi_1, &arg_8, arg5)
        
        if (rax_2 s< 0)
            goto label_142a3a40a
        
        int64_t rdx_2 = sx.q(arg_8.d)
        
        if ((rdx_2 - 1).d u> 7)
            goto label_142a3a40a
        
        int64_t rsi_2 = rsi_1 + rdx_2
        
        if (rsi_2 u> 0x7fffffffffffffff)
            goto label_142a3a40a
        
        if (r12_1 s>= 0 && rsi_2 s> r12_1)
            goto label_142a3a40a
        
        if (rax_1 == 0x55b1)
            int64_t rax_3 = sub_142a3ea30(arg1, rsi_2, rax_2)
            *rax = rax_3
            
            if (rax_3 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b2)
            int64_t rax_4 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[1] = rax_4
            
            if (rax_4 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b3)
            int64_t rax_5 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[2] = rax_5
            
            if (rax_5 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b4)
            int64_t rax_6 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[3] = rax_6
            
            if (rax_6 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b5)
            int64_t rax_7 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[4] = rax_7
            
            if (rax_7 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b6)
            int64_t rax_8 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[5] = rax_8
            
            if (rax_8 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b7)
            int64_t rax_9 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[6] = rax_9
            
            if (rax_9 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b8)
            int64_t rax_10 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[7] = rax_10
            
            if (rax_10 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55b9)
            int64_t rax_11 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[8] = rax_11
            
            if (rax_11 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55ba)
            int64_t rax_12 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[9] = rax_12
            
            if (rax_12 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55bb)
            int64_t rax_13 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[0xa] = rax_13
            
            if (rax_13 s< 0)
                goto label_142a3a40a
        else if (rax_1 == 0x55bc)
            int64_t rax_14 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[0xb] = rax_14
            
            if (rax_14 s< 0)
                goto label_142a3a40a
        else if (rax_1 != 0x55bd)
            if (rax_1 != 0x55d0)
                goto label_142a3a40a
            
            char rax_16
            rax_16, arg5 = sub_142a3aa50(arg1, rsi_2, rax_2, &rax[0xd], arg5)
            
            if (rax_16 == 0)
                goto label_142a3a40a
        else
            int64_t rax_15 = sub_142a3ea30(arg1, rsi_2, rax_2)
            rax[0xc] = rax_15
            
            if (rax_15 s< 0)
                goto label_142a3a40a
        
        rsi = rsi_2 + rax_2
        
        if (rsi s> r12_1)
            goto label_142a3a40a
    
    rbx_1 = nullptr
    *arg4 = rax
    rdi.b = 1

if (rbx_1 != 0)
    sub_142a35d50(rbx_1)
    j_sub_140a74f90(rbx_1)

return zx.q(rdi.b)
