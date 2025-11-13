// 函数: sub_142ac80b0
// 地址: 0x142ac80b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg5
int128_t zmm6 = arg4.o
int64_t r15 = sx.q(arg2)

if (r14 != 0)
    *r14 = 0

void* result_2
void* result = result_2
int64_t r12
r12.b = 0
int32_t* var_48
int512_t zmm1

if (r15.d u<= 0x13)
    switch (r15)
        case 0
            zmm1, zmm6 = sub_142ac8670(arg1, arg3, 1, arg4, result)
        case 1
            zmm1, zmm6 = sub_142ac8670(arg1, arg3, 2, arg4, result)
        case 2
            zmm1, zmm6 = sub_142ac8670(arg1, arg3, 4, arg4, result)
        case 3
            var_48 = r14
            sub_142ac8cb0(arg1, arg3, 2, 4, zmm6.q, result, var_48)
        case 4
            var_48 = r14
            sub_142ac8cb0(arg1, arg3, 0x10, 0x20, zmm6.q, result, var_48)
        case 0x11
            sub_142a48100(result, &arg3[1])
            r12.b = 1
        case 0x12
            void* rax_1
            rax_1, zmm1 = sub_142ad04d0(arg3)
            void* const rdx_6 = &data_143656060
            
            if (rax_1 != 0)
                rdx_6 = rax_1
            
            sub_142a66950(result, rdx_6, 0xffffffff)
            r12.b = 1
        case 0x13
            sub_142ac84e0(arg1, arg3, result)
            r12.b = 1

if ((*(result + 8) & 0xffe0) == 0 && r12.b == 0)
    int64_t rax_2 = *arg3
    int32_t arg_10 = 0
    zmm1.o = zmm6
    (*(rax_2 + 0x18))(arg3, zmm1, 0, &result_2, &arg5, &arg_10, var_48)
    int32_t rdx_9 = result_2.d + arg5.d
    
    if (arg_10 s<= 0)
        int64_t* var_58_6
        int32_t* var_50_3
        void* result_1
        int32_t* var_40_1
        char r9_2
        
        if (r15.d u<= 0x10)
            switch (r15)
                case 0, 1, 3, 5
                    sub_142ac8a50(arg1, rdx_9, 0, result, &arg_10)
                case 2, 4, 6
                    sub_142ac8a50(arg1, rdx_9, 1, result, &arg_10)
                case 7
                    var_50_3.b = 1
                    var_58_6.b = 1
                    sub_142ac87a0(arg1, rdx_9, 1, 1, var_58_6.b, var_50_3.b, result, &arg_10)
                case 8
                    var_50_3.b = 1
                    var_58_6.b = 1
                    sub_142ac87a0(arg1, rdx_9, 1, 0, var_58_6.b, var_50_3.b, result, &arg_10)
                case 9
                    var_50_3.b = 1
                    var_58_6.b = 0
                    sub_142ac87a0(arg1, rdx_9, 1, 1, var_58_6.b, var_50_3.b, result, &arg_10)
                case 0xa
                    var_50_3.b = 1
                    var_58_6.b = 0
                    sub_142ac87a0(arg1, rdx_9, 1, 0, var_58_6.b, var_50_3.b, result, &arg_10)
                case 0xb
                    var_50_3.b = 0
                    var_58_6.b = 0
                    sub_142ac87a0(arg1, rdx_9, 1, 1, var_58_6.b, var_50_3.b, result, &arg_10)
                case 0xc
                    var_50_3.b = 0
                    var_58_6.b = 0
                    sub_142ac87a0(arg1, rdx_9, 1, 0, var_58_6.b, var_50_3.b, result, &arg_10)
                case 0xd
                    r9_2 = 1
                    var_40_1 = &arg_10
                    result_1 = result
                    var_50_3.b = 1
                label_142ac83fa:
                    var_58_6.b = 0
                    sub_142ac87a0(arg1, rdx_9, 0, r9_2, var_58_6.b, var_50_3.b, result_1, var_40_1)
                case 0xe
                    var_40_1 = &arg_10
                    result_1 = result
                    var_50_3.b = 1
                label_142ac83f7:
                    r9_2 = 0
                    goto label_142ac83fa
                case 0xf
                    r9_2 = 1
                    var_40_1 = &arg_10
                    result_1 = result
                    var_50_3.b = 0
                    goto label_142ac83fa
                case 0x10
                    var_40_1 = &arg_10
                    result_1 = result
                    var_50_3.b = 0
                    goto label_142ac83f7
        
        if (r14 != 0)
            int32_t rbp
            rbp.b = arg5.d != 0
            *r14 = rbp + 1

return result
