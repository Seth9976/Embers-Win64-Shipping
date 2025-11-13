// 函数: sub_1422e2e00
// 地址: 0x1422e2e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rbx = arg2[2]
int64_t var_a8 = arg4
void* result_3 = arg3
float var_88[0x4]
void* result_1
TEB* gsbase

if (sub_141eaf9e0(rbx) != 0)
    void* const rdi_1 = rbx
    void* rsi_1 = nullptr
    
    if (data_143f56ad8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f56ad8)
        
        if (data_143f56ad8 == 0xffffffff)
            sub_140b0a030(&data_143f56ad4, Kismet", bEnableInheritableComponents", &data_143de5780)
            _Init_thread_footer(&data_143f56ad8)
    
    int64_t r15_1
    
    if (data_143f56ad4 != 0)
        r15_1 = *(arg1 + 0x20)
    
    if (data_143f56ad4 == 0 || r15_1 == *(rbx + 0x278))
    label_1422e2f03:
        rsi_1 = arg1 + 0x38
        
        if (rsi_1 == 0 || *(rsi_1 + 0x21) == 0 || *(rsi_1 + 0x18) == 0)
            goto label_1422e2f3d
    else
        sub_142076920(&var_88, arg1)
        
        while (true)
            uint64_t rax_6 = sub_141ea2ff0(rdi_1, 0)
            
            if (rax_6 != 0)
                rsi_1 = sub_142094cc0(rax_6, &var_88)
            
            rdi_1 = *(rdi_1 + 0x40)
            void* rax_8
            int64_t rax_9
            void* rdx_3
            
            if (rdi_1 != 0)
                rax_8 = sub_14247bf70()
                rdx_3 = *(rdi_1 + 0x10)
                rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rdi_1 == 0 || rax_9.d s> *(rdx_3 + 0x38)
                    || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                rdi_1 = nullptr
            
            if (rsi_1 != 0)
                break
            
            if (rdi_1 == 0)
                goto label_1422e2f03
            
            if (r15_1 == *(rdi_1 + 0x278))
                goto label_1422e2f03
        
        if (*(rsi_1 + 0x21) == 0 || *(rsi_1 + 0x18) == 0)
            goto label_1422e2f3d
    
    result_1 = sub_141dbe1d0(arg2, rsi_1, *(arg1 + 0xd0))
    goto label_1422e3015

label_1422e2f3d:
void* const rdi_2 = nullptr

if (data_143f56ad0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f56ad0)
    
    if (data_143f56ad0 == 0xffffffff)
        sub_140b0a030(&data_143f56acc, u"Kismet", u"bEnableInheritableComponents", &data_143de5780)
        _Init_thread_footer(&data_143f56ad0)

int64_t rsi_2

if (data_143f56acc != 0)
    rsi_2 = *(arg1 + 0x20)

if (data_143f56acc != 0 && rsi_2 != *(rbx + 0x278))
    sub_142076920(&var_88, arg1)
    
    while (true)
        uint64_t rax_13 = sub_141ea2ff0(rbx, 0)
        
        if (rax_13 != 0)
            rdi_2 = sub_142094c50(rax_13, &var_88)
        
        rbx = *(rbx + 0x40)
        void* rax_15
        int64_t rax_16
        void* rdx_7
        
        if (rbx != 0)
            rax_15 = sub_14247bf70()
            rdx_7 = *(rbx + 0x10)
            rax_16 = sx.q(*(rax_15 + 0x38))
        
        if (rbx == 0 || rax_16.d s> *(rdx_7 + 0x38)
                || *(*(rdx_7 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
            rbx = nullptr
        
        if (rdi_2 != 0)
            break
        
        if (rbx == 0)
            goto label_1422e2ff0
        
        if (rsi_2 == *(rbx + 0x278))
            goto label_1422e2ff0
    
    goto label_1422e300a

label_1422e2ff0:
rdi_2 = *(arg1 + 0x30)
void* result

if (rdi_2 == 0)
    result = nullptr
else
label_1422e300a:
    result_1 = sub_141dbe060(arg2, rdi_2, *(arg1 + 0xd0))
label_1422e3015:
    
    if (result_1 != 0)
        *(result_1 + 0x8c) = 1
        sub_141ef67d0(result_1)
        
        if ((*(result_1 + 0x8a) & 0x40) == 0)
            (*(*result_1 + 0x3a8))(result_1)
        
        void* rax_19 = sub_1425881f0()
        void* rdx_9 = *(result_1 + 0x10)
        int64_t rax_20 = sx.q(*(rax_19 + 0x38))
        int32_t var_a0
        int128_t var_78
        void* result_2
        
        if (rax_20.d s> *(rdx_9 + 0x38) || *(*(rdx_9 + 0x30) + (rax_20 << 3)) != rax_19 + 0x30)
            result_2 = nullptr
        else
            result_2 = result_1
            void* const rax_28
            
            if (result_3 != 0)
                int32_t rax_22 = *(result_3 + 0xc)
                
                if (rax_22 s>= data_143e1d9b4)
                    rax_28 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_22)
                    uint32_t rdx_11 = zx.d(temp0_1)
                    int32_t rax_24 = temp1_1 + rdx_11
                    rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_24.w) - rdx_11) * 0x18
            
            if (result_3 == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) != 0 || result_3 == result_1)
                int128_t zmm1_1 = *(var_a8 + 0x10)
                var_88 = *var_a8
                float var_68_1[0x4] = *(var_a8 + 0x20)
                var_78 = zmm1_1
                
                if (arg6 != 0)
                    float zmm5_1[0x4] = zx.o(*(result_1 + 0x134))
                    var_a0 = *(result_1 + 0x13c)
                    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), 0)
                    float var_68_2[0x4] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, var_a0.q), temp0_3[0].q)
                    var_a8 = zmm5_1.q
                
                if (arg5 != 0)
                    sub_141f48e30(result_1, arg5)
                
                sub_141f4a580(result_1, &var_88, 0, 0, 0)
                sub_141dd9010(arg2, result_1)
                
                if ((*(arg2 + 0x5c) & 1) != 0)
                    (*(*arg2 + 0x4b0))(arg2)
                
                sub_14231ab40(result_1)
            else
                sub_141f4a650(result_1, result_3, *(arg1 + 0x80))
                sub_14231ab40(result_1)
        
        int64_t rax_35 = *(arg1 + 0xd0)
        int32_t rcx_27
        rcx_27.b = sub_140b5b8a0(rax_35.d, 0) == 0
        
        if ((rax_35:4.d != 0 | rcx_27.b) != 0)
            void* rax_37 = arg2[2]
            
            if (rax_35 != 0)
                var_88[0].q = rax_37
                int64_t rcx_28
                
                if (rax_37 == 0)
                    rcx_28 = 0
                else
                    rcx_28 = *(rax_37 + 0x50)
                
                var_88[2].q = rcx_28
                var_78.d = 0xffffffff
                var_78:4.w = 0x101
                var_78:6.b = 0
                sub_141bb9450(&var_88)
                
                for (int64_t* i = var_88[2].q; i != 0; i = var_88[2].q)
                    int64_t rax_38 = i[5]
                    var_a8 = rax_38
                    
                    if (rax_38 == rax_35)
                        if (i != 0)
                            void* rax_40 = i[0xf]
                            
                            if (rax_40 == 0)
                                (*(*i + 0x148))()
                            else
                                void* r8_7 = *(result_1 + 0x10)
                                int64_t rax_41 = sx.q(*(rax_40 + 0x38))
                                
                                if (rax_41.d s<= *(r8_7 + 0x38)
                                        && *(*(r8_7 + 0x30) + (rax_41 << 3)) == rax_40 + 0x30)
                                    (*(*i + 0x148))()
                        
                        break
                    
                    var_88[2].q = i[4]
                    sub_141bb9450(&var_88)
        
        if (result_2 != 0)
            result_3 = result_2
        
        int32_t i_1 = 0
        
        if (*(arg1 + 0xa8) s> 0)
            int64_t* rbx_2 = nullptr
            
            do
                char var_b8
                var_b8.q = 0
                sub_1422e2e00(*(rbx_2 + *(arg1 + 0xa0)), arg2, result_3, 0, var_b8, 0, var_a8, 
                    var_a0, rax_35, arg5)
                i_1 += 1
                rbx_2 = &rbx_2[1]
            while (i_1 s< *(arg1 + 0xa8))
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_d8)
return result
