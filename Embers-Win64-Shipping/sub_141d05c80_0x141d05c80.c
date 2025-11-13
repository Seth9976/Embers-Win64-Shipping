// 函数: sub_141d05c80
// 地址: 0x141d05c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

sub_140a4bcc0(u"Mounting pak file: %s \n", rdx)

if (rbx == 0xffffffff)
    int32_t rax_1
    rax_1, arg5 = sub_141d04460(arg2)
    rbx = rax_1

int16_t* rdx_1

if (arg2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg2

uint64_t result = sub_141d093d0(arg1, rdx_1, rbx, nullptr, arg5, 1)

if (result.b == 0 || arg4 == 0)
label_141d05e2e:
    return result

uint64_t rbp_1 = 0
uint64_t var_a8 = 0
int32_t var_a0_1 = 0
int32_t r14_1 = 0
EnterCriticalSection(arg1 + 0x38)
int64_t rsi_1 = sx.q(*(arg1 + 0x18))
int32_t r13_1 = 0
int32_t temp0_1 = rsi_1.d

if (temp0_1 != 0)
    if (temp0_1 s> 0)
        sub_1405a5410(&var_a8, rsi_1.d)
        r14_1 = var_a0_1
        rbp_1 = var_a8
    
    memcpy((sx.q(r14_1) << 4) + rbp_1, *(arg1 + 0x10), (rsi_1 << 4).d)
    r13_1 = r14_1 + rsi_1.d

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

uint64_t rbx_2 = rbp_1
int64_t r14_4 = (sx.q(r13_1) << 4) + rbp_1

if (rbp_1 != r14_4)
    do
        int64_t* rsi_2 = _mm_bsrli_si128(*rbx_2, 8).q
        int16_t* rdx_4
        
        if (rsi_2[2].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = rsi_2[1]
        
        int16_t* const rcx_8
        
        if (arg2[1].d == 0)
            rcx_8 = &data_142d40450
        else
            rcx_8 = *arg2
        
        if (sub_140a54510(rcx_8, rdx_4) == 0)
            void var_98
            sub_141cf7120(&var_98, rsi_2, 0)
            uint64_t var_80
            int32_t i
            int16_t* var_40
            
            while (i s< *(var_80 + 8))
                int16_t* const rdx_6 = &data_142d40450
                int32_t var_38
                
                if (var_38 != 0)
                    rdx_6 = var_40
                
                (*(*arg4 + 8))(arg4, rdx_6, 0)
                sub_141cf95d0(&var_98)
            
            if (var_40 != 0)
                sub_140a74f90(var_40)
            
            if (rbp_1 != 0)
                sub_140a74f90(rbp_1)
            
            result.b = 1
            goto label_141d05e2e
        
        rbx_2 += 0x10
    while (rbx_2 != r14_4)

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

return zx.q(result.b)
