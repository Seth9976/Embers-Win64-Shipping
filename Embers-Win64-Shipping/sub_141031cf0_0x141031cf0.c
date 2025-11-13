// 函数: sub_141031cf0
// 地址: 0x141031cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)
int32_t rdi

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    rdi = temp0_1
    int32_t arg_8 = rdi
else
    rdi = i_1 + 0x20

if (i_1 == 0)
    return 

int32_t i

do
    void* rbx_1 = *(arg1 + (zx.q(rdi) << 3) + 0x140)
    sub_14101f080(*(rbx_1 + 0x138) + 0x5e8, rbx_1)
    void** var_38
    sub_141022330(rbx_1, &var_38, 0)
    var_38 = &data_142efcd90
    int64_t* var_30
    
    if (var_30 != 0)
        int32_t rax_1 = *(var_30 + 0x14)
        *(var_30 + 0x14) -= 1
        
        if (rax_1 == 1)
            sub_141011360(var_30, rax_1.b)
    
    void* rbx_2 = *(arg2 + 0x28)
    
    if (rbx_2 != 0)
        sub_1410644f0(rbx_2, 0, *(rbx_2 + 0x38))
        sub_141037da0(rbx_2)
        int64_t rax_2 = *(rbx_2 + 0x40)
        *(rbx_2 + 0x38) += 1
        *(arg2 + 0x30) = rax_2
    
    i = not.d(1 << rdi.b) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_forward(i)
        rdi = temp0_3
        int32_t arg_20 = rdi
    else
        rdi = 0x20
while (i != 0)
