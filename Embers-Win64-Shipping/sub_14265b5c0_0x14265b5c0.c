// 函数: sub_14265b5c0
// 地址: 0x14265b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t rcx = *(arg1 + 0x140)

if (((rcx u>> 2).b & 1) == 0)
    int32_t r14_1 = data_143b51518
    uint128_t zmm6 = zx.o(data_143b51510)
    void* rax_2
    
    if ((rcx.b & 1) == 0)
        rax_2, zmm6 = sub_142656820(arg1)
    else
        rax_2 = arg1 + 0x130
    
    int64_t rcx_3 = sx.q(*(rax_2 + 8))
    
    if (rcx_3.d s> 0 && *(arg1 + 0x30) s> 1)
        uint128_t zmm7
        uint128_t var_38_1 = zmm7
        int128_t zmm8
        int128_t var_48_1 = zmm8
        int32_t var_68_1
        int32_t var_60_1
        uint128_t zmm0
        uint128_t zmm2
        uint128_t zmm3
        uint128_t zmm4
        uint128_t zmm5
        bool cond:0_1
        
        if (rdi.d s< 0)
            cond:0_1 = rdi.d u< rcx_3.d
        label_14265b860:
            
            if (not(cond:0_1))
                int64_t rax_7 = *rax_2
                zmm3 = 0x3f000000
                int32_t* rcx_6 = *(arg1 + 0x28)
                int64_t rdx_2 = rcx_3 << 5
                zmm6.d = (*(rdx_2 + rax_7 - 0x14)).d f- *(rdx_2 + rax_7 - 0x20)
                zmm7.d = (*(rdx_2 + rax_7 - 0x10)).d f- *(rdx_2 + rax_7 - 0x1c)
                zmm8.d = (*(rdx_2 + rax_7 - 0xc)).d f- *(rdx_2 + rax_7 - 0x18)
                zmm6.d = zmm6.d f* 0.5f
                zmm7.d = zmm7.d f* 0.5f
                zmm6.d = zmm6.d f+ *(rdx_2 + rax_7 - 0x20)
                zmm8.d = zmm8.d f* 0.5f
                zmm7.d = zmm7.d f+ *(rdx_2 + rax_7 - 0x1c)
                zmm6.d = zmm6.d f- *rcx_6
                zmm8.d = zmm8.d f+ *(rdx_2 + rax_7 - 0x18)
                zmm7.d = zmm7.d f- rcx_6[1]
                zmm8.d = zmm8.d f- rcx_6[2]
                zmm0.d = zmm6.d f* zmm6.d
                zmm2.d = zmm7.d f* zmm7.d
            label_14265b8e3:
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
                
                if (zmm2.d f== 1f)
                    goto label_14265b98d
                
                if (zmm2.d f>= 9.99999994e-09f)
                    zmm4 = zmm3
                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                    zmm3.d = zmm2.d f* zmm4.d
                    zmm0.d = zmm5.d f* zmm5.d
                    zmm2.d = zmm4.d f- zmm3.d f* zmm0.d
                    zmm0.d = zmm5.d f* zmm2.d
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
                    zmm4.d = zmm4.d f- zmm3.d
                    zmm0.d = zmm5.d f* zmm4.d
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm7.d = zmm7.d f* zmm5.d
                    zmm6.d = zmm6.d f* zmm5.d
                    zmm8.d = zmm8.d f* zmm5.d
                label_14265b98d:
                    int32_t var_64_4 = zmm7.d
                    var_60_1 = zmm8.d
                    var_68_1 = zmm6.d
                else
                    var_68_1 = data_143dbb1f8.d
                    var_60_1 = data_143dbb200.d
                    float var_64_3 = data_143dbb1fc
                
                zmm6 = zx.o(var_68_1.q)
                r14_1 = var_60_1
        else
            cond:0_1 = rdi.d u< rcx_3.d
            
            if (rdi.d s>= rcx_3.d)
                goto label_14265b860
            
            int32_t* rdx = *rax_2
            
            if (rdi.d == 0)
                zmm3 = 0x3f000000
                int32_t* rax_6 = *(arg1 + 0x28)
                zmm6.d = rdx[3].d f- *rdx
                zmm7.d = rdx[4].d f- rdx[1]
                zmm8.d = rdx[5].d f- rdx[2]
                zmm6.d = zmm6.d f* 0.5f
                zmm7.d = zmm7.d f* 0.5f
                zmm6.d = zmm6.d f+ *rdx
                zmm8.d = zmm8.d f* 0.5f
                zmm7.d = zmm7.d f+ rdx[1]
                zmm6.d = zmm6.d f- *rax_6
                zmm8.d = zmm8.d f+ rdx[2]
                zmm7.d = zmm7.d f- rax_6[1]
                zmm8.d = zmm8.d f- rax_6[2]
                zmm2.d = zmm6.d f* zmm6.d
                zmm0.d = zmm7.d f* zmm7.d
                goto label_14265b8e3
            
            int32_t* rax_5 = &rdx[rdi * 8]
            zmm0.d = rdx[rdi * 8 - 5].d f- rdx[rdi * 8 - 8]
            zmm6.d = rax_5[3].d f- *rax_5
            zmm7.d = rax_5[4].d f- rax_5[1]
            zmm8.d = rax_5[5].d f- rax_5[2]
            zmm0.d = zmm0.d f* 0.5f
            zmm6.d = zmm6.d f* 0.5f
            zmm0.d = zmm0.d f+ rdx[rdi * 8 - 8]
            zmm7.d = zmm7.d f* 0.5f
            zmm6.d = zmm6.d f+ *rax_5
            zmm8.d = zmm8.d f* 0.5f
            zmm7.d = zmm7.d f+ rax_5[1]
            zmm8.d = zmm8.d f+ rax_5[2]
            zmm6.d = zmm6.d f- zmm0.d
            zmm0.d = rdx[rdi * 8 - 4].d f- rdx[rdi * 8 - 7]
            zmm0.d = zmm0.d f* 0.5f
            zmm0.d = zmm0.d f+ rdx[rdi * 8 - 7]
            zmm7.d = zmm7.d f- zmm0.d
            zmm0.d = rdx[rdi * 8 - 3].d f- rdx[rdi * 8 - 6]
            zmm0.d = zmm0.d f* 0.5f
            zmm2.d = zmm7.d f* zmm7.d
            zmm0.d = zmm0.d f+ rdx[rdi * 8 - 6]
            zmm8.d = zmm8.d f- zmm0.d
            zmm0.d = zmm6.d f* zmm6.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
            
            if (zmm2.d f== 1f)
                goto label_14265b7e0
            
            if (zmm2.d f>= 9.99999994e-09f)
                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                zmm3.d = zmm2.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm2.d = 0.5f - zmm3.d f* zmm0.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm6.d = zmm6.d f* zmm5.d
                zmm7.d = zmm7.d f* zmm5.d
                zmm8.d = zmm8.d f* zmm5.d
            label_14265b7e0:
                var_60_1 = zmm8.d
                int32_t var_64_2 = zmm7.d
                var_68_1 = zmm6.d
            else
                var_68_1 = data_143dbb1f8.d
                var_60_1 = data_143dbb200.d
                float var_64_1 = data_143dbb1fc
            
            zmm6 = zx.o(var_68_1.q)
            r14_1 = var_60_1
    
    *arg2 = zmm6.q
    arg2[1].d = r14_1
else
    sub_14265b9e0(arg1, arg2, rdi.d)

return arg2
