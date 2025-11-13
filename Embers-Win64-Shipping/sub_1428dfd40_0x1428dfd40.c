// 函数: sub_1428dfd40
// 地址: 0x1428dfd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
__chkstk(0x40)
void var_48
void* rsp_1 = &var_48
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
uint64_t hProv
int64_t rax_1 = __security_cookie ^ &hProv
int512_t zmm0
int512_t zmm1
int512_t zmm2
int512_t zmm3
zmm0, zmm1, zmm2, zmm3 = sub_1428df6c0(arg1, "capi_ctx_set_provname, name=%s, type=%d\n", arg2)

if (arg4 == 0)
    goto label_1428dfe42

int32_t rax_2 = MultiByteToWideChar(0, 0, arg2, 0xffffffff, nullptr, 0)
int64_t result

if (rax_2 == 0)
label_1428dfe87:
    int32_t rax_8 = data_143fecca8
    
    if (rax_8 == 0)
        rax_8 = sub_1428a5060()
        data_143fecca8 = rax_8
    
    *(rsp_1 + 0x20) = 0x66f
    sub_1428a5670(zx.q(rax_8), 0x66, 0x68, "engines\e_capi.c")
    sub_1428df7e0()
    result = 0
else
    uint64_t rcx_1 = zx.q(rax_2) * 2
    int64_t rax_3 = rcx_1 + 0xf
    
    if (rax_3 u<= rcx_1)
        rax_3 = 0xffffffffffffff0
    
    int64_t rax_4 = rax_3 & 0xfffffffffffffff0
    __chkstk(rax_4)
    rsp_1 = &var_48 - rax_4
    *(rsp_1 + 0x28) = rax_2
    *(rsp_1 + 0x20) = rsp_1 + 0x30
    MultiByteToWideChar(nop)
    
    if (rsp_1 == -0x30)
        goto label_1428dfe87
    
    *(rsp_1 + 0x20) = 0xf0000000
    
    if (CryptAcquireContextW(nop) == 0)
        goto label_1428dfe87
    
    CryptReleaseContext(hProv, 0)
label_1428dfe42:
    int64_t rax_6 = sub_1428a6ba0(arg2)
    
    if (rax_6 != 0)
        sub_1428a6780(*(arg1 + 0x18))
        result = 1
        *(arg1 + 0x18) = rax_6
        *(arg1 + 0x20) = arg3
    else
        int32_t rax_7 = data_143fecca8
        
        if (rax_7 == 0)
            rax_7 = sub_1428a5060()
            data_143fecca8 = rax_7
        
        *(rsp_1 + 0x20) = 0x677
        sub_1428a5670(zx.q(rax_7), 0x66, 0x41, "engines\e_capi.c")
        result = 0

__security_check_cookie(rax_1 ^ &hProv)
return result
