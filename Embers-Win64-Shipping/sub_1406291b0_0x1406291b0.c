// 函数: sub_1406291b0
// 地址: 0x1406291b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
uint128_t result = 0xbf800000
int64_t* rbp = arg3
*arg3 = data_143dbb1f8.q
arg3[1].d = data_143dbb200
int32_t rbx = arg2[1].d

if (rbx s> 0)
    int32_t zmm4 = *arg1
    int32_t i = 0
    void* rsi_1 = *arg2
    uint64_t rax_4
    uint128_t result_1
    int64_t zmm1
    uint128_t result_2
    
    if (rbx s< 4)
        rax_4 = 0
    label_1406293de:
        void* rcx_3 = rsi_1 + ((rax_4 + ((rax_4 + 1) << 1)) << 2)
        
        do
            result_2 = *(rcx_3 - 8)
            
            if (zmm4 f!= result_2.d || (*(rcx_3 - 4)).d f!= arg1[1] || not((*rcx_3).d f== arg1[2]))
                result_2.d = result_2.d f- zmm4
                zmm1.d = (*(rcx_3 - 4)).d f- arg1[1]
                result_1.d = (*rcx_3).d f- arg1[2]
                result_2.d = result_2.d f* result_2.d
                zmm1.d = zmm1.d f* zmm1.d
                result_1.d = result_1.d f* result_1.d
                zmm1.d = zmm1.d f+ result_2.d
                zmm1.d = zmm1.d f+ result_1.d
                uint128_t result_3 = _mm_sqrt_ss(0, zmm1.d)
                
                if (result.d f< 0f || not(result.d f< result_3.d))
                    i_1 = i
                    result = result_3
            
            rcx_3 += 0xc
            i += 1
        while (i s< rbx)
    else
        int32_t i_2 = 2
        int128_t zmm6
        int128_t var_18_1 = zmm6
        void* rcx = rsi_1 + 0x1c
        rax_4 = zx.q(((rbx - 4) u>> 2) + 1) << 2
        
        do
            zmm6 = *(rcx - 0x1c)
            int32_t zmm5
            
            if (zmm4 f!= zmm6.d)
            label_140629268:
                zmm6.d = zmm6.d f- zmm4
                zmm5 = arg1[1]
                result_2 = arg1[2]
                zmm1.d = (*(rcx - 0x18)).d f- zmm5
                result_1.d = (*(rcx - 0x14)).d f- result_2.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm1.d = zmm1.d f* zmm1.d
                result_1.d = result_1.d f* result_1.d
                zmm1.d = zmm1.d f+ zmm6.d
                zmm1.d = zmm1.d f+ result_1.d
                result_1 = _mm_sqrt_ss(0, zmm1.d)
                
                if (result.d f< 0f || not(result.d f< result_1.d))
                    i_1 = i
                    result = result_1
            else
                zmm5 = arg1[1]
                
                if (zmm5 f!= *(rcx - 0x18))
                    goto label_140629268
                
                result_2 = arg1[2]
                
                if (not(result_2.d f== *(rcx - 0x14)))
                    goto label_140629268
            
            zmm6 = *(rcx - 0x10)
            
            if (zmm4 f!= zmm6.d || zmm5 f!= *(rcx - 0xc) || not(result_2.d f== *(rcx - 8)))
                zmm6.d = zmm6.d f- zmm4
                result_1.d = (*(rcx - 8)).d f- result_2.d
                zmm1.d = (*(rcx - 0xc)).d f- zmm5
                zmm6.d = zmm6.d f* zmm6.d
                result_1.d = result_1.d f* result_1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm1.d = zmm1.d f+ zmm6.d
                zmm1.d = zmm1.d f+ result_1.d
                result_1 = _mm_sqrt_ss(0, zmm1.d)
                
                if (result.d f< 0f || not(result.d f< result_1.d))
                    i_1 = i_2 - 1
                    result = result_1
            
            zmm6 = *(rcx - 4)
            
            if (zmm4 f!= zmm6.d || zmm5 f!= *rcx || not(result_2.d f== *(rcx + 4)))
                zmm6.d = zmm6.d f- zmm4
                result_1.d = (*(rcx + 4)).d f- result_2.d
                zmm1.d = (*rcx).d f- zmm5
                zmm6.d = zmm6.d f* zmm6.d
                result_1.d = result_1.d f* result_1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm1.d = zmm1.d f+ zmm6.d
                zmm1.d = zmm1.d f+ result_1.d
                result_1 = _mm_sqrt_ss(0, zmm1.d)
                
                if (result.d f< 0f || not(result.d f< result_1.d))
                    i_1 = i_2
                    result = result_1
            
            zmm6 = *(rcx + 8)
            
            if (zmm4 f!= zmm6.d || zmm5 f!= *(rcx + 0xc) || not(result_2.d f== *(rcx + 0x10)))
                zmm6.d = zmm6.d f- zmm4
                zmm1.d = (*(rcx + 0xc)).d f- zmm5
                result_1.d = (*(rcx + 0x10)).d f- result_2.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm1.d = zmm1.d f* zmm1.d
                result_1.d = result_1.d f* result_1.d
                zmm1.d = zmm1.d f+ zmm6.d
                zmm1.d = zmm1.d f+ result_1.d
                result_2 = _mm_sqrt_ss(zx.o(0).d, zmm1.d)
                
                if (result.d f< 0f || not(result.d f< result_2.d))
                    i_1 = i_2 + 1
                    result = result_2
            
            rcx += 0x30
            i += 4
            i_2 += 4
        while (i s< rbx - 3)
        
        if (i s< rbx)
            goto label_1406293de
    int64_t rcx_4 = sx.q(i_1) * 3
    *rbp = *(rsi_1 + (rcx_4 << 2))
    rbp[1].d = *(rsi_1 + (rcx_4 << 2) + 8)

return result
