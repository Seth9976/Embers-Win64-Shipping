// 函数: sub_142c7f8e0
// 地址: 0x142c7f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* rsi = *arg1
int64_t* var_170 = nullptr
char* string = *(rsi + 0xa80) + 4
int64_t r8 = data_143ccb8a0(arg1[0xee])
int32_t rax_2 = *(arg1 + 0x744)
arg1[0xee] = 0
uint64_t result
void* var_198_1
int32_t var_168

if (rax_2 == 0 && arg2 == 0xe5)
    char* rax_3
    int64_t r8_1
    rax_3, r8_1 = strchr(string, rax_2 + 0x28)
    
    if (rax_3 == 0)
        sub_142c64760(rsi, "Weirdly formatted EPSV reply", r8_1, arg3)
        result = 0xd
    else
        void* rbx_2 = &rax_3[1]
        void var_175
        void* var_188_1 = &var_175
        int32_t* var_190_1 = &var_168
        void var_176
        var_198_1 = &var_176
        int32_t var_178
        int32_t rax_4
        rax_4, r8_1 = sub_1425f29b0(rbx_2, "%c%c%c%u%c", &var_178)
        
        if (rax_4 != 5)
            sub_142c64760(rsi, "Weirdly formatted EPSV reply", r8_1, arg3)
            result = 0xd
        else
            for (int64_t i = 1; i s< 4; i += 1)
                if (*(&var_178 + i) != var_178.b)
                    rbx_2 = nullptr
                    break
            
            int32_t rax_6 = var_168
            
            if (rax_6 u> 0xffff)
                sub_142c64760(rsi, "Illegal port number in EPSV reply", r8_1, arg3)
                result = 0xd
            else if (rbx_2 == 0)
                sub_142c64760(rsi, "Weirdly formatted EPSV reply", r8_1, arg3)
                result = 0xd
            else
                arg1[0xef].w = rax_6.w
                void* rcx_4
                
                if (*(arg1 + 0x401) == 0)
                    rcx_4 = &arg1[0x11]
                
                if (*(arg1 + 0x401) != 0 || *(arg1 + 0x3f7) != 0)
                    rcx_4 = arg1[0x1a]
                
                int64_t rax_7 = data_143ccb8b0(rcx_4)
                arg1[0xee] = rax_7
                
                if (rax_7 != 0)
                    goto label_142c7fba4
                
                result = 0x1b
else if (rax_2 != 1 || arg2 != 0xe3)
    if (rax_2 != 0)
        sub_142c64760(rsi, "Bad PASV/EPSV response: %03d", zx.q(arg2), arg3)
        result = 0xd
    else
        result = sub_142c7e5c0(arg1)
else if (*string == 0)
label_142c7fad8:
    sub_142c64760(rsi, "Couldn't interpret the 227-response", r8, arg3)
    result = 0xe
else
    int32_t* var_190_2
    int16_t var_164
    int32_t var_160
    int32_t var_158
    int32_t var_154
    
    while (true)
        int16_t* var_180_1 = &var_164
        int32_t* var_188_2 = &var_168
        var_190_2 = &var_154
        var_198_1 = &var_158
        int32_t rax_8
        rax_8, r8 = sub_1425f29b0(string, "%d,%d,%d,%d,%d,%d", &var_160)
        
        if (rax_8 == 6)
            break
        
        string = &string[1]
        
        if (*string == 0)
            goto label_142c7fad8
    
    if (*string == 0)
        goto label_142c7fad8
    
    int64_t rax_12
    
    if (*(rsi + 0x608) == 0)
        var_198_1.d = var_154
        rax_12, arg3 = sub_142c563e0("%d.%d.%d.%d", zx.q(var_160), arg3)
    else
        int64_t var_188_3 = arg1[0x1a]
        var_190_2.d = var_154
        var_198_1.d = var_158
        arg3 = sub_142c64850(rsi, "Skip %d.%d.%d.%d for data connection, re-use %s instead\n", 
            zx.q(var_160), arg3)
        void* rcx_9
        
        if (*(arg1 + 0x401) == 0)
            rcx_9 = &arg1[0x11]
        
        if (*(arg1 + 0x401) != 0 || *(arg1 + 0x3f7) != 0)
            rcx_9 = arg1[0x1a]
        
        rax_12 = data_143ccb8b0(rcx_9)
    
    arg1[0xee] = rax_12
    
    if (rax_12 == 0)
        result = 0x1b
    else
        arg1[0xef].w = var_168.w * 0x100 + var_164
    label_142c7fba4:
        int64_t* rdx_6
        int16_t r14_1
        int512_t zmm2
        
        if (*(arg1 + 0x3f5) == 0)
            int32_t rax_15
            rax_15, zmm2 = sub_142c5a570(arg1, arg1[0xee], zx.d(arg1[0xef].w), &var_170, arg3)
            
            if (rax_15 == 1)
                zmm2 = sub_142c59970(arg1, &var_170, zmm2)
            
            rdx_6 = var_170
            r14_1 = arg1[0xef].w
            
            if (rdx_6 != 0)
            label_142c7fcb1:
                *(arg1 + 0x3fe) = 0
                int32_t result_1
                int512_t zmm2_1
                result_1, zmm2_1 = sub_142c65390(arg1, rdx_6, zmm2)
                
                if (result_1 == 0)
                    if (*(rsi + 0x5f0) != 0)
                        int64_t rbx_5 = arg1[0xee]
                        void var_148
                        int512_t zmm2_2 = sub_142c5a530(*var_170, &var_148, 0x100, zmm2_1)
                        var_198_1.d = zx.d(r14_1)
                        sub_142c64850(*arg1, "Connecting to %s (%s) port %d\n", rbx_5, zmm2_2)
                    
                    sub_142c5a710(rsi, var_170)
                    data_143ccb8a0(arg1[0x1c])
                    arg1[0x1c] = 0
                    *(arg1 + 0x184) = arg1[0xef].w
                    int64_t rax_18 = data_143ccb8b0(arg1[0xee])
                    arg1[0x1c] = rax_18
                    
                    if (rax_18 != 0)
                        *(arg1 + 0x3fc) = 1
                        result = 0
                        arg1[0xea].d = 0
                    else
                        result = 0x1b
                else
                    sub_142c5a710(rsi, var_170)
                    
                    if (*(arg1 + 0x744) != 0 || arg2 != 0xe5)
                        result = zx.q(result_1)
                    else
                        result = sub_142c7e5c0(arg1)
            else
                sub_142c64760(rsi, "Can't resolve new host %s:%hu", arg1[0xee], zmm2)
                result = 0xf
        else
            char* rbx_3
            
            if (*(arg1 + 0x3f7) == 0)
                rbx_3 = arg1[0x2a]
            else
                rbx_3 = arg1[0x23]
            
            int32_t rax_14
            rax_14, zmm2 = sub_142c5a570(arg1, rbx_3, arg1[0x2f].d, &var_170, arg3)
            
            if (rax_14 == 1)
                zmm2 = sub_142c59970(arg1, &var_170, zmm2)
            
            rdx_6 = var_170
            r14_1 = arg1[0x2f].w
            
            if (rdx_6 != 0)
                goto label_142c7fcb1
            
            sub_142c64760(rsi, "Can't resolve proxy host %s:%hu", rbx_3, zmm2)
            result = 5
__security_check_cookie(rax_1 ^ &var_1b8)
return result
