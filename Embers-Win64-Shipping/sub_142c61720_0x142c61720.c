// 函数: sub_142c61720
// 地址: 0x142c61720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* var_40 = nullptr
char* _EndPtr = nullptr
char* r12 = nullptr
char* _EndPtr_2 = nullptr
int32_t r14 = arg4
char* rax = strstr(arg3, "://")
char var_48_1
void* string

if (rax == 0)
    string = arg3
label_142c6198a:
    
    if (r14 - 4 u<= 3)
        var_48_1 = 1
    else
        var_48_1 = 0
else
    string = &rax[3]
    
    if (j_sub_142c704d0("https", arg3, 5) == 0)
        if (j_sub_142c704d0("socks5h", arg3, 7) == 0)
            if (j_sub_142c704d0("socks5", arg3, 6) == 0)
                if (j_sub_142c704d0("socks4a", arg3, 7) == 0)
                    int32_t rax_12 = j_sub_142c704d0("socks4", arg3, 6)
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = j_sub_142c704d0("socks", arg3, zx.q(rax_12 + 5))
                    
                    if (rax_12 == 0 && rax_13 == 0)
                        if (j_sub_142c704d0("http:", arg3, zx.q(rax_13 + 5)) != 0)
                            goto label_142c6198a
                        
                        sub_142c64760(arg1, "Unsupported proxy scheme for '%s'", arg3, arg5)
                        return 7
                    
                    r14 = 4
                    var_48_1 = 1
                else
                    r14 = 6
                    var_48_1 = 1
            else
                r14 = 5
                var_48_1 = 1
        else
            r14 = 7
            var_48_1 = 1
    else
        r14 = 2
        var_48_1 = 0

char* rax_3
int64_t r8
rax_3, r8 = strchr(string, 0x40)

if (rax_3 != 0)
    int32_t result
    result, r8 = sub_142c61500(string, rax_3 - string, &var_40, &_EndPtr, nullptr)
    
    if (result != 0)
        return result
    
    r12 = var_40
    string = &rax_3[1]
    _EndPtr_2 = _EndPtr

void* string_1 = string

if (*string == 0x5b)
    string += 1
    string_1 = string
    
    if (*string != 0)
        do
            int32_t rax_4
            rax_4, r8 = isxdigit(zx.d(*string_1))
            
            if (rax_4 == 0)
                char rax_5 = *string_1
                
                if (rax_5 != 0x3a && rax_5 != 0x2e)
                    break
            
            string_1 += 1
        while (*string_1 != 0)
    
    if (*string_1 == 0x25)
        int32_t rax_6
        rax_6, r8 = strncmp("%25", string_1, 3)
        
        if (rax_6 != 0)
            r8, arg5 =
                sub_142c64850(arg1, "Please URL encode %% as %%25, see RFC 6874.\n", r8, arg5)
        
        char i = *(string_1 + 1)
        string_1 += 1
        
        while (i != 0)
            int32_t rax_7
            rax_7, r8 = isalpha(zx.d(i))
            
            if (rax_7 == 0)
                int32_t rax_8
                rax_8, r8 = isxdigit(zx.d(*string_1))
                
                if (rax_8 == 0)
                    char rcx_7 = *string_1
                    
                    if (rcx_7 - 0x2d u> 1 && rcx_7 != 0x5f && rcx_7 != 0x7e)
                        break
            
            i = *(string_1 + 1)
            string_1 += 1
    
    if (*string_1 != 0x5d)
        arg5 = sub_142c64850(arg1, "Invalid IPv6 address format\n", r8, arg5)
    else
        *string_1 = 0
        string_1 += 1

char* rax_16 = strchr(string_1, 0x3a)
int32_t rdi_1

if (rax_16 == 0)
    if (*string == 0x2f)
        data_143ccb8a0(r12)
        data_143ccb8a0(_EndPtr_2)
        return 5
    
    char* rax_19 = strchr(string, 0x2f)
    
    if (rax_19 != 0)
        *rax_19 = 0
    
    rdi_1 = *(arg1 + 0x270)
    
    if (rdi_1 == 0)
        rdi_1 = 0x438
        
        if (r14 == 2)
            rdi_1 = 0x1bb
else
    _EndPtr = nullptr
    *rax_16 = 0
    rdi_1 = strtol(&rax_16[1], &_EndPtr, 0xa)
    char* _EndPtr_1 = _EndPtr
    
    if (_EndPtr_1 != 0)
        char rax_18 = *_EndPtr_1
        
        if (rax_18 u> 0x2f || not(test_bit(0x800100000001, sx.q(rax_18))) || rdi_1 u> 0xffff)
            sub_142c64850(arg1, "No valid port number in proxy string (%s)\n", &rax_16[1], arg5)
        else
            *(arg2 + 0x178) = rdi_1
    else if (rdi_1 u> 0xffff)
        sub_142c64850(arg1, "No valid port number in proxy string (%s)\n", &rax_16[1], arg5)
    else
        *(arg2 + 0x178) = rdi_1

if (*string != 0)
    char rcx_17 = var_48_1
    void* const rbx_3 = 0x140
    
    if (rcx_17 != 0)
        rbx_3 = 0x108
    
    void* rbx_4 = rbx_3 + arg2
    *(rbx_4 + 0x24) = r14
    
    if (r12 != 0)
        data_143ccb8a0(*(rbx_4 + 0x28), 0x108)
        *(rbx_4 + 0x28) = 0
        *(rbx_4 + 0x28) = sub_142c51f70(arg1, r12, 0, nullptr)
        data_143ccb8a0(r12)
        r12 = nullptr
        
        if (*(rbx_4 + 0x28) == 0)
            data_143ccb8a0(_EndPtr_2)
            return 0x1b
        
        data_143ccb8a0(*(rbx_4 + 0x30))
        *(rbx_4 + 0x30) = 0
        char* rax_21
        
        if (_EndPtr_2 != 0)
            rax_21 = -ffffffffffffffff
            
            do
                rax_21 = &rax_21[1]
            while (*(rax_21 + _EndPtr_2) != 0)
        
        int64_t rax_22
        
        if (_EndPtr_2 == 0 || rax_21 u>= 0x100)
            rax_22 = data_143ccb8b0(&data_1434cce10)
        else
            rax_22 = sub_142c51f70(arg1, _EndPtr_2, 0, nullptr)
        
        *(rbx_4 + 0x30) = rax_22
        data_143ccb8a0(_EndPtr_2)
        _EndPtr_2 = nullptr
        
        if (*(rbx_4 + 0x30) == 0)
            return 0x1b
        
        rcx_17 = var_48_1
        *(arg2 + 0x3f9) = 1
    
    if (rdi_1 s>= 0)
        *(rbx_4 + 0x20) = rdi_1
        
        if (*(arg2 + 0x178) s< 0 || rcx_17 != 0 || *(arg2 + 0x108) == 0)
            *(arg2 + 0x178) = rdi_1
    
    data_143ccb8a0(*rbx_4)
    *rbx_4 = 0
    int64_t rax_23 = data_143ccb8b0(string)
    *rbx_4 = rax_23
    *(rbx_4 + 0x10) = rax_23
    
    if (rax_23 == 0)
        return 0x1b

data_143ccb8a0(r12)
data_143ccb8a0(_EndPtr_2)
return 0
