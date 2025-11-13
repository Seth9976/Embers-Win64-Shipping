// 函数: sub_140ab4d40
// 地址: 0x140ab4d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
void*** rbx = nullptr
int64_t var_18 = 0
int64_t var_10 = 0
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

char rax = sub_140b1ef70(&var_18, rdx, 0)

if (rax != 0)
    void*** rax_1 = j_sub_140a82f30(0xa8)
    rbx = rax_1
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        memset(rax_1, 0, 0x90)
        sub_140b4c2a0(rbx)
        rbx[0x12] = 0
        *rbx = &data_142d6b230
        rbx[0x13] = &var_18
        rbx[0x14] = 0x7fffffffffffffff
        sub_140b55290(rbx, 1)
        (*rbx)[0x1b](rbx, 0)

uint64_t* rdi

if (rax == 0 || rbx == 0)
    rdi.b = 0
else
    char arg_10 = 0
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    sub_1409ac860(rbx, &var_28, arg3)
    
    if (((var_28.d ^ data_14399eb78) | (var_28:4.d ^ data_14399eb7c) | (var_20_1.d ^ data_14399eb80)
            | (var_20_1:4.d ^ data_14399eb84)) == 0)
        int64_t* rcx_11 = rbx[1]
        char* rdx_3 = *rcx_11
        
        if (&rdx_3[1] u> rcx_11[1])
            (*rbx)[0x2a](rbx, &arg_10, 1)
        else
            arg_10 = *rdx_3
            *rcx_11 += 1
        
        if (arg_10 u<= 0)
            sub_140a1d9d0(rbx, &arg1[2], sub_140a1d9d0(rbx, arg1, arg3))
            rsi = 1
    
    rdi.b = zx.b((*rbx)[0x37](rbx)) & rsi

int64_t rcx_16 = var_18

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

if (rbx != 0)
    void** r8_1 = *rbx
    (*r8_1)(rbx, 1, r8_1)

return zx.q(rdi.b)
