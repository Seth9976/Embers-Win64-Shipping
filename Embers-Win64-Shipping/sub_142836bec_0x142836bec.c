// 函数: sub_142836bec
// 地址: 0x142836bec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg3
uint64_t r8 = zx.q(arg1)
void* var_58 = nullptr
int16_t r13 = 0
int32_t rdx_2 = arg1 s/ 0x26
int16_t var_68 = 0
char* rdx_5

if (r8.d != rdx_2 * 0x26 || r8.d == 0)
    rdx_5 = "Preset header chunk size is invalid"
else
    int32_t r15_1 = rdx_2 - 1
    int32_t var_5c_1 = r15_1
    
    if (r15_1 == 0)
        sub_142833a04(2, "File contains no presets", r8)
        
        if ((*(arg4 + 0x20))(r14, zx.q(r15_1 + 0x26), zx.q(r15_1 + 1)) == 0xffffffff)
        label_142836e7c:
            return 0
        
    label_142836c7d:
        return 1
    
    while (true)
        int16_t arg_8
        
        if (r15_1 s<= 0)
            if ((*(arg4 + 0x20))(r14, 0x18, 1) == 0xffffffff)
                goto label_142836e7c
            
            if ((*(arg4 + 0x18))(&arg_8, 2, r14) == 0xffffffff)
                goto label_142836e7c
            
            int32_t rax_21
            rax_21, r8 = (*(arg4 + 0x20))(r14, 0xc, 1)
            
            if (rax_21 == 0xffffffff)
                goto label_142836e7c
            
            if (arg_8 u< r13)
                goto label_142836e08
            
            uint32_t rdi_1 = zx.d(arg_8)
            uint32_t rax_22 = zx.d(r13)
            uint32_t i_2 = rdi_1 - rax_22
            
            if (rdi_1 != rax_22)
                uint32_t i
                
                do
                    *(var_58 + 0x28) = sub_1428340d8(*(var_58 + 0x28), 0)
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            goto label_142836c7d
        
        void* rax_3 = malloc(0x30)
        *(arg2 + 0x28) = sub_142834060(*(arg2 + 0x28), rax_3)
        *(rax_3 + 0x28) = 0
        
        if ((*(arg4 + 0x18))(rax_3, 0x14, r14) == 0xffffffff)
            return 0
        
        *(rax_3 + 0x14) = 0
        int16_t var_64
        
        if ((*(arg4 + 0x18))(&var_64, 2, r14) == 0xffffffff)
            return 0
        
        *(rax_3 + 0x16) = var_64
        int16_t var_60
        
        if ((*(arg4 + 0x18))(&var_60, 2, r14) == 0xffffffff)
            return 0
        
        *(rax_3 + 0x18) = var_60
        
        if ((*(arg4 + 0x18))(&arg_8, 2, r14) == 0xffffffff)
            return 0
        
        int32_t var_50
        
        if ((*(arg4 + 0x18))(&var_50, 4, r14) == 0xffffffff)
            return 0
        
        *(rax_3 + 0x1c) = var_50
        int32_t var_4c
        
        if ((*(arg4 + 0x18))(&var_4c, 4, r14) == 0xffffffff)
            return 0
        
        *(rax_3 + 0x20) = var_4c
        int32_t var_48
        int32_t rax_15
        rax_15, r8 = (*(arg4 + 0x18))(&var_48, 4, r14)
        
        if (rax_15 == 0xffffffff)
            return 0
        
        uint32_t r15_3 = zx.d(arg_8)
        *(rax_3 + 0x24) = var_48
        
        if (var_58 != 0)
            uint32_t rax_17 = zx.d(var_68)
            
            if (r15_3.w u< rax_17.w)
            label_142836e08:
                rdx_5 = "Preset header indices not monotonic"
                break
            
            if (r15_3 != rax_17)
                uint32_t i_3 = r15_3 - rax_17
                uint32_t i_1
                
                do
                    *(var_58 + 0x28) = sub_1428340d8(*(var_58 + 0x28), 0)
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                r14 = arg3
                r15_3 = zx.d(arg_8)
        else if (r15_3.w != 0)
            sub_142833a04(2, "%d preset zones not referenced, discarding", zx.q(r15_3))
        
        var_68 = r15_3.w
        var_58 = rax_3
        r13 = r15_3.w
        r15_1 = var_5c_1 - 1
        var_5c_1 = r15_1

return sub_142835944(3, rdx_5, r8)
