// 函数: sub_140bd0aa0
// 地址: 0x140bd0aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_b8
sub_140b4c2a0(&var_b8)
var_b8 = &data_142e85b30
int64_t* var_b0
var_b0[2] = arg2
*var_b0 = arg2
var_b0[1] = arg2 + arg3
int32_t* rcx_1 = *var_b0
char var_8f
int32_t arg_10

if (&rcx_1[1] u> var_b0[1])
    int32_t* rdx_2 = &arg_10
    void** const* rcx_2 = &var_b8
    
    if ((var_8f & 0x20) != 0)
        sub_140b54070(rcx_2, rdx_2, arg4)
    else
        var_b8[0x2a](rcx_2, rdx_2, 4)
else
    arg_10 = *rcx_1
    *var_b0 += 4

int32_t rbx_1 = 0
int32_t var_c8
int32_t arg_18

if (arg_10 s> 0)
    do
        int32_t* rdx_3 = *var_b0
        
        if (&rdx_3[1] u> var_b0[1])
            int32_t* rdx_4 = &arg_18
            void** const* rcx_4 = &var_b8
            
            if ((var_8f & 0x20) != 0)
                sub_140b54070(rcx_4, rdx_4, arg4)
            else
                var_b8[0x2a](rcx_4, rdx_4, 4)
        else
            arg_18 = *rdx_3
            *var_b0 += 4
        
        int32_t* rdx_5 = *var_b0
        
        if (&rdx_5[1] u> var_b0[1])
            int32_t* rdx_6 = &var_c8
            void** const* rcx_6 = &var_b8
            
            if ((var_8f & 0x20) != 0)
                sub_140b54070(rcx_6, rdx_6, arg4)
            else
                var_b8[0x2a](rcx_6, rdx_6, 4)
        else
            var_c8 = *rdx_5
            *var_b0 += 4
        
        int64_t r8 = *(arg1 + 0xe0)
        arg4 = sub_140bc4ed0(sx.q(var_c8) * 0x30 + r8, sx.q(arg_18) * 0x30 + r8)
        rbx_1 += 1
    while (rbx_1 s< arg_10)

int32_t* rdx_10 = *var_b0
int32_t arg_20

if (&rdx_10[1] u> var_b0[1])
    int32_t* rdx_11 = &arg_20
    void** const* rcx_11 = &var_b8
    
    if ((var_8f & 0x20) != 0)
        sub_140b54070(rcx_11, rdx_11, arg4)
    else
        var_b8[0x2a](rcx_11, rdx_11, 4)
else
    arg_20 = *rdx_10
    *var_b0 += 4

int32_t rsi = 0

if (arg_20 s> 0)
    do
        int32_t var_c0 = 0xffffffff
        sub_140cd4c10(&var_b8, &var_c0, arg4)
        int32_t* rdx_13 = *var_b0
        
        if (&rdx_13[1] u> var_b0[1])
            int32_t* rdx_14 = &arg_18
            void** const* rcx_14 = &var_b8
            
            if ((var_8f & 0x20) != 0)
                sub_140b54070(rcx_14, rdx_14, arg4)
            else
                var_b8[0x2a](rcx_14, rdx_14, 4)
        else
            arg_18 = *rdx_13
            *var_b0 += 4
        
        void* rdi_1 = *(arg1 + 0xc8)
        EnterCriticalSection(rdi_1 + 0xe0)
        int64_t rdi_2
        
        if (*(rdi_1 + 0x110) == *(rdi_1 + 0x13c))
        labelid_1a:
            rdi_2 = 0
        else
            void* r9_1 = rdi_1 + 0x140
            void* rdx_15 = *(r9_1 + 8)
            int64_t rcx_16 = sx.q(var_c0)
            
            if (rdx_15 != 0)
                r9_1 = rdx_15
            
            int32_t rax_21 = *(r9_1 + (((sx.q(*(rdi_1 + 0x150)) - 1) & rcx_16) << 2))
            
            if (rax_21 == 0xffffffff)
            label_140bd0d17:
                rdi_2 = 0
            else
                int64_t r9_2 = *(rdi_1 + 0x108)
                int64_t r8_4
                
                while (true)
                    r8_4 = sx.q(rax_21)
                    int64_t rdx_16 = r8_4 * 3
                    
                    if (*(r9_2 + (rdx_16 << 3)) == rcx_16.d)
                        break
                    
                    rax_21 = *(r9_2 + (rdx_16 << 3) + 0x10)
                    
                    if (rax_21 == 0xffffffff)
                        goto label_140bd0d17_2
                
                if (rax_21 == 0xffffffff)
                label_140bd0d17_1:
                    rdi_2 = 0
                else
                    void* rdi_3 = r9_2 + r8_4 * 0x18
                    
                    if (rdi_3 == 0)
                    label_140bd0d17_2:
                        rdi_2 = 0
                    else
                        rdi_2 = *(rdi_3 + 8)
        
        if (rdi_1 != -0xe0)
            LeaveCriticalSection(rdi_1 + 0xe0)
        
        int32_t rbx_3 = 0
        
        if (arg_18 s> 0)
            do
                int32_t* rdx_17 = *var_b0
                
                if (&rdx_17[1] u> var_b0[1])
                    int32_t* rdx_18 = &var_c8
                    void** const* rcx_19 = &var_b8
                    
                    if ((var_8f & 0x20) != 0)
                        sub_140b54070(rcx_19, rdx_18, arg4)
                    else
                        var_b8[0x2a](rcx_19, rdx_18, 4)
                else
                    var_c8 = *rdx_17
                    *var_b0 += 4
                
                int32_t* rdx_19 = *var_b0
                int32_t var_c4
                
                if (&rdx_19[1] u> var_b0[1])
                    int32_t* rdx_20 = &var_c4
                    void** const* rcx_21 = &var_b8
                    
                    if ((var_8f & 0x20) != 0)
                        sub_140b54070(rcx_21, rdx_20, arg4)
                    else
                        var_b8[0x2a](rcx_21, rdx_20, 4)
                else
                    var_c4 = *rdx_19
                    *var_b0 += 4
                
                if (rdi_2 != 0)
                    arg4 = sub_140bc4ed0(sx.q(var_c4) * 0x30 + *(arg1 + 0xe0), 
                        sx.q(var_c8) * 0x30 + *(rdi_2 + 0xe0))
                
                rbx_3 += 1
            while (rbx_3 s< arg_18)
        
        rsi += 1
    while (rsi s< arg_20)

return sub_140b4cb40(&var_b8)
