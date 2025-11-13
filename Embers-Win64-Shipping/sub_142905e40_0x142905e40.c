// 函数: sub_142905e40
// 地址: 0x142905e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
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
wchar16 _Mode[0x8]
int64_t rax_1 = __security_cookie ^ &_Mode
int64_t rdi = -1
int64_t rbx = -1

do
    rbx += 1
while (arg1[rbx] != 0)

int32_t rax_2 = MultiByteToWideChar(0xfde9, MB_ERR_INVALID_CHARS, arg1, rbx.d + 1, nullptr, 0)
int32_t rdx = rax_2
enum WIN32_ERROR rax_3
int32_t rax_4

if (rax_2 s<= 0)
    rax_3 = GetLastError()
    
    if (rax_3 == ERROR_INVALID_FLAGS)
        rax_4 = MultiByteToWideChar(0xfde9, 0, arg1, rbx.d + 1, nullptr, 0)
        rdx = rax_4

FILE* result

if (rax_2 s> 0 || (rax_3 == ERROR_INVALID_FLAGS && rax_4 s> 0))
    int64_t rax_7 = sx.q(rdx) * 2
    int64_t rcx_1 = rax_7 + 0xf
    
    if (rcx_1 u<= rax_7)
        rcx_1 = 0xffffffffffffff0
    
    int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
    __chkstk(rcx_2)
    void var_88
    void* rsp_1 = &var_88 - rcx_2
    *(rsp_1 + 0x28) = rdx
    *(rsp_1 + 0x20) = rsp_1 + 0x30
    
    if (MultiByteToWideChar(nop) == 0)
        result = nullptr
    else
        bool cond:0_1
        
        do
            cond:0_1 = arg2[rdi + 1] != 0
            rdi += 1
        while (cond:0_1)
        *(rsp_1 + 0x28) = 8
        *(rsp_1 + 0x20) = &_Mode
        
        if (MultiByteToWideChar(nop) == 0)
            result = nullptr
        else
            result = _wfopen(rsp_1 + 0x30, &_Mode)
            
            if (result == 0)
                if (*_errno() == 2)
                    result = fopen(arg1, arg2)
                else if (*_errno() == 9)
                    result = fopen(arg1, arg2)
else if (GetLastError() != ERROR_NO_UNICODE_TRANSLATION)
    result = nullptr
else
    result = fopen(arg1, arg2)

__security_check_cookie(rax_1 ^ &_Mode)
return result
