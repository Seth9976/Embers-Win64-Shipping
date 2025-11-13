// 函数: sub_1428126a0
// 地址: 0x1428126a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13_1 = sx.q(arg3) + arg2
int64_t var_e0 = r13_1
uint64_t r12 = zx.q(arg4)
char* rdi = sub_142819d40(arg1, arg2, 0x10)
int32_t rax_1 = *(arg1 + 0x148)
int32_t rax_2 = *(arg1 + 0x14c)
int64_t rbx = 0x10 * r12

if (mulu.dp.q(0x10, r12) u>> 0x40 != zx.o(0))
    rbx = -1

int32_t var_128
char* result

if (rbx == 0)
    result = nullptr
else
    class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
    int64_t rax_5 = PxGetFoundation()
    int64_t rdx = *rax_5
    char const* const rax_7
    
    if ((*(rdx + 0x28))(rax_5, rdx) != 0)
        rax_7 = __std_type_info_name(&data_143ccd128, &data_14401b730)
    else
        rax_7 = "<allocation names disabled>"
    
    var_128 = 0x2fa
    result = (*(*rax_4 + 8))(rax_4, rbx, rax_7, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\Binary\SnConvX_Convert.cpp", 
        0x2fa)

int32_t r15 = 0
char* result_1 = result
int128_t zmm6
int128_t var_58 = zmm6
uint128_t zmm0

if (r12.d == 0)
label_14281289d:
    int32_t rsi_2 = 0
    int32_t var_f8_1 = 0
    int32_t var_f4_1 = 0
    
    if (r12.d s> 0)
        char* result_3 = result_1
        char* result_4 = result_3
        int128_t zmm7
        zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12.d)).d
        
        do
            zmm0.d = _mm_cvtepi32_ps(zx.o(rsi_2)).d f* zmm7.d
            zmm0.d = zmm0.d f* 100f
            sub_142817350(arg1, 1, "Extra data conversion: %d%%", zx.q(int.d(zmm0.d)))
            int64_t r12_1 = *(result_3 + 8)
            void* rbx_2 = *result_3
            int64_t var_d8_1 = r12_1
            char var_a8_1 = 1
            void arg_18
            void* rax_13 = physx::shdfnd::TempAllocator::allocate(&arg_18, 0x3000, 
                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
            "hysXExtensions\src\serialization\Binary\SnConvX_Convert.cpp", 
                0x339)
            int32_t r15_1 = 0
            int32_t var_104
            var_128.q = &var_104
            void* var_b0 = rax_13
            var_104 = 0
            sub_1428117c0(arg1, r12_1, rbx_2, rax_13, var_128, 0, 1)
            rdi = sub_142819d40(arg1, rdi, 0x10)
            int32_t arg_10 = 0
            
            if (var_104 s> 0)
                int64_t r9_3 = 0
                int64_t var_d0_1 = 0
                
                do
                    int128_t* rsi_4 = var_b0 + r9_3
                    result = zx.q(rsi_4[2].d)
                    
                    if ((result.b & 0x20) != 0)
                        if (strcmp(*rsi_4, "BigConvexData") == 0)
                            uint64_t rcx_14 = zx.q(var_f8_1)
                            var_f8_1 += 1
                            
                            if (*(rcx_14 + *(arg1 + 0x18)) != 0)
                                int32_t rdx_10
                                rdx_10.b = 1
                                sub_142816a60(arg1, rdx_10.b)
                        
                        int128_t* rax_16 = sub_142815b60(arg1, *rsi_4, 1)
                        
                        if (sub_142815850(*(rsi_4 + 0x1c), sx.q(*(rsi_4 + 0x28)) + r12_1, 0) != 0)
                            int32_t r8_4 = *(rsi_4 + 0x24)
                            
                            if (r8_4 != 0)
                                rdi = sub_142819d40(arg1, rdi, r8_4)
                            
                            char* var_100_1 = rdi
                            char* r15_2 = rdi
                            sub_142811a50(arg1, rdi, rax_16, 0)
                            char var_b8_1 = 1
                            rdi = &rdi[sx.q(*(rax_16 + 0x28))]
                            void arg_8
                            void* rax_19 = physx::shdfnd::TempAllocator::allocate(&arg_8, 0x3000, 
                                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\S"
                            "ource\PhysXExtensions\src\serialization\Binary\SnConvX_Convert.cpp", 
                                0x36f)
                            int32_t var_108
                            var_128.q = &var_108
                            void* var_c0 = rax_19
                            var_108 = 0
                            sub_1428117c0(arg1, r12_1, rax_16, rax_19, var_128, 0, 1)
                            int32_t r13_2 = 0
                            
                            if (var_108 s> 0)
                                int64_t r12_2 = 0
                                
                                do
                                    void* rsi_6 = var_c0 + r12_2
                                    int32_t rax_20 = *(rsi_6 + 0x20)
                                    
                                    if ((rax_20.b & 0x40) == 0)
                                        int32_t r8_11
                                        
                                        if (test_bit(rax_20, 0xa))
                                            r8_11 = *(rsi_6 + 0x24)
                                        
                                        if (not(test_bit(rax_20, 0xa)) || r8_11 == 0)
                                            var_128.q = rsi_6
                                            rdi = sub_1428123f0(arg1, rdi, var_e0, r15_2, var_128)
                                        else
                                            rdi = sub_142819d40(arg1, rdi, r8_11)
                                    else
                                        int64_t rbx_4 = sx.q(*(rsi_6 + 0x18))
                                        int32_t r15_3 = *(rsi_6 + 0x1c)
                                        result = sub_142815850(*(rsi_6 + 0x14), 
                                            &var_100_1[sx.q(*(rsi_6 + 0x10))], 0)
                                        int32_t r8_7 = *(rsi_6 + 0x20)
                                        uint64_t rcx_23 = 0
                                        
                                        if (test_bit(r8_7, 0xe))
                                            rcx_23 = (zx.q(r8_7) & 0xff0000) u>> 0x10
                                        
                                        if (not(test_bit(r8_7, 0xd)))
                                            bool cond:2_1
                                            
                                            if (rcx_23 == 0)
                                                cond:2_1 = result != 0
                                            else
                                                cond:2_1 = (result & rcx_23) != 0
                                            
                                            result.b = cond:2_1
                                        else if (rcx_23 == 0)
                                            result.b = result == 0
                                        else
                                            result.b = (result & rcx_23) == 0
                                        
                                        if (result.b != 0)
                                            result = sub_142815850(r15_3, &var_100_1[rbx_4], r8_7)
                                            int32_t r8_9 = *(rsi_6 + 0x24)
                                            int32_t i_3 = result.d
                                            
                                            if (r8_9 != 0)
                                                rdi = sub_142819d40(arg1, rdi, r8_9)
                                            
                                            if ((*(rsi_6 + 0x20) & 8) == 0)
                                                char* rsi_7 = sub_142815b60(arg1, *rsi_6, 1)
                                                
                                                if (i_3 != 0)
                                                    int32_t i
                                                    
                                                    do
                                                        sub_142811a50(arg1, rdi, rsi_7, 0)
                                                        rdi = &rdi[sx.q(*(rsi_7 + 0x28))]
                                                        i = i_3
                                                        i_3 -= 1
                                                    while (i != 1)
                                        
                                        r15_2 = var_100_1
                                    
                                    r13_2 += 1
                                    r12_2 += 0x30
                                while (r13_2 s< var_108)
                            
                            if (var_b8_1 != 0)
                                physx::shdfnd::TempAllocator::deallocate(&var_c0, var_c0)
                            
                            r15_1 = arg_10
                            r13_1 = var_e0
                        
                        sub_142816a60(arg1, 0)
                    else if ((result.b & 0x40) != 0)
                        int64_t rdx_28 = sx.q(rsi_4[1].d)
                        int64_t r15_4 = sx.q(*(rsi_4 + 0x18))
                        int32_t r12_3 = *(rsi_4 + 0x1c)
                        int64_t rbx_6 = sx.q(*(rsi_4 + 0x28) - rdx_28.d)
                        result = sub_142815850(*(rsi_4 + 0x14), rdx_28 + rbx_6 + var_d8_1, 0)
                        int32_t r8_13 = rsi_4[2].d
                        uint64_t rcx_37 = 0
                        
                        if (test_bit(r8_13, 0xe))
                            rcx_37 = (zx.q(r8_13) & 0xff0000) u>> 0x10
                        
                        if (not(test_bit(r8_13, 0xd)))
                            bool cond:0_1
                            
                            if (rcx_37 == 0)
                                cond:0_1 = result != 0
                            else
                                cond:0_1 = (result & rcx_37) != 0
                            
                            result.b = cond:0_1
                        else if (rcx_37 == 0)
                            result.b = result == 0
                        else
                            result.b = (result & rcx_37) == 0
                        
                        if (result.b == 0)
                            r15_1 = arg_10
                        else
                            int32_t i_6 = sub_142815850(r12_3, rbx_6 + r15_4 + var_d8_1, r8_13)
                            int32_t r8_14 = *(rsi_4 + 0x24)
                            int32_t i_4 = i_6
                            
                            if (r8_14 != 0)
                                rdi = sub_142819d40(arg1, rdi, r8_14)
                            
                            if ((rsi_4[2].b & 8) == 0)
                                int128_t* rsi_8 = sub_142815b60(arg1, *rsi_4, 1)
                                
                                if (i_4 == 0)
                                    r15_1 = arg_10
                                else
                                    int32_t i_1
                                    
                                    do
                                        sub_142811a50(arg1, rdi, rsi_8, 0)
                                        rdi = &rdi[sx.q(*(rsi_8 + 0x28))]
                                        i_1 = i_4
                                        i_4 -= 1
                                    while (i_1 != 1)
                                    r15_1 = arg_10
                            else
                                r15_1 = arg_10
                                rdi = sub_1428124b0(arg1, rdi, r13_1, rsi_4, i_4, rax_1, rax_2)
                    else if (test_bit(result.d, 0xa))
                        uint64_t r9_7 = zx.q(*(rsi_4 + 0x24))
                        
                        if (r9_7.d != 0)
                            sub_142817350(arg1, 1, 
                                "---------------------------------------------\n", 
                                sub_142817350(arg1, 1, " align to %d bytes\n", r9_7))
                            rdi = sub_142819d40(arg1, rdi, *(rsi_4 + 0x24))
                    else if (result.b s>= 0)
                        var_128.q = rsi_4
                        rdi = sub_1428123f0(arg1, rdi, r13_1, r12_1, var_128)
                    else
                        int32_t r8_18 = *(rsi_4 + 0x24)
                        
                        if (r8_18 != 0)
                            rdi = sub_142819d40(arg1, rdi, r8_18)
                        
                        int128_t* rax_28 = sub_142815b60(arg1, "PxU32", 1)
                        int32_t i_7 = sub_142815850(*(rax_28 + 0x28), rdi, 0)
                        sub_142817350(arg1, 1, " convert  %d bytes string\n", zx.q(i_7))
                        sub_142811a50(arg1, rdi, rax_28, 0)
                        rdi = &rdi[sx.q(*(rax_28 + 0x28))]
                        int128_t* rsi_9 = sub_142815b60(arg1, *rsi_4, 1)
                        
                        if (i_7 s> 0)
                            uint64_t i_5 = zx.q(i_7)
                            uint64_t i_2
                            
                            do
                                sub_142811a50(arg1, rdi, rsi_9, 0)
                                rdi = &rdi[sx.q(*(rsi_9 + 0x28))]
                                i_2 = i_5
                                i_5 -= 1
                            while (i_2 != 1)
                        
                        r15_1 = arg_10
                    
                    r15_1 += 1
                    r12_1 = var_d8_1
                    r9_3 = var_d0_1 + 0x30
                    arg_10 = r15_1
                    var_d0_1 = r9_3
                while (r15_1 s< var_104)
                
                rsi_2 = var_f4_1
            
            if (var_a8_1 != 0)
                physx::shdfnd::TempAllocator::deallocate(&var_b0, var_b0)
            
            rsi_2 += 1
            result_3 = &result_4[0x10]
            var_f4_1 = rsi_2
            result_4 = result_3
        while (rsi_2 s< arg4)
    
    if (result_1 != 0)
        class physx::PxAllocatorCallback* rax_29 = physx::shdfnd::getAllocator()
        int64_t r8_22 = *rax_29
        (*(r8_22 + 0x10))(rax_29, result_1, r8_22)
    
    result.b = 1
else
    char* result_2 = result
    zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12.d)).d
    
    while (true)
        zmm0.d = float.s(zx.q(r15))
        zmm0.d = zmm0.d f* zmm6.d
        zmm0.d = zmm0.d f* 100f
        sub_142817350(arg1, 1, "Object conversion: %d%%", zx.q(int.d(zmm0.d)))
        void* rax_9 = sub_142819d40(arg1, rdi, 0x10)
        void* rax_10 = sub_142815b60(arg1, "PxBase", 1)
        int64_t var_a0
        __builtin_memset(&var_a0, 0, 0x28)
        int32_t rax_12
        int64_t var_90
        
        if (sub_1428138e0(rax_10, "PxType", &var_a0) == 0)
            rax_12 = -1
        else
            rax_12 = sub_142815850(var_90:4.d, sx.q(var_90.d) + rax_9, 0)
        result = sub_142815b90(arg1, rax_12, 1)
        
        if (result != 0)
            *result_2 = result
            *(result_2 + 8) = rax_9
            
            if (sub_142811a50(arg1, rax_9, result, 0).b != 0)
                r15 += 1
                rdi = rax_9 + sx.q(*(result + 0x28))
                result_2 = &result_2[0x10]
                
                if (r15 u>= r12.d)
                    goto label_14281289d
                
                continue
        
        if (result_1 != 0)
            class physx::PxAllocatorCallback* rax_21 = physx::shdfnd::getAllocator()
            int64_t r8_8 = *rax_21
            (*(r8_8 + 0x10))(rax_21, result_1, r8_8)
        
        result.b = 0
        break
return result
