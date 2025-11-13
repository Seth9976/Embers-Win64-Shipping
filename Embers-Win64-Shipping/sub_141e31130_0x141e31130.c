// 函数: sub_141e31130
// 地址: 0x141e31130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6

if (arg2 != 0)
    void* result = nullptr
    void* rax_1
    int32_t r8
    rax_1, r8 = sub_141e02fc0(arg2, *arg3)
    void* rdi_1 = rax_1
    
    if (rax_1 != 0)
        goto label_141e311f9
    
    int32_t var_30_1 = 0
    int512_t zmm3
    zmm3.o = zx.o(0)
    int32_t var_38_1 = 0xbf800000
    int512_t zmm2
    zmm2.o = zx.o(0)
    char var_40_1 = 1
    int32_t var_48_1 = 0
    void* result_1
    result_1, zmm6 = sub_141e1b1c0(arg4, arg1, r8, arg4.d)
    result = result_1
    
    if (result_1 != 0)
        sub_141e07230(arg2, result_1, 0x3f800000, 0, zmm6[0], rdi_1.b)
        void* rax_2 = sub_141df8320(arg2, result)
        rdi_1 = rax_2
        *(rax_2 + 0x51) = 0
    label_141e311f9:
        zmm6 = arg7
        *arg3 = *(rdi_1 + 0x110)
        sub_141defe90(rdi_1 + 0x130, zmm6[0])
        sub_141defc30(rdi_1 + 0x130, zmm6)
        
        if (arg8 == 0)
            *(rdi_1 + 0x128) = arg6
            *(rdi_1 + 0x30) = 0xfffffffe
            *(rdi_1 + 0x38) = 0xfffffffe
        else
            void arg_10
            
            if (&arg_10 != rdi_1 + 0x178)
                *(rdi_1 + 0x178) = arg5
                *(rdi_1 + 0x17c) = 1
            
            if (&arg_10 != rdi_1 + 0x180)
                *(rdi_1 + 0x180) = arg6
                *(rdi_1 + 0x184) = 1
                *(rdi_1 + 0x28) = arg8
                return result
        
        *(rdi_1 + 0x28) = arg8
        return result

return nullptr
