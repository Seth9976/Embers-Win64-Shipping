// 函数: sub_142a919d0
// 地址: 0x142a919d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142a95f50(arg2)
int64_t rax_1 = sx.q(*(rax + 0x45))

if (*arg3 s> 0)
    return 0

if (rax_1.w u< 0x22)
    void* rax_3 = *(&data_1436429a0 + (rax_1 << 3))
    
    if (rax_3 != 0 && *(rax_3 + 0x19) != 0 && *(rax_3 + 4) == 1 && *rax == 0x64)
        int128_t* result = sub_142a7dd00(0x128)
        
        if (result != 0)
            int128_t* rax_5 = *(&data_1436429a0 + (rax_1 << 3))
            int128_t* result_1 = result
            int64_t i_1 = 2
            int64_t i
            
            do
                result_1 = &result_1[8]
                int128_t zmm0_1 = *rax_5
                rax_5 = &rax_5[8]
                result_1[-8] = zmm0_1
                result_1[-7] = rax_5[-7]
                result_1[-6] = rax_5[-6]
                result_1[-5] = rax_5[-5]
                result_1[-4] = rax_5[-4]
                result_1[-3] = rax_5[-3]
                result_1[-2] = rax_5[-2]
                result_1[-1] = rax_5[-1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            *result_1 = *rax_5
            result_1[1] = rax_5[1]
            result_1[2].q = rax_5[2].q
            void* rax_7 = result[2].q
            result[1].q = rax
            *(result + 0x18) = i_1.b
            *(result + 8) = arg2
            int64_t r10_1 = *(rax_7 + 8)
            
            if (r10_1 != 0)
                r10_1(result, arg1, zx.q(*rax) + rax, arg3)
            
            if (r10_1 == 0 || *arg3 s<= 0)
                return result
            
            sub_142a7dcd0(result)
        else
            *arg3 = 7
        
        return nullptr

*arg3 = 0xd
return nullptr
