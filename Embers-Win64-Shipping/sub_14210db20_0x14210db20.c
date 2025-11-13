// 函数: sub_14210db20
// 地址: 0x14210db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    (*(*arg1 + 0x488))()

int512_t zmm1
int512_t zmm2
zmm1, zmm2 = sub_142117840(arg1)
TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        zmm1 = sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int32_t rbx_1 = sub_142125420(arg1)
    int64_t* rsi_1 = nullptr
    int32_t r14_1 = 0
    int64_t* var_58 = nullptr
    int64_t var_50_1 = 0
    int32_t arg_18
    
    if (rbx_1 != 0)
        void* rax_4 = (sx.q(data_143a30368:0xc.d) << 2) + 0x4a
        int32_t arg_10
        int32_t r12_3
        
        do
            arg_10 = rbx_1
            int32_t rcx_5 = 0
            r12_3 = neg.d(rbx_1) & rbx_1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(r12_3)
            
            if (r12_3 != 0)
                rcx_5 = temp0_1
            
            int64_t rdi_1 = sx.q(rcx_5)
            arg_18 = rbx_1 ^ r12_3
            int32_t rbx_3 = 0
            int32_t r15_1 = (*U"1111")[rdi_1]
            
            if (r14_1 s< 0)
                var_50_1.d = 0
                
                if (r14_1 != 0)
                    sub_1405c5570(&var_58, 0)
                    r14_1 = var_50_1:4.d
                    rbx_3 = var_50_1.d
                    rsi_1 = var_58
            
            int32_t i_5 = rbx_3 + 1
            var_50_1.d = i_5
            
            if (i_5 s> r14_1)
                sub_1405a4d70(&var_58)
                i_5 = var_50_1.d
                r14_1 = var_50_1:4.d
                rsi_1 = var_58
            
            rsi_1[sx.q(rbx_3)] = arg1[rax_4 + rdi_1]
            
            if (i_5 s> 0)
                int64_t* rbx_4 = rsi_1
                uint64_t i_2 = zx.q(i_5)
                uint64_t i
                
                do
                    zmm1, zmm2 = sub_14211edb0(*rbx_4, r15_1, zmm2, zmm1)
                    rbx_4 = &rbx_4[1]
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            rbx_1 = arg_18
        while (r12_3 != arg_10)
    
    int64_t* rcx_10 = data_143f48a88
    int16_t* var_48
    (*(*rcx_10 + 0xa0))(rcx_10, &var_48)
    int32_t var_40
    int64_t rdx_3
    
    if (var_40 s> 1)
        int16_t* const rdx_4 = &data_142d40450
        
        if (var_40 != 0)
            rdx_4 = var_48
        
        int32_t rax_12
        rax_12, rdx_3 = sub_141987fc0(*sub_140b58260(&arg_18, rdx_4, 1))
        
        if (rax_12 != 0x31)
            var_50_1.d = 0
            
            if (r14_1 s< 0 && r14_1 != 0)
                sub_1405c5570(&var_58, 0)
            
            sub_14210d8a0(arg1, rax_12, &var_58)
            int32_t i_4 = var_50_1.d
            rsi_1 = var_58
            
            if (i_4 s> 0)
                int64_t* rbx_6 = rsi_1
                uint64_t i_3 = zx.q(i_4)
                uint64_t i_1
                
                do
                    int64_t* rcx_15 = *rbx_6
                    
                    if (rcx_15 != 0)
                        (**rcx_15)(rcx_15, 1)
                    
                    rbx_6 = &rbx_6[1]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            int32_t rax_14 = var_50_1:4.d
            
            if (rax_14 s< 0)
                var_50_1.d = 0
                
                if (rax_14 != 0)
                    sub_1405c5570(&var_58, 0)
                    rsi_1 = var_58
    
    rdx_3.b = 1
    result = (*(*arg1 + 0x458))(arg1, rdx_3)
    int16_t* rcx_18 = var_48
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
    
    if (rsi_1 != 0)
        return sub_140a74f90(rsi_1)

return result
