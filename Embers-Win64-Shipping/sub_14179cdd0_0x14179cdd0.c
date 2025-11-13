// 函数: sub_14179cdd0
// 地址: 0x14179cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
void* rdi = &rbx[sx.q(arg1[1].d)]
int64_t result
uint64_t var_58
int128_t var_48
uint128_t zmm6

if (rbx == rdi)
label_14179ce77:
    void** rbx_1 = arg1[4]
    uint128_t var_28_1 = zmm6
    zmm6 = zx.o(*arg4)
    int32_t rsi_1 = arg4[1].d
    void* rdi_1 = &rbx_1[sx.q(arg1[5].d)]
    
    if (rbx_1 == rdi_1)
    label_14179cece:
        void** rbx_2 = arg1[8]
        void* rdi_2 = &rbx_2[sx.q(arg1[9].d)]
        
        if (rbx_2 == rdi_2)
        label_14179cf3b:
            result.b = 1
        else
            while (true)
                void* rcx_2 = *rbx_2
                
                if (rcx_2 != 0)
                    int64_t* var_60_2 = arg5
                    var_58 = zmm6.q
                    __builtin_memcpy(&var_48, 
                        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x"
                    "ff\xff\xff\x7f\xff", 
                        0x18)
                    int32_t var_50_3 = rsi_1
                    result, zmm6 = sub_1416ec780(rcx_2, arg2, arg3, &var_58, &var_48)
                    
                    if (result.b == 0)
                        break
                
                rbx_2 = &rbx_2[1]
                
                if (rbx_2 == rdi_2)
                    goto label_14179cf3b
            
            result.b = 0
    else
        while (true)
            void* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                var_58 = zmm6.q
                int32_t var_50_2 = rsi_1
                result, zmm6 = sub_1416f85c0(rcx_1, arg2, arg3, &var_58, arg5)
                
                if (result.b == 0)
                    break
            
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 == rdi_1)
                goto label_14179cece
        
        result.b = 0
else
    while (true)
        void* rcx = *rbx
        
        if (rcx != 0)
            int32_t rax_1 = arg4[1].d
            var_58 = *arg4
            int32_t var_50_1 = rax_1
            int64_t* var_60_1 = arg5
            __builtin_memcpy(&var_48, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\x"
            "ff\x7f\xff", 
                0x18)
            result, zmm6 = sub_1416ec100(rcx, arg2, arg3, &var_58, &var_48)
            
            if (result.b == 0)
                result.b = 0
                break
        
        rbx = &rbx[1]
        
        if (rbx == rdi)
            goto label_14179ce77
return result
