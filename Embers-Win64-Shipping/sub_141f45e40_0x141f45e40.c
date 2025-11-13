// 函数: sub_141f45e40
// 地址: 0x141f45e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_148
int64_t rax_2 = __security_cookie ^ &var_148
void var_110
sub_141f2cb90(&var_110, arg2, arg3)
void* var_50
void* rcx_1 = var_50
void* r13_1 = &var_110

if (rcx_1 != 0)
    r13_1 = rcx_1

int64_t rbx_1 = 0
int32_t var_48
int64_t rdx = sx.q(var_48) << 3
int64_t var_120_1 = 0
uint64_t rdx_1 = rdx u>> 3

if (r13_1 u> rdx + r13_1)
    rdx_1 = 0

if (rdx_1 != 0)
    int64_t rbp
    int64_t var_10_1 = rbp
    
    do
        void var_128
        sub_140d3a3a0(&var_128, *r13_1)
        int32_t rdi_1 = *(arg1 + 0x220)
        
        if (rdi_1 != 0)
            int32_t r14_1 = 0
            int32_t i = 0
            rbp.b = sub_14077a170(*(arg1 + 0x218), &var_128).b == 0
            
            do
                int64_t i_1 = sx.q(i)
                
                for (i += 1; i s< rdi_1; i += 1)
                    int32_t rcx_6
                    rcx_6.b = sub_14077a170(*(arg1 + 0x218) + (sx.q(i) << 3), &var_128).b == 0
                    
                    if (zx.d(rbp.b) != rcx_6)
                        break
                
                int32_t rsi_3 = i - i_1.d
                
                if (rbp.b != 0)
                    if (r14_1 != i_1.d)
                        int64_t rcx_7 = *(arg1 + 0x218)
                        memmove(rcx_7 + (sx.q(r14_1) << 3), rcx_7 + (i_1 << 3), rsi_3 << 3)
                    
                    r14_1 += rsi_3
                
                rbp.b ^= 1
            while (i s< rdi_1)
            
            rbx_1 = var_120_1
            *(arg1 + 0x220) = r14_1
        
        rbx_1 += 1
        r13_1 += 8
        var_120_1 = rbx_1
    while (rbx_1 != rdx_1)
    
    rcx_1 = var_50

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

__security_check_cookie(rax_2 ^ &var_148)
