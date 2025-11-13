// 函数: sub_1428771e0
// 地址: 0x1428771e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x160)
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t rbx = arg2[2].q
int64_t rdx = *(arg2 + 8)
int128_t* rdi = nullptr
uint64_t result

if (*(arg2 + 0x18) + rbx u> rdx)
    sub_142876bc0(rdi)
    result = 0xffffffff
else
    int64_t rax_2 = *(arg1 + 0x5d8)
    int64_t rcx_2 = 0x454c
    
    if (rax_2 u> 0x454c)
        rcx_2 = rax_2
    
    if (rdx u> rcx_2)
        sub_142876bc0(rdi)
        result = 0xffffffff
    else if (rbx == 0)
    label_142877344:
        result = 0xfffffffd
    else
        uint16_t rcx_3 = arg2[1].w
        int64_t var_140 = 0
        var_140:7.b = rcx_3.b
        var_140:6.b = (rcx_3 u>> 8).b
        int64_t* rax_4 = sub_1428856c0(*(*(arg1 + 0xb0) + 0x118), &var_140)
        
        if (rax_4 != 0)
            rdi = rax_4[1]
            
            if (*(rdi + 8) == *(arg2 + 8))
                goto label_1428772e4
            
            sub_142876bc0(nullptr)
            result = 0xffffffff
        else
            int128_t* rax_5 = sub_142876c40(*(arg2 + 8), (rax_4 + 1).d)
            rdi = rax_5
            
            if (rax_5 == 0)
                sub_142876bc0(rdi)
                result = 0xffffffff
            else
                *rax_5 = *arg2
                rax_5[1] = arg2[1]
                rax_5[2] = arg2[2]
                rax_5[3] = arg2[3]
                rax_5[4] = arg2[4]
                rax_5[5].q = arg2[5].q
                rdi[2].q = *(rax_5 + 8)
                *(rdi + 0x18) = 0
            label_1428772e4:
                int64_t var_148
                
                if (rdi[6].q == 0)
                    while (true)
                        int64_t rax_7 = rbx
                        
                        if (rbx u> 0x100)
                            rax_7 = 0x100
                        
                        void var_138
                        
                        if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, 0, &var_138, rax_7, 0, &var_148)
                                s<= 0)
                            break
                        
                        int64_t temp0_1 = rbx
                        rbx -= var_148
                        
                        if (temp0_1 == var_148)
                            goto label_142877344_1
                    
                    goto label_14287754d
                
                if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, 0, *(rdi + 0x58) + *(arg2 + 0x18), rbx, 0, 
                    &var_148) s<= 0 || var_148 != rbx)
                label_14287754d:
                    
                    if (rax_4 != 0)
                        result = 0xffffffff
                    else
                        sub_142876bc0(rdi)
                        result = 0xffffffff
                else
                    int64_t r8_1 = sx.q(*(arg2 + 0x18))
                    
                    if (rbx.d s> 8)
                        int64_t rcx_16 = rdi[6].q
                        int64_t rdx_7 = r8_1 s>> 3
                        *(rdx_7 + rcx_16) |= *((zx.q(r8_1.d) & 7) + 0x143b84b80)
                        int32_t r8_2 = *(arg2 + 0x18)
                        int32_t i = (r8_2 s>> 3) + 1
                        
                        if (i s< ((rbx - 1).d + r8_2) s>> 3)
                            int64_t i_1 = sx.q(i)
                            
                            do
                                i_1 += 1
                                i += 1
                                *(i_1 + rdi[6].q - 1) = 0xff
                                r8_2 = *(arg2 + 0x18)
                            while (i s< (r8_2 + (rbx - 1).d) s>> 3)
                        
                        int64_t r8_3 = sx.q(rbx.d + r8_2)
                        char* rdx_10 = ((r8_3 - 1) s>> 3) + rdi[6].q
                        *rdx_10 |= *((zx.q(r8_3.d) & 7) + 0x143b84b88)
                    else if (r8_1.d s< (r8_1 + rbx).d)
                        do
                            int32_t rax_14 = r8_1.d & 7
                            char* rdx_5 = (sx.q(r8_1.d) s>> 3) + rdi[6].q
                            r8_1 = zx.q(r8_1.d + 1)
                            *rdx_5 |= (1 << (rax_14 u% 0x20)).b
                        while (r8_1.d s< *(arg2 + 0x18) + rbx.d)
                    
                    int64_t rax_26 = *(arg2 + 8)
                    int64_t r8_5 = sx.q(rax_26.d)
                    
                    if (rax_26 == 0)
                        goto label_14287754d
                    
                    char* r9_5 = rdi[6].q
                    
                    if (r9_5[(r8_5 - 1) s>> 3] == *((zx.q(r8_5.d) & 7) + 0x143b84b88))
                        int32_t rdx_12 = (r8_5 - 1).d s>> 3
                        
                        if (rdx_12 - 1 s< 0)
                        label_1428774fd:
                            sub_1428a6780(r9_5)
                            rdi[6].q = 0
                        else
                            int64_t rax_28 = sx.q(rdx_12 - 1)
                            
                            while (r9_5[rax_28] == 0xff)
                                int64_t temp3_1 = rax_28
                                rax_28 -= 1
                                
                                if (temp3_1 - 1 s< 0)
                                    goto label_1428774fd
                    
                    if (rax_4 != 0)
                    label_142877344_1:
                        result = 0xfffffffd
                    else
                        int64_t* rax_29 = sub_142885630(&var_140, rdi)
                        
                        if (rax_29 == 0)
                            sub_142876bc0(rdi)
                            result = 0xffffffff
                        else if (sub_142885740(*(*(arg1 + 0xb0) + 0x118), rax_29) == 0)
                            sub_142876bc0(rdi)
                            result = 0xffffffff
                        else
                            result = zx.q((rax_4 - 3).d)

__security_check_cookie(rax_1 ^ &var_188)
return result
