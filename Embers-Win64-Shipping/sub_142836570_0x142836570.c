// 函数: sub_142836570
// 地址: 0x142836570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbx = arg4
int64_t r12 = arg3
int32_t r14 = arg1
int64_t* rsi = nullptr
int16_t i_13 = 0
int16_t i_15 = 0
int32_t rax_1 = arg1 & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

char const* const rdx_2

if (rax_1 != 0 || arg1 == 0)
    rdx_2 = "Preset bag chunk size is invalid"
else
    int64_t* rdi_1 = *(arg2 + 0x28)
    int64_t* var_50_1 = rdi_1
    int16_t i_8
    int16_t i_9
    
    if (rdi_1 != 0)
    label_1428365da:
        void** r12_1 = *(*rdi_1 + 0x28)
        
        while (true)
            if (r12_1 == 0)
                rdi_1 = rdi_1[1]
                var_50_1 = rdi_1
                
                if (rdi_1 != 0)
                    goto label_1428365da
                
                r12 = arg_18
                break
            
            int32_t temp0_1 = r14
            r14 -= 4
            
            if (temp0_1 - 4 s< 0)
                goto label_1428367a4
            
            int64_t* rax_5 = malloc(0x18)
            *r12_1 = rax_5
            rax_5[1] = 0
            rax_5[2] = 0
            
            if ((*(rbx + 0x18))(&i_8, 2, arg_18) == 0xffffffff)
                return 0
            
            int32_t rax_7
            rax_7, arg3 = (*(rbx + 0x18))(&i_9, 2, arg_18)
            
            if (rax_7 == 0xffffffff)
                return 0
            
            *rax_5 = 0
            int16_t i_14 = i_9
            
            if (rsi != 0)
                if (i_8 u< i_13)
                    goto label_14283679b
                
                if (i_14 u< i_15)
                    goto label_142836792
                
                int16_t i_4 = i_8
                int16_t i_12 = i_4
                i_4 -= i_13
                
                if (i_12 != i_13)
                    int16_t i
                    
                    do
                        int64_t* rax_8
                        rax_8, arg3 = sub_1428340d8(rsi[1], 0)
                        rsi[1] = rax_8
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                    rdi_1 = var_50_1
                    i_14 = i_9
                
                int16_t i_5 = i_14 - i_15
                
                if (i_14 != i_15)
                    int16_t i_1
                    
                    do
                        int64_t* rax_9
                        rax_9, arg3 = sub_1428340d8(rsi[2], 0)
                        rsi[2] = rax_9
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    i_14 = i_9
                
                rbx = arg4
            
            rsi = rax_5
            i_15 = i_14
            i_13 = i_8
            r12_1 = r12_1[1]
    
    if (r14 != 4)
    label_1428367a4:
        rdx_2 = "Preset bag chunk size mismatch"
    else
        int32_t rax_11 = (*(rbx + 0x18))(&i_9, zx.q(r14 - 2), r12)
        int32_t rax_12
        
        if (rax_11 != 0xffffffff)
            rax_12, arg3 = (*(rbx + 0x18))(&i_8, zx.q(r14 - 2), r12)
        
        if (rax_11 == 0xffffffff || rax_12 == 0xffffffff)
            return 0
        
        if (rsi == 0)
            if (i_9 u> 0)
                arg3 = sub_142833a04(r14 - 2, "No preset generators and terminal index not 0", arg3)
            
            if (i_8 u> 0)
                sub_142833a04(r14 - 2, "No preset modulators and terminal index not 0", arg3)
            
            return 1
        
        int16_t i_7 = i_9
        
        if (i_7 u< i_13)
        label_14283679b:
            rdx_2 = "Preset bag generator indices not monotonic"
        else
            int16_t i_6 = i_8
            
            if (i_6 u>= i_15)
                int16_t i_10 = i_7
                i_7 -= i_13
                
                if (i_10 != i_13)
                    int16_t i_2
                    
                    do
                        rsi[1] = sub_1428340d8(rsi[1], 0)
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                
                int16_t i_11 = i_6
                i_6 -= i_15
                
                if (i_11 != i_15)
                    int16_t i_3
                    
                    do
                        rsi[2] = sub_1428340d8(rsi[2], 0)
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                
                return 1
            
        label_142836792:
            rdx_2 = "Preset bag modulator indices not monotonic"

return sub_142835944(3, rdx_2, arg3)
