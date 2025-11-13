// 函数: sub_140b60b30
// 地址: 0x140b60b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
uint64_t rsi = zx.q(arg2[1].d)

if (rsi.d == 0)
    *arg1 = 0
else
    char (* var_498)[0x80]
    uint128_t var_488
    
    if (*(arg2 + 0xc) != 0)
        var_498 = *arg2
        int32_t var_490_3 = rsi.d
        char var_48c_2 = 1
        var_488 = var_498.o
        sub_140b60890(arg1, &var_488, arg3, arg4)
    else
        int32_t rax_2 = 0x400
        
        if (rsi.d s<= 0x400)
            rax_2 = rsi.d
        
        char var_438[0x80]
        
        if (rax_2 s> 0)
            char* rdx = *arg2
            int64_t i = 0
            
            do
                char rax_3 = *rdx
                rdx = &rdx[2]
                var_438[i] = rax_3
                i += 1
            while (i s< sx.q(rax_2))
        
        int32_t var_490_1 = rsi.d
        var_498 = &var_438
        char var_48c_1 = 0
        
        if (rsi.d u< 0x400)
            void* r14_1
            uint128_t zmm6
            
            if (data_143e05168 == 0)
                void* rax_4
                rax_4, zmm6 = sub_140b58510(&data_143e05180)
                r14_1 = rax_4
                data_143e05168 = 1
            else
                r14_1 = &data_143e05180
            
            if (arg3 == 1)
                var_488 = var_498.o
                *arg1 = *sub_140b637e0(r14_1, &var_498, &var_488)
                *(arg1 + 4) = arg4
            else if (arg3 != 0)
                uint128_t var_28_1 = zmm6
                zmm6 = var_498.o
                var_488 = zmm6
                int32_t* rax_9 = sub_140b637e0(r14_1, &var_498, &var_488)
                uint128_t temp0_2 = _mm_bsrli_si128(zmm6, 8)
                uint64_t r8_5 = rsi
                int32_t rbx_3 = *rax_9
                uint64_t rdx_7 = zx.q(rbx_3 u>> 0x10)
                var_498:4.d = zx.d(rbx_3.w)
                var_498.d = rdx_7.d
                
                if ((temp0_2.q u>> 0x20).b != 0)
                    r8_5 *= 2
                
                memcpy(zx.q((var_498 u>> 0x20).d * 2) + 2 + *(r14_1 + (rdx_7 << 3) + 0x10), 
                    &var_438, r8_5.d)
                *arg1 = rbx_3
                *(arg1 + 4) = arg4
            else
                uint128_t zmm0 = var_498.o
                char (* rdx_3)[0x80] = &var_438
                uint128_t var_468 = zmm0
                int32_t r8_2 = rsi.d
                int32_t* rax_8
                void var_478
                
                if ((_mm_bsrli_si128(zmm0, 8).q u>> 0x20).b != 0)
                    rax_8 = sub_140b57580(&var_478, rdx_3, r8_2)
                else
                    rax_8 = sub_140b57490(&var_488, rdx_3, r8_2)
                int128_t zmm0_1 = *rax_8
                char var_444_1 = 0
                int128_t var_458_1 = zmm0_1
                sub_140b5e2e0(((zx.q(zmm0_1.d) + 0x401) << 6) + r14_1, &var_498, &var_468)
                *arg1 = var_498.d
                *(arg1 + 4) = arg4
        else
            int32_t var_490_2 = 0x18
            var_498 = "ERROR_NAME_SIZE_EXCEEDED"
            var_498.o = var_498.o
            sub_140b57990(arg1, &var_498, 1)

__security_check_cookie(rax_1 ^ &var_4b8)
return arg1
