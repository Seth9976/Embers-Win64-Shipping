// 函数: ?clearDBI@DBI1@@AEAAHXZ
// 地址: 0x14103f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88
int64_t rax_1 = __security_cookie ^ &var_88
int128_t* rdi = nullptr
*arg1 = 0
int32_t rax_2
rax_2.b = arg3 s> 1
var_88 = rax_2 + 4
int32_t rax_4
rax_4.b = arg3 s> 2
int32_t var_70 = 0
int32_t var_6c = 2
int32_t rax_6
rax_6.b = arg3 s> 2
int32_t* result = arg1
int32_t rbx = 0
int32_t rsi = 0
int32_t rax_8
rax_8.b = arg3 s> 1
int32_t rax_9 = *(arg2 + 0x18)
int128_t var_50
__builtin_memcpy(&var_50, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x05\x00\x00\x00", 
    0x18)

if (rax_9 == 2)
    arg1[2] = 3
    rbx = 3
    arg1[8] = 0
    arg1[4] = 0
    *(arg1 + 0x14) = 2
    *arg1 += rax_9
    arg1[0xa] = 3
    arg1[0x10] = 0
    arg1[0xc] = 1
    *(arg1 + 0x34) = 2
    *arg1 += rax_9
    arg1[0x12] = 1
    arg1[0x18] = 0
    arg1[0x16] = 4
    arg1[0x14] = 0
    arg1[0x15] = rax_9
    *arg1 += 4
    rax_9 = *(arg2 + 0x18)
else if (rax_9 == 1)
    rsi = rax_9

int64_t i_2 = 2
int32_t* rax_10 = &var_70
int32_t rbp
rbp.b = rax_9 == 2
int32_t* var_68 = &var_70
int64_t i

do
    int32_t r12_1 = *rax_10
    int128_t* r14_1 = &var_50
    int64_t j_1 = 6
    int64_t j
    
    do
        int64_t r9_1 = sx.q(*r14_1)
        void* r10_2 = (r9_1 << 2) + arg2
        
        if (r12_1 == 0)
            char rcx_4 = *(r10_2 + 2)
            
            if (rcx_4 != 0)
                uint64_t r8 = zx.q(rbx)
                int64_t rax_14 = (r8 + 0x2b) * 3
                result[rax_14 * 2] = 0
                void* rdx = &result[rax_14 * 2]
                *(rdx + 4) = zx.d(rcx_4)
                *(rdx + 0x10) = var_88
                *(rdx + 8) = 0
                *(rdx + 0xc) = rsi
                *(rdx + 0x14) = 0xffffffff
                int32_t rax_17
                
                if (r9_1.d u> 5)
                    rax_17 = -1
                else
                    switch (r9_1)
                        case 0
                            rax_17 = 1
                        case 1
                            rax_17 = 5
                        case 2
                            rax_17 = 2
                        case 3
                            rax_17 = 3
                        case 4
                            rax_17 = 4
                        case 5
                            rax_17 = 0
                
                rbx += 1
                result[r8 * 8 + 2] = 0
                result[r8 * 8 + 8] = rax_17
                result[r8 * 8 + 4] = 1
                *((r8 << 5) + result + 0x18) = rdx
                *result += rbp + 1
            
            char rcx_7 = *(r10_2 + 1)
            
            if (rcx_7 u> 0x10)
                uint64_t r8_2 = zx.q(rbx)
                void* rdx_1 = &result[(r8_2 + 0x2b) * 6]
                *rdx_1 = 2
                *(rdx_1 + 4) = zx.d(rcx_7) - 0x10
                *(rdx_1 + 0x10) = rax_4 + 4
                *(rdx_1 + 8) = 0x10
                *(rdx_1 + 0xc) = rsi
                *(rdx_1 + 0x14) = 0xffffffff
                int32_t rax_23
                
                if (r9_1.d u> 5)
                    rax_23 = -1
                else
                    switch (r9_1)
                        case 0
                            rax_23 = 1
                        case 1
                            rax_23 = 5
                        case 2
                            rax_23 = 2
                        case 3
                            rax_23 = 3
                        case 4
                            rax_23 = 4
                        case 5
                            rax_23 = 0
                
                rbx += 1
                result[r8_2 * 8 + 2] = 0
                result[r8_2 * 8 + 8] = rax_23
                result[r8_2 * 8 + 4] = 1
                *((r8_2 << 5) + result + 0x18) = rdx_1
                *result += rbp + 1
            
            char rcx_10 = *r10_2
            
            if (rcx_10 != 0)
                uint64_t r8_4 = zx.q(rbx)
                int64_t rax_25 = (r8_4 + 0x2b) * 3
                result[rax_25 * 2] = 3
                void* rdx_2 = &result[rax_25 * 2]
                *(rdx_2 + 4) = zx.d(rcx_10)
                *(rdx_2 + 0x10) = rax_8
                *(rdx_2 + 8) = 0
                *(rdx_2 + 0xc) = rsi
                *(rdx_2 + 0x14) = 0xffffffff
                int32_t rax_28
                
                if (r9_1.d u> 5)
                    rax_28 = -1
                else
                    switch (r9_1)
                        case 0
                            rax_28 = 1
                        case 1
                            rax_28 = 5
                        case 2
                            rax_28 = 2
                        case 3
                            rax_28 = 3
                        case 4
                            rax_28 = 4
                        case 5
                            rax_28 = 0
                
                rbx += 1
                result[r8_4 * 8 + 2] = 0
                result[r8_4 * 8 + 8] = rax_28
                result[r8_4 * 8 + 4] = 1
                *((r8_4 << 5) + result + 0x18) = rdx_2
                *result += rbp + 1
            
            char rcx_13 = *(r10_2 + 3)
            
            if (rcx_13 != 0)
                uint64_t r8_6 = zx.q(rbx)
                int64_t rax_30 = (r8_6 + 0x2b) * 3
                result[rax_30 * 2] = 1
                void* rdx_3 = &result[rax_30 * 2]
                *(rdx_3 + 4) = zx.d(rcx_13)
                *(rdx_3 + 0x10) = rax_6 + 2
                *(rdx_3 + 8) = 0
                *(rdx_3 + 0xc) = rsi
                *(rdx_3 + 0x14) = 0xffffffff
                int32_t rax_34
                
                if (r9_1.d u> 5)
                    rax_34 = -1
                else
                    switch (r9_1)
                        case 0
                            rax_34 = 1
                        case 1
                            rax_34 = 5
                        case 2
                            rax_34 = 2
                        case 3
                            rax_34 = 3
                        case 4
                            rax_34 = 4
                        case 5
                            rax_34 = 0
                
                rbx += 1
                result[r8_6 * 8 + 2] = 0
                result[r8_6 * 8 + 8] = rax_34
                result[r8_6 * 8 + 4] = 1
                *((r8_6 << 5) + result + 0x18) = rdx_3
                *result += rbp + 1
        else if (r12_1 == 2)
            int32_t k = 0
            
            if (*(r10_2 + 1) u> 0)
                while (k u< 0x10)
                    int32_t rax_11
                    
                    if (r9_1.d u> 5)
                        rax_11 = -1
                    else
                        switch (r9_1)
                            case 0
                                rax_11 = 1
                            case 1
                                rax_11 = 5
                            case 2
                                rax_11 = 2
                            case 3
                                rax_11 = 3
                            case 4
                                rax_11 = 4
                            case 5
                                rax_11 = 0
                    
                    uint64_t rcx_2 = zx.q(rbx)
                    rbx += 1
                    result[rcx_2 * 8 + 2] = 2
                    result[rcx_2 * 8 + 8] = rax_11
                    result[rcx_2 * 8 + 4] = k
                    k += 1
                    result[rcx_2 * 8 + 5] = rsi
                    result[rcx_2 * 8 + 6] = 8
                    *result += 2
                    
                    if (k u>= zx.d(*(r10_2 + 1)))
                        break
        
        r14_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    rax_10 = &var_68[1]
    i = i_2
    i_2 -= 1
    var_68 = rax_10
while (i != 1)
int32_t r10_3 = *(arg2 + 0x18)
int32_t rdx_4 = 0
void* rax_36

if (r10_3 != 2)
    if (r10_3 == 0)
        int128_t* r8_8 = &var_50
        uint64_t i_3 = zx.q(r10_3 + 6)
        rdx_4.b = *(arg2 + 0x1c) != 0
        uint64_t i_1
        
        do
            int64_t rcx_18 = sx.q(*r8_8)
            
            if (*(arg2 + (rcx_18 << 2) + 2) == 0 && *(arg2 + (rcx_18 << 2) + 1) == 0
                    && *(arg2 + (rcx_18 << 2) + 3) == 0 && *(arg2 + (rcx_18 << 2)) == 0)
                int32_t rax_38
                
                if (rcx_18.d u> 5)
                    rax_38 = -1
                else
                    switch (rcx_18)
                        case 0
                            rax_38 = 2
                        case 1
                            rax_38 = 0x20
                        case 2
                            rax_38 = 4
                        case 3
                            rax_38 = 8
                        case 4
                            rax_38 = 0x10
                        case 5
                            rax_38 = 0
                
                rdx_4 |= rax_38
            
            r8_8 += 4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        result = arg1
    
    rax_36 = &result[2]
    
    if (r10_3 == 2 || arg3 s<= 1)
        result[0x1c8] = 0
    else
        result[0x1c8] = 6
        rdi = &data_143e2c660
else
    rdx_4 = r10_3 + 0x7e
    rax_36 = &result[2]
    result[0x1c8] = 0

result[0x1c2] = 2
result[0x1c4] = rbx
*(result + 0x718) = rax_36
*(result + 0x728) = rdi
result[0x1cc] = rdx_4
__security_check_cookie(rax_1 ^ &var_88)
return result
