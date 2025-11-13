// 函数: sub_142ad0670
// 地址: 0x142ad0670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
bool cond:0 = (*(arg1 + 8) & 1) != 0
int32_t var_d8 = 0
void* rdi = nullptr
int32_t var_d4 = 0
int16_t rax_2
int32_t rcx_1

if (not(cond:0))
    rax_2 = *(arg1 + 8)
    
    if (rax_2 s< 0)
        rcx_1 = *(arg1 + 0xc)
    else
        rcx_1 = sx.d(rax_2) s>> 5

void* result

if (cond:0 || rcx_1 s> 0x80)
    sub_142a4ab40(arg3)
    result = arg3
else
    int32_t r8_1
    
    if (rax_2 s< 0)
        r8_1 = *(arg1 + 0xc)
    else
        r8_1 = sx.d(rax_2) s>> 5
    
    int32_t var_e0_1 = 0
    char var_c8[0x90]
    int64_t rcx_3 = sx.q(sub_142a49990(arg1, 0, r8_1, &var_c8, 0x81))
    
    if (rcx_3 u>= 0x81)
        __report_rangecheckfailure()
        noreturn
    
    var_c8[rcx_3] = 0
    char** rax_4 = sub_142a64160(nullptr, "metaZones", &var_d8)
    sub_142a625a0(rax_4, "mapTimezones", rax_4, &var_d8)
    sub_142a625a0(rax_4, &var_c8, rax_4, &var_d8)
    int32_t rdx_1 = var_d8
    
    if (rdx_1 s<= 0)
        int16_t rax_5 = *(arg2 + 8)
        int32_t rcx_7
        
        if (rax_5 s< 0)
            rcx_7 = *(arg2 + 0xc)
        else
            rcx_7 = sx.d(rax_5) s>> 5
        
        int32_t rcx_9
        
        if (rcx_7 != 2)
            if (rax_5 s< 0)
                rcx_9 = *(arg2 + 0xc)
            else
                rcx_9 = sx.d(rax_5) s>> 5
        
        if (rcx_7 != 2 && rcx_9 != 3)
        label_142ad0808:
            
            if (rdx_1 s<= 0)
                goto label_142ad080c
        else
            int32_t r8_6
            
            if (rax_5 s< 0)
                r8_6 = *(arg2 + 0xc)
            else
                r8_6 = sx.d(rax_5) s>> 5
            
            int32_t var_e0_2 = 0
            int64_t rcx_11 = sx.q(sub_142a49990(arg2, 0, r8_6, &var_c8, 0x81))
            
            if (rcx_11 u>= 0x81)
                __report_rangecheckfailure()
                noreturn
            
            var_c8[rcx_11] = 0
            void* rax_7 = sub_142a63dd0(rax_4, &var_c8, &var_d4, &var_d8)
            rdx_1 = var_d8
            rdi = rax_7
            
            if (rdx_1 != 2)
                goto label_142ad0808
            
            var_d8 = 0
        label_142ad080c:
            
            if (rdi == 0)
                rdi = sub_142a63dd0(rax_4, "001", &var_d4, &var_d8)
    
    sub_142a5f860(rax_4)
    
    if (rdi != 0)
        sub_142a66950(arg3, rdi, var_d4)
    else
        sub_142a4ab40(arg3)
    
    result = arg3

__security_check_cookie(rax_1 ^ &var_108)
return result
