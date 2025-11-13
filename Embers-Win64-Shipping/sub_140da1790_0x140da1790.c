// 函数: sub_140da1790
// 地址: 0x140da1790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 8) & 0x40) == 0)
    *arg7 = 0
    int64_t* rax
    rax.b = 1
    return rax

int64_t var_58
float zmm6_1 = sub_140d91930(&var_58, arg2, arg3, arg4, arg5, arg6.d)
void* rax_4

if (arg1[1].d == *(arg1 + 0x34))
label_140da18b9:
    rax_4 = nullptr
else
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t var_3c
    int32_t rax_3 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(var_3c)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_140da18b9_1:
        rax_4 = nullptr
    else
        int64_t r8_1 = *arg1
        int64_t rdx_4
        
        while (true)
            rdx_4 = sx.q(rax_3) * 6
            int32_t var_50
            int32_t var_4c
            int32_t var_48
            int32_t var_44
            int32_t var_40
            
            if (*(r8_1 + (rdx_4 << 3)) == var_58 && *(r8_1 + (rdx_4 << 3) + 8) == var_50
                    && *(r8_1 + (rdx_4 << 3) + 0xc) == var_4c
                    && *(r8_1 + (rdx_4 << 3) + 0x10) == var_48
                    && *(r8_1 + (rdx_4 << 3) + 0x14) == var_44
                    && var_40 f== *(r8_1 + (rdx_4 << 3) + 0x18))
                break
            
            rax_3 = *(r8_1 + (rdx_4 << 3) + 0x28)
            
            if (rax_3 == 0xffffffff)
                goto label_140da18b9_2
        
        rax_4 = r8_1 + (rdx_4 << 3)
        
        if (rax_3 == 0xffffffff)
        label_140da18b9_2:
            rax_4 = nullptr

int64_t* rcx_3 = rax_4 + 0x20

if (rax_4 == 0)
    rcx_3 = nullptr

uint64_t rax_5

if (rcx_3 == 0)
    sub_140d9a4a0(arg2, zx.q(arg5), zmm6_1)
    int32_t var_68
    var_68.q = arg7
    
    if (sub_142b92130(arg2, zx.q(*arg3), zx.q(*(arg3 + 4)), arg4, var_68).d != 0)
        rax_5.b = 0
    else
        if (arg4 != 2)
            char rax_6 = (*(arg2 + 8)).b
            
            if ((rax_6 & 1) == 0 && (rax_6 & 2) != 0)
                int32_t rax_8 = sub_142b93e80(*arg7, *(*(arg2 + 0x80) + 0x1c))
                int32_t rcx_8 = *(arg7 + 4)
                *arg7 = rax_8
                *(arg7 + 4) = sub_142b93e80(rcx_8, *(*(arg2 + 0x80) + 0x20))
        
        sub_140d8be00(arg1, &var_58, arg7)
        rax_5.b = 1
else
    *arg7 = *rcx_3
    rax_5.b = 1

return rax_5
