// 函数: sub_142c8d8e0
// 地址: 0x142c8d8e0
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
__chkstk(0x50)
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_38 = __security_cookie ^ &var_38
wchar16 const* const lpName = u"RANDFILE"
int32_t r12 = 1
uint32_t nSize_1 = GetEnvironmentVariableW(u"RANDFILE", nullptr, 0)
uint32_t nSize = nSize_1
void* result

if (nSize_1 != 0)
label_142c8d998:
    uint64_t rax_3 = zx.q(nSize) * 2
    int64_t rcx = rax_3 + 0xf
    
    if (rcx u<= rax_3)
        rcx = 0xffffffffffffff0
    
    int64_t rcx_1 = rcx & 0xfffffffffffffff0
    __chkstk(rcx_1)
    void var_78
    void* rsp_1 = &var_78 - rcx_1
    
    if (GetEnvironmentVariableW(lpName, rsp_1 + 0x40, nSize) u>= nSize)
        result = nullptr
    else
        *(rsp_1 + 0x38) = 0
        int64_t rdi = -1
        *(rsp_1 + 0x30) = 0
        *(rsp_1 + 0x28) = 0
        *(rsp_1 + 0x20) = 0
        int32_t rax_6 = WideCharToMultiByte(nop)
        int64_t rdx_2 = sx.q(rax_6)
        
        if (rax_6 == 0)
            result = nullptr
        else
            int64_t rax_7 = rdx_2 + 0xf
            
            if (rax_7 u<= rdx_2)
                rax_7 = 0xffffffffffffff0
            
            int64_t rax_8 = rax_7 & 0xfffffffffffffff0
            __chkstk(rax_8)
            void* rsp_2 = rsp_1 - rax_8
            *(rsp_2 + 0x38) = 0
            void* rbx = rsp_2 + 0x40
            *(rsp_2 + 0x30) = 0
            *(rsp_2 + 0x28) = rdx_2.d
            *(rsp_2 + 0x20) = rbx
            
            if (WideCharToMultiByte(nop) == 0 || rbx == 0 || *rbx == 0)
                result = nullptr
            else
                bool cond:0_1
                
                do
                    cond:0_1 = *(rbx + rdi + 1) != 0
                    rdi += 1
                while (cond:0_1)
                
                if (r12 == 0)
                    if (rdi + 6 u>= arg2)
                        result = nullptr
                    else
                        char* rcx_8 = arg1 - rbx
                        char i
                        
                        do
                            i = *rbx
                            *(rcx_8 + rbx) = i
                            rbx += 1
                        while (i != 0)
                        int16_t* rcx_9 = arg1 - 1
                        bool cond:1_1
                        
                        do
                            cond:1_1 = *(rcx_9 + 1) != 0
                            rcx_9 += 1
                        while (cond:1_1)
                        *rcx_9 = 0x2f
                        void* rcx_10 = arg1 - 1
                        bool cond:2_1
                        
                        do
                            cond:2_1 = *(rcx_10 + 1) != 0
                            rcx_10 += 1
                        while (cond:2_1)
                        __builtin_strncpy(rcx_10, ".rnd", 5)
                        result = arg1
                else if (rdi + 1 u>= arg2)
                    result = nullptr
                else
                    char* rcx_6 = arg1 - rbx
                    char i_1
                    
                    do
                        i_1 = *rbx
                        *(rcx_6 + rbx) = i_1
                        rbx += 1
                    while (i_1 != 0)
                    result = arg1
else
    lpName = u"HOME"
    r12 = 0
    uint32_t nSize_2 = GetEnvironmentVariableW(u"HOME", nullptr, 0)
    nSize = nSize_2
    
    if (nSize_2 != 0)
        goto label_142c8d998
    
    lpName = u"USERPROFILE"
    uint32_t nSize_3 = GetEnvironmentVariableW(u"USERPROFILE", nullptr, 0)
    nSize = nSize_3
    
    if (nSize_3 != 0)
        goto label_142c8d998
    
    lpName = u"SYSTEMROOT"
    uint32_t nSize_4 = GetEnvironmentVariableW(u"SYSTEMROOT", nullptr, 0)
    nSize = nSize_4
    
    if (nSize_4 != 0)
        goto label_142c8d998
    
    result = nullptr

__security_check_cookie(var_38 ^ &var_38)
return result
