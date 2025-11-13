// 函数: sub_140d19360
// 地址: 0x140d19360
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
void var_98
void* rsp_1 = &var_98
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
char var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t rax_2 = *(arg4 + 0xb0)
void* var_48 = arg1
void* r12 = arg1
void** result

if (not(test_bit(rax_2, 0xa)))
    result = sub_140d152d0(arg1, arg4, arg2, arg3, sub_140d275a0)
else
    char var_64_1
    char rsi
    
    if ((rax_2 & 0x12051cc) == 0)
        rsi = 2
        var_64_1 = 2
    else
        char rax_4 = (*(*arg1 + 0x218))(arg5, arg4, arg2)
        rsi = rax_4
        var_64_1 = rax_4
    
    int64_t r13 = 0
    
    if ((rsi & 1) != 0)
        uint64_t count = zx.q(*(arg4 + 0xb6))
        void* r14
        
        if (count.w != 0)
            int64_t rcx = count + 0x1e
            
            if (rcx u<= count + 0xf)
                rcx = 0xffffffffffffff0
            
            int64_t rcx_1 = rcx & 0xfffffffffffffff0
            __chkstk(rcx_1)
            rsp_1 = &var_98 - rcx_1
            r14 = (rsp_1 + 0x3f) & 0xfffffffffffffff0
        else
            r14 = nullptr
        
        r13 = *(arg2 + 0x20)
        memset(r14, 0, count)
        void* rax_7 = *(arg4 + 0x50)
        void* var_60 = arg4
        int32_t var_50_1 = 0xffffffff
        int16_t var_4c_1 = 0x101
        char var_4a_1 = 0
        sub_1406328d0(&var_60)
        void* rbx_1 = rax_7
        
        if (rbx_1 != 0)
            while ((zx.q(*(rbx_1 + 0x40)) & 0x480) == 0x80)
                void* rsi_2 = sx.q(*(rbx_1 + 0x4c)) + r14
                
                if (((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x11).b & 1) == 0 || *(rbx_1 + 0x38) != 1)
                    char* rax_15 = *(arg2 + 0x20)
                    uint32_t rcx_9 = zx.d(*rax_15)
                    *(arg2 + 0x20) = &rax_15[1]
                    (&data_143e1cd60)[zx.q(rcx_9)](*(arg2 + 0x18), arg2, rsi_2)
                else
                    char* rax_11 = *(arg2 + 0x20)
                    var_68 = 0
                    uint32_t rcx_6 = zx.d(*rax_11)
                    *(arg2 + 0x20) = &rax_11[1]
                    (&data_143e1cd60)[zx.q(rcx_6)](*(arg2 + 0x18), arg2, &var_68)
                    
                    if (var_68 != 0)
                        char* rcx_8 = zx.q(*(rbx_1 + 0x79))
                        *(rcx_8 + rsi_2) =
                            (not.b(*(rbx_1 + 0x7b)) & *(rcx_8 + rsi_2)) | *(rbx_1 + 0x7a)
                
                void* rax_18 = *(rbx_1 + 0x20)
                sub_1406328d0(&var_60)
                rbx_1 = rax_18
                
                if (rbx_1 == 0)
                    break
            
            r12 = var_48
            rsi = var_64_1
        
        int64_t rax_19 = *r12
        *(arg2 + 0x78)
        *(rsp_1 + 0x20) = arg2
        (*(rax_19 + 0x220))(nop)
    
    if ((rsi & 2) == 0)
        result = sub_140d2c970(r12, arg2, arg3, arg4)
    else
        if (r13 != 0)
            *(arg2 + 0x20) = r13
        
        result = sub_140be1ca0(arg4, r12, arg2, arg3)

__security_check_cookie(rax_1 ^ &var_68)
return result
