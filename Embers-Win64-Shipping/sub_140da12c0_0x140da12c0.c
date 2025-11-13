// 函数: sub_140da12c0
// 地址: 0x140da12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg6
int64_t var_48
sub_140d912d0(&var_48, arg2, arg3, arg4, arg5, zmm6.d)
void* rcx_3

if (arg1[1].d == *(arg1 + 0x34))
label_140da13b2:
    rcx_3 = nullptr
else
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t var_30
    int32_t rax_2 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(var_30)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_140da13b2_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *arg1
        int64_t rdx_4
        
        while (true)
            rdx_4 = sx.q(rax_2) * 6
            int32_t var_40
            int32_t var_3c
            int32_t var_38
            int32_t var_34
            
            if (*(r8_1 + (rdx_4 << 3)) == var_48 && *(r8_1 + (rdx_4 << 3) + 8) == var_40
                    && *(r8_1 + (rdx_4 << 3) + 0xc) == var_3c
                    && *(r8_1 + (rdx_4 << 3) + 0x10) == var_38
                    && var_34 f== *(r8_1 + (rdx_4 << 3) + 0x14))
                break
            
            rax_2 = *(r8_1 + (rdx_4 << 3) + 0x28)
            
            if (rax_2 == 0xffffffff)
                goto label_140da13b2_2
        
        rcx_3 = r8_1 + (rdx_4 << 3)
        
        if (rax_2 == 0xffffffff)
        label_140da13b2_2:
            rcx_3 = nullptr

int32_t* rax_3 = rcx_3 + 0x20

if (rcx_3 == 0)
    rax_3 = nullptr

int32_t* result

if (rax_3 == 0)
    if (sub_142b91d10(arg2, arg3, arg4, arg7, sub_140d9a4a0(arg2, zx.q(arg5), zmm6.d)).d != 0)
        result.b = 0
    else
        char rax_4 = (*(arg2 + 8)).b
        
        if ((rax_4 & 1) == 0 && (rax_4 & 2) != 0)
            void* rax_5 = *(arg2 + 0x80)
            int32_t rdx_7
            
            if ((arg4.b & 0x10) == 0)
                rdx_7 = *(rax_5 + 0x1c)
            else
                rdx_7 = *(rax_5 + 0x20)
            
            *arg7 = sub_142b93e80(*arg7, rdx_7)
        
        sub_140d8bbc0(arg1, &var_48, arg7)
        result.b = 1
else
    *arg7 = *rax_3
    result.b = 1

return result
