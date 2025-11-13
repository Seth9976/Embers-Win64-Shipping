// 函数: sub_142b570e0
// 地址: 0x142b570e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint128_t zmm6
zmm6.q = sub_142a4bbc0().q f* 1000.0
int32_t arg_10
void arg_18
(*(*arg1 + 0x18))(arg1, zmm6, 0, &arg_18, &arg_10, &arg_8)
uint64_t result

if (arg_10 != 0)
    result.b = 1
    return result

void* rcx_1 = arg1[0xc]

if (rcx_1 == 0)
    result.b = 0
else
    uint64_t rsi
    rsi.b = 0
    int64_t* rax_1 = sub_142ae72d0(rcx_1, 0)
    int64_t* rdi_3
    int64_t* r14_1
    uint128_t zmm0
    
    if (*rax_1 f> zmm6.q)
        zmm0 = *rax_1
        rdi_3 = zmm0:8.q
        zmm6 = zx.o(zmm0.q)
        r14_1 = rax_1[2]
    label_142b57326:
        int32_t rax_9 = sub_1405f8de0(r14_1)
        int32_t rax_10 = sub_1405f8de0(rdi_3)
        int32_t rax_11
        
        if (rax_10 == rax_9)
            rax_11 = sub_141b60020(r14_1)
            result = sub_141b60020(rdi_3)
        
        uint64_t var_78
        uint64_t var_70
        int64_t* arg_20
        
        if (rax_10 != rax_9 || result.d != rax_11)
            var_78 = zmm6.q
            var_70 = rdi_3
            arg_20 = r14_1
        label_142b5739a:
            
            if (sub_141b60020(r14_1).d == 0)
                result.b = 0
            else
                result.b = 1
        else if (rsi.b != 0)
            result.b = 0
        else
            if (sub_142b561b0(arg1, zmm6, 0, &var_78, &var_70, &arg_20).b != 0)
                r14_1 = arg_20
                goto label_142b5739a
            
            result.b = 0
    else
        void* rcx_2 = arg1[0xc]
        int32_t rbx_1 = *(rcx_2 + 8)
        result = sub_142ae72d0(rcx_2, rbx_1 - 1)
        uint64_t result_1 = result
        
        if (zmm6.q f< *result)
            int32_t i = rbx_1 - 2
            
            while (i s> 0)
                uint64_t result_2 = sub_142ae72d0(arg1[0xc], i)
                zmm0 = zx.o(*result_2)
                
                if (zmm6.q f> zmm0.q)
                    break
                
                zmm0.q f- zmm6.q
                
                if (not(is_unordered.q(zmm0.q, zmm6.q)) && zmm0.q f== zmm6.q)
                    break
                
                i -= 1
                result_1 = result_2
            
            zmm6 = zx.o(*result_1)
            rdi_3 = *(result_1 + 8)
            r14_1 = *(result_1 + 0x10)
            goto label_142b57326
        
        void* rcx_3 = arg1[0xb]
        
        if (rcx_3 == 0)
            int64_t* var_58
            r14_1 = var_58
            int128_t var_68
            rdi_3 = var_68:8.q
            zmm6 = zx.o(var_68.q)
        label_142b572bf:
            
            if (rsi.b != 0)
                goto label_142b57326
            
            result.b = 0
        else
            int64_t* rax_2 = sub_142ae72d0(rcx_3, 0)
            int64_t* rax_3 = sub_142ae72d0(arg1[0xb], 1)
            int64_t rdi_1 = *rax_2
            r14_1 = rax_3
            int32_t rax_4 = sub_141b60020(rax_3)
            int32_t* var_98
            var_98.b = 0
            int64_t var_88
            char rax_6 = (*(rdi_1 + 0x40))(rax_2, zmm6, zx.q(sub_1405f8de0(r14_1)), zx.q(rax_4), 
                var_98, &var_88)
            int64_t rdi_2 = *r14_1
            int32_t rax_7 = sub_141b60020(rax_2)
            int64_t var_80
            result =
                (*(rdi_2 + 0x40))(r14_1, zmm6, zx.q(sub_1405f8de0(rax_2)), zx.q(rax_7), 0, &var_80)
            zmm0 = zx.o(var_88)
            
            if (rax_6 != 0)
                if (result.b == 0)
                label_142b572a4:
                    rdi_3 = r14_1
                    zmm6 = zmm0
                    r14_1 = rax_2
                    rsi.b = 1
                    goto label_142b572bf
                
            label_142b57291:
                zmm6 = zx.o(var_80)
                
                if (zmm6.q f> zmm0.q)
                    goto label_142b572a4
                
                rdi_3 = rax_2
                rsi.b = 1
                goto label_142b572bf
            
            if (result.b != 0)
                goto label_142b57291
            
            result.b = 0

return result
