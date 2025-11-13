// 函数: sub_140749330
// 地址: 0x140749330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg1[1].d
void* result_1 = nullptr
int64_t rbp = arg2
void* result

if (r10 == 0)
label_14074941c:
    void* result_2 = sub_14073ed10(rbp)
    result = result_2
    *(result_2 + 0x54c) &= 0xfffffffe
    *(result_2 + 0x89) &= 0x7f
    
    if (*(result_2 + 0x408) != arg3)
        *(result_2 + 0x408) = arg3
        sub_14074d1e0(result_2)
        sub_140835b50(result + 0x418)
        sub_140752510(result)
else
    int64_t r11_1 = *arg1
    
    while (true)
        int64_t rax_1 = sx.q(r10)
        r10 -= 1
        float zmm0[0x4] = *(r11_1 + rax_1 * 0x10 - 0x10)
        arg1[1].d = r10
        result_1.d = zmm0[0]
        result_1:4.d = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
        result = result_1
        
        if (result != 0)
            int32_t rax_3 = *(result + 0xc)
            void* const rax_7
            
            if (rax_3 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rdx = zx.d(rax_3.w)
                
                if (rax_3 s< 0)
                    rax_3 += 0xffff
                    rdx -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
            
            if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
                arg2.b = 1
                (*(*(result + 0x418) + 0x18))(result + 0x418, arg2)
                
                if (*(result + 0x408) != 0)
                    sub_14074d1e0(result)
                    sub_140835b50(result + 0x418)
                
                void* rax_12 = *(result + 0xa8)
                
                if (rax_12 == 0)
                    rax_12 = sub_141ee69e0(result)
                
                if (rax_12 != rbp)
                    (*(*result + 0x138))(result, 0, rbp, 1, result_1)
                
                break
        
        int64_t var_28_1 = 0
        int512_t zmm1
        zmm1.o = 0
        result_1.d = 0
        result_1:4.d = 0
        
        if (r10 == 0)
            result = result_1
            break
    
    if (result == 0)
        goto label_14074941c

*(result + 0x554) = arg4
int32_t rcx_7 = arg1[5].d + arg1[3].d

if (arg1[6].d s>= rcx_7)
    rcx_7 = arg1[6].d

arg1[6].d = rcx_7
return result
