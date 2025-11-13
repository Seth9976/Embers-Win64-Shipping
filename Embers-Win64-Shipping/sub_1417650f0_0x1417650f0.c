// 函数: sub_1417650f0
// 地址: 0x1417650f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3[1].d)
int64_t rbp = *arg3
int32_t rsi = 0
uint64_t rcx = 0
uint64_t var_48 = 0
int128_t zmm6 = arg2
int32_t var_40 = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(&var_48, rbx.d, 0)
    memcpy(var_48, rbp, (rbx << 3).d)
    rcx = var_48
    rbx = zx.q(var_40)
else
    int32_t var_3c_1 = 0

char arg_8 = 0
int64_t r8_3
int512_t zmm2
r8_3, zmm2 = sub_14175e350(rcx, rbx.d, arg_8)

if (*(arg1 + 0xc0) != 0)
    void* rax_1 = *(arg1 + 0xd0)
    void* rcx_3 = arg1 + 0xe0
    arg_8.d = zmm6.d
    
    if (rax_1 != 0)
        rcx_3 = rax_1
    
    r8_3 = (*(arg1 + 0xc0))((*(*rcx_3 + 8))(rcx_3), &arg_8, &var_48)

int32_t rbp_1 = 0
uint64_t rbx_1 = var_48

if (*(arg1 + 8) s> 0)
    int64_t r15_1 = 0
    int64_t rcx_5 = rbx_1 + (sx.q(var_40) << 3)
    uint64_t r14_4 = (rcx_5 - rbx_1 + 7) u>> 3
    
    if (rbx_1 u> rcx_5)
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            int32_t var_58_1 = arg4
            zmm2.o = zmm6
            int32_t r9
            int32_t var_60_1 = r9
            int64_t* rax_7
            rax_7, r8_3, zmm2, zmm6 = sub_1417804d0(arg1, &arg_8, r8_3, **rbx_1, *(arg1 + 8))
            r15_1 += 1
            rbx_1 += 8
            rbp_1 = *rax_7 + rsi
            rsi = rbp_1
        while (r15_1 != r14_4)
        
        rbx_1 = var_48

if (*(arg1 + 0x100) != 0)
    void* rax_8 = *(arg1 + 0x110)
    void* rcx_7 = arg1 + 0x120
    arg_8.d = zmm6.d
    
    if (rax_8 != 0)
        rcx_7 = rax_8
    
    (*(arg1 + 0x100))((*(*rcx_7 + 8))(rcx_7), &arg_8, &var_48)
    rbx_1 = var_48

void* rdi
rdi.b = rbp_1 s> 0

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rdi.b)
