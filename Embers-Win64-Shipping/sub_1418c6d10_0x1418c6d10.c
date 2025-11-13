// 函数: sub_1418c6d10
// 地址: 0x1418c6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int64_t* rbp = nullptr
int64_t rbx = *arg2
uint64_t var_28 = 0
int32_t var_20 = rsi.d
int64_t* rbx_1

if (rsi.d != 0)
    sub_1405c4a00(&var_28, rsi.d, 0)
    rbp = var_28
    memcpy(rbp, rbx, (rsi << 3).d)
    rsi = zx.q(var_20)
    rbx_1 = rbp
else
    rbx_1 = nullptr

char const* const arg_8 = "VK_KHR_external_memory_capabilities"
void* rsi_1 = &rbx_1[sx.q(rsi.d)]

if (rbx_1 == rsi_1)
label_1418c6da8:
    rbx_1 = nullptr
else
    while (strcmp(*rbx_1, "VK_KHR_external_memory_capabilities") != 0)
        rbx_1 = &rbx_1[1]
        
        if (rbx_1 == rsi_1)
            goto label_1418c6da8

if (rbp != 0)
    sub_140a74f90(rbp)

*arg1 &= 0xfffffffe
int32_t rax_2
rax_2.b = rbx_1 != 0
char** rbp_1 = nullptr
*arg1 |= rax_2
int64_t rsi_2 = sx.q(arg2[1].d)
int64_t rbx_2 = *arg2
var_28 = 0
int32_t var_20_1 = rsi_2.d
char** rbx_3

if (rsi_2.d != 0)
    sub_1405c4a00(&var_28, rsi_2.d, 0)
    rbp_1 = var_28
    memcpy(rbp_1, rbx_2, (rsi_2 << 3).d)
    rsi_2 = zx.q(var_20_1)
    rbx_3 = rbp_1
else
    rbx_3 = nullptr

int64_t rax_3 = sx.q(rsi_2.d)
arg_8 = "VK_KHR_get_physical_device_properties2"
void* rsi_3 = &rbx_3[rax_3]

if (rbx_3 == rsi_3)
label_1418c6e3b:
    rbx_3 = nullptr
else
    while (true)
        rax_3 = strcmp(*rbx_3, "VK_KHR_get_physical_device_properties2")
        
        if (rax_3.d == 0)
            break
        
        rbx_3 = &rbx_3[1]
        
        if (rbx_3 == rsi_3)
            goto label_1418c6e3b

if (rbp_1 != 0)
    rax_3 = sub_140a74f90(rbp_1)

*arg1 &= 0xfffffffd
int32_t result = sbb.d(rax_3.d, rax_3.d, rbx_3 != 0) & 2
*arg1 |= result
return result
