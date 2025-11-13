// 函数: sub_14265dd70
// 地址: 0x14265dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *arg2
int32_t rax = arg2[1].d
int64_t var_28 = 0
void* result
int512_t zmm2
int128_t zmm6_1
result, zmm2, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (result != 0)
    int64_t* rdi_1 = *(result + 0x120)
    
    if (rdi_1 == 0)
        result.b = 0
    else
        void* rax_1 = sub_14269bba0()
        void* rdx_1 = rdi_1[2]
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            result.b = 0
        else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax_1 + 0x30)
            result.b = 0
        else
            void* result_1 = arg4
            
            if (result_1 != 0)
            label_14265de46:
                void var_48
                int64_t* rax_2
                int64_t* r8_2
                int64_t* r9_2
                rax_2, r8_2, r9_2 = sub_14265ad90(&var_48, result_1, arg1, arg5)
                int64_t* var_50_1 = rax_2
                zmm2.o = zmm6_1
                void* result_2 = result_1
                char rax_3 = sub_14265b2d0(rdi_1, arg2, r8_2, r9_2)
                *arg3 = zmm0
                arg3[1].d = rax
                return zx.q(rax_3)
            
            result, zmm2, zmm6_1 = sub_142657070(rdi_1, 0)
            result_1 = result
            
            if (result != 0)
                goto label_14265de46

return result
