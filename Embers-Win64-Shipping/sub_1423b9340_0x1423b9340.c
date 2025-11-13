// 函数: sub_1423b9340
// 地址: 0x1423b9340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
arg1[1].d = 0xffffffff
void*** result = arg1
*(arg1 + 0xc) = 4
__builtin_memset(&arg1[2], 0, 0x18)
void* r12 = &result[0x13]
arg1[5] = -0x3810000020000000
__builtin_memset(&arg1[6], 0, 0x14)
*arg1 = &data_14333b658
*(arg1 + 0x44) = 0
*(arg1 + 0x46) = 0
arg1[9] = 0
arg1[0xa] = 0
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
result[0xf].d = 0xffffffff
*(result + 0x7c) = 0
result[0x11] = 0
result[0x12].d = 0
*r12 = 0
*(r12 + 8) = 0
result[0x15] = 0
result[0x16] = arg2
int32_t* rax_3 = *(arg2 + 0xb8)
int32_t rax_4

if (rax_3 == 0)
    rax_4 = 0
else
    rax_4 = *rax_3

result[0x17].d = rax_4
void* rax_5 = *(arg2 + 0xb8)
int32_t rax_6

if (rax_5 == 0)
    rax_6 = 0
else
    rax_6 = *(rax_5 + 4)

*(result + 0xbc) = rax_6
void* rax_7 = *(arg2 + 0xb8)
int32_t rax_9

if (rax_7 == 0)
    rax_9 = 0
else
    rax_9 = *(rax_7 + 8) & 0x3fffffff

*(result + 0xc4) = rax_9
void* rax_10 = *(arg2 + 0xb8)
int32_t rax_11

if (rax_10 == 0)
    rax_11 = 0
else
    rax_11 = *(rax_10 + 0x20)

result[0x18].d = rax_11
void* rax_12 = *(arg2 + 0xb8)
int32_t rcx_1

if (rax_12 == 0)
    rcx_1 = 0
else
    rcx_1 = *(rax_12 + 0xc)

*(result + 0xcc) = rcx_1
*(result + 0xe1) = 1
result[0x1c].b = *(arg2 + 0x60) & 1
uint64_t rax_16 = sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0)))
uint32_t rcx_4 = zx.d(*(arg2 + 0x5d))
uint64_t rdx

if (rcx_4 == 0)
    rdx.b = 0
else if (rcx_4 == 1)
    rdx.b = 1
else if (rcx_4 == 2)
    rdx.b = 2
else
    rdx = zx.q(*(zx.q(*(arg2 + 0x5f)) * 0x54 + *(rax_16 + 0x28) + 0x18))

int32_t i = 0
result[0x1a].d = zx.d(rdx.b)
void* rdi = *(arg2 + 0xb8)
void* var_1f8 = rdi
int32_t rax_21

if (*(result + 0xc4) u<= 0)
    rax_21 = *(rdi + 0x20)
else
    do
        int64_t rbx_1 = sx.q(*(r12 + 8))
        int32_t var_1b0 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        int32_t rax_20 = (rbx_1 + 1).d
        int32_t var_4c_1 = 0xe
        *(r12 + 8) = rax_20
        
        if (rax_20 s> *(r12 + 0xc))
            sub_1423c8410(r12)
        
        sub_1423b9a00(rbx_1 * 0x168 + *r12, &var_1b0)
        void var_1a8
        sub_1423baa40(&var_1a8)
        rax_21 = *(rdi + 0x20)
        int32_t r14_1 = 0
        
        if (rax_21 s> 0)
            int64_t rbp_1 = 0
            int64_t rsi_1 = sx.q(i) * 0x168
            
            do
                int64_t var_1c8_1 = 0
                void* rbx_4 = *r12 + 8 + rsi_1
                int64_t rdi_1 = sx.q(*(rbx_4 + 0x158))
                int32_t rax_23 = (rdi_1 + 1).d
                *(rbx_4 + 0x158) = rax_23
                
                if (rax_23 s> *(rbx_4 + 0x15c))
                    sub_1423c8370(rbx_4, rdi_1.d)
                
                void* rax_24 = *(rbx_4 + 0x150)
                int64_t rcx_12 = rdi_1 * 3
                
                if (rax_24 != 0)
                    rbx_4 = rax_24
                
                *(rbx_4 + (rcx_12 << 3)) = var_1c8_1.d
                *(rbx_4 + (rcx_12 << 3) + 4) = var_1c8_1:4.d
                *(rbx_4 + (rcx_12 << 3) + 8) = 0
                *(rbx_4 + (rcx_12 << 3) + 0x10) = 0
                int64_t* rcx_15 = *r12 + 8 + rsi_1
                int64_t* rax_27 = rcx_15[0x2a]
                
                if (rax_27 != 0)
                    rcx_15 = rax_27
                
                r14_1 += 1
                *(rcx_15 + rbp_1) = 0
                rbp_1 += 0x18
                rax_21 = *(var_1f8 + 0x20)
            while (r14_1 s< rax_21)
            
            result = arg1
            rdi = var_1f8
        
        i += 1
    while (i u< *(result + 0xc4))

int32_t i_2 = 0
int32_t i_1 = 0

if (rax_21 s> 0)
    int64_t rbp_2 = 0
    int64_t var_200_1 = 0
    int64_t* rcx_16 = nullptr
    int64_t* var_1f0_1 = nullptr
    
    do
        int32_t* rbx_5 = *(rcx_16 + *(rdi + 0x18))
        int32_t* var_1d8_1 = rbx_5
        int64_t* rsi_2 = &rbx_5[4]
        
        if (sub_140bc7f20(rsi_2) s> 0)
            int32_t count = (divs.dp.q(sx.o(sub_140bc7f20(rsi_2)), zx.q(*(result + 0xc4)))).d
            int64_t rax_33 = sub_140bcb6b0(rsi_2, 1)
            int32_t j = 0
            
            if (*(result + 0xc4) u> 0)
                do
                    int32_t* rdx_7 = *r12 + 8 + sx.q(j) * 0x168
                    int32_t* rax_35 = *(rdx_7 + 0x150)
                    
                    if (rax_35 != 0)
                        rdx_7 = rax_35
                    
                    void* rsi_3 = rdx_7 + rbp_2
                    *(rdx_7 + rbp_2) = *rbx_5
                    *(rdx_7 + rbp_2 + 4) = rbx_5[1]
                    int64_t rbx_6 = sx.q(*(rsi_3 + 0x10))
                    
                    if (count s> rbx_6.d)
                        *(rsi_3 + 0x10) = count
                        
                        if (count s> *(rsi_3 + 0x14))
                            sub_1405daba0(rsi_3 + 8)
                        
                        memset(rbx_6 + *(rsi_3 + 8), 0, sx.q(count - rbx_6.d))
                        rbp_2 = var_200_1
                    else if (count s< rbx_6.d && count != rbx_6.d)
                        *(rsi_3 + 0x10) = count
                        sub_1405dac10(rsi_3 + 8)
                    
                    memcpy(*(rsi_3 + 8), zx.q(j * count) + rax_33, count)
                    rbx_5 = var_1d8_1
                    j += 1
                while (j u< *(result + 0xc4))
                
                i_1 = i_2
            
            sub_140bd1d40(rsi_2)
            rdi = var_1f8
        
        i_1 += 1
        rcx_16 = &var_1f0_1[1]
        i_2 = i_1
        rbp_2 += 0x18
        var_1f0_1 = rcx_16
        var_200_1 = rbp_2
    while (i_1 s< *(rdi + 0x20))

__security_check_cookie(rax_1 ^ &var_228)
return result
