// 函数: sub_142b7df50
// 地址: 0x142b7df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
void* result = __security_cookie ^ &var_198
void* result_1 = result

if (*arg3 s<= 0)
    void* rcx = *(arg1 + 0x20)
    
    if (rcx != 0)
        result = sub_142a95bd0(rcx)
    
    if (rcx == 0 || result.b != 0)
        *arg3 = 0x1b
    else
        sub_142b7dd00(arg1, arg3)
        int32_t r12_1 = -1
        void* r13_1 = nullptr
        int32_t var_168
        void var_158
        
        if (sub_142b7fa90(arg1, &var_158, arg3) == 0)
            int32_t i_7 = 0xac00
            int32_t i
            
            do
                i = i_7 + 0x24c
                int32_t rax_6 = sub_142aa3ce0(*(arg1 + 0x10), i_7)
                sub_142b8d8c0(*(arg1 + 0x20), i_7, zx.q(i - 1), rax_6, 1, arg3)
                i_7 = i
            while (i s< 0xd7a4)
        else
            int64_t i_1 = 0
            var_168 = *(arg1 + 0x30)
            
            do
                int32_t rdx_2 = *(arg1 + 0x30)
                int32_t rbp_1 = *(&var_158 + (i_1 << 2))
                char rax_3
                
                if (rdx_2 + 1 s< 0 || *(arg1 + 0x34) s< rdx_2 + 1)
                    rax_3 = sub_142ae7df0(arg1 + 0x28, rdx_2 + 1, arg3)
                
                if ((rdx_2 + 1 s>= 0 && *(arg1 + 0x34) s>= rdx_2 + 1) || rax_3 != 0)
                    *(*(arg1 + 0x40) + (sx.q(*(arg1 + 0x30)) << 2)) = rbp_1
                    *(arg1 + 0x30) += 1
                
                i_1 += 1
            while (i_1 s< 0x43)
            
            r12_1.b = 0
            
            for (int64_t i_2 = 0x13; i_2 s< 0x43; i_2 += 1)
                if (*(&var_158 + (i_2 << 2)) u>= 0xc0)
                    r12_1.b = 1
                    break
            
            int32_t rsi_1 = 0xac00
            
            for (int64_t i_3 = 0; i_3 s< 0x13; i_3 += 1)
                int32_t r9_1 = 0xcc
                
                if (r12_1.b == 0 && (*(&var_158 + (i_3 << 2))).b u< 0xc0)
                    r9_1 = 0x1cc
                
                sub_142b8d8c0(*(arg1 + 0x20), rsi_1, zx.q(rsi_1 + 0x24b), r9_1, 1, arg3)
                rsi_1 += 0x24c
            
            r12_1 = var_168
        
        sub_142b7ff90(arg1, arg3)
        int16_t i_5 = -0x2800
        
        for (int16_t i_4 = -0x2800; i_4 u< 0xdc00; i_4 += 1)
            int64_t* rcx_9 = *(arg1 + 0x20)
            uint32_t i_6 = zx.d(i_4)
            var_168 = 0xffffffff
            char var_178_1
            var_178_1.q = &var_168
            sub_142a95920(rcx_9, i_6, nullptr, sub_142b80250, var_178_1)
            sub_142b8d840(*(arg1 + 0x20), i_6, var_168 | 0xcd, arg3)
        
        sub_142ae7f70(arg1 + 0x28, sub_142a959a0(*(arg1 + 0x20), 0), 0)
        sub_142b8d880(*(arg1 + 0x20), 0, 0xcb, arg3)
        result = sub_142b8cf20(*(arg1 + 0x20), 1, arg3)
        
        if (*arg3 s<= 0)
            int32_t rbx_1 = 0x10000
            
            do
                if (sub_142a9f430(arg1 + 0x198, rbx_1, rbx_1 + 0x3ff) == 0)
                    sub_142a9e7d0(arg1 + 0x198, zx.d(i_5))
                
                i_5 += 1
                rbx_1 += 0x400
            while (i_5 u< 0xdc00)
            
            sub_142a9f940(arg1 + 0x198)
            *arg2 = *(arg1 + 0x20)
            arg2[1] = *(arg1 + 0x40)
            arg2[2] = *(arg1 + 0x60)
            char rax_12 = (*(arg1 + 0x160)).b
            
            if ((rax_12 & 0x11) == 0)
                r13_1 = arg1 + 0x162
                
                if ((rax_12 & 2) == 0)
                    r13_1 = *(arg1 + 0x170)
            
            arg2[3] = r13_1
            *(arg2 + 0x3c) = *(arg1 + 0x30)
            arg2[8].d = *(arg1 + 0x50)
            int16_t rax_15 = *(arg1 + 0x160)
            int32_t rax_17
            
            if (rax_15 s< 0)
                rax_17 = *(arg1 + 0x164)
            else
                rax_17 = sx.d(rax_15) s>> 5
            
            *(arg2 + 0x44) = rax_17
            arg2[4] = *(arg1 + 0x10)
            void* rcx_19
            
            if (r12_1 s< 0)
                result = *(arg1 + 0x10)
                rcx_19 = *(result + 0x28)
            else
                result = arg2[1]
                rcx_19 = result + (sx.q(r12_1) << 2)
            
            arg2[5] = rcx_19
            arg2[0xa] = arg1 + 0x198

__security_check_cookie(result_1 ^ &var_198)
return result
