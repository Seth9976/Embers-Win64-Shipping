// 函数: sub_142c50720
// 地址: 0x142c50720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
int64_t rax_1 = __security_cookie ^ &result_1
int64_t result = sx.q(*(arg2 + 0x70))
int64_t rbx = *(arg1 + 0x88)
void* r13_1 = result * 0x624 + *(arg1 + 0x400)
void var_138
int32_t rdx_5
int32_t rbx_1
void* rsi_1

if (rbx == 0 || *(arg1 + 0x90) == 0 || *(arg1 + 0x98) == 0)
    int64_t rbx_2 = *(arg1 + 0x68)
    
    if (rbx_2 != 0 && *(arg1 + 0x70) != 0 && *(arg1 + 0x78) != 0)
        memset(&result_1, 0, 0xa4)
        result = rbx_2(*(arg1 + 8), zx.q(*(r13_1 + 4)), &result_1)
        
        if (result.d == 0)
            result = zx.q(result_1)
            
            if (result.d s> 0)
                rbx_1 = 0
                uint64_t _Size_1 = 0
                uint32_t count_2 = (result.d + 1) * 0xc
                uint64_t count_1 = sx.q(count_2)
                
                if (count_1 + 0x10 u> count_1)
                    _Size_1 = count_1 + 0x10
                
                if (_Size_1 == 0)
                    rsi_1 = nullptr
                else if (_Size_1 u> 0x400)
                    void* rax_16 = malloc(_Size_1)
                    rsi_1 = rax_16
                    
                    if (rax_16 != 0)
                        *rax_16 = 0xdddd
                        rsi_1 += 0x10
                else
                    int64_t rax_14 = _Size_1 + 0xf
                    
                    if (rax_14 u<= _Size_1)
                        rax_14 = 0xffffffffffffff0
                    
                    int64_t rax_15 = rax_14 & 0xfffffffffffffff0
                    __chkstk(rax_15)
                    rsi_1 = &var_138 - rax_15 + 0x20
                    
                    if (rsi_1 != 0)
                        *rsi_1 = 0xcccc
                        rsi_1 += 0x10
                
                memset(rsi_1, 0, count_1)
                *rsi_1 = count_2
                int32_t rdi_5 = 0
                *(rsi_1 + 8) = result_1
                
                if ((*(arg1 + 0x70))(*(arg1 + 8), zx.q(*(r13_1 + 4)), rsi_1) == 0)
                    int32_t rax_19 = result_1
                    
                    if (rax_19 s> 0)
                        void* rcx_13 = rsi_1 + 0xc
                        uint64_t i_6 = zx.q(rax_19)
                        uint64_t i
                        
                        do
                            if (*(rcx_13 + 8) != 0 && *rcx_13 s> rdi_5)
                                rdi_5 = *rcx_13
                            
                            rcx_13 += 0xc
                            i = i_6
                            i_6 -= 1
                        while (i != 1)
                
                if ((*(arg1 + 0x78))(*(arg1 + 8), zx.q(*(r13_1 + 4)), rsi_1) == 0)
                    int32_t rax_21 = result_1
                    
                    if (rax_21 s> 0)
                        void* rcx_15 = rsi_1 + 0xc
                        uint64_t i_7 = zx.q(rax_21)
                        uint64_t i_1
                        
                        do
                            int32_t rax_22 = *rcx_15
                            rcx_15 += 0xc
                            
                            if (rax_22 s<= rbx_1)
                                rax_22 = rbx_1
                            
                            rbx_1 = rax_22
                            i_1 = i_7
                            i_7 -= 1
                        while (i_1 != 1)
                
                rdx_5 = rdi_5 s/ 0x64
            label_142c50a44:
                *(arg2 + 0x28) = rdx_5
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = muls.dp.d(0x51eb851f, rbx_1)
                int32_t rdx_12 = temp4_1 s>> 5
                result = zx.q(rdx_12 u>> 0x1f)
                *(arg2 + 0x2c) = rdx_12 + result.d
                
                if (*(rsi_1 - 0x10) == 0xdddd)
                    result = free(rsi_1 - 0x10)
else
    memset(&result_1, 0, 0xd0)
    result = rbx(*(arg1 + 8), zx.q(*(r13_1 + 4)), &result_1)
    
    if (result.d == 0)
        int32_t result_2 = result_1
        
        if (result_2 s> 0)
            rbx_1 = 0
            uint64_t _Size = 0
            int64_t count = sx.q((result_2 << 4) + 0xc)
            
            if (count + 0x10 u> count)
                _Size = count + 0x10
            
            if (_Size == 0)
                rsi_1 = nullptr
            else if (_Size u> 0x400)
                void* rax_5 = malloc(_Size)
                rsi_1 = rax_5
                
                if (rax_5 != 0)
                    *rax_5 = 0xdddd
                    rsi_1 += 0x10
            else
                int64_t rax_3 = _Size + 0xf
                
                if (rax_3 u<= _Size)
                    rax_3 = 0xffffffffffffff0
                
                int64_t rax_4 = rax_3 & 0xfffffffffffffff0
                __chkstk(rax_4)
                rsi_1 = &var_138 - rax_4 + 0x20
                
                if (rsi_1 != 0)
                    *rsi_1 = 0xcccc
                    rsi_1 += 0x10
            
            memset(rsi_1, 0, count)
            *rsi_1 = (result_2 << 4) + 0xc
            int32_t rdi_3 = 0
            *(rsi_1 + 8) = result_1
            
            if ((*(arg1 + 0x90))(*(arg1 + 8), zx.q(*(r13_1 + 4)), rsi_1) == 0)
                int32_t rax_8 = result_1
                
                if (rax_8 s> 0)
                    void* rcx_4 = rsi_1 + 0xc
                    uint64_t i_4 = zx.q(rax_8)
                    uint64_t i_2
                    
                    do
                        if (*(rcx_4 + 8) != 0 && *rcx_4 s> rdi_3)
                            rdi_3 = *rcx_4
                        
                        rcx_4 += 0x10
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
            
            if ((*(arg1 + 0x98))(*(arg1 + 8), zx.q(*(r13_1 + 4)), rsi_1) == 0)
                int32_t rax_10 = result_1
                
                if (rax_10 s> 0)
                    void* rcx_6 = rsi_1 + 0xc
                    uint64_t i_5 = zx.q(rax_10)
                    uint64_t i_3
                    
                    do
                        if (*(rcx_6 + 8) != 0 && *rcx_6 s> rbx_1)
                            rbx_1 = *rcx_6
                        
                        rcx_6 += 0x10
                        i_3 = i_5
                        i_5 -= 1
                    while (i_3 != 1)
            
            rdx_5 = rdi_3 s/ 0x64
            goto label_142c50a44
__security_check_cookie(rax_1 ^ &result_1)
return result
