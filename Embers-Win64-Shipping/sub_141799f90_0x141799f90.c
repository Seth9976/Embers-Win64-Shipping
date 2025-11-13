// 函数: sub_141799f90
// 地址: 0x141799f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t* rbp = arg4
uint128_t zmm6
uint128_t var_28 = zmm6
void* rdi = &rbx[sx.q(arg1[1].d)]
int64_t result
uint64_t var_58
int32_t var_50
int128_t var_48

if (rbx == rdi)
label_14179a03f:
    void** rbx_1 = arg1[4]
    void* rdi_1 = &rbx_1[sx.q(arg1[5].d)]
    
    if (rbx_1 == rdi_1)
    label_14179a077:
        void** rbx_2 = arg1[8]
        void* rdi_2 = &rbx_2[sx.q(arg1[9].d)]
        
        if (rbx_2 != rdi_2)
            zmm6 = zx.o(var_58)
            
            do
                void* rcx_2 = *rbx_2
                
                if (rcx_2 != 0)
                    int64_t* var_60_2 = rbp
                    int128_t* var_68_2 = &var_48
                    uint64_t var_58_1 = zmm6.q
                    __builtin_memcpy(&var_48, 
                        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x"
                    "ff\xff\xff\x7f\xff", 
                        0x18)
                    int32_t var_50_1 = var_50
                    result, arg4, zmm6 = sub_1416eefe0(rcx_2, arg2, arg3, arg4)
                    
                    if (result.b == 0)
                        goto label_14179a112_1
                
                rbx_2 = &rbx_2[1]
            while (rbx_2 != rdi_2)
        
        result.b = 1
    else
        while (true)
            void* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                result, arg4 = sub_1416f00f0(rcx_1, arg2, arg3, rbp)
                
                if (result.b == 0)
                    break
            
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 == rdi_1)
                goto label_14179a077
        
    label_14179a112:
        result.b = 0
else
    int32_t r12_1 = var_50
    zmm6 = zx.o(var_58)
    
    while (true)
        void* rcx = *rbx
        
        if (rcx != 0)
            int64_t* var_60_1 = rbp
            int128_t* var_68_1 = &var_48
            var_58 = zmm6.q
            __builtin_memcpy(&var_48, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\x"
            "ff\x7f\xff", 
                0x18)
            var_50 = r12_1
            result, arg4, zmm6 = sub_1416ee890(rcx, arg2, arg3, arg4)
            
            if (result.b == 0)
                break
        
        rbx = &rbx[1]
        
        if (rbx == rdi)
            goto label_14179a03f
    
label_14179a112_1:
    result.b = 0
return result
