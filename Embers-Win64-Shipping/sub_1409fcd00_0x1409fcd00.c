// 函数: sub_1409fcd00
// 地址: 0x1409fcd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
int32_t rbp = arg2[0x8a].d

if (rbp s> arg1[1].d - *(arg1 + 0x34))
    sub_1409d93a0(arg1, rbp)
    int32_t rax_7
    
    if (rbp u< 4)
        rax_7 = 1
    else
        uint32_t rax_4 = rbp u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_4 + 8)
        int32_t rcx
        
        if (rax_4 == 0xfffffff8)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_4 + 7)
        
        if (rax_4 == 0xfffffff9)
            rax_7 = 1
        else
            rax_7 = 1 << ((not.d(rcx << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_5 = arg1[9].d
    
    if (rcx_5 == 0 || rcx_5 s< rax_7)
        arg1[9].d = rax_7
        sub_1405c0420(arg1)

int64_t rbx = data_143f36150
int32_t rax_8 = *(arg3 + 0x310)
int64_t arg_8 = rbx
void* const rcx_10

if (rax_8 == *(arg3 + 0x33c))
label_1409fce60:
    rcx_10 = nullptr
else
    int32_t rax_10 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = arg3 + 0x340
    void* rcx_8 = *(r8_1 + 8)
    
    if (rcx_8 != 0)
        r8_1 = rcx_8
    
    int32_t rax_12 = *(r8_1 + (((sx.q(*(arg3 + 0x350)) - 1) & sx.q(rax_10)) << 2))
    
    if (rax_12 == 0xffffffff)
    label_1409fce60_1:
        rcx_10 = nullptr
    else
        int64_t r8_2 = *(arg3 + 0x308)
        
        while (true)
            int64_t rdx_5 = sx.q(rax_12) * 3
            rcx_10 = r8_2 + (rdx_5 << 3)
            
            if (*(r8_2 + (rdx_5 << 3)) == rbx)
                break
            
            rax_12 = *(rcx_10 + 0x10)
            
            if (rax_12 == 0xffffffff)
                goto label_1409fce60_2
        
        if (rax_12 == 0xffffffff)
        label_1409fce60_2:
            rcx_10 = nullptr

void* rbx_1 = rcx_10 + 8

if (rcx_10 == 0)
    rbx_1 = nullptr

void* const rbx_2

if (rbx_1 != 0)
    rbx_2 = *rbx_1

if (rbx_1 == 0 || *(rbx_2 + 8) != 6)
    rbx_2 = nullptr

int32_t rdi = 0

if (rbp s> 0)
    do
        void* rax_14 = (*(*arg2 + 0x548))(arg2, zx.q(rdi))
        void* arg_20 = rax_14
        
        if (rax_14 == 0)
            rax_14 = sub_14210f630(0)
            arg_20 = rax_14
        
        void arg_10
        
        if (*sub_140865c40(arg1, &arg_10, rax_14) == 0xffffffff)
            int64_t var_68 = 0
            int64_t var_60_1 = 0
            int32_t rax_16 = sub_14090b210(arg3 + 0x118, &var_68)
            int64_t rcx_14 = var_68
            arg_8.d = rax_16
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
                rax_16 = arg_8.d
            
            sub_14090bdf0(arg3 + 0x308, rax_16)
            int64_t* var_58 = &arg_20
            int64_t* var_50_1 = &arg_8
            void arg_18
            sub_1408419d0(arg1, &arg_18, &var_58, nullptr)
            *(**(rbx_2 + 0x18) + (sx.q(arg_8.d) << 3)) = *(arg_20 + 0x18)
        
        rdi += 1
    while (rdi s< rbp)

return arg1
