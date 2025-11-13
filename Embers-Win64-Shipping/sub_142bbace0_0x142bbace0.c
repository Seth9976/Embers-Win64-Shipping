// 函数: sub_142bbace0
// 地址: 0x142bbace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t rax_1 = __security_cookie ^ &var_738
void* rbp = *(arg1 + 8)
int64_t* rbx = arg3
uint64_t r15 = zx.q(arg2)
void* r13 = *(rbp + 0x2a0)
int64_t* rsi = *(*(rbp + 0xd0) + 0x50)
int64_t r14 = *(r13 + 0x18)
*(arg1 + 0x690) = *(rbp + 0x264)
*(arg1 + 0x6a0) = *(rbp + 0x274)
int32_t result

if (rsi == 0)
    *arg3 = *(*(rbp + 0x250) + (r15 << 3))
    arg3[1].d = *(*(rbp + 0x258) + (r15 << 2))
label_142bbad83:
    int32_t result_1
    
    if (*(arg1 + 0x5e) == 0)
        arg3.b = 1
        void var_718
        (*(r13 + 0x30))(&var_718, arg1, arg3)
        void var_328
        (*(r13 + 0x38))(rbp, rbp + 0x114, &var_328)
        void* var_3f0_1 = &var_328
        int32_t result_2 = (*(r14 + 0x18))(&var_718, *rbx, zx.q(rbx[1].d))
        result_1 = result_2
        
        if (result_2.b == 0xa4)
            *(*(arg1 + 0x10) + 0xf8) = 0
            *arg4 = 1
            result_1 = (*(r14 + 0x18))(&var_718, *rbx, zx.q(rbx[1].d))
    else
        result_1 = (*(r14 + 0x10))(arg1, *rbx, zx.q(rbx[1].d))
    
    if (result_1 != 0 || rsi == 0 || *(*rsi + 0x10) == 0)
        result = result_1
    else
        int32_t rax_10 = sub_142b96160(*(arg1 + 0x38))
        int32_t rcx_9 = *(arg1 + 0x40)
        int32_t var_338 = rax_10 s>> 0x10
        int32_t var_334_1 = 0
        int32_t rax_12 = sub_142b96160(rcx_9)
        int32_t rax_14 = sub_142b96160(*(arg1 + 0x44))
        result = (*(*rsi + 0x10))(rsi[1], zx.q(r15.d), 0, &var_338)
        *(arg1 + 0x38) = var_338 << 0x10
        *(arg1 + 0x40) = rax_12 s>> 0x10 << 0x10
        *(arg1 + 0x44) = rax_14 s>> 0x10 << 0x10
else
    result, arg3 = (**rsi)(rsi[1], zx.q(r15.d))
    
    if (result == 0)
        goto label_142bbad83

__security_check_cookie(rax_1 ^ &var_738)
return result
