// 函数: sub_141b34b10
// 地址: 0x141b34b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_a8
void* rsp_1 = &var_a8
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_140cea340()
int64_t* i_5 = nullptr
void* rax_3
bool rdx

if (arg3[1] == 0)
    rdx = true
    rax_3 = nullptr
else
    bool cond:0_1 = sub_140d3e110(&arg3[2]) == 0
    rax_3 = arg3[1]
    rdx = cond:0_1

if (rdx == 0 || arg3[4].d == 0)
    goto label_141b34bb2

rax_3 = sub_140cd0630(&arg3[1], nullptr, 0)
int64_t result

if (rax_3 == 0 || (data_143e1b828 & *(*(rax_3 + 8) + 0x10)) == 0)
    if (arg3[1] == 0)
        goto label_141b34cef
    
    arg3[2].d = 0xffffffff
    *(arg3 + 0x14) = 0
    arg3[1] = 0
label_141b34cef:
    int64_t rax_11 = *arg3
    uint64_t count = zx.q(*(rax_11 + 0xb6))
    int64_t rdx_5 = sx.q(*(rax_11 + 0x5c))
    int32_t rax_12 = (count + rdx_5).d
    void* rcx_13
    
    if (rax_12 != 0)
        int64_t rcx_14 = sx.q(rax_12 + 0xf)
        int64_t rax_14 = rcx_14 + 0xf
        
        if (rax_14 u<= rcx_14)
            rax_14 = 0xffffffffffffff0
        
        int64_t rax_15 = rax_14 & 0xfffffffffffffff0
        __chkstk(rax_15)
        rsp_1 = &var_a8 - rax_15
        rcx_13 = (rsp_1 + 0x3f) & 0xfffffffffffffff0
    else
        rcx_13 = nullptr
    
    void* r14_2 = (rdx_5 - 1 + rcx_13) & neg.q(rdx_5)
    memset(r14_2, 0, count)
    int64_t rax_18 = *arg3
    var_78 = rax_18
    int64_t* i_2
    
    if (rax_18 == 0)
        i_2 = nullptr
    else
        i_2 = *(rax_18 + 0x50)
    
    int32_t var_68_1 = 0xffffffff
    int16_t var_64_1 = 0x101
    char var_62_1 = 0
    sub_1406328d0(&var_78)
    int64_t* i_3
    
    for (int64_t* i = i_2; i != 0; i = i_3)
        int64_t rax_19 = i[8]
        
        if (rax_19.b s>= 0)
            break
        
        if (not(test_bit(rax_19, 9)))
            (*(*i + 0xf0))(i, sx.q(*(i + 0x4c)) + r14_2)
        
        i_3 = i[4]
        sub_1406328d0(&var_78)
    
    int64_t* r15_1 = *arg4
    int64_t r12_1 = 0
    uint64_t rcx_22 = sx.q(arg4[1].d) << 3 u>> 3
    
    if (r15_1 u> &r15_1[arg4[1]])
        rcx_22 = 0
    
    if (rcx_22 != 0)
        do
            int64_t rax_23 = *r15_1
            sub_140cea340()
            bool rcx_23
            void* r9
            
            if (arg3[1] == 0)
                rcx_23 = true
                r9 = nullptr
            else
                char rax_24 = sub_140d3e110(&arg3[2])
                r9 = arg3[1]
                rcx_23 = rax_24 == 0
            
            if (rcx_23 != 0 && arg3[4].d != 0)
                void* rax_25 = sub_140cd0630(&arg3[1], nullptr, 0)
                r9 = rax_25
                
                if (rax_25 == 0 || (data_143e1b828 & *(*(rax_25 + 8) + 0x10)) == 0)
                    r9 = arg3[1]
                    
                    if (r9 != 0)
                        arg3[2].d = 0xffffffff
                        r9 = nullptr
                        *(arg3 + 0x14) = 0
                        arg3[1] = 0
                else
                    arg3[1] = r9
            
            *(rsp_1 + 0x28) = arg6
            *(rsp_1 + 0x20) = arg5
            
            if (sub_141b29aa0(arg1, r14_2, rax_23, r9) != 0)
                (*(*arg2 + 0x210))(arg2, *arg3, r14_2)
            
            r15_1 = &r15_1[1]
            r12_1 += 1
        while (r12_1 != rcx_22)
    
    int64_t rax_31 = *arg3
    var_78 = rax_31
    
    if (rax_31 != 0)
        i_5 = *(rax_31 + 0x50)
    
    int32_t var_68_2 = 0xffffffff
    int16_t var_64_2 = 0x101
    char var_62_2 = 0
    result = sub_1406328d0(&var_78)
    int64_t* i_4
    
    for (int64_t* i_1 = i_5; i_1 != 0; i_1 = i_4)
        result = i_1[8]
        
        if (result.b s>= 0)
            break
        
        if ((not.b((result u>> 0x24).b) & 1) != 0)
            (*(*i_1 + 0xe8))(i_1, sx.q(*(i_1 + 0x4c)) + r14_2)
        
        i_4 = i_1[4]
        result = sub_1406328d0(&var_78)
else
    arg3[1] = rax_3
label_141b34bb2:
    
    if (rax_3 == 0)
        goto label_141b34cef
    
    sub_140cea340()
    void* rax_5
    bool rcx_3
    
    if (arg3[1] == 0)
        rcx_3 = true
        rax_5 = nullptr
    else
        bool cond:1_1 = sub_140d3e110(&arg3[2]) == 0
        rax_5 = arg3[1]
        rcx_3 = cond:1_1
    
    if (rcx_3 != 0 && arg3[4].d != 0)
        rax_5 = sub_140cd0630(&arg3[1], nullptr, 0)
        
        if (rax_5 == 0 || (data_143e1b828 & *(*(rax_5 + 8) + 0x10)) == 0)
            rax_5 = arg3[1]
            
            if (rax_5 != 0)
                arg3[2].d = 0xffffffff
                rax_5 = nullptr
                *(arg3 + 0x14) = 0
                arg3[1] = 0
        else
            arg3[1] = rax_5
    
    if (sub_140cc16a0(rax_5 + 0x10, sub_140d41340()) == 0)
        result = 0
    else
        result = *(rax_5 + 0x10)
    
    if (result == *arg3)
        sub_140cea340()
        bool rcx_8
        void* r8
        
        if (arg3[1] == 0)
            rcx_8 = true
            r8 = nullptr
        else
            char rax_9 = sub_140d3e110(&arg3[2])
            r8 = arg3[1]
            rcx_8 = rax_9 == 0
        
        if (rcx_8 != 0 && arg3[4].d != 0)
            void* rax_10 = sub_140cd0630(&arg3[1], nullptr, 0)
            r8 = rax_10
            
            if (rax_10 == 0 || (data_143e1b828 & *(*(rax_10 + 8) + 0x10)) == 0)
                r8 = arg3[1]
                
                if (r8 != 0)
                    arg3[2].d = 0xffffffff
                    r8 = nullptr
                    *(arg3 + 0x14) = 0
                    arg3[1] = 0
            else
                arg3[1] = rax_10
        
        result = *arg3
        
        if (*(r8 + 0x4c) s< zx.d(*(result + 0xb6)))
            goto label_141b34cef

__security_check_cookie(rax_1 ^ &var_78)
return result
