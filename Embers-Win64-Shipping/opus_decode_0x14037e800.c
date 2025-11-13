// 函数: opus_decode
// 地址: 0x14037e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
float var_18
int64_t rax_1 = __security_cookie ^ &var_18
void* rsi = arg4
uint64_t result

if (arg5 s> 0)
    int64_t rcx_1 = sx.q(*(arg1 + 8) * arg5) << 2
    int64_t rax_4 = rcx_1 + 0xf
    
    if (rax_4 u<= rcx_1)
        rax_4 = 0xffffffffffffff0
    
    int64_t rax_5 = rax_4 & 0xfffffffffffffff0
    __chkstk(rax_5)
    void var_68
    void* rsp_1 = &var_68 - rax_5
    *(rsp_1 + 0x40) = 1
    int32_t i = 0
    void* rbx = rsp_1 + 0x50
    *(rsp_1 + 0x38) = 0
    *(rsp_1 + 0x30) = 0
    *(rsp_1 + 0x28) = arg6
    *(rsp_1 + 0x20) = arg5
    int32_t result_1 = sub_14037f5a0(arg1, arg2, arg3, rbx)
    
    if (result_1 s> 0 && *(arg1 + 8) * result_1 s> 0)
        do
            float zmm0_1 = *rbx * 32768f
            
            if (not(zmm0_1 > -32768f))
                zmm0_1 = -32768f
            else if (not(32767f > zmm0_1))
                zmm0_1 = 32767f
            
            var_18 = zmm0_1
            i += 1
            rbx += 4
            rsi += 2
            *(rsi - 2) = (int.d(var_18)).w
        while (i s< *(arg1 + 8) * result_1)
    
    result = zx.q(result_1)
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_18)
return result
