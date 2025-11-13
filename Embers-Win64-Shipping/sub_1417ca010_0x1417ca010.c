// 函数: sub_1417ca010
// 地址: 0x1417ca010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int16_t* var_160
int64_t* rax_2 = sub_140b58170(&var_160, "Chaos", 1)
j_sub_140b3db50()
sub_140b407e0(&data_143de7d78, *rax_2)
int64_t* rax_3 = sub_140b58170(&var_160, "ChaosSolvers", 1)
j_sub_140b3db50()
sub_140b407e0(&data_143de7d78, *rax_3)
char result

if (data_143ef8548 != 0)
    result = 1
else
    result = sub_1417ca770(0)
    
    if (result != 0)
        void*** rax_4 = j_sub_140a82f30(8)
        
        if (rax_4 == 0)
            rax_4 = nullptr
        else
            *rax_4 = &data_142fcaaa0
        
        data_143ef8528 = rax_4
        void*** rax_5 = j_sub_140a82f30(8)
        
        if (rax_5 == 0)
            rax_5 = nullptr
        else
            *rax_5 = &data_142fcaab8
        
        int64_t rax_6 = PxCreateFoundation(0x1000000, data_143ef8528, rax_5)
        data_143ef8548 = rax_6
        class physx::PxPvd* rax_7 = physx::PxCreatePvd(rax_6)
        int32_t* rcx_3 = data_143ef8678
        int64_t rdx_3 = data_143ef8548
        int32_t var_150 = 0x3f800000
        int32_t var_148_1 = 0x41200000
        int32_t var_14c_1 = 0x447a0000
        data_143ef8550 = rax_7
        int32_t* rcx_4 = data_143ef8690
        var_150 = *rcx_3
        int32_t var_148_2 = *rcx_4
        int64_t rax_8 = PxCreateBasePhysics(0x3040000, rdx_3, &var_150, 0, rax_7)
        int64_t rbx_2 = rax_8
        
        if (rax_8 != 0)
            PxRegisterArticulations(rbx_2)
            PxRegisterHeightFields(rbx_2)
            PxRegisterCloth(rbx_2)
            PxRegisterParticles(rbx_2)
        else
            rbx_2 = 0
        
        data_143ef8520 = rbx_2
        class physx::PxCollection** rax_9 = j_sub_140a82f30(0x80)
        class physx::PxCollection** rdi_1 = rax_9
        
        if (rax_9 == 0)
            rdi_1 = nullptr
        else
            rax_9[1] = 0
            void* rdx_4 = &rax_9[3]
            rax_9[2] = 0
            *(rdx_4 + 0x10) = 0
            *(rdx_4 + 0x18) = 0
            *(rdx_4 + 0x1c) = 0x80
            void* rcx_9 = *(rdx_4 + 0x10)
            
            if (rcx_9 != 0)
                rdx_4 = rcx_9
            
            *rdx_4 = 0
            *(rdx_4 + 8) = 0
            rax_9[7].d = 0xffffffff
            *(rax_9 + 0x3c) = 0
            rax_9[9] = 0
            rax_9[0xa].d = 0
            InitializeCriticalSection(&rax_9[0xb])
            SetCriticalSectionSpinCount(&rdi_1[0xb], 0xfa0)
            *rdi_1 = PxCreateCollection()
        
        data_143ef8550
        data_143ef8520
        data_143ef85a8 = rdi_1
        x17d69fb8::close::operator[]::environment_strings_traits::close()
        data_143ef86a8
        PxRegisterHeightFields(data_143ef8520)
        sub_140af2b60()
        int16_t var_b8
        
        if (sub_140b21a10(&data_143dbb3f0, &data_142fcab00) != 0)
            var_160 = nullptr
            int32_t var_158_1 = 0
            sub_1405947f0(&var_160, 0xa)
            int32_t rbx_3 = var_158_1 + 0xa
            
            if (rbx_3 s> 0)
                sub_140594770(&var_160)
            
            int16_t* rdi_2 = var_160
            UnDecorator::getReferenceType(rdi_2, u"localhost", 0x14)
            int16_t* const rdx_7 = &data_142d40450
            
            if (rbx_3 != 0)
                rdx_7 = rdi_2
            
            sub_1408f2b40(&var_b8, rdx_7)
            char* var_30
            class physx::PxPvdTransport* rax_13 =
                physx::PxDefaultPvdSocketTransportCreate(var_30, 0x1531, 0x64)
            int64_t var_38
            
            if (var_38 != 0)
                sub_140a74f90(var_38)
            
            int64_t* rcx_20 = data_143ef8550
            int64_t rdx_8 = *rcx_20
            (*(rdx_8 + 0x20))(rcx_20, rdx_8)
            int64_t* rcx_21 = data_143ef8550
            char var_168 = 7
            (*(*rcx_21 + 0x18))(rcx_21, rax_13, &var_168)
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
        
        int64_t rdi_3 = 0
        int64_t rbx_5 = *sub_140b58170(&var_160, "PhysXCooking", 1)
        j_sub_140b3db50()
        int64_t* rax_16
        int512_t zmm0_2
        int128_t zmm1_2
        rax_16, zmm0_2, zmm1_2 = sub_140b407e0(&data_143de7d78, rbx_5)
        
        if (rax_16 != 0)
            int64_t rdx_11 = *rax_16
            int64_t* rax_17 = (*(rdx_11 + 0x40))(rax_16, rdx_11)
            int64_t rdx_12 = *rax_17
            rdi_3 = (*(rdx_12 + 0x48))(rax_17, rdx_12)
        
        int64_t var_138 = 0
        char const* const var_e8_1 = "ApexSolidShaded"
        int32_t var_128_1 = 0x3040000
        char const* const var_f0_1 = "ApexWireframe"
        int64_t var_130_1 = data_143ef8548
        zmm0_2.o = zx.o(0)
        int64_t var_120_1 = data_143ef8520
        void** var_108_1 = &data_1439b9910
        int64_t var_110_1 = 0
        void** var_100_1 = &data_1439b9918
        int64_t var_f8_1 = 0
        char var_e0_1 = 1
        int128_t var_d8
        __builtin_memset(&var_d8, 0, 0x11)
        int32_t var_c4_1 = 0x80
        char var_c0_1 = 0
        int64_t var_118_1 = rdi_3
        void var_140
        int64_t* rax_21 = CreateApexSDK(zmm0_2, &var_140, 1, 0)
        data_143ef8530 = rax_21
        int64_t r8_4 = *rax_21
        (*(r8_4 + 0x1d8))(rax_21, 0, r8_4)
        int64_t* rcx_27 = data_143ef8530
        int64_t rax_23 = (*(*rcx_27 + 0x48))(rcx_27, "Legacy", 0)
        int64_t* rcx_28 = data_143ef8530
        data_143ef8538 = rax_23
        int64_t* rax_25 = (*(*rcx_28 + 0x48))(rcx_28, "Clothing", 0)
        data_143ef8540 = rax_25
        int64_t rdx_14 = *rax_25
        int64_t* rax_26 = (*(rdx_14 + 0x40))(rax_25, rdx_14)
        int32_t var_b4_1 = 0
        int64_t var_70_1 = 0
        int64_t var_68_1 = 0
        var_b8 = 0
        int64_t* var_60_1 = rax_26
        int64_t rdx_15 = *rax_26
        int64_t var_70_2 = (*(rdx_15 + 0x78))(rax_26, rdx_15)
        int64_t* rax_28
        int128_t zmm1_3
        rax_28, zmm1_3 = sub_1417cc6c0(rax_26, "maxUnusedPhysXResources", &var_b8, zmm1_2)
        var_b8:1.b = 0
        int64_t* var_60_2 = rax_28
        
        if (rax_28 != 0)
            int64_t r9_1 = *rax_28
            (*(r9_1 + 0x218))(rax_28, &var_b8, 5, r9_1)
        
        int32_t var_b4_2 = 0
        int64_t var_70_3 = 0
        int64_t var_68_2 = 0
        var_b8 = 0
        int64_t* var_60_3 = rax_26
        int64_t var_70_4 = (*(*rax_26 + 0x78))(rax_26)
        int64_t* rax_31 = sub_1417cc6c0(rax_26, "asyncFetchResults", &var_b8, zmm1_3)
        var_b8:1.b = 0
        int64_t* var_60_4 = rax_31
        
        if (rax_31 != 0)
            int64_t r9_2 = *rax_31
            (*(r9_2 + 0xd8))(rax_31, &var_b8, 0, r9_2)
        
        int64_t* rcx_36 = data_143ef8540
        (*(*rcx_36 + 0x28))(rcx_36, rax_26)
        result = 1

__security_check_cookie(rax_1 ^ &var_198)
return result
