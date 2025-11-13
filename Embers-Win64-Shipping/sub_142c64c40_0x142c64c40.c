// 函数: sub_142c64c40
// 地址: 0x142c64c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t arg_20 = arg4
void* r12 = *arg2
char* rax
int512_t zmm2
rax, zmm2 = sub_142c56520(arg3, &arg_20, arg5)

if (rax == 0)
    return zx.q((&rax[0x1b]).d)

int64_t rbx = -1

do
    rbx += 1
while (rax[rbx] != 0)

char* rbp = rax

while (true)
    int32_t var_58 = 0
    int32_t rax_2
    rax_2.b = arg1 == arg2[0x48]
    uint64_t r10_1 = zx.q(rax_2)
    uint64_t rax_3 = arg2[r10_1 + 0x4e](arg2, zx.q(r10_1.d), rbp, rbx, &var_58)
    uint64_t rsi_1 = rax_3
    
    if (rax_3 s< 0)
        int32_t rdi_1 = var_58
        
        if (rdi_1 == 0)
            data_143ccb8a0(rax)
            return 0x37
        
        if (rdi_1 != 0x51)
            data_143ccb8a0(rax)
            return zx.q(rdi_1)
        
        rsi_1 = 0
    
    if (*(r12 + 0x5f0) != 0)
        zmm2 = sub_142c64600(r12, 4, rbp, rsi_1, zmm2, arg2)
    
    if (rsi_1 == rbx)
        data_143ccb8a0(rax)
        return 0
    
    rbx -= rsi_1
    rbp = &rbp[rsi_1]
