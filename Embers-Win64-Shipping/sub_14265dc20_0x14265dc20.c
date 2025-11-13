// 函数: sub_14265dc20
// 地址: 0x14265dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t zmm0 = *arg2
*arg3 = zmm0
arg3[1].d = arg2[1].d
int64_t var_28 = 0
uint64_t result
int512_t zmm2
int128_t zmm6_1
result, zmm2, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (result != 0)
    int64_t* rdi_1 = *(result + 0x120)
    
    if (rdi_1 == 0)
        result.b = 0
    else
        void* rax_2 = sub_14269bba0()
        void* rdx_1 = rdi_1[2]
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            result.b = 0
        else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax_2 + 0x30)
            result.b = 0
        else
            uint64_t result_1 = arg4
            
            if (result_1 != 0)
            label_14265dd02:
                void var_48
                int64_t* rax_3
                int64_t* r8_2
                int64_t* r9_2
                rax_3, r8_2, r9_2 = sub_14265ad90(&var_48, result_1, arg1, arg5)
                int64_t* var_50_1 = rax_3
                zmm2.o = zmm6_1
                uint64_t result_2 = result_1
                
                if (sub_14265b050(rdi_1, arg2, r8_2, r9_2).b == 0)
                    result.b = 0
                else
                    *arg3 = zmm0
                    arg3[1].d = rax
                    result.b = 1
            else
                result, zmm2, zmm6_1 = sub_142657070(rdi_1, 0)
                result_1 = result
                
                if (result != 0)
                    goto label_14265dd02
                
                result.b = 0

return result
