// 函数: sub_142c7e120
// 地址: 0x142c7e120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg1
void* rsi = *arg1
void** r14 = *(rsi + 0x250)
int32_t result
int512_t entry_zmm2
int64_t entry_r8

if (*(arg1 + 0x406) != 0)
    result, entry_zmm2 = sub_142c5b250(rbx, 1, 
        sub_142c64850(rsi, "Doing the SSL/TLS handshake on the data stream\n", entry_r8, 
            entry_zmm2))

if (*(arg1 + 0x406) == 0 || result == 0)
    int64_t* rax_1 = *r14
    int64_t* var_28_1
    int32_t var_20_1
    void* const var_18_1
    int32_t rdx_2
    int64_t r8
    
    if (*(rbx + 0x754) != 0x21)
        r8 = rbx[0xeb]
        rdx_2 = 1
        var_18_1 = nullptr
        var_20_1 = 0xffffffff
        var_28_1 = rax_1
    else
        *rax_1 = 0
        sub_142c6f270(rsi, *(rsi + 0x4e68))
        sub_142c65b90(rbx[0x48])
        r8 = -1
        var_18_1 = *r14
        rdx_2 = -1
        var_20_1 = 1
        var_28_1 = nullptr
    
    sub_142c68d40(rbx, rdx_2, r8, 0, entry_zmm2, var_28_1, var_20_1, var_18_1)
    rbx[0xd7].b = 1
    result = 0
    rbx[0xea].d = 0

return result
