// 函数: sub_1429e7920
// 地址: 0x1429e7920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1429ddec0(0x20, 0x4ed0)
void* result_1 = result

if (result_1 != 0)
    result_1 = result + 0x270

if (result_1 != 0)
    memset(result, 0, 0x4ed0)
    void var_38
    
    if (__intrinsic_setjmp(result_1 + 0x60, &var_38) == 0)
        *(result_1 + 0x58) = 1
        void* rax_5
        int64_t r9
        rax_5, r9 = sub_1429dddd0(1, 0x7fc)
        *(result_1 + 0x1168) = rax_5
        
        if (*(result_1 + 0x1168) == 0)
            sub_1429da010(result_1, 2, "Failed to allocate cm->fc", r9)
        
        void* rax_7
        int64_t r9_1
        rax_7, r9_1 = sub_1429dddd0(4, 0x7fc)
        *(result_1 + 0x1170) = rax_7
        
        if (*(result_1 + 0x1170) == 0)
            sub_1429da010(result_1, 2, "Failed to allocate cm->frame_contexts", r9_1)
        
        *(result + 0x4ec0) = 1
        bool z
        
        if (0 == data_143fed25c)
            data_143fed25c = 1
            z = true
        else
            data_143fed25c
            z = false
        
        if (not(z))
            bool z_1
            
            if (2 == data_143fed25c)
                data_143fed25c = 2
                z_1 = true
            else
                data_143fed25c
                z_1 = false
            
            if (not(z_1))
                bool z_2
                
                do
                    Sleep(0)
                    
                    if (2 == data_143fed25c)
                        data_143fed25c = 2
                        z_2 = true
                    else
                        data_143fed25c
                        z_2 = false
                while (not(z_2))
        else
            if (data_143fed260 == 0)
                sub_142a2d430()
                sub_1429dd6c0()
                int64_t xcr0
                sub_1429dd720(xcr0)
                sub_142a283a0()
                data_143fed260 = 1
            
            data_143fed25c += 1
        
        __builtin_memset(result_1 + 0x1a0, 0xff, 0x20)
        __builtin_memset(result_1 + 0x1c0, 0xff, 0x20)
        *(result_1 + 0x4524) = 0
        *(result + 0x4810) = 1
        *(result + 0x47e8) = arg1
        *(result_1 + 0x452c) = 8
        *(result_1 + 0x4530) = 8
        *(result_1 + 0x3e8) = sub_1429e7810
        *(result_1 + 0x3f0) = sub_1429e7890
        *(result_1 + 0x3f8) = sub_1429e78d0
        sub_142a26dd0(result_1)
        *(result_1 + 0x58) = 0
        data_143cc7018(result + 0x4830)
        return result
    
    *(result_1 + 0x58) = 0
    sub_1429e7bb0(result)

return 0
