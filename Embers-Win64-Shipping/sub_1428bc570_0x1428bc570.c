// 函数: sub_1428bc570
// 地址: 0x1428bc570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
__chkstk(0x40)
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t lpnLengthNeeded
int64_t rax_1 = __security_cookie ^ &lpnLengthNeeded
int64_t lpnLengthNeeded_1 = data_143fecb28

if (lpnLengthNeeded_1 != 0)
    goto label_1428bc6c0

HMODULE hModule = GetModuleHandleW(nullptr)

if (hModule == 0)
    lpnLengthNeeded_1 = lpnLengthNeeded
else
    lpnLengthNeeded_1 = GetProcAddress(hModule, "_OPENSSL_isservice")

uint64_t result

if (lpnLengthNeeded_1 != 0)
    data_143fecb28 = lpnLengthNeeded_1
label_1428bc6c0:
    
    if (lpnLengthNeeded_1 == -1)
        goto label_1428bc5e1
    
    result = lpnLengthNeeded_1()
else
    data_143fecb28 = -1
label_1428bc5e1:
    HWINSTA hObj = GetProcessWindowStation()
    
    if (hObj == 0)
        result = 0xffffffff
    else if (GetUserObjectInformationW(hObj, UOI_NAME, nullptr, 0, &lpnLengthNeeded) != 0)
        result = 0xffffffff
    else if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
        result = 0xffffffff
    else
        int32_t rax_4 = lpnLengthNeeded.d
        
        if (rax_4 u> 0x200)
            result = 0xffffffff
        else
            uint64_t rax_6 = zx.q(rax_4 + 1) & 0xfffffffe
            lpnLengthNeeded.d = rax_6.d
            int64_t rcx_3 = rax_6 + 0x11
            
            if (rcx_3 u<= rax_6 + 2)
                rcx_3 = 0xffffffffffffff0
            
            int64_t rcx_4 = rcx_3 & 0xfffffffffffffff0
            __chkstk(rcx_4)
            void var_48
            void* rsp_1 = &var_48 - rcx_4
            *(rsp_1 + 0x20) = &lpnLengthNeeded
            
            if (GetUserObjectInformationW(nop) == 0)
                result = 0xffffffff
            else
                uint64_t rdx_4 = zx.q(lpnLengthNeeded.d + 1) & 0xfffffffe
                lpnLengthNeeded.d = rdx_4.d
                *(rsp_1 + 0x30 + (rdx_4 u>> 1 << 1)) = 0
                int32_t result_1
                result_1.b = wcsstr(rsp_1 + 0x30, u"Service-0x") != 0
                result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &lpnLengthNeeded)
return result
