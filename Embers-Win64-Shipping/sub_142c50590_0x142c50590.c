// 函数: sub_142c50590
// 地址: 0x142c50590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t var_68
uint64_t result = __security_cookie ^ &var_68
uint64_t result_2 = result
int64_t r9 = *(arg1 + 0x58)

if (r9 != 0 && *(arg1 + 0x60) != 0)
    void* rsi_1 = sx.q(*(arg2 + 0x70)) * 0x624 + *(arg1 + 0x400)
    int64_t rcx = *(arg1 + 8)
    var_68 = 0
    int32_t result_1 = 0
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x1c)
    result = r9(rcx, zx.q(*(rsi_1 + 4)), &var_68)
    
    if (result.d == 0)
        result = zx.q(result_1)
        
        if (result.d s>= 2)
            void* rbx = nullptr
            int64_t count = sx.q(((result << 3) + 0x14).d)
            uint64_t _Size = 0
            
            if (count + 0x10 u> count)
                _Size = count + 0x10
            
            if (_Size != 0)
                if (_Size u> 0x400)
                    void* rax_6 = malloc(_Size)
                    rbx = rax_6
                    
                    if (rax_6 != 0)
                        *rax_6 = 0xdddd
                        rbx += 0x10
                else
                    int64_t rax_4 = _Size + 0xf
                    
                    if (rax_4 u<= _Size)
                        rax_4 = 0xffffffffffffff0
                    
                    int64_t rax_5 = rax_4 & 0xfffffffffffffff0
                    __chkstk(rax_5)
                    void var_88
                    rbx = &var_88 - rax_5 + 0x20
                    
                    if (rbx != 0)
                        *rbx = 0xcccc
                        rbx += 0x10
            
            memset(rbx, 0, count)
            *rbx = result_1
            *(rsi_1 + 4)
            *(arg1 + 8)
            result = (*(arg1 + 0x60))(nop)
            
            if (result.d == 0)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = muls.dp.d(0x51eb851f, *(rbx + 0x14))
                int32_t rdx_3 = temp0_1 s>> 5
                *(arg2 + 0x28) = rdx_3 + (rdx_3 u>> 0x1f)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = muls.dp.d(0x51eb851f, *(rbx + 0x18))
                int32_t rdx_6 = temp2_1 s>> 5
                result = zx.q(rdx_6 u>> 0x1f)
                *(arg2 + 0x2c) = rdx_6 + result.d
            
            if (*(rbx - 0x10) == 0xdddd)
                result = free(rbx - 0x10)

__security_check_cookie(result_2 ^ &var_68)
return result
