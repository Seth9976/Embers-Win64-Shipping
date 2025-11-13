// 函数: sub_1418e4ee0
// 地址: 0x1418e4ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178

if (*(*(arg1 + 0x40) + 0x18) != 0)
    sub_1418f0570(arg1, *(*(arg1 + 0x1a8) + 0x418))

int64_t* rcx = data_143efb548
void* rdi = *(arg1 + 0x1a8)
void* rsi = *(arg1 + 0x48)
char rax_5

if ((*(*rcx + 0x90))(rcx) s<= 0)
    rax_5 = sub_1418ccbb0(rsi, rdi, arg2)
else
    rax_5 = sub_1418cc980(rsi, rdi, arg2)

uint64_t result = sub_1418e3670(arg1, arg2)
int64_t var_150
int32_t var_148
int64_t var_140

if (rax_5 != 0)
    void* rcx_3 = *(arg1 + 0x48)
    var_140 = *(rcx_3 + 0x80)
    var_148 = *(rcx_3 + 0x88)
    var_150 = *(rcx_3 + 0x68)
    result = data_143efb9a8(arg2[8], 0, *(*(*(rcx_3 + 0x210) + 0x300) + 0x1e0), 0, *(rcx_3 + 0x70), 
        var_150, var_148, var_140)

if (*(arg1 + 0x1a0) != 0)
    void* r10_1 = *(arg1 + 0x40)
    
    if (*(r10_1 + 0x1f8) != 0)
        int32_t result_2 = 0
        int32_t i = 0
        int32_t result_1 = 0
        
        if (*(r10_1 + 0x8c) u> 0)
            int64_t var_138[0x10]
            int64_t var_b8[0x10]
            
            do
                int32_t* rcx_8
                
                if (*(r10_1 + 0xa0) == *(r10_1 + 0xcc))
                label_1418e506e:
                    rcx_8 = nullptr
                else
                    void* r8_3 = r10_1 + 0xd0
                    void* rcx_5 = *(r8_3 + 8)
                    
                    if (rcx_5 != 0)
                        r8_3 = rcx_5
                    
                    int32_t rax_13 = *(r8_3 + (((sx.q(*(r10_1 + 0xe0)) - 1) & sx.q(i)) << 2))
                    
                    if (rax_13 == 0xffffffff)
                    label_1418e506e_1:
                        rcx_8 = nullptr
                    else
                        while (true)
                            rcx_8 = (sx.q(rax_13) << 4) + *(r10_1 + 0x98)
                            
                            if (*rcx_8 == i)
                                break
                            
                            rax_13 = rcx_8[2]
                            
                            if (rax_13 == 0xffffffff)
                                goto label_1418e506e_2
                        
                        if (rax_13 == 0xffffffff)
                        label_1418e506e_2:
                            rcx_8 = nullptr
                
                result = (zx.q(rcx_8[1]) + 0xa) * 2
                int64_t rdx_8 = *(arg1 + (result << 3))
                
                if (rdx_8 != 0)
                    uint64_t rcx_9 = zx.q(*(arg1 + (result << 3) + 8))
                    var_138[sx.q(result_2)] = rdx_8
                    result = sx.q(result_1)
                    var_b8[result] = rcx_9
                    result_2 = result_1 + 1
                    result_1 = result_2
                
                i += 1
            while (i u< *(r10_1 + 0x8c))
            
            if (result_2 s> 0)
                int32_t var_158
                var_158.q = &var_b8
                result = data_143efb9b8(arg2[8], 0, zx.q(result_2), &var_138, var_158, var_150, 
                    var_148, var_140)
        
        *(arg1 + 0x1a0) = 0

__security_check_cookie(rax_1 ^ &var_178)
return result
