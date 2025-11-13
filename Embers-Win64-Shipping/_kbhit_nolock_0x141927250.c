// 函数: _kbhit_nolock
// 地址: 0x141927250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
*arg1 = 0
arg1[1] = 0
uint64_t rcx = zx.q(*(arg2 + 0x10))
var_28 = 0
data_143effdd8(rcx, 0x8b85, &var_28)
int64_t rdx = sx.q(var_28)

if (rdx.d s> 0)
    int64_t rax_3 = rdx << 2
    int64_t rcx_1 = rax_3 + 0xf
    
    if (rcx_1 u<= rax_3)
        rcx_1 = 0xffffffffffffff0
    
    int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
    __chkstk(rcx_2)
    *(arg2 + 0x10)
    void var_48
    void* rdi = &var_48 - rcx_2 + 0x20
    data_143effdc8(nop)
    int32_t rsi = 0
    
    if (var_28 s> 0)
        do
            uint64_t rcx_4 = zx.q(*rdi)
            int32_t var_24 = 0
            data_143effde8(rcx_4, 0x8b88, &var_24)
            int32_t rax_5 = var_24
            
            if (rax_5 s> 0)
                char* rax_7
                int512_t zmm0_1
                rax_7, zmm0_1 = j_sub_140a82f30(sx.q(rax_5 + 1))
                *rdi
                data_143effdf8(nop)
                int64_t r8_4 = -1
                
                do
                    r8_4 += 1
                while (rax_7[r8_4] != 0)
                
                sub_140a20b00(arg1, rax_7, r8_4.d)
                j_sub_140a74f90(rax_7)
            
            rsi += 1
            rdi += 4
        while (rsi s< var_28)

__security_check_cookie(rax_1 ^ &var_28)
return arg1
