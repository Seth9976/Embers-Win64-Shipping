// 函数: sub_142c73560
// 地址: 0x142c73560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* rsi = *arg1
int64_t rax_2 = sx.q(arg2)
int32_t var_1fc = rax_2.d
int64_t var_1e0 = arg1[rax_2 + 0x47]
int32_t rcx_1 = *(arg1 + 0x164)
void* rbp = &arg1[rax_2 * 5]
int32_t* rax_4

if (rcx_1 == 2)
    rax_4 = 0x314
    
    if (arg1[0x48] != -1)
        rax_4 = 0x33c

int64_t rax_5

if (rcx_1 != 2 || *(rax_4 + arg1) == rcx_1)
    rax_5 = arg1[0x1a]
else
    rax_5 = arg1[0x2a]

int64_t var_1f8 = rax_5
int64_t rax_6
void* rax_7

if (rcx_1 == 2)
    rax_6 = 0x314
    
    if (arg1[0x48] != -1)
        rax_6 = 0x33c
    
    rax_7 = 0x534

if (rcx_1 != 2 || *(rax_6 + arg1) == rcx_1)
    rax_7 = 0x494

int32_t* rax_8

if (rcx_1 == 2)
    rax_8 = 0x314
    
    if (arg1[0x48] != -1)
        rax_8 = 0x33c

int32_t rax_9

if (rcx_1 != 2 || *(rax_8 + arg1) == rcx_1)
    rax_9 = arg1[0x6c].d
else
    rax_9 = arg1[0x75].d

int32_t* rax_10

if (rcx_1 == 2)
    rax_10 = 0x314
    
    if (arg1[0x48] != -1)
        rax_10 = 0x33c

int64_t rax_11

if (rcx_1 != 2 || *(rax_10 + arg1) == rcx_1)
    rax_11 = *(rsi + 0x4c0)
else
    rax_11 = *(rsi + 0x560)

int64_t var_1e8 = rax_11
int32_t* rax_12

if (rcx_1 == 2)
    rax_12 = 0x314
    
    if (arg1[0x48] != -1)
        rax_12 = 0x33c

int64_t rax_13

if (rcx_1 != 2 || *(rax_12 + arg1) == rcx_1)
    rax_13 = *(rsi + 0x4c8)
else
    rax_13 = *(rsi + 0x568)

int64_t var_1f0 = rax_13
int32_t* rax_14

if (rcx_1 == 2)
    rax_14 = 0x314
    
    if (arg1[0x48] != -1)
        rax_14 = 0x33c

if (rcx_1 != 2 || *(rax_14 + arg1) == rcx_1)
    arg1[0x6f]
else
    arg1[0x78]

int32_t* rax_15

if (rcx_1 == 2)
    rax_15 = 0x314
    
    if (arg1[0x48] != -1)
        rax_15 = 0x33c

if (rcx_1 != 2 || *(rax_15 + arg1) == rcx_1)
    arg1[0x6e]
else
    arg1[0x77]

int32_t* rax_16

if (rcx_1 == 2)
    rax_16 = 0x314
    
    if (arg1[0x48] != -1)
        rax_16 = 0x33c

char rax_17

if (rcx_1 != 2 || *(rax_16 + arg1) == rcx_1)
    rax_17 = arg1[0x6d].b
else
    rax_17 = arg1[0x76].b

uint32_t var_200 = zx.d(rax_17)
int32_t* rax_19

if (rcx_1 == 2)
    rax_19 = 0x314
    
    if (arg1[0x48] != -1)
        rax_19 = 0x33c

if (rcx_1 != 2 || *(rax_19 + arg1) == rcx_1)
    *(rsi + 0x498)
else
    *(rsi + 0x538)

int32_t result
int64_t r8
int512_t zmm2
result, r8, zmm2 = sub_142c71dc0(rsi)

if (result == 0)
    int64_t rax_20 = sx.q(rax_9)
    *(rax_7 + rsi) = 1
    
    if (rax_20.d u> 7)
        sub_142c64760(rsi, "Unrecognized parameter passed via CURLOPT_SSLVERSION", r8, zmm2)
        result = 0x23
    else
        switch (rax_20)
            case 0, 1, 4, 5, 6, 7
                void* rcx_3 = *(rbp + 0x2d0)
                
                if (rcx_3 != 0)
                    sub_14284e030(rcx_3)
                
                void** rax_23 = sub_14284e270(&data_1434d91c0)
                *(rbp + 0x2d0) = rax_23
                
                if (rax_23 != 0)
                    sub_14284dc40(rax_23, 0x21, 0x10, nullptr)
                    
                    if (*(rsi + 0x310) != 0 && *(rsi + 0x5f0) != 0)
                        sub_14284e810(*(rbp + 0x2d0), sub_142c751e0)
                        sub_14284dc40(*(rbp + 0x2d0), 0x10, 0, arg1)
                    
                    int32_t rdx_1 = -0x7ffdb7ac
                    int32_t* rax_25
                    
                    if (*(arg1 + 0x164) == 2)
                        rax_25 = 0x314
                        
                        if (arg1[0x48] != -1)
                            rax_25 = 0x33c
                    
                    char rax_26
                    
                    if (*(arg1 + 0x164) != 2 || *(rax_25 + arg1) == 2)
                        rax_26 = *(rsi + 0x490)
                    else
                        rax_26 = *(rsi + 0x530)
                    
                    if (rax_26 == 0)
                        rdx_1 = -0x7ffdbfac
                    
                    int32_t var_204 = rdx_1
                    jump(&__dos_header.e_magic[zx.q(*((sx.q(rax_9) << 2) + 0x142c73f10))])
                
                char var_148[0x100]
                sub_142c64760(rsi, "SSL: couldn't create a context: %s", &var_148, 
                    sub_1428a4aa0(sub_1428a54c0(), &var_148, 0x100))
                result = 0x1b
            case 2
                sub_142c64760(rsi, "OpenSSL was built without SSLv2 support", r8, zmm2)
                result = 4
            case 3
                sub_142c64760(rsi, "OpenSSL was built without SSLv3 support", r8, zmm2)
                result = 4

__security_check_cookie(rax_1 ^ &var_248)
return result
