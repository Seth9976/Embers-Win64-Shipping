// 函数: sub_14192bee0
// 地址: 0x14192bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rcx = arg1[1]
int32_t* rdx = *rcx

if (&rdx[1] u<= rcx[1])
    *arg2 = *rdx
    int64_t* rax_4 = arg1[1]
    *rax_4 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2, 4)

int64_t* rcx_2 = arg1[1]
int16_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    arg2[1].w = *r8
    int64_t* rax_8 = arg1[1]
    *rax_8 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 2)

int512_t zmm1_1 = sub_140a1d9d0(arg1, &arg2[0x2e], sub_14192c260(arg1, &arg2[2], arg3))
int64_t* rcx_6 = arg1[1]
int32_t var_38 = arg2[0x34]
int32_t* rdx_5 = *rcx_6

if (&rdx_5[1] u> rcx_6[1])
    int32_t* rdx_6 = &var_38
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_6, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_6, 4)
else
    var_38 = *rdx_5
    *rcx_6 += 4

char rax_14 = arg1[5].b

if ((rax_14 & 2) != 0)
    int32_t rsi_1 = 0
    
    if (var_38 s> 0)
        do
            sub_1418d70c0(arg1, *(arg2 + 0xc8) + sx.q(rsi_1) * 0xa, zmm1_1)
            rsi_1 += 1
        while (rsi_1 s< var_38)
else if ((rax_14 & 1) != 0)
    int32_t rax_17 = var_38
    int32_t rsi_2 = 0
    arg2[0x34] = 0
    
    if (arg2[0x35] != rax_17)
        sub_1418ecde0(&arg2[0x32], rax_17)
        rax_17 = var_38
    
    if (rax_17 s> 0)
        do
            int64_t* rcx_11 = arg1[1]
            int16_t* rdx_9 = *rcx_11
            int16_t var_30
            
            if (&rdx_9[1] u> rcx_11[1])
                int16_t* rdx_10 = &var_30
                
                if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg1, rdx_10, zmm1_1)
                else
                    (*(*arg1 + 0x150))(arg1, rdx_10, 2)
            else
                var_30 = *rdx_9
                *rcx_11 += 2
            
            int64_t* rcx_13 = arg1[1]
            char* rdx_11 = *rcx_13
            char var_2e
            
            if (&rdx_11[1] u> rcx_13[1])
                (*(*arg1 + 0x150))(arg1, &var_2e, 1)
            else
                var_2e = *rdx_11
                *rcx_13 += 1
            int64_t* rcx_15 = arg1[1]
            char* rdx_13 = *rcx_15
            char var_2d
            
            if (&rdx_13[1] u> rcx_15[1])
                (*(*arg1 + 0x150))(arg1, &var_2d, 1)
            else
                var_2d = *rdx_13
                *rcx_15 += 1
            int64_t* rcx_17 = arg1[1]
            char* rdx_15 = *rcx_17
            char var_2c
            
            if (&rdx_15[1] u> rcx_17[1])
                (*(*arg1 + 0x150))(arg1, &var_2c, 1)
            else
                var_2c = *rdx_15
                *rcx_17 += 1
            
            if ((arg1[5].b & 1) != 0)
                uint32_t rcx_19 = zx.d(var_2c)
                char rax_28
                
                if (rcx_19 == 0x68)
                    rax_28 = 0
                else if (rcx_19 == 0x69)
                    rax_28 = 3
                else if (rcx_19 == 0x6c)
                    rax_28 = 2
                else if (rcx_19 == 0x6d)
                    rax_28 = 1
                else if (rcx_19 != 0x75)
                    rax_28 = 0
                else
                    rax_28 = 4
                
                char var_2b_1 = rax_28
            
            int64_t* rcx_24 = arg1[1]
            int16_t* rdx_17 = *rcx_24
            int16_t var_2a
            
            if (&rdx_17[1] u> rcx_24[1])
                int16_t* rdx_18 = &var_2a
                
                if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg1, rdx_18, zmm1_1)
                else
                    (*(*arg1 + 0x150))(arg1, rdx_18, 2)
            else
                var_2a = *rdx_17
                *rcx_24 += 2
            int64_t* rcx_26 = arg1[1]
            int16_t* rdx_19 = *rcx_26
            int16_t var_28
            
            if (&rdx_19[1] u> rcx_26[1])
                int16_t* rdx_20 = &var_28
                
                if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg1, rdx_20, zmm1_1)
                else
                    (*(*arg1 + 0x150))(arg1, rdx_20, 2)
            else
                var_28 = *rdx_19
                *rcx_26 += 2
            
            int64_t rdi_1 = sx.q(arg2[0x34])
            int32_t rax_36 = (rdi_1 + 1).d
            arg2[0x34] = rax_36
            
            if (rax_36 s> arg2[0x35])
                sub_1418ecc00(&arg2[0x32])
            
            int64_t rax_37 = *(arg2 + 0xc8)
            int64_t rcx_29 = rdi_1 * 5
            rsi_2 += 1
            *(rax_37 + (rcx_29 << 1)) = var_30.q
            *(rax_37 + (rcx_29 << 1) + 8) = var_28
        while (rsi_2 s< var_38)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
