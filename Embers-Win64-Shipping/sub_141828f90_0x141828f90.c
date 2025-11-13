// 函数: sub_141828f90
// 地址: 0x141828f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = arg2[1].d
int32_t rdi = *(arg1 + 0x70)
char r15 = arg3
int32_t r14 = rax_2 - 1

if (rax_2 == 0)
    r14 = 0

int32_t r12 = 2
int32_t rax_4

if (rdi == 0)
    rax_4 = 2

if (rdi != 0 || r14 == 0xffffffff)
    rax_4 = 1

int64_t r13 = *(arg1 + 0x68)
int32_t rcx = r14 + rax_4
int16_t* var_b8 = nullptr

if (rdi != 0 || rcx != 0)
    sub_1405a4c70(&var_b8, rdi + rcx, 0)
    memcpy(var_b8, r13, rdi * 2)
else
    int32_t var_ac_1 = 0

sub_140a2cf70(&var_b8, *arg2, r14)
int32_t rax_5 = arg2[1].d
int32_t r14_1 = *(arg1 + 0x90)
int32_t rdi_1 = rax_5 - 1

if (rax_5 == 0)
    rdi_1 = 0

if (r14_1 != 0 || rdi_1 == 0xffffffff)
    r12 = 1

int16_t* var_a8 = nullptr
int32_t rax_7 = rdi_1 + r12
int64_t r12_1 = *(arg1 + 0x88)

if (r14_1 != 0 || rax_7 != 0)
    sub_1405a4c70(&var_a8, r14_1 + rax_7, 0)
    memcpy(var_a8, r12_1, r14_1 * 2)
else
    int32_t var_9c_1 = 0

sub_140a2cf70(&var_a8, *arg2, rdi_1)
uint64_t rbx

if (*(arg1 + 0x90) s<= 1)
    rbx.b = 1
else
    int64_t* rax_8 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int16_t* const rdi_2 = &data_142d40450
    int16_t* const rdx_6 = &data_142d40450
    
    if (rdi != 0)
        rdx_6 = var_b8
    
    int64_t r8_6 = *rax_8
    
    if ((*(r8_6 + 0x70))(rax_8, rdx_6, r8_6) == 0)
        rbx.b = 1
    else
        int64_t* rax_10 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int16_t* const rdx_7 = &data_142d40450
        
        if (r14_1 != 0)
            rdx_7 = var_a8
        
        int64_t r8_7 = *rax_10
        
        if ((*(r8_7 + 0x70))(rax_10, rdx_7, r8_7) != 0)
            rbx.b = 1
        else if (sub_1405a71a0(arg1 + 0x370, arg2) != 0)
            rbx.b = 1
        else if (r15 == 0)
        label_1418291a2:
            int64_t* rcx_11 = *(arg1 + 0x5e8)
            void* rax_16 = (*(*rcx_11 + 0x60))(rcx_11, arg2)
            int64_t* rcx_12 = *(arg1 + 0x5e8)
            int64_t r8_10 = *rcx_12
            void* rax_17 = (*(r8_10 + 0x68))(rcx_12, arg2, r8_10)
            sub_140a464c0()
            int16_t* rdx_13 = &data_142d40450
            
            if (rdi != 0)
                rdx_13 = var_b8
            
            char const (* r8_11)[0x4] = data_14399ea08
            int64_t rax_18 = (*(r8_11 + 0x108))(&data_14399ea08, rdx_13, r8_11)
            int64_t rcx_13 = -1
            int64_t rdx_14
            
            if (rax_16 == 0)
                rdx_14 = -1
            else
                rdx_14 = *(rax_16 + 0x58)
            
            if (rax_17 != 0)
                rcx_13 = *(rax_17 + 0x58)
            
            int64_t var_60
            __builtin_memset(&var_60, 0, 0x14)
            int64_t* r8_12 = rax_16 + 0x20
            
            if (rax_16 == 0)
                r8_12 = &var_60
            
            int64_t* r9_2 = rax_17 + 0x20
            
            if (rax_17 == 0)
                r9_2 = &var_60
            
            char rax_19
            
            if (rdx_14 == rax_18 || rcx_13 == rax_18)
                int64_t* rcx_14 = *(arg1 + 0x528)
                char var_c8
                int64_t var_90
                var_c8.q = &var_90
                var_90 = 0
                char var_d0
                int64_t var_80
                var_d0.q = &var_80
                char var_d8
                int64_t var_70
                var_d8.q = &var_70
                int32_t var_88_1 = 0
                var_80 = 0
                int32_t var_78_1 = 0
                var_70 = 0
                int32_t var_68_1 = 0
                rax_19 = sub_141853350(rcx_14, &var_b8, r8_12, r9_2, arg4, var_d8, var_d0, var_c8)
            
            if ((rdx_14 == rax_18 || rcx_13 == rax_18) && rax_19 != 0)
                rbx.b = 1
            else
                r15 = 1
            label_141829282:
                rbx.b = 1
                
                if (r15 != 0)
                    goto label_141829158
        else
            void var_98
            
            if (*sub_140960120(arg1 + 0x3d0, &var_98, arg2) != 0xffffffff)
                if (r15 != 0)
                    goto label_141829282
                
                goto label_1418291a2
            
        label_141829158:
            sub_140a464c0()
            int16_t* const r8_9 = &data_142d40450
            int64_t r9_1
            r9_1.b = 1
            
            if (rdi != 0)
                r8_9 = var_b8
            
            if (r14_1 != 0)
                rdi_2 = var_a8
            
            rbx = zx.q((*(data_14399ea08 + 0x40))(&data_14399ea08, rdi_2, r8_9, r9_1, 1, 1, 0))

int16_t* rcx_15 = var_a8

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_b8

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rbx.b)
