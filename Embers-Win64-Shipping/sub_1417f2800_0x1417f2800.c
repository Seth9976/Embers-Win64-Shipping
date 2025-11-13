// 函数: sub_1417f2800
// 地址: 0x1417f2800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4
uint64_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId().d == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    int64_t* rcx = arg1[0x14]
    *(arg1 + 0x449) = (*(*rcx + 0x278))(rcx).b

if (*(arg1 + 0x449) == 0)
    result.b = 0
else
    TEB* gsbase
    
    if (data_143ef98b8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ef98b8)
        
        if (data_143ef98b8 == 0xffffffff)
            zmm6 = sub_140b58260(&data_143ef98b0, u"MotionController", 1)
            _Init_thread_footer(&data_143ef98b8)
    
    int64_t rbx_1 = data_143ef98b0
    sub_140a387e0()
    int64_t* var_48
    sub_140d6fcf0(&data_14399e720, &var_48, rbx_1)
    int64_t* rbp_1 = var_48
    int64_t* rbx_2 = rbp_1
    int32_t var_40
    void* r14_2 = &rbp_1[sx.q(var_40)]
    int64_t var_58
    int32_t var_50
    
    if (rbp_1 != r14_2)
        do
            int64_t* rdi_1 = *rbx_2
            
            if (rdi_1 != 0)
                char rax_6 = (*(*rdi_1 + 0x18))(rdi_1, zx.q(arg1[0x81].d), arg1[0x82])
                int64_t r8_2 = arg1[0x82]
                uint64_t rdx_2 = zx.q(arg1[0x81].d)
                *(arg1 + 0x41c) = rax_6
                var_50 = zmm6.d
                var_58 = arg2
                
                if ((*(*rdi_1 + 0x10))(rdi_1, rdx_2, r8_2, arg3, var_58, var_50) != 0)
                    if (data_143de5480 != 0)
                        result.b = GetCurrentThreadId().d == data_143de5470
                    
                    if (data_143de5480 == 0 || result.b != 0)
                        arg1[0x88] = rdi_1
                        sub_1417f7770(arg1)
                        arg1[0x88] = 0
                    
                    goto label_1417f298f
            
            rbx_2 = &rbx_2[1]
        while (rbx_2 != r14_2)
    
    if (arg1[0x82] != data_143ef9718)
    label_1417f29d8:
        
        if (rbp_1 == 0)
            result.b = 0
        else
            sub_140a74f90(rbp_1)
            result.b = 0
    else
        int64_t* rcx_5 = *(data_143f5b298 + 0xb08)
        
        if (rcx_5 == 0)
            goto label_1417f29d8
        
        void var_38
        
        if ((*(*rcx_5 + 0x50))(rcx_5, 0, &var_38, arg2, var_58, var_50).b == 0)
            goto label_1417f29d8
        
        int32_t* rax_10 = sub_140adf5d0(&var_38, &var_48)
        *arg3 = *rax_10
        arg3[1].d = rax_10[2]
    label_1417f298f:
        
        if (rbp_1 != 0)
            sub_140a74f90(rbp_1)
        
        result.b = 1

return result
