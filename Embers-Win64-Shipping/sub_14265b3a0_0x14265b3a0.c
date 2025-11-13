// 函数: sub_14265b3a0
// 地址: 0x14265b3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = data_143dbb1f8.q
int32_t rax = data_143dbb200
int64_t var_28 = 0
void* rax_1
int512_t zmm2
int128_t zmm6_1
rax_1, zmm2, zmm6_1 = sub_1423de540(data_143f5b298, arg2, 1)

if (rax_1 != 0)
    int64_t* rdi_1 = *(rax_1 + 0x120)
    
    if (rdi_1 != 0)
        void* rax_2 = sub_14269bba0()
        void* rdx = rdi_1[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            void* rbx_1 = arg4
            
            if (rbx_1 != 0)
            label_14265b472:
                void var_48
                int64_t* rax_6
                int64_t* r8_2
                int64_t* r9_2
                rax_6, r8_2, r9_2 = sub_14265ad90(&var_48, rbx_1, arg2, arg5)
                int64_t* var_50_1 = rax_6
                zmm2.o = zmm6_1
                void* var_58_1 = rbx_1
                sub_14265b2d0(rdi_1, arg3, r8_2, r9_2)
            else
                void* rax_5
                rax_5, zmm2, zmm6_1 = sub_142657070(rdi_1, 0)
                rbx_1 = rax_5
                
                if (rax_5 != 0)
                    goto label_14265b472

*arg1 = zmm0
arg1[1].d = rax
return arg1
