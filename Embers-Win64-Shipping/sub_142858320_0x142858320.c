// 函数: sub_142858320
// 地址: 0x142858320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x238)
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t* rcx = *(arg1 + 8)
int32_t* var_238 = nullptr
int32_t r15 = 0
int32_t r12 = 0
void* rax_2 = *(rcx + 0xc0)
int32_t rax_3

if ((*(rax_2 + 0x60) & 8) == 0)
    rax_3 = *rcx

int64_t result
int32_t* rdi_1

if ((*(rax_2 + 0x60) & 8) != 0 || rax_3 s< 0x304 || rax_3 == 0x10000)
    int32_t rax_6 = sub_1428671d0(arg1, arg2, &var_238)
    
    if (rax_6 s< 0)
    label_14285858e:
        rdi_1 = var_238
    label_142858593:
        
        if (rdi_1 == 0)
            result = 0
        else
            if (*rdi_1 != *arg1)
                goto label_14285861b
            
            uint64_t count = *(rdi_1 + 0xb8)
            int64_t rsi_2 = *(arg1 + 0x4e0)
            
            if (count != rsi_2)
                goto label_14285861b
            
            if (memcmp(&rdi_1[0x30], &arg1[0x13a], count) != 0)
                goto label_14285861b
            
            char const* const var_248_4
            int32_t var_240_2
            int32_t rdx_5
            int32_t r9_4
            
            if ((arg1[0x156].b & 1) != 0 && rsi_2 == 0)
                var_240_2 = 0x25e
                var_248_4 = "ssl\ssl_sess.c"
                rdx_5 = (rsi_2 + 0x50).d
                r9_4 = 0x115
            label_142858608:
                sub_142856580(arg1, rdx_5, 0xd9, r9_4, var_248_4, var_240_2)
                r15 = 1
                goto label_142858613
            
            int32_t rax_20 = _time64(nullptr)
            rdi_1 = var_238
            
            if (rdi_1[0x46] s< rax_20 - rdi_1[0x47])
                void* rcx_18 = *(arg1 + 0x738)
                *(rcx_18 + 0x84)
                *(rcx_18 + 0x84) += 1
                
                if (r12 != 0)
                    sub_142857c30(*(arg1 + 0x738), var_238, 1)
                
                goto label_142858613
            
            int32_t rcx_21 = **(arg1 + 0xa8) & 0x200
            
            if ((rdi_1[0x74].b & 1) != 0)
                if (rcx_21 != 0)
                    goto label_142858707
                
                var_240_2 = 0x271
                var_248_4 = "ssl\ssl_sess.c"
                rdx_5 = rcx_21 + 0x2f
                r9_4 = rcx_21 + 0x68
                goto label_142858608
            
            if (rcx_21 != 0)
                goto label_14285861b
            
        label_142858707:
            int32_t* rcx_22 = *(arg1 + 8)
            int32_t rax_25
            
            if ((*(*(rcx_22 + 0xc0) + 0x60) & 8) == 0)
                rax_25 = *rcx_22
            
            if ((*(*(rcx_22 + 0xc0) + 0x60) & 8) != 0 || rax_25 s< 0x304 || rax_25 == 0x10000)
                sub_1428574d0(*(arg1 + 0x508))
                *(arg1 + 0x508) = var_238
            
            void* rdx_7 = *(arg1 + 0x738)
            *(rdx_7 + 0x8c) += 1
            result = 1
            arg1[0x16a] = *(*(arg1 + 0x508) + 0x110)
    else
        if (rax_6 s> 1)
            if (rax_6 s> 3)
                goto label_14285858e
            
            int64_t rsi_1 = *(arg2 + 0x28)
            
            if (rsi_1 == 0)
                goto label_14285858e
            
            r12 = 1
            void* rbp_1 = *(arg1 + 0x738)
            rdi_1 = nullptr
            
            if ((*(rbp_1 + 0x48) & 0x100) != 0)
                goto label_1428584e0
            
            int32_t var_228 = *arg1
            
            if (rsi_1 u<= 0x20)
                void var_190
                memcpy(&var_190, arg2 + 0x30, rsi_1.d)
                int64_t var_198_1 = rsi_1
                sub_1428a5c40(*(rbp_1 + 0x378))
                int32_t* rax_9 = sub_1428a8d10(*(*(arg1 + 0x738) + 0x28), &var_228)
                rdi_1 = rax_9
                
                if (rax_9 != 0)
                    rdi_1[0x45]
                    rdi_1[0x45] += 1
                
                sub_1428a5d00(*(*(arg1 + 0x738) + 0x378))
                
                if (rdi_1 == 0)
                    void* rcx_9 = *(arg1 + 0x738)
                    *(rcx_9 + 0x80)
                    *(rcx_9 + 0x80) += 1
                    rbp_1 = *(arg1 + 0x738)
                label_1428584e0:
                    int64_t rax_12 = *(rbp_1 + 0x60)
                    
                    if (rax_12 != 0)
                        int32_t var_230 = 1
                        int32_t* rax_13 = rax_12(arg1, arg2 + 0x30, zx.q(rsi_1.d), &var_230)
                        rdi_1 = rax_13
                        
                        if (rax_13 != 0)
                            void* rcx_11 = *(arg1 + 0x738)
                            *(rcx_11 + 0x90)
                            *(rcx_11 + 0x90) += 1
                            
                            if (var_230 != 0)
                                rdi_1[0x45]
                                rdi_1[0x45] += 1
                            
                            int64_t* rcx_12 = *(arg1 + 0x738)
                            
                            if ((rcx_12[9].d & 0x200) == 0)
                                sub_142857200(rcx_12, rdi_1)
            
            var_238 = rdi_1
            goto label_142858593
        
        r15 = 1
        sub_142856580(arg1, 0x50, 0xd9, 0x44, "ssl\ssl_sess.c", 0x22f)
    label_142858613:
        rdi_1 = var_238
    label_14285861b:
        
        if (rdi_1 != 0)
            sub_1428574d0(rdi_1)
            int32_t* rcx_17 = *(arg1 + 8)
            
            if ((*(*(rcx_17 + 0xc0) + 0x60) & 8) == 0)
                int32_t rax_19 = *rcx_17
                
                if (rax_19 s>= 0x304 && rax_19 != 0x10000)
                    *(arg1 + 0x508) = 0
            
            if (r12 == 0)
                arg1[0x19c] = 1
        
        result = r15 == 0 ? 0 : 0xffffffff
else
    arg1[0x19c] = 1
    int32_t var_240
    var_240.q = 0
    
    if (sub_142875ce0(arg1, 0x12, 0x80, *(arg2 + 0x288), 0, var_240) == 0)
        result = 0xffffffff
    else
        var_240.q = 0
        
        if (sub_142875ce0(arg1, 0x19, 0x80, *(arg2 + 0x288), 0, var_240) != 0)
            rdi_1 = *(arg1 + 0x508)
            var_238 = rdi_1
            goto label_142858593
        
        result = 0xffffffff
__security_check_cookie(rax_1 ^ &var_268)
return result
