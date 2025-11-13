// 函数: sub_142835b7c
// 地址: 0x142835b7c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbp = arg4
int64_t r12 = arg3
int32_t r14 = arg1
int64_t* rdi = nullptr
int16_t rsi = 0
int16_t r15 = 0
int32_t rax_1 = arg1 & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

char const* const rdx

if (rax_1 != 0 || arg1 == 0)
    rdx = "Instrument bag chunk size is invalid"
else
    int64_t* rbx_1 = *(arg2 + 0x30)
    int16_t var_48
    int16_t arg_8
    
    if (rbx_1 == 0)
    label_142835cf5:
        
        if (r14 == 4)
            int32_t rax_13 = (*(rbp + 0x18))(&arg_8, 2, r12)
            int32_t rax_14
            
            if (rax_13 != 0xffffffff)
                rax_14, arg3 = (*(rbp + 0x18))(&var_48, 2, r12)
            
            if (rax_13 == 0xffffffff || rax_14 == 0xffffffff)
                return 0
            
            if (rdi == 0)
                if (arg_8 u> 0)
                    arg3 =
                        sub_142833a04(2, "No instrument generators and terminal index not 0", arg3)
                
                if (var_48 u> 0)
                    sub_142833a04(2, "No instrument modulators and terminal index not 0", arg3)
                
                return 1
            
            if (arg_8 u< rsi)
            label_142835d11:
                rdx = "Instrument generator indices not monotonic"
            else
                if (var_48 u>= r15)
                    uint32_t rbx_2 = zx.d(arg_8)
                    uint32_t rax_15 = zx.d(rsi)
                    uint32_t i_4 = rbx_2 - rax_15
                    
                    if (rbx_2 != rax_15)
                        uint32_t i
                        
                        do
                            rdi[1] = sub_1428340d8(rdi[1], 0)
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                    
                    uint32_t rbx_3 = zx.d(var_48)
                    uint32_t rax_17 = zx.d(r15)
                    uint32_t i_5 = rbx_3 - rax_17
                    
                    if (rbx_3 != rax_17)
                        uint32_t i_1
                        
                        do
                            rdi[2] = sub_1428340d8(rdi[2], 0)
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    return 1
                
                rdx = "Instrument modulator indices not monotonic"
        else
            rdx = "Instrument chunk size mismatch"
    else
    label_142835be1:
        int64_t** r12_1 = *(*rbx_1 + 0x18)
        
        while (true)
            if (r12_1 == 0)
                rbx_1 = rbx_1[1]
                
                if (rbx_1 != 0)
                    goto label_142835be1
                
                r12 = arg_18
                goto label_142835cf5
            
            int32_t temp0_1 = r14
            r14 -= 4
            
            if (temp0_1 - 4 s< 0)
                return sub_142835944(3, "Instrument bag chunk size mismatch", arg3)
            
            int64_t* rax_5 = malloc(0x18)
            *r12_1 = rax_5
            rax_5[1] = 0
            rax_5[2] = 0
            
            if ((*(rbp + 0x18))(&arg_8, 2, arg_18) == 0xffffffff)
                return 0
            
            int32_t rax_7
            rax_7, arg3 = (*(rbp + 0x18))(&var_48, 2, arg_18)
            
            if (rax_7 == 0xffffffff)
                return 0
            
            *rax_5 = 0
            uint32_t r13_2 = zx.d(var_48)
            
            if (rdi != 0)
                if (arg_8 u< rsi)
                    goto label_142835d11
                
                if (r13_2.w u< r15)
                    break
                
                uint32_t rbp_1 = zx.d(arg_8)
                uint32_t rax_8 = zx.d(rsi)
                uint32_t i_6 = rbp_1 - rax_8
                
                if (rbp_1 != rax_8)
                    uint32_t i_2
                    
                    do
                        int64_t* rax_9
                        rax_9, arg3 = sub_1428340d8(rdi[1], 0)
                        rdi[1] = rax_9
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
                
                uint32_t rax_10 = zx.d(r15)
                uint32_t i_7 = r13_2 - rax_10
                
                if (r13_2 != rax_10)
                    uint32_t i_3
                    
                    do
                        int64_t* rax_11
                        rax_11, arg3 = sub_1428340d8(rdi[2], 0)
                        rdi[2] = rax_11
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                
                rbp = arg4
            
            rdi = rax_5
            r15 = r13_2.w
            rsi = arg_8
            r12_1 = r12_1[1]
        
        rdx = "Instrument modulator indices not monotonic"

return sub_142835944(3, rdx, arg3)
