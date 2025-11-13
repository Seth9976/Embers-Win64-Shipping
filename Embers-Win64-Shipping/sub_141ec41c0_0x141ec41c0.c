// 函数: sub_141ec41c0
// 地址: 0x141ec41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142492680()
void* rdi = rax[0x23]

if (rdi == 0)
    int64_t r9_1 = *rax
    (*(r9_1 + 0x390))(rax, arg4, arg5, r9_1)
    rdi = rax[0x23]

if (data_143f3a874 == 0)
    sub_141ec6df0(rdi)
    data_143f3a874 = 1

char var_5e = 1
int64_t var_68 = 0
int16_t var_60 = 0
int128_t var_5d
sub_142259c00(&var_5d)
int64_t var_3c = 0
int64_t var_30 = 0
int64_t var_28 = 0
int32_t rcx_3
rcx_3.b = sub_140b5b8a0(arg1.d, 0) == 0
uint32_t rax_3
rax_3.b = (arg1 u>> 0x20).d != 0
rcx_3.b |= rax_3.b
char rax_4

if (rcx_3.b != 0)
    rax_4 = sub_141ec34a0(rdi, rdi + 0x38, arg1, &var_68)

void* rbx

if (rcx_3.b != 0 && rax_4 != 0)
label_141ec4353:
    char var_5f
    *arg2 = zx.d(var_5f)
    void var_88
    sub_142259c00(&var_88)
    rbx.b = 1
    *arg3 = var_5d
    int128_t var_4d
    arg3[1] = var_4d
else
    *(rdi + 0xbc)
    void* const rcx_8
    
    if (*(rdi + 0x90) == *(rdi + 0xbc))
    label_141ec4300:
        rcx_8 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(arg1.d) + arg1:4.d
        void* r8_1 = rdi + 0xc0
        void* rcx_6 = *(r8_1 + 8)
        
        if (rcx_6 != 0)
            r8_1 = rcx_6
        
        int32_t rax_10 = *(r8_1 + (((sx.q(*(rdi + 0xd0)) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_141ec4300_1:
            rcx_8 = nullptr
        else
            int64_t r8_2 = *(rdi + 0x88)
            
            while (true)
                int64_t rdx_5 = sx.q(rax_10) * 3
                rcx_8 = r8_2 + (rdx_5 << 3)
                
                if (*(r8_2 + (rdx_5 << 3)) == arg1)
                    break
                
                rax_10 = *(rcx_8 + 0x10)
                
                if (rax_10 == 0xffffffff)
                    goto label_141ec4300_2
            
            if (rax_10 == 0xffffffff)
            label_141ec4300_2:
                rcx_8 = nullptr
    
    rbx = rcx_8 + 8
    
    if (rcx_8 == 0)
        rbx = nullptr
    
    if (rbx == 0)
        rbx.b = 0
    else
        rbx = *rbx
        uint32_t rax_13
        rax_13.b = (rbx u>> 0x20).d != 0
        
        if ((sub_140b5b8a0(rbx.d, 0) == 0 | rax_13.b) == 0)
            rbx.b = 0
        else
            if (sub_141ec34a0(rdi, rdi + 0x38, rbx, &var_68) != 0)
                goto label_141ec4353
            
            rbx.b = 0

if (var_30 != 0)
    sub_140a74f90(var_30)

return zx.q(rbx.b)
