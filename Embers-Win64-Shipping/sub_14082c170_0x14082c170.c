// 函数: sub_14082c170
// 地址: 0x14082c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
int64_t var_20 = r14
int32_t rbx = 0
int16_t* const r12 = &data_142d40450
int32_t arg_10 = 0
void** i = data_143ce3aa0
int16_t* var_68
int64_t var_50

for (void* r13_2 = &i[sx.q(data_143ce3aa8) * 2]; i != r13_2; i = &i[2])
    if (sub_140834780(i) != 0)
        void* const rsi_1
        
        if (i[1].w != 1)
            rsi_1 = nullptr
        else
            rsi_1 = *i
        
        int32_t rax_3
        int32_t rax_5
        
        if (rsi_1 != 0)
            arg_10.q = *(rsi_1 + 0x18)
            rbx |= 1
            sub_140b63b70(&arg_10, &var_68)
            int16_t* rdx_2
            
            if (arg1[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *arg1
            
            int16_t* const rcx_2 = &data_142d40450
            int32_t var_60
            
            if (var_60 != 0)
                rcx_2 = var_68
            
            rax_3 = sub_140a54510(rcx_2, rdx_2)
            
            if (rax_3 != 0)
                rbx |= 2
                int64_t* rax_4 = sub_140d21830(rsi_1, &var_50, 0, 0)
                int16_t* rdx_4
                
                if (arg1[1].d == 0)
                    rdx_4 = &data_142d40450
                else
                    rdx_4 = *arg1
                
                int16_t* const rcx_4
                
                if (rax_4[1].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *rax_4
                
                rax_5 = sub_140a54510(rcx_4, rdx_4)
        
        if (rsi_1 == 0 || (rax_3 != 0 && rax_5 != 0))
            r14.b = 0
        else
            r14.b = 1
        
        if ((rbx.b & 2) != 0)
            int64_t rcx_5 = var_50
            rbx &= 0xfffffffd
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
        
        if ((rbx.b & 1) != 0)
            int16_t* rcx_6 = var_68
            rbx &= 0xfffffffe
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
        
        if (r14.b != 0)
            if (rsi_1 != 0)
                return *(rsi_1 + 0x118)
            
            break

bool cond:0_1 = arg1[1].d == 0
__builtin_memset(&var_68, 0, 0x18)

if (not(cond:0_1))
    r12 = *arg1

sub_140b58260(&arg_10, r12, 1)
var_68 = arg_10.q
int32_t var_40
sub_140be09b0(&var_40, 2, &var_68)
int32_t rcx_9
rcx_9.b = sub_140b5b8a0(var_40, 0) == 0
int32_t var_3c
int32_t var_30

if ((var_3c != 0 | rcx_9.b) == 0)
    int32_t rcx_10
    rcx_10.b = sub_140b5b8a0(var_30, 0) == 0
    int32_t var_2c
    
    if ((var_2c != 0 | rcx_10.b) == 0)
        return 0

int64_t var_60_1
int64_t var_58
int64_t var_38

if (var_68 == var_40.q && var_60_1 == var_38 && var_58 == var_30.q)
    return 0

int64_t result = sub_14082c170(sub_140b63b70(&var_40, &var_50))
int64_t rcx_13 = var_50

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return result
