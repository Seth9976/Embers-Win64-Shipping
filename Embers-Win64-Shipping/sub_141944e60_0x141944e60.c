// 函数: sub_141944e60
// 地址: 0x141944e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = *arg4
uint32_t r15 = zx.d(arg4[1])
uint32_t r12 = zx.d(arg4[2])

if (rsi == 0)
    rsi = *(arg3 + 0x3c)

void*** rax = j_sub_140a82f30(0x30)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    int64_t (* var_98)(int64_t* arg1, int64_t* arg2) = arg1
    void* var_90_1 = arg3
    uint32_t var_88 = r15
    uint32_t var_84_1 = r12
    char var_80_1 = rsi
    void*** rax_1 = sub_140a82f30(0x28, 8)
    int128_t zmm0_1 = var_98.o
    int128_t zmm1 = var_88.o
    *rax_1 = &data_142ec17e8
    *(rax_1 + 8) = zmm0_1
    *(rax_1 + 0x18) = zmm1
    int64_t (* var_58)(int64_t* arg1, int64_t* arg2)
    int64_t (* rcx)(int64_t* arg1, int64_t* arg2) = var_58
    
    if (rax_1 != -8)
        rcx = sub_1419320b0
    
    var_98 = rcx
    var_88.q = 0
    void var_38
    
    if (rcx != 0)
        void*** rcx_1 = &var_38
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        (**rcx_1)(rcx_1, &var_88, sub_1419320b0)
    
    sub_141928710(rbx, &var_98)
    *rbx = &data_142ff7530
    
    if (rcx != 0)
        void*** rcx_3 = &var_38
        
        if (rax_1 != 0)
            rcx_3 = rax_1
        
        (*rcx_3)[2](rcx_3)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
