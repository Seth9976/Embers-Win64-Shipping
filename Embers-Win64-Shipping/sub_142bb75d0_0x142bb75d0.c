// 函数: sub_142bb75d0
// 地址: 0x142bb75d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x2a8)
int64_t rbp = arg2[6]
int32_t arg_8 = 2

if (rbx != 0)
    sub_142b99980(rbp, *(rbx + 0x30))
    int64_t rdx_1 = *(rbx + 0x20)
    *(rbx + 0x30) = 0
    *(rbx + 0x38) = 0
    sub_142b99980(rbp, rdx_1)
    *(rbx + 0x20) = 0
    *(rbx + 0x28) = 0
    sub_142b99980(rbp, rbx)
    *(arg1 + 0x2a8) = 0

void* const rbx_1 = sub_142b99860(rbp, 0x40, &arg_8)
int32_t rax_1 = arg_8

if (rax_1 == 0)
    rax_1 = sub_142b96500(arg2, arg2[1].d)
    arg_8 = rax_1
    
    if (rax_1 == 0)
        *(rbx_1 + 4) = *(arg1 + 0x27c)
        *(rbx_1 + 0x14) = *(arg1 + 0x288)
        *(rbx_1 + 0x18) = *(arg1 + 0x280)
        void* r15_1 = *(arg1 + 0x2a0)
        int64_t rax_4 = *(r15_1 + 0x48)
        int32_t rdx_5
        
        if (rax_4 == 0)
            rdx_5 = arg_8
        else
            void var_58
            int32_t rax_5 = (*rax_4)(&var_58, arg2[6], arg2[7], arg2[8])
            arg_8 = rax_5
            rdx_5 = rax_5
            
            if (rax_5 == 0)
                void* const var_48_1 = rbx_1
                uint64_t (* var_40_1)(char* arg1, uint64_t arg2, void* arg3) = sub_142bbbb20
                void* var_38_1 = arg1 + 0xd8
                arg_8 = (*(*(r15_1 + 0x48) + 0x10))(&var_58, rdx_5)
                (*(*(r15_1 + 0x48) + 8))(&var_58)
                rdx_5 = arg_8
        
        if (rdx_5.b == 2)
            int32_t r9_2 = arg2[1].d
            void* r8_2 = arg2[7]
            
            if (r9_2 u> 6 && *(r8_2 + 1) u< 4 && (
                    ((zx.d(*(r8_2 + 5)) << 8 | zx.d(*(r8_2 + 4))) << 8 | zx.d(*(r8_2 + 3))) << 8
                    | zx.d(*(r8_2 + 2))) == r9_2)
                int32_t rax_12 = sub_142bbaed0(arg1, arg2, rbx_1)
                rdx_5 = rax_12
                arg_8 = rax_12
        
        if (rdx_5 == 0)
            *(arg1 + 0x27c) = *(rbx_1 + 4)
            *(arg1 + 0x58) = sx.d(*(rbx_1 + 6))
            *(arg1 + 0x5c) = sx.d(*(rbx_1 + 0xa))
            *(arg1 + 0x60) = (*(rbx_1 + 0xc) + 0xffff) s>> 0x10
            *(arg1 + 0x64) = (*(rbx_1 + 0x10) + 0xffff) s>> 0x10
            *(arg1 + 0x6a) = ((*(rbx_1 + 0x14) + 0x8000) s>> 0x10).w
            *(arg1 + 0x6c) = ((*(rbx_1 + 0x18) + 0x8000) s>> 0x10).w
            
            if (*(rbx_1 + 0x38) != 0)
                *(arg1 + 8) |= 0x40
                *(arg1 + 0x2a8) = rbx_1
                rbx_1 = nullptr
        
        sub_142b96620(arg2)
        rax_1 = arg_8

if (rbx_1 == 0)
    return rax_1

sub_142b99980(rbp, *(rbx_1 + 0x30))
int64_t rdx_8 = *(rbx_1 + 0x20)
*(rbx_1 + 0x30) = 0
*(rbx_1 + 0x38) = 0
sub_142b99980(rbp, rdx_8)
*(rbx_1 + 0x20) = 0
*(rbx_1 + 0x28) = 0
sub_142b99980(rbp, rbx_1)
return arg_8
