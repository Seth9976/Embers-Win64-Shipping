// 函数: sub_1429334a0
// 地址: 0x1429334a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x250)
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t* result_1 = nullptr
int64_t var_240 = 0
int32_t var_258 = 0
int64_t var_208 = -1
int32_t var_1fc = 1
int32_t i = 0
char* r14 = nullptr
int32_t r15 = 0
int32_t* result
int32_t var_200

if (sub_1428a40b0(arg1, 0x2c, 1, sub_142932b80, &var_208) != 0)
    *arg4 = 0xc2
    result = nullptr
else
    char* var_1f8
    int32_t* result_2
    
    if (var_200 - 0x10 u> 1)
        result_2 = sub_142932f40(var_1f8, var_1fc, var_200)
    label_1429336c1:
        
        if (result_2 == 0)
            result = nullptr
        else if (var_208.d != 0xffffffff || i != 0)
            uint32_t count = sub_1428c37d0(result_2, &var_240)
            sub_1428c3620(result_2)
            bool cond:0_1 = var_208.d == 0xffffffff
            int64_t var_228 = var_240
            int64_t* var_268
            uint32_t count_1
            
            if (cond:0_1)
                count_1 = count
            label_142933777:
                int64_t i_1 = sx.q(i)
                int32_t r14_1 = 0
                void* rbx_4 = &var_208:4 + i_1 * 0x14
                
                if (i_1.d s> 0)
                    do
                        int32_t rdi_1 = count_1 + *(rbx_4 + 0xc)
                        int32_t r8_6 = *rbx_4
                        *(rbx_4 + 0x10) = rdi_1
                        r14_1 += 1
                        rbx_4 -= 0x14
                        count_1 = sub_1428f30c0(0, rdi_1, r8_6)
                    while (r14_1 s< i)
                
                char* rax_24 = sub_1428a6730(sx.q(count_1))
                r14 = rax_24
                
                if (rax_24 != 0)
                    char* var_250 = rax_24
                    
                    if (i s> 0)
                        void var_1e0
                        rbx_4 = &var_1e0
                        
                        do
                            var_268.d = *(rbx_4 - 0xc)
                            sub_1428f3130(&var_250, *(rbx_4 - 8), *rbx_4, *(rbx_4 - 0x10), rbx_4, 
                                var_268.b)
                            
                            if (*(rbx_4 - 4) != 0)
                                *var_250 = 0
                                var_250 = &var_250[1]
                            
                            result_1 = zx.q(result_1.d + 1)
                            rbx_4 += 0x14
                        while (result_1.d s< i)
                    
                    int32_t r9_3 = var_208.d
                    
                    if (r9_3 != 0xffffffff)
                        int32_t rcx_22 = var_208:4.d
                        
                        if (rcx_22 == 0 && r9_3 - 0x10 u<= 1)
                            r15 = 0x20
                        
                        var_268.d = rcx_22
                        sub_1428f3130(&var_250, r15, var_258, r9_3, rbx_4, var_268.b)
                    
                    memcpy(var_250, var_228, count)
                    char* var_210 = r14
                    result_1 = sub_1428c3730(nullptr, &var_210, count_1)
            else
                var_268.d = count
                void var_220
                void var_21c
                int32_t rax_18 = sub_1428f2ef0(&var_228, &var_258, &var_21c, &var_220, var_268.d)
                
                if (rax_18.b s>= 0)
                    count += var_240.d - var_228.d
                    
                    if ((rax_18.b & 1) == 0)
                        r15 = rax_18 & 0x20
                        count_1 = sub_1428f30c0(0, var_258, var_208.d)
                    else
                        int32_t r8_4 = var_208.d
                        var_258 = 0
                        r15 = 2
                        count_1 = sub_1428f30c0(0, 0, r8_4)
                    
                    goto label_142933777
            sub_1428a6780(var_240)
            sub_1428a6780(r14)
            result = result_1
        else
            result = result_2
    else if (arg2 != 0)
        if (arg3 s< 0x32)
            result_2 = nullptr
            int64_t var_248 = 0
            int32_t* rax_5 = sub_142898ba0()
            int64_t rcx_11
            
            if (rax_5 == 0)
            labelid_32:
                rcx_11 = var_248
            else if (var_1f8 == 0)
            label_142933629:
                int64_t* rdx_5 = &var_248
                int32_t rax_14
                
                if (var_200 != 0x11)
                    rax_14 = sub_1428c3790(rax_5, rdx_5)
                else
                    rax_14 = sub_1428c37b0(rax_5, rdx_5)
                
                if (rax_14 s< 0)
                labelid_32:
                    rcx_11 = var_248
                else
                    int32_t* result_3 = sub_1428c3640()
                    result_2 = result_3
                    
                    if (result_3 == 0)
                    label_142933683:
                        rcx_11 = var_248
                    else
                        void* rax_15 = sub_1428f2e90(var_200)
                        *(result_2 + 8) = rax_15
                        
                        if (rax_15 == 0)
                        label_142933683_1:
                            rcx_11 = var_248
                        else
                            *result_2 = var_200
                            *(rax_15 + 8) = var_248
                            rcx_11 = 0
                            **(result_2 + 8) = rax_14
                            var_248 = 0
            else
                char* rax_6 = sub_1428f8e70(arg2, var_1f8)
                r14 = rax_6
                
                if (rax_6 != 0)
                    int32_t rbx_2 = 0
                    
                    if (sub_142898c70(rax_6) s> 0)
                        int32_t rax_13
                        
                        do
                            int64_t rax_11 = sub_1429334a0(*(sub_142898ea0(r14, rbx_2) + 0x10), 
                                arg2, zx.q(arg3 + 1), arg4)
                            
                            if (rax_11 == 0)
                                goto label_142933683_2
                            
                            if (sub_142898d50(rax_5, rax_11) == 0)
                                goto label_142933683_2
                            
                            rbx_2 += 1
                            rax_13 = sub_142898c70(r14)
                        while (rbx_2 s< rax_13)
                    
                    goto label_142933629
                
            label_142933683_2:
                rcx_11 = var_248
            
            sub_1428a6780(rcx_11)
            sub_142898cb0(rax_5, sub_1428c3620)
            sub_1428f8ed0(arg2, r14)
            r14 = nullptr
            goto label_1429336c1
        
        *arg4 = 0xb5
        result = nullptr
    else
        *arg4 = 0xc0
        result = nullptr
__security_check_cookie(rax_1 ^ &var_288)
return result
