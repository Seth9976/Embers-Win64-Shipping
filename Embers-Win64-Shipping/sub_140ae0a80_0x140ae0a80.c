// 函数: sub_140ae0a80
// 地址: 0x140ae0a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_68 = *sub_1405e25d0(arg2)
int128_t zmm0 = *sub_1405e25d0(arg3)
int64_t var_48 = 0
int64_t var_40 = 0
void* const r8_3

if (*(arg1 + 0xf8) == *(arg1 + 0x124))
labelid_9:
    r8_3 = nullptr
else
    int32_t rax_3 = sub_140ad88a0(&var_68)
    void* r8 = arg1 + 0x128
    void* rcx_3 = *(r8 + 8)
    arg2 = (sx.q(*(arg1 + 0x138)) - 1) & sx.q(rax_3)
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_5 = *(r8 + (arg2 << 2))
    
    if (rax_5 == 0xffffffff)
    label_140ae0be2:
        r8_3 = nullptr
    else
        while (true)
            r8_3 = (sx.q(rax_5) << 7) + *(arg1 + 0xf0)
            arg2 = (zx.q(*(r8_3 + 4)) ^ zx.q(var_68:4.d)) | (zx.q(*(r8_3 + 8)) ^ zx.q(var_68:8.d))
                | (zx.q(*(r8_3 + 0xc)) ^ zx.q(var_68:0xc.d)) | (zx.q(var_68.d) ^ zx.q(*r8_3))
            
            if (arg2.d == 0)
                arg2 = (zx.q(*(r8_3 + 0x14)) ^ zx.q(zmm0:4.d))
                    | (zx.q(*(r8_3 + 0x18)) ^ zx.q(zmm0:8.d))
                    | (zx.q(*(r8_3 + 0x1c)) ^ zx.q(zmm0:0xc.d))
                    | (zx.q(*(r8_3 + 0x10)) ^ zx.q(zmm0.d))
                
                if (arg2.d == 0)
                    arg2 = (zx.q(*(r8_3 + 0x2c)) ^ zx.q(var_40:4.d))
                        | (zx.q(*(r8_3 + 0x28)) ^ zx.q(var_40.d))
                        | (zx.q(*(r8_3 + 0x24)) ^ zx.q(var_48:4.d))
                        | (zx.q(*(r8_3 + 0x20)) ^ zx.q(var_48.d))
                    
                    if (arg2.d == 0)
                        break
            
            rax_5 = *(r8_3 + 0x70)
            
            if (rax_5 == 0xffffffff)
                goto label_140ae0be2_1
        
        if (rax_5 == 0xffffffff)
        label_140ae0be2_1:
            r8_3 = nullptr

void* rbx_2 = r8_3 + 0x30

if (r8_3 == 0)
    rbx_2 = nullptr

if (rbx_2 == 0)
    int64_t rax_6
    rax_6.b = 0
    return 0

void* rcx_22 = rbx_2 + 0x20
int64_t arg_8 = arg4
void* rax_8 = *(rbx_2 + 0x10)

if (rax_8 != 0)
    rcx_22 = rax_8

return (*rbx_2)((*(*rcx_22 + 8))(rcx_22, arg2), arg3, &arg_8)
