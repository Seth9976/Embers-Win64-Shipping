// 函数: sub_14185f7e0
// 地址: 0x14185f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void*** result = arg1
*arg1 = &data_142fe7e98
arg1[1] = &data_142fe7ec8
arg1[2] = 0
arg1[2] = *arg2
*arg2 = 0
arg1[3].d = arg2[1].d
*(arg1 + 0x1c) = *(arg2 + 0xc)
arg2[1] = 0
arg1[4].d = arg2[2].d
*(arg1 + 0x24) = *(arg2 + 0x14)
arg1[5].d = arg2[3].d
*(arg1 + 0x2c) = *(arg2 + 0x1c)
arg1[6] = arg3
arg1[7] = arg4
arg1[8] = arg8
arg1[9] = arg9
arg1[0xa] = arg10
arg1[0xb] = arg11
arg1[0xc] = arg12
arg1[0xd] = arg13
__builtin_memset(&arg1[0xe], 0, 0x18)
int32_t rax_15
rax_15.b = *(arg2 + 0x1c) == 0
arg1[0x11].d = rax_15
arg1[0x12] = 0
arg1[0x14] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
void* rcx = &arg1[0x1c]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_16 = *(rcx + 0x10)

if (rax_16 != 0)
    rcx = rax_16

*rcx = 0
*(rcx + 8) = 0
int64_t* rcx_1 = &result[0x28]
result[0x20].d = 0xffffffff
*(result + 0x104) = 0
result[0x22] = 0
result[0x23].d = 0
result[0x24] = 0
result[0x25] = 0
result[0x26] = 0
result[0x27] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_17 = rcx_1[2]

if (rax_17 != 0)
    rcx_1 = rax_17

*rcx_1 = 0
rcx_1[1] = 0
result[0x2c].d = 0xffffffff
*(result + 0x164) = 0
result[0x2e] = 0
void* rcx_2 = &result[0x32]
result[0x2f].d = 0
result[0x30] = 0
result[0x31] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_18 = *(rcx_2 + 0x10)

if (rax_18 != 0)
    rcx_2 = rax_18

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &result[0x3c]
result[0x36].d = 0xffffffff
*(result + 0x1b4) = 0
result[0x38] = 0
result[0x39].d = 0
result[0x3a] = 0
result[0x3b] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_19 = *(rcx_3 + 0x10)

if (rax_19 != 0)
    rcx_3 = rax_19

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &result[0x46]
result[0x40].d = 0xffffffff
*(result + 0x204) = 0
result[0x42] = 0
result[0x43].d = 0
result[0x44] = 0
result[0x45] = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_20 = *(rcx_4 + 0x10)

if (rax_20 != 0)
    rcx_4 = rax_20

__builtin_memset(rcx_4, 0, 0x1c)
result[0x4a].d = 0xffffffff
*(result + 0x254) = 0
result[0x4c] = 0
result[0x4d].d = 0
int64_t rax_21 = j_sub_140a82f30(0x18)

if (rax_21 == 0)
    rax_21 = 0
else
    __builtin_memset(rax_21, 0, 0x18)

result[0x4f] = rax_21
void* rcx_5 = &result[0x52]
result[0x4e] = rax_21
result[0x50] = 0
result[0x51] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_22 = *(rcx_5 + 0x10)

if (rax_22 != 0)
    rcx_5 = rax_22

*rcx_5 = 0
*(rcx_5 + 8) = 0
result[0x56].d = 0xffffffff
*(result + 0x2b4) = 0
result[0x58] = 0
result[0x59].d = 0
int64_t rax_23 = j_sub_140a82f30(0x18)

if (rax_23 == 0)
    rax_23 = 0
else
    __builtin_memset(rax_23, 0, 0x18)

result[0x5b] = rax_23
uint64_t rbx
rbx.b = 0
result[0x5a] = rax_23
enum THREAD_ERROR_MODE uMode = SEM_ALL_ERRORS
int64_t* rdi = result[2]
void* rax_26 = &rdi[sx.q(result[3].d) * 2]
char var_1a8 = 0

if (rdi != rax_26)
    do
        int16_t* const r8
        
        if (rdi[1].d == 0)
            r8 = &data_142d40450
        else
            r8 = *rdi
        
        int64_t* rcx_6 = result[7]
        int64_t* var_1a0
        (*(*rcx_6 + 0x48))(rcx_6, &var_1a0, r8, 0)
        int64_t* rbx_1
        
        if (var_1a0 != 0)
            int32_t var_178
            sub_141820450(&var_178)
            sub_141824770(var_1a0, &var_178, arg5)
            rbx_1 = var_1a0
            int64_t var_168
            
            if ((*(rbx_1 + 0x29) & 1) == 0)
                int32_t var_160
                int32_t var_17c_1 = var_160
                
                if (var_160 s> 0)
                    int32_t rcx_9 = var_178
                    int32_t var_108_1 = rcx_9
                    int32_t var_174
                    int32_t var_104_1 = var_174
                    int64_t var_170
                    int64_t var_100_1 = var_170
                    int64_t var_148_1 = var_168
                    int64_t var_f8_1 = var_168
                    int32_t var_f0_1 = var_160
                    var_168 = 0
                    var_160.q = 0
                    var_1a0 = nullptr
                    int32_t rcx_13 = result[0x25].d
                    int32_t var_15c
                    int32_t var_ec_1 = var_15c
                    int64_t* var_e8_1 = rbx_1
                    result[0x25].d = rcx_13 + 1
                    
                    if (rcx_13 + 1 s> *(result + 0x12c))
                        sub_1405c4ec0(&result[0x24])
                    
                    int64_t rdx_3 = result[0x24]
                    int64_t rcx_15 = sx.q(rcx_13) * 5
                    *(rdx_3 + (rcx_15 << 3)) = rcx_9
                    *(rdx_3 + (rcx_15 << 3) + 4) = var_174
                    *(rdx_3 + (rcx_15 << 3) + 8) = var_170
                    *(rdx_3 + (rcx_15 << 3) + 0x10) = var_148_1
                    *(rdx_3 + (rcx_15 << 3) + 0x18) = var_17c_1
                    *(rdx_3 + (rcx_15 << 3) + 0x1c) = var_15c
                    *(rdx_3 + (rcx_15 << 3) + 0x20) = rbx_1
                    rbx_1 = var_1a0
            
            if (var_168 == 0)
                goto label_14185fc96
            
            arg5 = sub_140a74f90(var_168)
            goto label_14185fc8e
        
        if (rbx.b == 0)
            var_1a8 = 1
            uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
        label_14185fc8e:
            rbx_1 = var_1a0
        label_14185fc96:
            
            if (rbx_1 != 0)
                (**rbx_1)(rbx_1, 1)
            
            rbx = zx.q(var_1a8)
        
        rdi = &rdi[2]
    while (rdi != rax_26)
    
    if (rbx.b != 0)
        SetErrorMode(uMode)

void* rdx_4 = result[0x24]
void* i_2 = rdx_4 + sx.q(result[0x25].d) * 0x28

if (rdx_4 != i_2)
    int128_t** r14_1 = rdx_4 + 0x10
    void* i = i_2
    
    do
        int128_t* rdi_1 = *r14_1
        void* rsi_3 = &rdi_1[sx.q(r14_1[1].d) * 2]
        
        if (rdi_1 != rsi_3)
            do
                void var_158
                
                if (*sub_140910250(&result[0x26], &var_158, rdi_1) == 0xffffffff)
                    int128_t* var_128 = rdi_1
                    void* var_120_1 = &r14_1[-2]
                    sub_1418185b0(&result[0x26], rdi_1, &var_128)
                    int32_t var_118
                    sub_140598750(&result[0x3a], &var_118)
                    int32_t* var_110
                    *var_110 = *rdi_1
                    var_110[4] = 0xffffffff
                    void var_154
                    sub_14093ebb0(&result[0x3a], &var_154, sub_140a6b260(var_110, 0x10), var_110, 
                        var_118, nullptr)
                
                rdi_1 = &rdi_1[2]
            while (rdi_1 != rsi_3)
            
            i = i_2
        
        r14_1 = &r14_1[5]
    while (&r14_1[-2] != i)
    
    result = arg1

void*** result_1 = result
void*** var_78 = nullptr
void** const var_68 = &data_142da2668
int64_t var_c8[0x2]
var_c8[0] = 0
int64_t (* var_88)(int64_t* arg1) = sub_14187b270
int64_t var_b8 = 0
void* var_e0
int64_t* rax_46 = sub_141858e10(&var_e0, 2, &var_88, &var_c8, arg6, arg7)

if (&result[0xe] != rax_46)
    result[0xe] = *rax_46
    *rax_46 = 0
    sub_1405aeff0(&result[0xf], &rax_46[1])

int64_t* var_d8

if (var_d8 != 0)
    var_d8[1].d -= 1
    
    if (var_d8[1].d == 1)
        (**var_d8)(var_d8)
        int32_t r14_2 = *(var_d8 + 0xc)
        *(var_d8 + 0xc) -= 1
        
        if (r14_2 == 1)
            (*(*var_d8 + 8))(var_d8, zx.q(r14_2))

if (var_88 != 0)
    void** const* rcx_29 = &var_68
    
    if (var_78 != 0)
        rcx_29 = var_78
    
    (*rcx_29)[2](rcx_29)

int32_t i_3 = arg2[1].d
int64_t* rbx_4 = *arg2

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_30 = *rbx_4
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = *arg2

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
