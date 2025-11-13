// 函数: sub_142c8bbe0
// 地址: 0x142c8bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
int64_t rbx = *arg2
char* rsi = arg1
int64_t r13
r13.b = 0
uint64_t r12
r12.b = 0
sub_142c8c010(arg2)
int32_t result_1 = 0
uint64_t result

while (true)
    char i = *rsi
    
    while (i != 0)
        if (isspace(zx.d(i)) == 0)
            break
        
        i = rsi[1]
        rsi = &rsi[1]
    
    char i_1 = *rsi
    void var_448
    void* r9_1 = &var_448
    char r11_1 = 0
    void var_548
    void* rdx = &var_548
    char r10_1 = 0
    int32_t r8_1 = 0xff
    
    if (i_1 != 0)
        while (i_1 != 0x3d)
            int32_t rax_3 = r8_1
            r8_1 -= 1
            
            if (rax_3 == 0)
                break
            
            rsi = &rsi[1]
            *rdx = i_1
            rdx += 1
            i_1 = *rsi
            
            if (i_1 == 0)
                break
    
    char rax_4 = *rsi
    void* rsi_1 = &rsi[1]
    *rdx = 0
    
    if (rax_4 == 0x3d)
        if (*rsi_1 == 0x22)
            rsi_1 += 1
            r11_1 = 1
        
        char i_2 = *rsi_1
        int32_t rcx_2 = 0x3ff
        
        while (i_2 != 0)
            int32_t rax_5 = rcx_2
            rcx_2 -= 1
            
            if (rax_5 == 0)
                break
            
            if (i_2 == 0xa || i_2 == 0xd)
                rcx_2 = 0
            else if (i_2 == 0x22)
                if (r10_1 != 0 || r11_1 == 0)
                label_142c8bd4c:
                    r10_1 = 0
                    *r9_1 = i_2
                    r9_1 += 1
                else
                    rcx_2 = 0
            else if (i_2 == 0x2c)
                if (r11_1 != 0)
                    goto label_142c8bd4c
                
                rcx_2 = 0
            else
                if (i_2 != 0x5c || r10_1 != 0)
                    goto label_142c8bd4c
                
                *r9_1 = i_2
                r10_1 = 1
                r9_1 += 1
            
            i_2 = *(rsi_1 + 1)
            rsi_1 += 1
        
        *r9_1 = 0
        void* rdi_1 = rsi_1
        
        if (sub_142c70460(&var_548, "nonce") != 0)
            data_143ccb8a0(*arg2)
            int64_t rax_8 = data_143ccb8b0(&var_448)
            *arg2 = rax_8
            
            if (rax_8 != 0)
                goto label_142c8befa
            
            result = 0x1b
            break
        
        if (sub_142c70460(&var_548, "stale") != 0)
            if (sub_142c70460(&var_448, "true") != 0)
                *(arg2 + 0x1c) = 1
                arg2[7].d = 1
            
            goto label_142c8befa
        
        if (sub_142c70460(&var_548, "realm") != 0)
            data_143ccb8a0(arg2[2])
            int64_t rax_12 = data_143ccb8b0(&var_448)
            arg2[2] = rax_12
            
            if (rax_12 != 0)
                goto label_142c8befa
            
            result = 0x1b
            break
        
        if (sub_142c70460(&var_548, "opaque") != 0)
            data_143ccb8a0(arg2[4])
            int64_t rax_14 = data_143ccb8b0(&var_448)
            arg2[4] = rax_14
            
            if (rax_14 != 0)
                goto label_142c8befa
            
            result = 0x1b
            break
        
        if (sub_142c70460(&var_548, "qop") != 0)
            int64_t var_558 = 0
            char* rax_16 = data_143ccb8b0(&var_448)
            
            if (rax_16 == 0)
                result = 0x1b
                break
            
            char* i_5 = sub_142c70cb0(rax_16, U",", &var_558)
            char* i_4 = i_5
            
            if (i_5 != 0)
                char* i_3
                
                do
                    if (sub_142c70460(i_4, "auth") == 0)
                        r12 = zx.q(r12.b)
                        
                        if (sub_142c70460(i_4, "auth-int") != 0)
                            r12 = 1
                    else
                        r13 = 1
                    
                    i_3 = sub_142c70cb0(nullptr, U",", &var_558)
                    i_4 = i_3
                while (i_3 != 0)
                result_1 = 0
            
            data_143ccb8a0(rax_16)
            char const* const rcx_21
            
            if (r13.b == 0)
                if (r12.b == 0)
                    goto label_142c8befa
                
                data_143ccb8a0(arg2[5])
                rcx_21 = "auth-int"
                goto label_142c8bedf
            
            data_143ccb8a0(arg2[5])
            rcx_21 = "auth"
        label_142c8bedf:
            int64_t rax_19 = data_143ccb8b0(rcx_21)
            arg2[5] = rax_19
            
            if (rax_19 != 0)
                goto label_142c8befa
            
            result = 0x1b
            break
        
        if (sub_142c70460(&var_548, "algorithm") == 0)
            goto label_142c8befa
        
        data_143ccb8a0(arg2[6])
        int64_t rax_22 = data_143ccb8b0(&var_448)
        arg2[6] = rax_22
        
        if (rax_22 == 0)
            result = 0x1b
            break
        
        if (sub_142c70460(&var_448, "MD5-sess") == 0)
            if (sub_142c70460(&var_448, "MD5") != 0)
                arg2[3].d = 0
                goto label_142c8befa
        else
            arg2[3].d = 1
        label_142c8befa:
            
            if (*rsi_1 != 0)
                do
                    if (isspace(zx.d(*rdi_1)) == 0)
                        break
                    
                    rdi_1 += 1
                while (*rdi_1 != 0)
            
            rsi = rdi_1 + 1
            
            if (*rdi_1 != 0x2c)
                rsi = rdi_1
                continue
            else
                continue
    else if (rbx == 0 || *(arg2 + 0x1c) != 0)
        if (*arg2 == 0)
            result_1 = 0x3d
        
        result = zx.q(result_1)
        break
    
    result = 0x3d
    break

__security_check_cookie(rax_1 ^ &var_578)
return result
