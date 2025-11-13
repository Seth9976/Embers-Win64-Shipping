// 函数: sub_1403d8a10
// 地址: 0x1403d8a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg4
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rbx_1 = arg3 - arg4
char* result

if (arg3 u>= arg4)
    void* rcx_2
    char* rdx
    
    if (arg2 != 0)
        char var_88[0x40]
        _snscanf(&var_88, 0x32, "Unknown zTXt compression type %d", zx.q(arg2))
        rcx_2 = arg1
        rdx = &var_88
    label_1403d8a82:
        png_warning(rcx_2, rdx)
        goto label_1403d8a8e
    
    int64_t rax_2 = sub_1403d8c00(arg1, *(arg1 + 0x4a0) + rdi, rbx_1, 0, 0)
    int64_t rax_3 = *(arg1 + 0x468)
    
    if (rax_3 != 0 && rax_2 + rdi u>= rax_3 - 1)
        rdx = "Exceeded size limit while expanding chunk"
        rcx_2 = arg1
        goto label_1403d8a82
    
    if (rax_2 == 0)
        goto label_1403d8a8e
    
    char* rax_5 = png_malloc_warn(arg1, rax_2 + rdi + 1)
    
    if (rax_5 == 0)
        rdx = "Not enough memory to decompress chunk"
        rcx_2 = arg1
        goto label_1403d8a82
    
    int64_t rbp_1 = rax_2 + rdi
    int64_t rsi_2 = *(arg1 + 0x4a0)
    memcpy(rax_5, rsi_2, rdi.d)
    int64_t rax_6 = sub_1403d8c00(arg1, rsi_2 + rdi, rbx_1, &rax_5[rdi], rax_2)
    rax_5[rbp_1] = 0
    
    if (rax_6 != rax_2)
        png_warning(arg1, "png_inflate logic error")
        png_free(arg1, rax_5)
        goto label_1403d8a8e
    
    result = png_free(arg1, *(arg1 + 0x4a0))
    *(arg1 + 0x4a0) = rax_5
    rdi = rbp_1
else
    png_warning(arg1, "invalid chunklength")
    rdi = 0
label_1403d8a8e:
    result = png_malloc_warn(arg1, rdi + 1)
    
    if (result != 0)
        char* result_1 = result
        int64_t rsi_1 = *(arg1 + 0x4a0)
        
        if (rdi != 0)
            memcpy(result_1, rsi_1, rdi.d)
        
        result = png_free(arg1, rsi_1)
        *(arg1 + 0x4a0) = result_1
        result_1[rdi] = 0

*arg5 = rdi
__security_check_cookie(rax_1 ^ &var_b8)
return result
