// 函数: sub_142b8bf20
// 地址: 0x142b8bf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result

if (*arg4 s<= 0)
    *arg3 = 0
    
    while (true)
        void* rcx = arg1[3]
        int32_t result_1
        
        if (rcx == 0)
            int32_t rdx_1 = *(arg1[1] + 8)
            void* rcx_1 = *arg1
            int16_t rax_4 = *(rcx_1 + 8)
            int32_t rax_6
            
            if (rax_4 s< 0)
                rax_6 = *(rcx_1 + 0xc)
            else
                rax_6 = sx.d(rax_4) s>> 5
            
            if (rdx_1 s>= rax_6)
                result_1 = -1
            else
                result_1 = sub_142a486d0(rcx_1, rdx_1)
        else
            result_1 = sub_142a486d0(rcx, arg1[4].d)
        
        int32_t rdx_2
        rdx_2.b = result_1 u> 0xffff
        void* rax_8 = arg1[3]
        
        if (rax_8 == 0)
            void* rcx_3 = arg1[1]
            *(rcx_3 + 8) += rdx_2 + 1
            void* rdx_4 = arg1[1]
            void* rcx_4 = *arg1
            int16_t rax_13 = *(rcx_4 + 8)
            int32_t rax_15
            
            if (rax_13 s< 0)
                rax_15 = *(rcx_4 + 0xc)
            else
                rax_15 = sx.d(rax_13) s>> 5
            
            if (*(rdx_4 + 8) s> rax_15)
                int16_t rax_16 = *(rcx_4 + 8)
                int32_t rax_18
                
                if (rax_16 s< 0)
                    rax_18 = *(rcx_4 + 0xc)
                else
                    rax_18 = sx.d(rax_16) s>> 5
                
                *(rdx_4 + 8) = rax_18
        else
            arg1[4].d += rdx_2 + 1
            int16_t rcx_2 = *(rax_8 + 8)
            int32_t rax_10
            
            if (rcx_2 s< 0)
                rax_10 = *(rax_8 + 0xc)
            else
                rax_10 = sx.d(rcx_2) s>> 5
            
            if (arg1[4].d == rax_10)
                arg1[3] = 0
        
        int64_t* r10_1
        
        if (result_1 == 0x24 && arg1[3] == 0 && (arg2 & 1) != 0)
            r10_1 = arg1[2]
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
        
        if (result_1 != 0x24 || arg1[3] != 0 || (arg2 & 1) == 0 || r10_1 == 0)
            if ((arg2 & 4) != 0 && sub_142b13730(result_1) != 0)
                continue
            
            if (result_1 == 0x5c && (arg2 & 2) != 0)
                var_78 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_70_1 = 2
                int32_t var_88 = 0
                void* r9_1 = arg1[3]
                int32_t var_98_2
                
                if (r9_1 == 0)
                    var_98_2 = *(arg1[1] + 8)
                    r9_1 = *arg1
                else
                    var_98_2 = arg1[4].d
                
                result_1 = sub_142a4aff0(&var_78, &var_88, 
                    sub_142a49310(&var_78, 0, 0, r9_1, var_98_2, 0xc))
                sub_142b8bda0(arg1, var_88)
                *arg3 = 1
                
                if (result_1 s< 0)
                    *arg4 = 0x10004
                    sub_142a47ff0(&var_78)
                    result = 0xffffffff
                    goto label_142b8c1cb
                
                sub_142a47ff0(&var_78)
        else
            void* r8 = *arg1
            int16_t rax_19 = *(r8 + 8)
            int32_t rcx_6
            
            if (rax_19 s< 0)
                rcx_6 = *(r8 + 0xc)
            else
                rcx_6 = sx.d(rax_19) s>> 5
            
            (*(*r10_1 + 0x18))(r10_1, &var_78, r8, arg1[1], rcx_6)
            int16_t var_70
            int32_t rax_23
            int32_t var_6c
            
            if (var_70 s< 0)
                rax_23 = var_6c
            else
                rax_23 = sx.d(var_70) s>> 5
            
            if (rax_23 != 0)
                arg1[4].d = 0
                int64_t* rcx_8 = arg1[2]
                void* rax_25 = (*(*rcx_8 + 8))(rcx_8, &var_78)
                arg1[3] = rax_25
                
                if (rax_25 == 0)
                    *arg4 = 0x10012
                    sub_142a47ff0(&var_78)
                    break
                
                int16_t rcx_9 = *(rax_25 + 8)
                int32_t rax_27
                
                if (rcx_9 s< 0)
                    rax_27 = *(rax_25 + 0xc)
                else
                    rax_27 = sx.d(rcx_9) s>> 5
                
                if (rax_27 == 0)
                    arg1[3] = 0
                
                sub_142a47ff0(&var_78)
                continue
            
            sub_142a47ff0(&var_78)
        result = zx.q(result_1)
        goto label_142b8c1cb

result = 0xffffffff
label_142b8c1cb:
__security_check_cookie(rax_1 ^ &var_b8)
return result
