// 函数: sub_142bca070
// 地址: 0x142bca070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t r15 = *(arg2 + 0x98)
int16_t temp0
int16_t temp1
temp0:temp1 = sx.q(arg3)
uint32_t rbp = zx.d((temp1 ^ temp0) - temp0)
int32_t rax_4 = sub_142bca850(arg2, arg3, arg5)
arg_20 = rax_4

if (rax_4 != 0 || arg3 s>= 0)
    if (rax_4.b != 2)
        if (rax_4 != 0)
            goto label_142bca131
        
    label_142bca174:
        void* rsi_1 = *(arg2 + 0xd8)
        
        if (*(rsi_1 + 0x60) != 0)
            arg2[2] |= 0x12
            arg2[1] = rbp
            
            if (*(rsi_1 + 0x64) == *(rsi_1 + 0x66))
                arg2[2] |= 4
            
            if (*(rsi_1 + 0x56) != 0)
                arg2[3] |= 1
            
            if (*(rsi_1 + 0x5a) u>= 0x320)
                arg2[3] |= 2
            
            int16_t* rax_8 = sub_142b99a90(r15, 0x10, 0, 1, 0, &arg_20)
            *(arg2 + 0x30) = rax_8
            
            if (arg_20 != 0)
                goto label_142bca131
            
            arg2[0xa] = 1
            rax_8[1] = *(rsi_1 + 0x64)
            *rax_8 = *(rsi_1 + 0x54) + *(rsi_1 + 0x60)
            uint32_t rcx_9 = zx.d(*(rsi_1 + 0x4a)) << 6
            *(rax_8 + 4) = rcx_9
            int16_t rbp_1 = *(rsi_1 + 0x4e)
            
            if (rbp_1 == 0)
                rbp_1 = 0x48
            
            int16_t rax_9 = *(rsi_1 + 0x4c)
            
            if (rax_9 == 0)
                rax_9 = 0x48
            
            uint32_t r14_1 = zx.d(rax_9)
            int32_t rax_12 = (sub_142b93dd0(rcx_9, r14_1, 0x48) + 0x20) & 0xffffffc0
            *(rax_8 + 0xc) = rax_12
            uint32_t rcx_11 = zx.d(*(rsi_1 + 0x60)) << 6
            
            if (rax_12 s> rcx_11)
                *(rax_8 + 0xc) = rcx_11
                *(rax_8 + 4) = sub_142b93dd0(rcx_11, 0x48, r14_1)
            
            int32_t rax_16 = (sub_142b93dd0(*(rax_8 + 4), zx.d(rbp_1), 0x48) + 0x20) & 0xffffffc0
            int64_t var_30_1 = 0
            *(rax_8 + 8) = rax_16
            bool cond:0_1 = *(rsi_1 + 0x5c) != 0x4d
            int32_t* var_38 = arg2
            
            if (not(cond:0_1))
                __builtin_strncpy(&var_30_1, "nmra", 4)
                var_30_1:4.w = 1
            
            int32_t rax_17 = sub_142b91640(&data_143687d20, 0, &var_38, nullptr)
            arg_20 = rax_17
            
            if (rax_17 != 0)
                goto label_142bca131
            
            char rcx_13 = *(rsi_1 + 0x69)
            char rax_18 = *(rsi_1 + 0x68)
            
            if (rcx_13 u< rax_18)
                goto label_142bca182
            
            arg2[4] = zx.d(rcx_13) - zx.d(rax_18) + 2
            int32_t rax_20 = *(rsi_1 + 0x74)
            int32_t rbp_2 = *(rsi_1 + 8)
            
            if (rax_20 u>= rbp_2)
                goto label_142bca182
            
            uint64_t rbp_3 = zx.q(rbp_2 - rax_20)
            int64_t rax_21 = sub_142b99860(r15, (rbp_3 + 1).d, &arg_20)
            *(rsi_1 + 0xb0) = rax_21
            
            if (arg_20 != 0)
                goto label_142bca131
            
            memcpy(rax_21, zx.q(*(rsi_1 + 0x74)) + *(rsi_1 + 0xa0), rbp_3.d)
            *(rbp_3 + *(rsi_1 + 0xb0)) = 0
            int64_t rax_23 = -1
            int64_t r9 = *(rsi_1 + 0xb0)
            bool cond:1_1
            
            do
                cond:1_1 = *(r9 + rax_23 + 1) != 0
                rax_23 += 1
            while (cond:1_1)
            int64_t rax_24 = sub_142b99a90(r15, 1, rbp_3.d, (rax_23 + 1).d, r9, &arg_20)
            *(rsi_1 + 0xb0) = rax_24
            int32_t rdx_9 = arg_20
            
            if (rdx_9 != 0)
                goto label_142bca131
            
            char rcx_20 = (arg2[3]).b
            *(arg2 + 0x18) = rax_24
            *(arg2 + 0x20) = "Regular"
            
            if ((rcx_20 & 2) == 0)
                char const* const rax_25 = "Italic"
                
                if ((1 & rcx_20) == 0)
                    rax_25 = *(arg2 + 0x20)
                
                *(arg2 + 0x20) = rax_25
                return rdx_9
            
            char const* const rcx_21 = "Bold Italic"
            
            if ((1 & rcx_20) == 0)
                rcx_21 = "Bold"
            
            rax_4 = rdx_9
            *(arg2 + 0x20) = rcx_21
        else
        label_142bca182:
            arg_20 = 3
        label_142bca131:
            int64_t rbx_1 = *(arg2 + 0x98)
            sub_142bcaf70(arg2)
            sub_142b99980(rbx_1, *(arg2 + 0x30))
            rax_4 = arg_20
            *(arg2 + 0x30) = 0
            arg2[0xa] = 0
    else
        int32_t* rax_5 = sub_142b99860(r15, 0xb8, &arg_20)
        *(arg2 + 0xd8) = rax_5
        rax_4 = arg_20
        
        if (rax_4 == 0)
            *arg2 = 1
            *rax_5 = 0
            rax_5[0x2a] = arg1[1].d
            rax_4 = sub_142bcaff0(rax_5, arg1, arg5)
            arg_20 = rax_4
            
            if (rax_4 != 0)
                goto label_142bca131
            
            if (arg3 s>= 0)
                if (rbp == 0)
                    goto label_142bca174
                
                arg_20 = 6
                goto label_142bca131

return rax_4
