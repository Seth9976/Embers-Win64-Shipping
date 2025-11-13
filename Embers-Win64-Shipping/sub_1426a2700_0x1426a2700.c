// 函数: sub_1426a2700
// 地址: 0x1426a2700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0xc0)
int32_t arg_8 = 0
void* const rsi

if (rdx == 0 || arg3 == 0xff)
    rsi = nullptr
else
    char rax_1 = *(rdx + 0x4c)
    
    if (arg3 u< rax_1)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rsi = nullptr
        else
            rsi = sub_1426b21a0(rcx_3, arg3)
    else
        rsi = *(rdx + 0x38) + (zx.q(arg3) - zx.q(rax_1)) * 0x18

if (rsi == 0)
label_1426a28d0:
    *arg2 = 0
    int32_t rbx_6 = (data_143f720d8).d
    int64_t rsi_3 = data_143f720d0
    arg2[1].d = rbx_6
    
    if (rbx_6 != 0)
        sub_1405a4c70(arg2, rbx_6, 0)
        memcpy(*arg2, rsi_3, rbx_6 * 2)
    else
        *(arg2 + 0xc) = 0
else
    void* rbx_1 = *(rsi + 8)
    
    if (rbx_1 == 0)
        goto label_1426a28d0
    
    if (*(rbx_1 + 0x10) != sub_14272e7f0())
        goto label_1426a28d0
    
    void* rdx_2 = *(rsi + 8)
    uint64_t rcx_4 = zx.q(arg3)
    uint8_t r8 = *(rdx_2 + 0x2b) u>> 1 & 1
    
    if (r8 != 0)
        rdx_2 = *(*(arg1 + 0xe8) + (rcx_4 << 3))
    
    int64_t rcx_6
    
    if (*(arg1 + 0xd0) == 0 || zx.d(arg3) s>= *(arg1 + 0xe0))
        rcx_6 = 0
    else
        rcx_6 = zx.q(*(*(arg1 + 0xd8) + (rcx_4 << 1))) + *(arg1 + 0xc8)
    
    uint64_t var_38
    uint64_t var_28
    uint64_t* rdx_3
    int32_t rbx_4
    
    if (rcx_6 + (zx.q(r8) << 2) == 0)
        int32_t rbx_5 = (data_143f720d8).d
        int64_t rsi_2 = data_143f720d0
        var_38 = 0
        int32_t var_30_1 = rbx_5
        
        if (rbx_5 != 0)
            sub_1405a4c70(&var_38, rbx_5, 0)
            memcpy(var_38, rsi_2, rbx_5 * 2)
        else
            int32_t var_2c_1 = 0
        
        rdx_3 = &var_38
        rbx_4 = 2
    else
        int32_t rbx_3 = *(rdx_2 + 0x38)
        int64_t rsi_1 = *(rdx_2 + 0x30)
        var_28 = 0
        int32_t var_20_1 = rbx_3
        
        if (rbx_3 != 0)
            sub_1405a4c70(&var_28, rbx_3, 0)
            memcpy(var_28, rsi_1, rbx_3 * 2)
            rdx_3 = &var_28
            rbx_4 = 1
        else
            int32_t var_1c_1 = 0
            rdx_3 = &var_28
            rbx_4 = 1
    
    sub_140596d10(arg2, rdx_3)
    
    if ((rbx_4.b & 2) != 0)
        uint64_t rcx_13 = var_38
        rbx_4 &= 0xfffffffd
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    if ((rbx_4.b & 1) != 0)
        uint64_t rcx_14 = var_28
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)

return arg2
