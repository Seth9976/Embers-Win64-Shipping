// 函数: sub_142876ee0
// 地址: 0x142876ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x160)
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
uint64_t rbx = *(arg2 + 0x20)
int128_t* rsi = nullptr
uint64_t result

if (*(arg2 + 0x18) + rbx u> *(arg2 + 8))
    sub_142876bc0(rsi)
    result = 0
else
    uint16_t rcx_2 = *(arg2 + 0x10)
    int64_t var_140 = 0
    var_140:7.b = rcx_2.b
    var_140:6.b = (rcx_2 u>> 8).b
    int64_t* rax_3 = sub_1428856c0(*(*(arg1 + 0xb0) + 0x118), &var_140)
    int64_t* r14_1 = rax_3
    
    if (rax_3 != 0 && rbx != *(arg2 + 8))
        r14_1 = nullptr
    
    int16_t r8_1 = *(arg2 + 0x10)
    int16_t rdx_1 = *(*(arg1 + 0xb0) + 0x110)
    int64_t var_148
    
    if (r8_1 u<= rdx_1 || zx.d(r8_1) u> zx.d(rdx_1) + 0xa || r14_1 != 0
            || (rdx_1 == 0 && *arg2 == 0x14))
        if (rbx == 0)
        label_142877110:
            result = 0xfffffffd
        else
            while (true)
                uint64_t rax_12 = rbx
                
                if (rbx u> 0x100)
                    rax_12 = 0x100
                
                void var_138
                
                if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, 0, &var_138, rax_12, 0, &var_148) s<= 0)
                    break
                
                uint64_t temp0_1 = rbx
                rbx -= var_148
                
                if (temp0_1 == var_148)
                    goto label_142877110_1
            
            if (r14_1 != 0)
                result = 0
            else
                sub_142876bc0(rsi)
                result = 0
    else if (rbx == *(arg2 + 8))
        int64_t rax_6 = *(arg1 + 0x5d8)
        int64_t rcx_8 = 0x454c
        
        if (rax_6 u> 0x454c)
            rcx_8 = rax_6
        
        if (rbx u> rcx_8)
            sub_142876bc0(rsi)
            result = 0
        else
            int128_t* rax_7 = sub_142876c40(rbx, 0)
            
            if (rax_7 == 0)
                sub_142876bc0(rax_7)
                result = 0
            else
                *rax_7 = *arg2
                rax_7[1] = *(arg2 + 0x10)
                rax_7[2] = *(arg2 + 0x20)
                rax_7[3] = *(arg2 + 0x30)
                rax_7[4] = *(arg2 + 0x40)
                rax_7[5].q = *(arg2 + 0x50)
                int32_t rax_9
                
                if (rbx != 0)
                    rax_9 =
                        (*(*(arg1 + 8) + 0x68))(arg1, 0x16, 0, *(rax_7 + 0x58), rbx, 0, &var_148)
                
                if (rbx != 0 && (rax_9 s<= 0 || var_148 != rbx))
                    sub_142876bc0(rax_7)
                    result = 0
                else
                    int64_t* rax_10 = sub_142885630(&var_140, rax_7)
                    
                    if (rax_10 == 0)
                        sub_142876bc0(rax_7)
                        result = 0
                    else if (sub_142885740(*(*(arg1 + 0xb0) + 0x118), rax_10) != 0)
                    label_142877110_1:
                        result = 0xfffffffd
                    else
                        sub_142876bc0(rax_7)
                        result = 0
    else
        result = sub_1428771e0(arg1, arg2)

__security_check_cookie(rax_1 ^ &var_188)
return result
