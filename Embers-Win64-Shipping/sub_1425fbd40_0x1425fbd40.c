// 函数: sub_1425fbd40
// 地址: 0x1425fbd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_538
int64_t rax_1 = __security_cookie ^ &var_538
*(arg1 + 0x352) &= 0xfb
uint64_t r13 = 0
int64_t* r12 = arg1
int32_t rsi = 0
int32_t var_4b0 = 0
arg1[0xf7].b = 0
void*** rax_2 = j_sub_140a82f30(0x1b8)
void*** r14 = rax_2
int32_t var_4f0
void*** var_4a0

if (rax_2 == 0)
    r14 = nullptr
else
    r14[1] = 0
    *r14 = &data_14344cc10
    r14[2] = 0
    r14[0x34] = &data_14344cb48
    r14[0x35].d = 0
    *(r14 + 0x1ac) = 0
    r14[0x36].d = 1
    void*** rax_3 = j_sub_140a82f30(0x98)
    void*** rdi_1 = rax_3
    
    if (rax_3 == 0)
        rdi_1 = nullptr
    else
        rdi_1[1].d = 1
        void* rcx = &rdi_1[4]
        *rdi_1 = &data_142e32fb8
        rdi_1[2] = 0
        rdi_1[3] = 0
        *(rcx + 0x10) = 0
        *(rcx + 0x18) = 0
        *(rcx + 0x1c) = 0x80
        void* rax_4 = *(rcx + 0x10)
        
        if (rax_4 != 0)
            rcx = rax_4
        
        *rcx = 0
        *(rcx + 8) = 0
        rdi_1[8].d = 0xffffffff
        *(rdi_1 + 0x44) = 0
        rdi_1[0xa] = 0
        rdi_1[0xb].d = 0
        InitializeCriticalSection(&rdi_1[0xc])
        SetCriticalSectionSpinCount(&rdi_1[0xc], 0xfa0)
        rdi_1[0x11] = 0
        rdi_1[0x12].b = sub_140b65b00()
        
        if (CoCreateInstance(&data_142e33000, 0, CLSCTX_INPROC_SERVER, &data_142e33010, 
                &rdi_1[0x11]) == 0)
            int64_t* rcx_3 = rdi_1[0x11]
            (*(*rcx_3 + 0x30))(rcx_3, rdi_1)
    
    r14[3] = rdi_1
    var_4a0 = r14
    EnterCriticalSection(&rdi_1[0xc])
    sub_140946410(&rdi_1[2], &var_4f0, &var_4a0, nullptr)
    
    if (rdi_1 != -0x60)
        LeaveCriticalSection(&rdi_1[0xc])

r12[0xf6] = r14
r14[1] = 0
*(r12[0xf6] + 0x10) = 0
sub_14243b4c0()
*(r12 + 0xc) = data_143f711b8
r12[0xf9].b = sub_140b65b00()
HMODULE result

if (data_143f71220 == 0)
    result = LoadLibraryA("XAudio2_7.dll")
    data_143f71220 = result

if (data_143f71220 == 0 && result == 0)
    result.b = 0
else
    void* rdi_2 = r12[0xf6]
    int64_t* ppv
    result = CoCreateInstance(&data_14344cad8, 0, CLSCTX_INPROC_SERVER, &data_14344cae8, &ppv)
    int32_t rbx_3 = result.d
    
    if (result.d s>= 0)
        int64_t* ppv_1 = ppv
        int32_t rax_12 = (*(*ppv_1 + 0x28))(ppv_1, 0, 0xffffffff)
        rbx_3 = rax_12
        
        if (rax_12 s< 0)
            int64_t* ppv_2 = ppv
            (*(*ppv_2 + 0x10))(ppv_2)
        else
            *(rdi_2 + 8) = ppv
    
    if (rbx_3 != 0)
        result.b = 0
    else
        void* rax_14 = r12[0xf6]
        void* rbx_4 = *r12
        int32_t var_4d8 = 0
        int64_t* rcx_7 = *(rax_14 + 8)
        (*(rbx_4 + 0xa8))(r12, u"GetDeviceCount", zx.q((*(*rcx_7 + 0x18))(rcx_7, &var_4d8)))
        
        if (var_4d8 u>= 1)
            void* rcx_10 = data_143ddb400
            int16_t** var_518_3 = &data_143de5780
            var_4f0 = 0
            uint64_t var_4e8 = 0
            int32_t var_4e0_1 = 0
            sub_140af5b90(rcx_10, /Script/WindowsTargetPlatform.WindowsTargetSettings", AudioDevice"
                , &var_4e8, var_518_3)
            int512_t zmm1_1
            int32_t i
            int64_t* rbx_5
            
            if (var_4e0_1 s> 1)
            label_1425fc1e0:
                void* rax_30 = r12[0xf6]
                i = 0
                int64_t* rcx_20 = *(rax_30 + 8)
                (*(*rcx_20 + 0x18))(rcx_20, &i)
                
                if (i u> 0)
                    int16_t* var_4d0
                    int16_t* r14_3 = var_4d0
                    
                    do
                        int64_t* rcx_21 = *(r12[0xf6] + 8)
                        int16_t var_468[0x18]
                        (*(*rcx_21 + 0x20))(rcx_21, zx.q(r13.d), &var_468)
                        int16_t* r15_2 = nullptr
                        int32_t rdi_5 = 0
                        int32_t rax_34 = 0
                        int16_t* var_4c0 = nullptr
                        int32_t rsi_2 = rsi | 1
                        int64_t var_4b8_1 = 0
                        
                        if (var_468[0] != 0)
                            int64_t rbx_8 = -1
                            
                            do
                                rbx_8 += 1
                            while (var_468[rbx_8] != 0)
                            
                            rbx_5 = zx.q(rbx_8.d + 1)
                            
                            if (rbx_5.d s> 0)
                                sub_1405947f0(&var_4c0, rbx_5.d)
                                rax_34 = var_4b8_1:4.d
                                rdi_5 = var_4b8_1.d
                                r15_2 = var_4c0
                            
                            rdi_5 += rbx_5.d
                            var_4b8_1.d = rdi_5
                            
                            if (rdi_5 s> rax_34)
                                sub_140594770(&var_4c0)
                                rdi_5 = var_4b8_1.d
                                r15_2 = var_4c0
                            
                            UnDecorator::getReferenceType(r15_2, &var_468, rbx_5.d * 2)
                        
                        int16_t* const rdx_15 = &data_142d40450
                        int16_t* const rcx_25 = &data_142d40450
                        
                        if (var_4e0_1 != 0)
                            rdx_15 = var_4e8
                        
                        if (rdi_5 != 0)
                            rcx_25 = r15_2
                        
                        int32_t rax_35 = sub_140a54510(rcx_25, rdx_15)
                        int32_t rax_37
                        
                        if (rax_35 != 0)
                            r14_3 = nullptr
                            int32_t rdi_6 = 0
                            rsi_2 |= 2
                            var_4d0 = nullptr
                            int32_t rax_36 = 0
                            int64_t var_4c8_1 = 0
                            int16_t var_268[0x118]
                            
                            if (var_268[0] != 0)
                                int64_t rbx_9 = -1
                                
                                do
                                    rbx_9 += 1
                                while (var_268[rbx_9] != 0)
                                
                                rbx_5 = zx.q(rbx_9.d + 1)
                                
                                if (rbx_5.d s> 0)
                                    sub_1405947f0(&var_4d0, rbx_5.d)
                                    rax_36 = var_4c8_1:4.d
                                    rdi_6 = var_4c8_1.d
                                    r14_3 = var_4d0
                                
                                rdi_6 += rbx_5.d
                                var_4c8_1.d = rdi_6
                                
                                if (rdi_6 s> rax_36)
                                    sub_140594770(&var_4d0)
                                    rdi_6 = var_4c8_1.d
                                    r14_3 = var_4d0
                                
                                UnDecorator::getReferenceType(r14_3, &var_268, rbx_5.d * 2)
                            
                            int16_t* const rdx_19 = &data_142d40450
                            int16_t* const rcx_29 = &data_142d40450
                            
                            if (var_4e0_1 != 0)
                                rdx_19 = var_4e8
                            
                            if (rdi_6 != 0)
                                rcx_29 = r14_3
                            
                            rax_37 = sub_140a54510(rcx_29, rdx_19)
                        
                        if (rax_35 == 0 || rax_37 == 0)
                            rbx_5.b = 1
                        else
                            rbx_5.b = 0
                        
                        if ((rsi_2.b & 2) != 0)
                            rsi_2 &= 0xfffffffd
                            
                            if (r14_3 != 0)
                                sub_140a74f90(r14_3)
                        
                        rsi = rsi_2 & 0xfffffffe
                        
                        if (r15_2 != 0)
                            sub_140a74f90(r15_2)
                        
                        if (rbx_5.b != 0)
                            var_4f0 = r13.d
                            break
                        
                        r13 = zx.q(r13.d + 1)
                    while (r13.d u< i)
            else
                char rax_19
                rax_19, zmm1_1 = sub_141e76980()
                
                if (rax_19 != 0)
                    TEB* gsbase
                    void* rdi_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                    
                    if (data_143cd5b60 s> *(rdi_3 + 0x14))
                        _Init_thread_header(&data_143cd5b60)
                        
                        if (data_143cd5b60 == 0xffffffff)
                            sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                            _Init_thread_footer(&data_143cd5b60)
                    
                    rbx_5 = data_143cd5b58
                    sub_140a387e0()
                    void* r8_3 = data_14399e720
                    
                    if ((*(r8_3 + 8))(&data_14399e720, rbx_5, r8_3) s> 0)
                        if (data_143cd5b60 s> *(rdi_3 + 0x14))
                            _Init_thread_header(&data_143cd5b60)
                            
                            if (data_143cd5b60 == 0xffffffff)
                                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                                _Init_thread_footer(&data_143cd5b60)
                        
                        int64_t rbx_6 = data_143cd5b58
                        sub_140a387e0()
                        var_4a0 = &data_14399e720
                        int64_t* var_498 = nullptr
                        int64_t* r14_1 = nullptr
                        int32_t var_48c_1 = 0
                        void* r8_4 = data_14399e720
                        int32_t rdi_4 = 0
                        int32_t i_1 = (*(r8_4 + 8))(&data_14399e720, rbx_6, r8_4)
                        i = i_1
                        int32_t r15_1 = 0
                        
                        if (i_1 s> 0)
                            void*** rsi_1 = var_4a0
                            int32_t r12_1 = 0
                            
                            do
                                void** r9_2 = *rsi_1
                                int64_t rax_24 = r9_2[2](rsi_1, rbx_6, zx.q(r15_1), r9_2)
                                
                                if (rax_24 != 0)
                                    r13 = rax_24 - 8
                                
                                int64_t r14_2 = sx.q(rdi_4)
                                rdi_4 = (r14_2 + 1).d
                                
                                if (rdi_4 s> r12_1)
                                    sub_1405a4d70(&var_498)
                                    r12_1 = var_48c_1
                                
                                r15_1 += 1
                                r14_1 = var_498
                                r14_1[r14_2] = r13
                                r13 = 0
                            while (r15_1 s< i)
                            
                            r12 = arg1
                            rsi = 0
                        
                        char var_4f8
                        sub_1405ea950(r14_1, rdi_4, var_4f8)
                        int64_t* rbx_7 = *r14_1
                        sub_140a74f90(r14_1)
                        int64_t var_478
                        int64_t* rax_27 = (*(*rbx_7 + 0x70))(rbx_7, &var_478)
                        
                        if (&var_4e8 != rax_27)
                            uint64_t rcx_17 = var_4e8
                            
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                            
                            var_4e8 = *rax_27
                            *rax_27 = 0
                            var_4e0_1 = rax_27[1].d
                            var_4e0_1 = *(rax_27 + 0xc)
                            rax_27[1] = 0
                        
                        int64_t rcx_19 = var_478
                        
                        if (rcx_19 != 0)
                            sub_140a74f90(rcx_19)
                
                if (var_4e0_1 s> 1)
                    goto label_1425fc1e0
            int32_t rsi_3 = var_4f0
            int64_t* rcx_32 = *(r12[0xf6] + 8)
            void* rbx_11
            
            if ((*(*r12 + 0xa8))(r12, GetDeviceDetails", 
                    zx.q((*(*rcx_32 + 0x20))(rcx_32, zx.q(rsi_3), &data_143f70db0))) != 0)
                int16_t rax_43 = data_143f711b6
                uint32_t rax_44
                
                if (rax_43 u<= 6)
                    rax_44 = zx.d(rax_43)
                else
                    rax_44 = 6
                
                data_143f70d9c = rax_44
                int32_t rax_45 = data_143f711b8
                *(r12 + 0xc) = rax_45
                
                if (rax_45 s> 0xbb80)
                    *(r12 + 0xc) = 0xbb80
                    data_143f711b8 = 0xbb80
                
                int32_t rcx_34 = data_143f711c8
                int32_t rdi_7 = data_143f70d9c
                
                if (data_143f711b6 u> 6)
                    rcx_34 = 0x3f
                
                char rax_46 = sub_1425ff1f0(rcx_34, rdi_7)
                void* rdx_22 = r12[0xf6]
                
                if (rax_46 != 0)
                    int64_t* rcx_35 = *(rdx_22 + 8)
                    var_518_3.d = 0
                    char rax_49 = (*(*r12 + 0xa8))(r12, CreateMasteringVoice", zx.q((
                        *(*rcx_35 + 0x50))(rcx_35, rdx_22 + 0x10, zx.q(rdi_7), zx.q(*(r12 + 0xc)), 
                        var_518_3, rsi_3, 0)))
                    rbx_11 = r12[0xf6]
                    
                    if (rax_49 != 0)
                        uint64_t rcx_37 = zx.q(data_143f711c8)
                        zmm1_1.o = 0x43abc000
                        
                        if (data_143f711b6 u> 6)
                            rcx_37 = 0x3f
                        
                        X3DAudioInitialize(rcx_37, zmm1_1, rbx_11 + 0x20)
                        *(rbx_11 + 0x6c) = 0
                        void* rcx_38 = rbx_11 + 0x160
                        *(rbx_11 + 0x74) = 0x3f800000
                        void* rdx_24 = rbx_11 + 0x154
                        *(rbx_11 + 0x7c) = 0x3f800000
                        *(rbx_11 + 0x84) = 0
                        *(rbx_11 + 0x8c) = 0
                        *(rbx_11 + 0x9c) = 0
                        *(rbx_11 + 0xac) = 0
                        *(rbx_11 + 0xb4) = 0x3f800000
                        *(rbx_11 + 0xbc) = 0x3f800000
                        float temp0_1[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
                        *(rbx_11 + 0x90) = temp0_1.q
                        *(rbx_11 + 0x98) = 0
                        *(rbx_11 + 0xc4) = temp0_1.q
                        *(rbx_11 + 0xcc) = 0
                        *(rbx_11 + 0xd0) = temp0_1.q
                        *(rbx_11 + 0xd8) = 0
                        void* rax_50 = rbx_11 + 0x124
                        *(rbx_11 + 0xa4) = rax_50
                        *rax_50 = 0
                        int32_t var_480_1 = 0
                        *(*(rbx_11 + 0xa4) + 4) = 0
                        *(*(rbx_11 + 0xa4) + 8) = 0
                        *(*(rbx_11 + 0xa4) + 0xc) = 0x3f800000
                        *(*(rbx_11 + 0xa4) + 0x10) = 0
                        *(*(rbx_11 + 0xa4) + 0x14) = 0x3f800000
                        *(*(rbx_11 + 0xa4) + 0x18) = 0
                        *(*(rbx_11 + 0xa4) + 0x1c) = 0x3f800000
                        void* rax_58 = rbx_11 + 0x144
                        *(rbx_11 + 0xe4) = 1
                        *(rbx_11 + 0xec) = 0
                        *rax_58 = 0
                        *(rbx_11 + 0x148) = 0x3f800000
                        *(rbx_11 + 0x14c) = 0x3f800000
                        *(rbx_11 + 0x150) = 0x3f800000
                        *rdx_24 = rax_58
                        void** rax_59 = rbx_11 + 0x170
                        *(rbx_11 + 0x15c) = 2
                        *rcx_38 = 0
                        *(rbx_11 + 0x164) = 0x3f000000
                        *(rbx_11 + 0x168) = 0x3f800000
                        *(rbx_11 + 0x16c) = 0x3f000000
                        *rax_59 = rcx_38
                        *(rbx_11 + 0x114) = rax_59
                        void* rax_60 = rbx_11 + 0x180
                        *(rbx_11 + 0x178) = 2
                        *(rbx_11 + 0xf4) = rdx_24
                        __builtin_memset(rbx_11 + 0xfc, 0, 0x18)
                        *(rbx_11 + 0x11c) = 0x3f800000
                        *(rbx_11 + 0x120) = 0x3f800000
                        *rax_60 = 0
                        *(rax_60 + 8) = 0
                        *(rax_60 + 0x10) = 0
                        *(rax_60 + 0x18) = 0
                        *(rbx_11 + 0x44) = 1
                        *(rbx_11 + 0x48) = 6
                        *(rbx_11 + 0x34) = rax_60
                        *(rbx_11 + 0x3c) = 0
                        rbx_11.b = 1
                        *(r12 + 0x352) |= 4
                    else
                        *(rbx_11 + 8) = 0
                        rbx_11.b = 0
                else
                    *(rdx_22 + 8) = 0
                    rbx_11.b = 0
            else
                rbx_11.b = 0
                *(r12[0xf6] + 8) = 0
            
            uint64_t rcx_39 = var_4e8
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
            
            result = zx.q(rbx_11.b)
        else
            int64_t* rcx_9 = *(r12[0xf6] + 8)
            (*(*rcx_9 + 0x10))(rcx_9)
            r12[0xf6]->:8.q = 0
            result.b = 0

__security_check_cookie(rax_1 ^ &var_538)
return result
