// 函数: sub_141e5f0f0
// 地址: 0x141e5f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
void* rbp = nullptr
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0
int64_t arg_8

if (sub_140bc7f20(arg1 + 0x280) s<= 0)
label_141e5f452:
    void** var_58
    void*** rax_18 = sub_141f3bea0(arg1, &var_58)
    
    if (arg2 != rax_18)
        void** rdx_14 = *arg2
        rdx_14[9](arg2, rdx_14)
        arg2[1] = rax_18[1]
        arg2[2] = rax_18[2]
        arg2[4].b = rax_18[4].b
        rax_18[4].b = 0
        (*rax_18)[9](rax_18)
    
    var_58 = &data_1430507f0
    char var_38
    
    if (var_38 != 0)
        int64_t var_50
        int64_t* rax_20 = sub_140d3c6e0(&var_50)
        int64_t var_48
        
        if (rax_20 != 0)
            if (var_48 != 0)
                int64_t r9_1 = *rax_20
                (*(r9_1 + 0x2a8))(rax_20, var_48, 1, r9_1)
            
            sub_140d3a3a0(&arg_8, nullptr)
            var_50 = arg_8
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
else
    if (sub_140bc7f20(arg1 + 0x2a0) s<= 0)
        goto label_141e5f452
    
    if (sub_140bc7f20(arg1 + 0x2c0) s<= 0 || *(arg1 + 0x260) != 2)
        goto label_141e5f452
    
    (*arg2)[8](arg2)
    void* rax_4 = sub_142472830()
    
    if (rax_4 != 0)
        sub_140d3a3a0(&arg2[1], rax_4)
        int32_t rcx_5 = *(rax_4 + 0x5c)
        int32_t r8_1 = 1
        int32_t rdx_4 = (*(rax_4 + 0x58) - 1 + rcx_5) & not.d(rcx_5 - 1)
        
        if (rdx_4 != 0)
            r8_1 = rdx_4
        
        void*** rax_7 = sub_140a82f30(sx.q(r8_1), 0, r8_1)
        arg2[2] = rax_7
        sub_141f2d8c0(rax_7, arg1)
        *rax_7 = &data_14324c5f0
        __builtin_memcpy(&rax_7[0x15], 
            "\x00\x00\x00\x3f\x00\x00\x00\x3f\x04\x00\x00\x00\x00\x01\x00\x00\x40\x00\x00\x00\x40\x00\x"
        "00\x00\x10\x00\x00\x00\x02\x00\x00\x00\x80\x00\x00\x00\x20\x00\x00\x00\x08\x00\x00\x
                00", 
            0x2c)
        rax_7[0x1d] = 0
        rax_7[0x1e].d = 0
        *(rax_7 + 0xf4) = 0
        rax_7[0x1b] = 0
        rax_7[0x1c].d = 0xffffffff
        rax_7[0x21] = 0
        rax_7[0x22].d = 0
        *(rax_7 + 0x114) = 0
        rax_7[0x1f] = 0
        rax_7[0x20].d = 0xffffffff
        rax_7[0x25] = 0
        rax_7[0x26].d = 0
        *(rax_7 + 0x134) = 0
        rax_7[0x23] = 0
        rax_7[0x24].d = 0xffffffff
        arg2[4].b = 1
    
    void* rax_8 = sub_142472830()
    void* rax_9 = sub_140d3c6e0(&arg2[1])
    
    if (rax_8 != 0)
        int64_t rcx_9 = sx.q(*(rax_8 + 0x38))
        
        if (rcx_9.d s<= *(rax_9 + 0x38) && *(*(rax_9 + 0x30) + (rcx_9 << 3)) == rax_8 + 0x30)
            rbp = arg2[2]
    
    *(rbp + 0xa8) = *(arg1 + 0x224)
    *(rbp + 0xb8) = *(arg1 + 0x234)
    *(rbp + 0xc8) = *(arg1 + 0x244)
    *(rbp + 0xd0) = *(arg1 + 0x24c)
    int32_t rax_12 = sub_140bc7f20(arg1 + 0x280)
    sub_140bcb6b0(rbp + 0xd8, 2)
    arg_8 = sub_140bce470(rbp + 0xd8, sx.q(rax_12))
    sub_140bc7fd0(arg1 + 0x280, &arg_8, 0)
    sub_140bd1d40(rbp + 0xd8)
    int32_t rax_14 = sub_140bc7f20(arg1 + 0x2a0)
    sub_140bcb6b0(rbp + 0xf8, 2)
    arg_8 = sub_140bce470(rbp + 0xf8, sx.q(rax_14))
    sub_140bc7fd0(arg1 + 0x2a0, &arg_8, 0)
    sub_140bd1d40(rbp + 0xf8)
    int32_t rax_16 = sub_140bc7f20(arg1 + 0x2c0)
    sub_140bcb6b0(rbp + 0x118, 2)
    arg_8 = sub_140bce470(rbp + 0x118, sx.q(rax_16))
    sub_140bc7fd0(arg1 + 0x2c0, &arg_8, 0)
    sub_140bd1d40(rbp + 0x118)
return arg2
