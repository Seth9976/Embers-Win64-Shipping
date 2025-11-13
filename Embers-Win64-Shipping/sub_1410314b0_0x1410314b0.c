// 函数: sub_1410314b0
// 地址: 0x1410314b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)
int32_t rbx

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    rbx = temp0_1
    int32_t arg_8 = rbx
else
    rbx = i_1 + 0x20

if (i_1 == 0)
    return 

int32_t i

do
    void* rdi_1 = *(arg1 + (zx.q(rbx) << 3) + 0x140)
    sub_14101f080(*(rdi_1 + 0x138) + 0x5e8, rdi_1)
    void** var_38
    sub_141022330(rdi_1, &var_38, 0)
    var_38 = &data_142efcd90
    int64_t* var_30
    
    if (var_30 != 0)
        int32_t rax_1 = *(var_30 + 0x14)
        *(var_30 + 0x14) -= 1
        
        if (rax_1 == 1)
            sub_141011360(var_30, rax_1.b)
    
    i = not.d(1 << rbx.b) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_forward(i)
        rbx = temp0_3
        int32_t arg_18 = rbx
    else
        rbx = 0x20
while (i != 0)
