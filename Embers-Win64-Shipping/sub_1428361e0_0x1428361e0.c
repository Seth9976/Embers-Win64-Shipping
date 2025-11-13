// 函数: sub_1428361e0
// 地址: 0x1428361e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg3
int64_t r8 = 0
void* rbp = nullptr
int16_t rsi = 0
int32_t rdx_2 = arg1 s/ 0x16
char const* const rdx_4

if (arg1 != rdx_2 * 0x16 || arg1 == 0)
    rdx_4 = "Instrument header has invalid size"
else
    if (rdx_2 == 1)
        sub_142833a04(2, "File contains no instruments", 0)
        
        if ((*(arg4 + 0x20))(r15, 0x16, 1) == 0xffffffff)
            return 0
        
        return 1
    
    int32_t var_38_1 = 0
    int16_t arg_8
    
    if (rdx_2 - 1 s<= 0)
    label_14283634c:
        
        if ((*(arg4 + 0x20))(r15, 0x14, 1) == 0xffffffff)
            return 0
        
        int32_t rax_11
        rax_11, r8 = (*(arg4 + 0x18))(&arg_8, 2, r15)
        
        if (rax_11 == 0xffffffff)
            return 0
        
        if (arg_8 u>= rsi)
            uint32_t rdi_5 = zx.d(arg_8)
            uint32_t rax_12 = zx.d(rsi)
            uint32_t i_2 = rdi_5 - rax_12
            
            if (rdi_5 != rax_12)
                uint32_t i
                
                do
                    *(rbp + 0x18) = sub_1428340d8(*(rbp + 0x18), 0)
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            return 1
        
        rdx_4 = "Instrument header indices not monotonic"
    else
        while (true)
            void* rax_3 = malloc(0x20)
            *(arg2 + 0x30) = sub_142834060(*(arg2 + 0x30), rax_3)
            *(rax_3 + 0x18) = 0
            
            if ((*(arg4 + 0x18))(rax_3, 0x14, r15) == 0xffffffff)
                return 0
            
            *(rax_3 + 0x14) = 0
            int32_t rax_7
            rax_7, r8 = (*(arg4 + 0x18))(&arg_8, 2, r15)
            
            if (rax_7 == 0xffffffff)
                return 0
            
            uint32_t rdi_2 = zx.d(arg_8)
            
            if (rbp != 0)
                if (rdi_2.w u< rsi)
                    break
                
                uint32_t rax_8 = zx.d(rsi)
                uint32_t i_3 = rdi_2 - rax_8
                
                if (rdi_2 != rax_8)
                    uint32_t i_1
                    
                    do
                        *(rbp + 0x18) = sub_1428340d8(*(rbp + 0x18), 0)
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    rdi_2 = zx.d(arg_8)
                
                r15 = arg3
            else if (rdi_2.w != 0)
                sub_142833a04(2, "%d instrument zones not referenced, discarding", zx.q(rdi_2))
            
            rbp = rax_3
            rsi = rdi_2.w
            int32_t rdi_4 = var_38_1 + 1
            var_38_1 = rdi_4
            
            if (rdi_4 s>= rdx_2 - 1)
                goto label_14283634c
        
        rdx_4 = "Instrument header indices not monotonic"

return sub_142835944(3, rdx_4, r8)
