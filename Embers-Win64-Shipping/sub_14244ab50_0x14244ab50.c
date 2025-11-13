// 函数: sub_14244ab50
// 地址: 0x14244ab50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)
uint64_t var_188 = 0
void* rax = sub_1423ef4c0(data_143f5b298, arg1)
uint64_t var_198
int64_t arg_8
int512_t zmm1
int32_t var_18c

if (*(rax + 0x90) == 0)
    arg_8 = *(sub_140d21d80(rbx) + 0x18)
    sub_140b63b70(&arg_8, &var_198)
    uint64_t rcx_11 = var_188
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    var_188 = var_198
    int32_t var_190
    int32_t var_180_1 = var_190
    int32_t var_17c_1 = var_18c
    zmm1 = sub_142155520(arg2, *(sub_140d21d80(rbx) + 0x18))
else
    int32_t rbx_1 = *(rax + 0x30)
    uint64_t rsi_1 = 0
    int64_t r14_1 = *(rax + 0x28)
    var_198 = 0
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_198, rbx_1, 0)
        rsi_1 = var_198
        memcpy(rsi_1, r14_1, rbx_1 * 2)
    
    var_198 = 0
    uint64_t r14_2 = 0
    int32_t r12_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_198, rbx_1, 0)
        r14_2 = var_198
        memcpy(r14_2, rsi_1, rbx_1 * 2)
        r12_1 = var_18c
    else
        r12_1 = 0
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    uint64_t rcx_6 = var_188
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    var_188 = r14_2
    int32_t var_180 = rbx_1
    int32_t var_17c = r12_1
    arg_8 = 0
    zmm1 = sub_142155520(arg2, 0)
void* rcx_14 = *(arg1 + 0x128)
uint64_t var_178 = 0
int64_t var_170
__builtin_memset(&var_170, 0, 0x18)
uint64_t var_168

if (rcx_14 != 0)
    int64_t* rax_6
    rax_6, zmm1 = sub_140d21e10(*(rcx_14 + 0x10), &var_198, 0)
    
    if (&var_178 != rax_6)
        uint64_t rcx_16 = var_178
        
        if (rcx_16 != 0)
            zmm1 = sub_140a74f90(rcx_16)
        
        var_178 = *rax_6
        *rax_6 = 0
        var_170.d = rax_6[1].d
        var_170:4.d = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    uint64_t rcx_18 = var_198
    
    if (rcx_18 != 0)
        zmm1 = sub_140a74f90(rcx_18)
    
    int64_t* rcx_19 = *(arg1 + 0x128)
    (*(*rcx_19 + 0x730))(rcx_19, arg2, &var_168)

void* rdx_9 = *arg2[0x262]

if (rdx_9 != 0 && (*(rdx_9 + 0x30) & 2) == 0)
    void** var_158
    sub_141f79620(&var_158, rdx_9, 0)
    arg_8.b = 1
    int64_t* var_150
    char* rdx_10 = *var_150
    
    if (&rdx_10[1] u> var_150[1])
        var_158[0x2a](&var_158, &arg_8, 1)
    else
        arg_8.b = *rdx_10
        *var_150 += 1
    
    sub_140a1d9d0(&var_158, &var_168, 
        sub_140a1d9d0(&var_158, &var_178, sub_140a1d9d0(&var_158, &var_188, zmm1)))
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_26 = *arg2[0x262]
    void arg_10
    (*(*rcx_26 + 0x2c8))(rcx_26, &arg_10, &var_158, r9_1)
    sub_141f7bb50(&var_158)

int64_t result = (*(*arg2 + 0x2a8))(arg2, 0)
arg2[0x3f].d = 0
sub_142155510(arg2, 2)
uint64_t rcx_30 = var_168

if (rcx_30 != 0)
    result = sub_140a74f90(rcx_30)

uint64_t rcx_31 = var_178

if (rcx_31 != 0)
    result = sub_140a74f90(rcx_31)

uint64_t rcx_32 = var_188

if (rcx_32 == 0)
    return result

return sub_140a74f90(rcx_32)
