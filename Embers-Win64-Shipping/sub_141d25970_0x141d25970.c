// 函数: sub_141d25970
// 地址: 0x141d25970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int32_t rax = sub_141d1f690(arg1, data_143f36fc8)
int64_t rdx_1 = data_143f36fd0
int64_t r14 = 0
int64_t var_38 = 0
int64_t var_30 = 0
int64_t rbx = sx.q(rax)
int32_t rax_1 = sub_141d1f690(arg1, rdx_1)

if (rax_1 s> var_30:4.d)
    sub_1405dadb0(&var_38, rax_1)

int64_t rdx_3 = data_143f36fc0
int64_t var_48 = 0
int64_t var_40 = 0
int32_t rax_2 = sub_141d1f690(arg1, rdx_3)

if (rax_2 s> var_40:4.d)
    sub_1405dadb0(&var_48, rax_2)

if (rbx.d s> 0)
    do
        int64_t r12_1 = sx.q(*(*rdi + (r14 << 2)))
        int32_t i = *(*(arg1 + 0x2e0) + (r12_1 << 2))
        
        for (int32_t rsi_2 = *(*(arg1 + 0x2f8) + (r12_1 << 2)) + i; i s< rsi_2; i += 1)
            int64_t rbx_1 = sx.q(var_30.d)
            int32_t rax_6 = (rbx_1 + 1).d
            var_30.d = rax_6
            
            if (rax_6 s> var_30:4.d)
                sub_1405a4cf0(&var_38)
            
            *(var_38 + (rbx_1 << 2)) = i
        
        int32_t i_1 = *(*(arg1 + 0x310) + (r12_1 << 2))
        
        for (int32_t rsi_4 = *(*(arg1 + 0x328) + (r12_1 << 2)) + i_1; i_1 s< rsi_4; i_1 += 1)
            int64_t rbx_2 = sx.q(var_40.d)
            int32_t rax_10 = (rbx_2 + 1).d
            var_40.d = rax_10
            
            if (rax_10 s> var_40:4.d)
                sub_1405a4cf0(&var_48)
            
            *(var_48 + (rbx_2 << 2)) = i_1
        
        rdi = arg2
        r14 += 1
    while (r14 s< rbx)

sub_141d256e0(arg1, data_143f36fd0, &var_38)
sub_141d256e0(arg1, data_143f36fc0, &var_48)
int64_t result = sub_141d256e0(arg1, data_143f36fc8, rdi)
int64_t rcx_9 = var_48

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_38

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
