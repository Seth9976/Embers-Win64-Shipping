// 函数: sub_141ec32c0
// 地址: 0x141ec32c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
uint64_t var_48 = __security_cookie ^ &var_1f8
uint64_t result

if (arg4 == 0)
    result.b = 0
else
    int32_t rax_2 = (*(*arg4 + 0x30))(arg4)
    
    if (rax_2 != 5)
        result = (*(*arg4 + 0x30))(arg4)
    
    if (rax_2 != 5 && result.d != 6)
        result.b = 0
    else
        int128_t zmm0 = data_142e6da00
        int64_t rax_4 = *arg4
        int32_t var_178 = 5
        int128_t var_174_1 = zmm0
        int64_t var_164_1 = 0
        int64_t var_15c_1 = 0x3f800000
        int64_t var_150_1 = 0
        int32_t var_198 = 6
        int64_t var_190_1 = 0
        int32_t var_188_1 = 0x3f800000
        int32_t var_184_1 = 0x3f800000
        int64_t var_180_1 = 0x3f800000
        char rax_5 = (*(rax_4 + 0x70))(arg4, &var_178)
        
        if (rax_5 == 0)
            result = (*(*arg4 + 0x78))(arg4, &var_198)
        
        if (rax_5 == 0 && result.b == 0)
            result.b = 0
        else
            int32_t rax_8 = (*(*arg4 + 0x30))(arg4)
            bool var_1a8 = false
            bool* var_1c0_1 = &var_1a8
            int64_t* rbx
            rbx.b = rax_8 == 5
            uint32_t var_1c8_1 = 0
            uint32_t var_1d0_1 = 0x40
            uint32_t var_148[0x14]
            uint32_t (* var_1d8_1)[0x14] = &var_148
            
            if (rax_8 != 5)
                result = physx::PxMeshQuery::findOverlapHeightField(arg2, arg3, &var_198, arg5, 
                    var_1d8_1, var_1d0_1, var_1c8_1, var_1c0_1)
            else
                result = physx::PxMeshQuery::findOverlapTriangleMesh(arg2, arg3, &var_178, arg5, 
                    var_1d8_1, var_1d0_1, var_1c8_1, var_1c0_1)
            
            if (result.d s<= 0)
                result.b = 0
            else
                char var_1b8_1 = arg7
                var_1c0_1.d = result.d
                var_1c8_1.q = &var_148
                var_1d0_1.q = arg5
                void var_1a4
                int64_t* rcx_7 = &var_1a4
                int64_t* rax_10
                
                if (rbx.b == 0)
                    rax_10 = sub_141eb0550(rcx_7, arg1, arg2, arg3, &var_198, var_1d0_1, var_1c8_1, 
                        var_1c0_1.d)
                else
                    rax_10 = sub_141eb0880(rcx_7, arg1, arg2, arg3, &var_178, var_1d0_1, var_1c8_1, 
                        var_1c0_1.d)
                
                *arg6 = *rax_10
                arg6[1].d = rax_10[1].d
                result.b = 1

__security_check_cookie(var_48 ^ &var_1f8)
return result
