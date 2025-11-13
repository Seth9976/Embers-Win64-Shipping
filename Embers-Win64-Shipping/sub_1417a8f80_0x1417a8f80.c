// 函数: sub_1417a8f80
// 地址: 0x1417a8f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3[1].d)
int64_t var_48 = 0
int32_t i_2 = 0
int64_t r9 = rax * 3
int64_t rdx = *(*arg3 + 0x140)
int64_t* arg_8 = &var_48
int32_t rax_2 = *(rdx + (r9 << 3) + 8)
int64_t var_38 = *(rdx + (r9 << 3))
int32_t var_30 = rax_2
int64_t var_2c = *(rdx + (r9 << 3) + 0xc)
int32_t var_24 = *(rdx + (r9 << 3) + 0x14)
int64_t result
int64_t rcx_1
int512_t zmm0_1
int128_t zmm6_1
result, rcx_1, zmm0_1, zmm6_1 = sub_1417929e0(arg1 + 0x118, &var_38, &arg_8)
int64_t i_1 = sx.q(i_2)
int64_t r9_1 = var_48

if (i_1 s> 0)
    int64_t rbx_1 = 0
    int64_t i
    
    do
        int64_t* r8_1 = *(rbx_1 + r9_1 + 8)
        int64_t* rax_4 = nullptr
        
        if (*(r8_1 + 0xc) u>= 2)
            rax_4 = r8_1
        
        if (rax_4 != 0)
            result = *rax_4
            rcx_1 = *(result + 0x398)
        
        if (rax_4 == 0 || *(sx.q(rax_4[1].d) + rcx_1) != 4)
            void* r11_1 = *arg3
            int64_t r10_1 = sx.q(arg3[1].d)
            
            if (*(*(r11_1 + 0x80) + (r10_1 << 3)) == 0)
                result = *r8_1
                rcx_1 = *(result + 0x80)
            
            if (*(*(r11_1 + 0x80) + (r10_1 << 3)) != 0 || *(rcx_1 + (sx.q(r8_1[1].d) << 3)) != 0)
                result = *(r11_1 + 0xc8)
                int64_t* rdx_4 = *(result + (r10_1 << 3))
                
                if (rdx_4 != r8_1)
                    zmm0_1.o = zmm6_1
                    result, rcx_1, zmm0_1, zmm6_1 = sub_1417b1900(rcx_1, rdx_4, r8_1)
                    r9_1 = var_48
        
        rbx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r9_1 == 0)
    return result

return sub_140a74f90(r9_1)
