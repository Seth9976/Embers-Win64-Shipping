// 函数: sub_14268cf50
// 地址: 0x14268cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg1[0x1b]
int32_t rbx = 0
void* rsi = sx.q(arg1[0x1c].d) * 0x1c
int64_t var_48 = 0
int32_t rdx = 0
void* rsi_1 = rsi + rdi
int64_t var_40 = 0

if (rdi == rsi_1)
    rbx.b = 0
else
    while (true)
        int32_t var_10_1 = *(rdi + 0x18)
        int32_t var_c_1 = 0xb
        uint128_t var_38_1 = *rdi
        uint64_t var_18_1 = rdi[1].q
        var_40.d = rbx + 1
        
        if (rbx + 1 s> rdx)
            sub_1405c4e40(&var_48)
        
        int64_t rax_3 = var_48
        rdi += 0x1c
        uint128_t* rcx_2 = sx.q(rbx) << 5
        *(rcx_2 + rax_3) = var_38_1
        *(rcx_2 + rax_3 + 0x10) = var_18_1.o
        
        if (rdi == rsi_1)
            break
        
        rdx = var_40:4.d
        rbx = var_40.d
    
    if (var_40.d == 0)
        rbx.b = 0
    else
        (*(*arg1 + 0x78))(arg1, &var_48)
        rbx.b = 1

int64_t rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return zx.q(rbx.b)
